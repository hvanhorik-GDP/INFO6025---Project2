#include "XMLNodeBase.h"
#include <ostream>


XMLNodeBase::XMLNodeBase(const XMLNodeBase& parent)
	: m_parent(NULL)
{
	assert(parent.isValid());
	if (parent.isValid())
		m_parent = parent.GetParent();
}

XMLNodeBase::XMLNodeBase()
	: m_parent(NULL)
{
}

XMLNodeBase::XMLNodeBase(rapidxml::xml_node<>* node)
	: m_parent(node)
{
}

std::string XMLNodeBase::GetNodeName() const
{
	assert(m_parent);
	auto node = GetNode();
	return (node) ? node->name() : std::string();
}

bool XMLNodeBase::hasNode() const
{
	return (GetNode());
}

rapidxml::xml_node<>* XMLNodeBase::GetNode() const 
{ 
	assert(m_parent);
	return (m_parent) ? m_parent->first_node(this->GetName().c_str()) : NULL;
};

bool XMLNodeBase::hasParent() const
{
	assert(m_parent);
	return (m_parent);
} 

std::string XMLNodeBase::GetValue() const
{
	assert(m_parent);
	auto node = GetNode();
	return (node) ? node->value() : std::string();
	//return (m_parent) ?
	//	m_parent->value() : std::string();
}


rapidxml::xml_node<>* XMLNodeBase::GetParent() const
{
	assert(m_parent);
	return (m_parent);
}

rapidxml::xml_document<>* XMLNodeBase::GetDocument() const
{
	assert(m_parent);
	return (m_parent) ? m_parent->document() : NULL;
}

void XMLNodeBase::SetValue(const std::string& value)
{
	assert(m_parent);
	if (m_parent)
	{
		auto doc = GetDocument();
		auto newstring = doc->allocate_string(value.c_str());	// Must let rapidxml hold the strings
		rapidxml::xml_node<>* node = GetNode();
		assert(node);
		node->value(newstring);
	}
}

std::ostream& XMLNodeBase::Write(std::ostream& os, int indent) const
{
	os << "<" << GetNodeName() << ">" << GetValue() << "</" << GetNodeName() << ">";
	return os;
}

std::ostream& operator << (std::ostream& out, const XMLNodeBase& node)
{
	out << "<" << node.GetNodeName() << ">" << node.GetValue() << "</" << node.GetNodeName() << ">";
	return out;
}

void XMLNodeBase::SetParent(rapidxml::xml_node<>* parent)
{
	m_parent = parent;
}

void XMLNodeBase::Add(const std::string& value)
{
	assert(m_parent);
	auto node = GetNode();
	if (!node)
	{
		SetValue(value);
	}
	else
	{
		// Use existing node if it exists and just overwrite it's values
		// We need to allocate the memory out of the document pool
		auto document = GetDocument();
		assert(document);
		rapidxml::xml_node<> *node = document->allocate_node( rapidxml::node_element, GetName().c_str(), value.c_str() );
		m_parent->append_node(node); /* Appending node a to the tree in src */
	}
}


void XMLNodeBase::Remove()
{
	assert(false);	// Todo
	assert(m_parent);
	if (isValid())
	{
		auto parent = GetParent();
		assert(parent);
		// Remove this node from the parent and invalidate this node

//		if (parent
	}
}
