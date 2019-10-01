#include <rapidxml/rapidxml.hpp>

#include "XML/GameLibrary.h"
#include "XML/AssetGroups.h"
#include "XML/XMLDocument.h"
#include "AssetManager/cAssetManager.h"
#include "AssetManager/cAudioAssetManager.h"

#include <fstream>
#include <iostream>
#include <vector>
#include <streambuf>
#include <sstream>
#include <exception>

#include <stdio.h>  /* defines FILENAME_MAX */
#include <conio.h>
#include <windows.h>

#include <direct.h>
#define GetCurrentDir _getcwd

std::string GetCurrentWorkingDir(void) {
	char buff[FILENAME_MAX];
	GetCurrentDir(buff, FILENAME_MAX);
	std::string current_working_dir(buff);
	return current_working_dir;
}

using namespace std;
using namespace rapidxml;
using namespace gamelibrary;

cAssetManager gAssetManager;


void ReadGameLibrary(const std::string &name)
{
	std::string workingDir = GetCurrentWorkingDir();
	std::string fullpath = workingDir +"/" + name;
	cout << fullpath << endl;
	XMLDocument document;
	document.Read(name);

	GameLibrary gameLib(document.GetDocument());

	AssetGroups assets = gameLib.GetAssetGroups();
	gAssetManager.LoadAssets(gameLib.GetNode());


}

void clear() {
	// CSI[2J clears screen, CSI[H moves the cursor to top-left corner
	for (int i = 0; i < 20; ++i)
		cout << endl;
//	std::cout << "\x1B[2J\x1B[H";
}

