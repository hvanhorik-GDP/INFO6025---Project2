#pragma once
#include "Properties.h"

namespace gamelibrary
{
	
	class AssetParts : public XMLArrayBase
	{
	public:
		AssetParts(rapidxml::xml_node<>* parent, std::size_t index = 0)
			: XMLArrayBase(parent, index) {}
//		friend std::ostream& operator << (std::ostream& out, const AssetParts& node);
		Properties GetProperties() const { return Properties(GetNode()); }
	protected:
		virtual const std::string& GetName() const { return gName; };
	private:
		static const std::string gName;
	};

}
