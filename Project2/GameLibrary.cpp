#include "GameLibrary.h"
#include "GameLibraryElements.h"
#include <iostream>

namespace gamelibrary
{
	const std::string GameLibrary::gName = "GameLibrary";

	GameLibrary::GameLibrary()
		: XMLNodeBase()
	{
	}

	GameLibrary::GameLibrary(rapidxml::xml_node<>* parent)
		: XMLNodeBase(parent)
	{
	}

	GameName GameLibrary::GetGameName()
	{
		assert(isValid());
		return GameName(GetNode());
	}
	GameLevel GameLibrary::GetGameLevel()
	{
		assert(isValid());
		return GameLevel(GetNode());
	}

	DMName GameLibrary::GetDMName()
	{
		assert(isValid());
		return DMName(GetNode());
	}

	player::Player GameLibrary::GetPlayers()
	{
		assert(isValid());
		return player::Player(GetNode());
	}

	std::ostream& operator << (std::ostream& out, const GameLibrary& node)
	{
		using namespace std;
		out << "<" << node.GetNodeName() << ">" << endl;
		out << node.GetNodeName() << endl;
		out << "<//" << node.GetNodeName() << ">" << endl;
		return out;
	}
}