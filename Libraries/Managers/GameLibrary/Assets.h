#pragma once
#include "Properties.h"
#include "AssetParts.h"
#include "AssetFile.h"

namespace gamelibrary
{
	
	class Assets : public XMLArrayBase
	{
	public:
		Assets(rapidxml::xml_node<>* parent, std::size_t index = 0)
			: XMLArrayBase(parent, index) {}
		friend std::ostream& operator << (std::ostream& out, const Assets& node);
		AssetFile GetAssetFile() const { return AssetFile(GetNode()); }
		Properties GetProperties() const { return Properties(GetNode()); }
		AssetParts GetAssetPart() { return AssetParts(GetNode()); }
	protected:
		virtual const std::string& GetName() const { return gName; };
	private:
		static const std::string gName;
	};

}
