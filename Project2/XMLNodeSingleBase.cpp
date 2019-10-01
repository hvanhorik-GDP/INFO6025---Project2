//#include "XMLNodeSingleBase.h"
//
//XMLNodeSingleBase::XMLNodeSingleBase(rapidxml::xml_node<>* parent)
//	: XMLNodeBase()
//{
//	assert(parent);
//	if (parent)
//	{
//		rapidxml::xml_node<>* node = parent->first_node(GetName().c_str());
//		if (node)
//		{
//			SetNode(node);
//		}
//	}
//}
//
//const std::string& XMLNodeSingleBase::GetName() const
//{
//	assert(false);
//	static std::string fake;
//	return fake;
//}
