#pragma once
#include "XMLNodeBase.h"
#include <string>

namespace gamelibrary
{
	class GameName : public XMLNodeBase
	{
	public:
		GameName(rapidxml::xml_node<>* parent)
			: XMLNodeBase(parent) {}
	protected:
		virtual const std::string& GetName() const { return gName; };
	private:
		static const std::string gName;
	};

	class GameLevel : public XMLNodeBase
	{
	public:
		GameLevel(rapidxml::xml_node<>* parent)
		: XMLNodeBase(parent) {}
		virtual const std::string& GetName() const { return gName; };

	private:
		static const std::string gName;
	};

	class DMName : public XMLNodeBase
	{
	public:
		DMName(rapidxml::xml_node<>* parent)
			: XMLNodeBase(parent) {}
		virtual const std::string& GetName() const { return gName; };

	private:
		static const std::string gName;
	};

}

