#pragma once
#include "XMLNodeBase.h"
#include "XMLNodeSingleBase.h"
#include "GameLibraryElements.h"
#include "Player.h"
#include <ostream>

namespace gamelibrary
{

	class GameLibrary : public XMLNodeBase
	{
	public:
		GameLibrary();
		virtual ~GameLibrary() final {}
		GameLibrary(rapidxml::xml_node<>* parent);
		GameName GetGameName();
		GameLevel GetGameLevel();
		DMName GetDMName();
		player::Player GetPlayers();
		virtual const std::string& GetName() const { return gName; };
		friend std::ostream& operator << (std::ostream& out, const GameLibrary& node);

	private:
		static const std::string gName;
	};
}


