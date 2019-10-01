#include "Properties.h"
#include <iostream>

namespace gamelibrary
{

	void Properties::AddProperty(const std::string& newtype, const std::string& newvalue)
	{
		Insert();
		Property_type type(GetNode());
		type.SetValue(newtype);
		Property_value value(GetNode());
		value.SetValue(newvalue);
	}

	std::ostream& operator << (std::ostream& out, const Properties& node)
	{
		using namespace std;

		for (size_t i = 0; i < node.GetSize(); ++i)
		{
			Properties temp(node.GetParent(), i);
			if (temp.isValid())
			{
				out << xmlindent::indent(4) << "<" << temp.GetNodeName() << " ";
				Property_type type(temp.GetNode());
				Property_value value(temp.GetNode());
				out << type << value << ">" << endl;
			}
		}
		return out;
	}

	const std::string Properties::gName = "Property";
	const std::string Property_type::gName = "type";
	const std::string Property_value::gName = "value";
}
