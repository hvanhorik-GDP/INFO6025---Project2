#include "XMLArrayBase.h"

XMLArrayBase::XMLArrayBase()
	: XMLNodeBase()
{
}
XMLArrayBase::XMLArrayBase(rapidxml::xml_node<>* parent)
	: XMLNodeBase(parent)
{
	m_current = GetNode();
}

rapidxml::xml_node<>* XMLArrayBase::first()
{
	auto parent = GetParent();
	assert(parent);
	m_current = GetNode();
	return m_current;
}

rapidxml::xml_node<>* XMLArrayBase::next()
{
	assert(false);
	auto parent = GetParent();
	assert(parent);
	m_current = (m_current) ? m_current->next_sibling() : (parent) ? GetNode() : NULL;
	return m_current;
}

const std::string XMLArrayBase::gName =  "";
