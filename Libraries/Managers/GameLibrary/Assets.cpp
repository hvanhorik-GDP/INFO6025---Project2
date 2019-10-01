#include "AssetGroups.h"
#include <iostream>

namespace gamelibrary
{
	std::ostream& operator << (std::ostream& out, const Assets& node)
	{
		using namespace std;

		for (size_t i = 0; i < node.GetSize(); ++i)
		{
			Assets temp(node.GetParent(), i);
			if (temp.isValid())
			{
				out << xmlindent::indent(3) << "<" << temp.GetNodeName() << " ";
				Assets_name name(temp.GetNode());
				out << name << ">" << endl;
				out << xmlindent::indent(3) << temp.GetAssetFile() << endl;
				out << xmlindent::indent(3) << temp.GetProperties();
				out << xmlindent::indent(3) << " </" << temp.GetNodeName() << ">" << endl;
			}
		}
		return out;
	}

	const std::string Assets::gName = "Asset";
}
