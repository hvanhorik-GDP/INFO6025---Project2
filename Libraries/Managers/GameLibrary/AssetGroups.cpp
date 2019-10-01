#include "AssetGroups.h"
#include <iostream>

namespace gamelibrary
{
	const std::string AssetGroups::gName = "AssetGroup";

	std::ostream& operator << (std::ostream& out, const AssetGroups& node)
	{
		using namespace std;

		for (size_t i = 0; i < node.GetSize(); ++i)
		{
			AssetGroups temp(node.GetParent(), i);
			if (temp.isValid())
			{
				out << xmlindent::indent(2) << "<" << temp.GetNodeName() << " ";
				GameAsset_open open(temp.GetNode());
				GameAsset_type type(temp.GetNode());
				out << type << open << ">" << endl;
				out << xmlindent::indent(2) << temp.GetAssetRoot() << endl;
				out << xmlindent::indent(2) <<temp.GetAsset() << endl;
				out << xmlindent::indent(2) << "</" << temp.GetNodeName() << ">" << endl;
			}
		}
		return out;
	}

	const std::string GameAsset_type::gName = "type";
	const std::string GameAsset_open::gName = "open";
	const std::string GameAsset_subdir::gName = "subdir";
	const std::string GameAsset_subtype::gName = "subtype";
	const std::string Assets_name::gName = "name";
	const std::string Assets_type::gName = "type";
}
