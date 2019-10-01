#pragma once
#include "XML/XMLArrayBase.h"
#include "XML/XMLAttribute.h"

namespace gamelibrary
{
	class AssetFile : public XMLNodeBase
	{
	public:
		AssetFile(rapidxml::xml_node<>* parent) : XMLNodeBase(parent) {}
	protected:
		virtual const std::string& GetName() const { return gName; };
	private:
		static const std::string gName;
	};

}
