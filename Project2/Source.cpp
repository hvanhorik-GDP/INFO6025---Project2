#include <rapidxml/rapidxml.hpp>

#include "GLCommon.h"
#include "GameLibrary/GameLibrary.h"
#include "GameLibrary/AssetGroups.h"
#include "XML/XMLDocument.h"
#include "AssetManager/cAssetManager.h"
#include "AssetManager/cAssetManager_Audios.h"
#include "cAudio_System.h"
#include "cAudio_System_FMOD.h"

#include <fstream>
#include <iostream>
#include <vector>
#include <streambuf>
#include <sstream>
#include <exception>

#include <stdio.h>  /* defines FILENAME_MAX */
#include <conio.h>
#define WIN32_LEAN_AND_MEAN 
#include <windows.h>

#include <direct.h>


using namespace std;
using namespace rapidxml;
using namespace gamelibrary;

static void error_callback(int error, const char* description)
{
	fprintf(stderr, "Error: %s\n", description);
}
//
//void open_gl();
//void test_Audio(cAssetManager& assetManager, cAudio_System& gAudioSystem);

std::string GetCurrentWorkingDir(void) {
	char buff[FILENAME_MAX];
	_getcwd(buff, FILENAME_MAX);
	std::string current_working_dir(buff);
	return current_working_dir;
}

cAssetManager gAssetManager;

void ReadGameLibrary(const std::string& name)
{

	std::string workingDir = GetCurrentWorkingDir();
	std::string fullpath = workingDir + "/" + name;
	std::cout << fullpath << endl;
	XMLDocument document;
	document.Read(name);

	GameLibrary gameLib(document.GetDocument());

	AssetGroups assets = gameLib.GetAssetGroups();
	gAssetManager.LoadAssets(gameLib.GetNode());

	std::string outfile = workingDir + "/" + "output.xml";
	document.Write(outfile);
	system("pause");
}

int main(int arg, char** argv)
{
	cAudio_System gAudioSystem;
	gAudioSystem.Init(100);
	GLFWwindow* window;

	glfwSetErrorCallback(error_callback);
	if (!glfwInit())
	{
		exit(EXIT_FAILURE);
	}

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 2);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);

	window = glfwCreateWindow(640, 480, "Simple example", NULL, NULL);
	if (!window)
	{
		glfwTerminate();
		exit(EXIT_FAILURE);
	}

//	glfwSetKeyCallback(window, key_callback);
	glfwMakeContextCurrent(window);
	gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);
	glfwSwapInterval(1);

	ReadGameLibrary("../assets/GameLibrary.xml");

	return 0;
}

