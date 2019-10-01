#include "XMLArrayBase.h"

const std::string XMLArrayBase::gName =  "";

 rapidxml::xml_node<>* XMLArrayBase::GetNode() const
{
	 auto node = GetParent()->first_node(GetName().c_str());
	 for (int i = 0; i < m_index && (node != NULL); ++i)
	 {
		 node = node->next_sibling();
	 }
	 return node;
}

 std::size_t XMLArrayBase::GetSize() const
 {
	 auto node = GetParent()->first_node(GetName().c_str());
	 int i = 0;
	 for (; node != NULL; ++i)
	 {
		 node = node->next_sibling();
	 }
	 return i;
 }

 void XMLArrayBase::Insert()
 {
	 Add("", true);
	 m_index = GetSize() - 1;			// Appened to the end
 }