int main(int arg, char** argv)
{
	try
	{
		using namespace audioFMOD;
		ReadGameLibrary("./assets/GameLibrary.xml");

		initFMOD();

		auto baseManager = gAssetManager.GetAssetManager("audios");
		cAudioAssetManager* audioManger = dynamic_cast<cAudioAssetManager*>(baseManager);
//		audioManger->PlaySomething();
		cAudioAssetManager::vecAudioItems& items = audioManger->GetAudioItems();

		cout << "Would you like Raw Files:";
		bool shouldExit = false;
		bool raw = false;
		while (!shouldExit)
		{
			if (_kbhit())
			{
				char cur = _getch();
				if (cur == 'y')
					shouldExit = raw = true;
				else if (cur == 'n')
				{
					shouldExit = true;
					raw = false;
				}
			}
		}


		// Treat everything as an indexed group
		std::vector<std::vector<std::string>> groups;

		// We have speakers with individual songs
		std::vector<std::string> speaker1;
		if (raw)
			speaker1.push_back("That's Amore wav");
		else
			speaker1.push_back("That's Amore");

		std::vector<std::string> speaker2;
		if (raw)
			speaker2.push_back("Auld Lang Syne wav");
		else
			speaker2.push_back("Auld Lang Syne");


		std::vector<std::string> speaker3;
		if (raw)
			speaker3.push_back("Hello, Dolly wav");
		else
			speaker3.push_back("Hello, Dolly");

		std::vector<std::string> speaker4;
		if (raw)
			speaker4.push_back("Spanish Flea wav");
		else
			speaker4.push_back("Spanish Flea");


		// Pushback our speakers
		groups.push_back(speaker1);
		groups.push_back(speaker2);
		groups.push_back(speaker3);
		groups.push_back(speaker4);
		int numberOfSpeakers = 4;

		std::vector<std::string> oldman;
		oldman.push_back("let me guess");
		oldman.push_back("Just An Old Man");
		oldman.push_back("Let Me Get My Wheelchair");
		oldman.push_back("One Good Looking Young Lady");
		oldman.push_back("Telling You Right");
		oldman.push_back("Way Too Fast");
		groups.push_back(oldman);

		std::vector<std::string> oldwoman1;
		oldwoman1.push_back("walk that dog");
		oldwoman1.push_back("blackboard");
		groups.push_back(oldwoman1);

		std::vector<std::string> oldwoman2;
		oldwoman2.push_back("He Was So");
		oldwoman2.push_back("I am not Dead");
		oldwoman2.push_back("I had all These Plans");
		groups.push_back(oldwoman2);
		int numberOfPeople = 3;

		int totalSize = numberOfPeople + numberOfSpeakers;
		for (auto i : groups)
		{
			for (auto j : i)
			{
				auto audioItem = items[j];
				std::cout << "Loading Audio File: " << audioItem->name << ": " << audioItem->path << std::endl;
				audioItem->create_and_play_sound(true);
				audioItem->set_is_paused(true);
			}
		}

		stringstream help;
		help << "Commands are: " << endl;
		help << "    (space) or (tab) - Move between speakers or people" << endl;
		help << "     u/d             - volume up/down by 5%" << endl;
		help << "     i/o             - pitch up/down by 5%" << endl;
		help << "     b/v             - balance left/right by .05" << endl;
		help << "                        *** NOTE - Pan does not work in speaker mode" << endl;
		help << "     0, 1, 2, 3, 4   - Get a response from active person" << endl;
		help << "     r               - replay track" << endl;
		help << "     ?               - Information on current track" << endl;
		help << "Character interactions: (Case sensitive)" << endl;
		help << "     S               - Seduce" << endl;
		help << "     J               - Tell Joke" << endl;
		help << "     W               - Go for a walk" << endl;
		help << "     D               - Walk the dog" << endl;
		help << "     M               - Watch Monty Python" << endl;
		help << "     (esc)           - To Exit" << endl;
		help << endl << endl << endl;
		help << " Hit a key: ";


		cout << help.str();
		int currentGroupNumber = 0;
		auto currentGroup = groups[currentGroupNumber][0];
		auto currentItem = items[currentGroup];
		currentItem->set_is_paused(false);
		int point = 0;
		shouldExit = false;

		while (!shouldExit) 
		{
			if (_kbhit())
			{
				char cur = _getch();
				if (point > 511)
					point = 511;
				switch (cur)
				{
				case ' ':
				case '\t':
				{
					currentItem->set_is_paused(true);
					currentGroupNumber++;
					clear();
					if (currentGroupNumber < numberOfSpeakers)
					{
						cout << "Switching to: next speaker: " << endl;
					}
					else if (currentGroupNumber < totalSize)
					{
						cout << "Switching to next person:" << endl;
					}
					else
					{
						currentGroupNumber = 0;
						cout << "Wrapping around to first speaker: " << endl;
					}
					currentGroup = groups[currentGroupNumber][0];
					currentItem = items[currentGroup];
					currentItem->replay();
					currentItem->set_is_paused(false);
					cout << "Audio File : " << currentItem->name << " : " << currentItem->path << std::endl;
					break;
				}
				case '0':
				case '1':
				case '2':
				case '3':
				case '4':
				{
					int index = cur - '0';
					size_t number = groups[currentGroupNumber].size();
					if (index < number)
					{
						currentGroup = groups[currentGroupNumber][index];
						currentItem = items[currentGroup];
						currentItem->replay();
						currentItem->set_is_paused(false);
						clear();
						cout << "Audio File : " << currentItem->name << " : " << currentItem->path << std::endl;
					}
					break;
				}
				case '?':
				{
					// Information
					AudioItem::format format = currentItem->get_format();
					clear();
					cout << "Audio file information:" << endl << endl;
					cout << "  Name:      " << currentItem->get_name() << endl;
					cout << "  Type:      " << currentItem->get_type_string(format.type) << endl;
					cout << "  Format:    " << currentItem->get_format_string(format.format) << endl;
					cout << "  Channels:  " << format.channels << endl;
					cout << "  Bits:      " << format.bits << endl;
					cout << "  Pitch:      " << currentItem->get_pitch() << endl;
					cout << "  Volume:      " << currentItem->get_volume() << endl;
					cout << "  Position:      " << currentItem->get_position() << endl;
					break;
				}
				case 'S':		// - Seduce" << endl;
				{
					auto audioItem = items["One Good Looking Young Lady"];
					std::cout << "Loading Audio File: " << audioItem->name << ": " << audioItem->path << std::endl;
					if (audioItem->channel == 0)
						audioItem->create_and_play_sound(true);
					else
						audioItem->replay();

					audioItem->set_is_paused(false);

					auto audioItem2 = items["sensual giggly laughter"];
					std::cout << "Loading Audio File: " << audioItem2->name << ": " << audioItem2->path << std::endl;
					if (audioItem2->channel == 0)
						audioItem2->create_and_play_sound(true);
					else
						audioItem2->replay();

					// Wait for first to finish
					while (audioItem->get_is_playing())
						Sleep(10);
					audioItem2->set_volume(audioItem2->get_volume() * 3);
					audioItem2->set_is_paused(false);
					break;
				}
				case 'J':         //      - Tell Joke" << endl;
				{
					auto audioItem = items["belly laughter"];
					std::cout << "Loading Audio File: " << audioItem->name << ": " << audioItem->path << std::endl;
					if (audioItem->channel == 0)
						audioItem->create_and_play_sound(true);
					else
						audioItem->replay();
					audioItem->set_is_paused(false);

					auto audioItem2 = items["sensual giggly laughter"];
					std::cout << "Loading Audio File: " << audioItem2->name << ": " << audioItem2->path << std::endl;
					if (audioItem2->channel == 0)
						audioItem2->create_and_play_sound(true);
					else
						audioItem2->replay();
					audioItem2->set_volume(audioItem2->get_volume() * 3);
					audioItem2->set_is_paused(false);
					break;
				}
				case 'W':          //     - Go for a walk" << endl;
				{
					auto audioItem = items["Let Me Get My Wheelchair"];
					std::cout << "Loading Audio File: " << audioItem->name << ": " << audioItem->path << std::endl;
					if (audioItem->channel == 0)
						audioItem->create_and_play_sound(true);
					else
						audioItem->replay();
					audioItem->set_is_paused(false);
					// Wait for first to finish
					while (audioItem->get_is_playing())
						Sleep(10);

					auto audioItem2 = items["Way Too Fast"];
					std::cout << "Loading Audio File: " << audioItem2->name << ": " << audioItem2->path << std::endl;
					if (audioItem2->channel == 0)
						audioItem2->create_and_play_sound(true);
					else
						audioItem2->replay();
					audioItem2->set_is_paused(false);
					// Wait for first to finish
					while (audioItem2->get_is_playing())
						Sleep(10);

					auto audioItem3 = items["Just An Old Man"];
					std::cout << "Loading Audio File: " << audioItem3->name << ": " << audioItem3->path << std::endl;
					if (audioItem3->channel == 0)
						audioItem3->create_and_play_sound(true);
					else
						audioItem3->replay();
					audioItem3->set_is_paused(false);
					break;
				}
				case 'D':          //     - walk that dog" << endl;
				{
					auto audioItem = items["walk that dog"];
					std::cout << "Loading Audio File: " << audioItem->name << ": " << audioItem->path << std::endl;
					if (audioItem->channel == 0)
						audioItem->create_and_play_sound(true);
					else
						audioItem->replay();
					audioItem->set_is_paused(false);
					break;
				}
				case 'M':             //  - Watch Monty Python" << endl;
				{
					
					auto audioItem = items["I am not Dead"];
					std::cout << "Loading Audio File: " << audioItem->name << ": " << audioItem->path << std::endl;
					if (audioItem->channel == 0)
						audioItem->create_and_play_sound(true);
					else
						audioItem->replay();
					audioItem->set_volume(audioItem->get_volume() * 3);
					audioItem->set_is_paused(false);
					break;

				}
				case 'u':
				{
					// Up volume
					clear();
					cout << "Increasing volume by 5%";
					float current = currentItem->get_volume();
					currentItem->set_volume(current * 1.05);
					float newvolume = currentItem->get_volume();
					cout << " Old: " << current << " New: " << newvolume << endl;;
					break;
				}
				case 'd':
				{
					// Up volume
					clear();
					cout << "Decreasing volume by 5%";
					float current = currentItem->get_volume();
					currentItem->set_volume(current * .95);
					float newvolume = currentItem->get_volume();
					cout << " Old: " << current << " New: " << newvolume << endl;
					break;
				}
				case 'r':
				{
					// Up volume
					clear();
					cout << "Replay Track: " << endl;
					cout << currentItem->name << " : " << currentItem->path << std::endl;
					currentItem->replay();
					break;
				}
				case 'b':
				{
					// balance up
					clear();
					cout << "Increasing pan by .05";
					float current = currentItem->get_pan();
					currentItem->set_pan(current +.05);
					float newvolume = currentItem->get_pan();
					cout << " Old: " << current << " New: " << newvolume << endl;
					break;
				}
				case 'v':
				{
					// balance down
					clear();
					cout << "Decreasing pan by .05%";
					float current = currentItem->get_pan();
					currentItem->set_pan(current - .05);
					float newvolume = currentItem->get_pan();
					cout << " Old: " << current << " New: " << newvolume << endl;
					break;
				}
				case 'i':
				{
					// pitch up
					clear();
					cout << "Increasing pitch by 5%";
					float current = currentItem->get_pitch();
					currentItem->set_pitch(current * 1.05);
					float newvolume = currentItem->get_pitch();
					cout << " Old: " << current << " New: " << newvolume << endl;
					break;
				}
				case 'p':
				{
					clear();
					bool pause = currentItem->get_is_paused();
					std::string s = (pause) ? "Resuming" : "Pausing";
					cout << s << " - The Stream" << endl;
					currentItem->set_is_paused(!pause);
					break;
				}

				case 'o':
				{
					// pitch down
					clear();
					cout << "Decreasing pan by 5%";
					float current = currentItem->get_pitch();
					currentItem->set_pitch(current * .95);
					float newvolume = currentItem->get_pitch();
					cout << " Old: " << current << " New: " << newvolume << endl;
					break;
				}
				case 27: //ESC key pressed
				{
					shouldExit = true;
					break;
				}
				default:
				{
					clear();
					cout << "Unknown item " << cur << endl;
					// We want to play another audio sound
				}
				}
				cout << help.str();
				Sleep(10);
			}
		}
	}
	catch (std::exception ex)
	{

	}
	catch (...)
	{
		cout << "Unknown Exception";
	}
	return 0;
}
