#include <rapidxml/rapidxml.hpp>
#include <rapidxml/rapidxml_utils.hpp>

#include "GameLibrary.h"
#include "XMLDocument.h"

#include <fstream>
#include <iostream>
#include <vector>
#include <streambuf>
#include <sstream>

using namespace std;
using namespace rapidxml;
using namespace gamelibrary;

void ReadDnDFile()
{
	XMLDocument document;
	document.Read("DnD.xml");

	GameLibrary gameLib(document.GetDocument());
	cout << "Library Name: " << gameLib << endl;

	GameName gameName(gameLib.GetGameName());
	cout << "Game Name: " << gameName << endl;
	{
		string newone("A new String");
		gameName.SetValue(newone);
	}
	cout << "Game Name changed to: " << gameName << endl;

	GameLevel level(gameLib.GetGameLevel());
	cout << "Game Level: " << level << endl;

	DMName dmName(gameLib.GetDMName());
	cout << "Dungeon Master Name: " << dmName << endl;

	player::Player rootPlayer(gameLib.GetPlayers());
	cout << "Players: " << rootPlayer << endl;
	{
		player::PlayerName playerName(rootPlayer.GetPlayerName());
		cout << "   Player Name: " << playerName << endl;

		player::Description Description(rootPlayer.GetDescription());
		cout << "   Player Description: " << Description << endl;

		player::HeightCM HeightCM(rootPlayer.GetHeightCM());
		cout << "   Player HeightCM: " << HeightCM << endl;

		player::WeightKG WeightKG(rootPlayer.GetWeightKG());
		cout << "   Player WeightKG: " << WeightKG << endl;
	}


	//const std::string PlayerName::gName = "PlayerName";
	//const std::string Description::gName = "Description";
	//const std::string HeightCM::gName = "HeightCM";
	//const std::string WeightKG::gName = "WeightKG";



#if 0
	root_node = document.first_node("Game");

	xml_node<>* name = root_node->first_node("Name");
	if (name)
		cout << "Name: " << name->value() << endl;

	xml_node<>* level = root_node->first_node("Level");
	if (level)
		cout << "Game Level: " << level->value() << endl;

	xml_node<>* dmName = root_node->first_node("DMName");
	if (level)
		cout << "DM Name: " << dmName->value() << endl;

	for (xml_node<>* player_node = root_node->first_node("Player");
		player_node;
		player_node = player_node->next_sibling())
	{
//		cout << "player_node " << player_node->first_attribute("name")->value() << endl;
		xml_node<>* namep = player_node->first_node("Name");
		if (namep)
			cout << "Name: " << namep->value() << endl;

		xml_node<>* description = player_node->first_node("Description");
		if (description)
			cout << "Description: " << description->value() << endl;

	}
		for (xml_node<>* game_node = platform_node->first_node("Game");
			game_node;
			game_node = game_node->next_sibling())
		{
			cout << "Game Node: " << game_node->first_attribute("name")->value() << endl;
			xml_node<>* genre = game_node->first_node("Genre");
			if (genre)
				cout << "Genre: " << genre->value() << endl;
			xml_node<>* review = game_node->first_node("Review");
			if (review)
				cout << "Review: " << review->value() << endl;
		}
	}
#endif
}

int main(int arg, char** argv)
{
	ReadDnDFile();
	system("pause");
	return 0;
}