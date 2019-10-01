#include "XMLNodeBase.h"
#include <ostream>


XMLNodeBase::XMLNodeBase(rapidxml::xml_node<>* parent)
	: m_parent(NULL)
{
	assert(parent);
	m_parent = parent;
}

XMLNodeBase::XMLNodeBase()
	: m_parent(NULL)
{
}


std::string XMLNodeBase::GetNodeName() const
{
	assert(m_parent != NULL);
	auto node = GetNode();
	return (node) ? node->name() : std::string();
}

bool XMLNodeBase::hasNode() const
{
	return (GetNode());
}

rapidxml::xml_node<>* XMLNodeBase::GetNode() const 
{ 
	assert(m_parent != NULL);
	return (m_parent) ? m_parent->first_node(GetName().c_str()) : NULL;
};

bool XMLNodeBase::hasParent() const
{
	assert(m_parent != NULL);
	return (m_parent);
} 

std::string XMLNodeBase::GetValue() const
{
	assert(m_parent != NULL);
	auto node = GetNode();
	return (node) ? node->value() : std::string();
	//return (m_parent) ?
	//	m_parent->value() : std::string();
}


rapidxml::xml_node<>* XMLNodeBase::GetParent() const
{
	assert(m_parent != NULL);
	return (m_parent);
}

rapidxml::xml_document<>* XMLNodeBase::GetDocument() const
{
	assert(m_parent != NULL);
	return (m_parent) ? m_parent->document() : NULL;
}

void XMLNodeBase::SetValue(const std::string& value)
{
	assert(m_parent != NULL);
	if (m_parent)
	{
		auto node = GetNode();
		if (node)
		{
			auto doc = GetDocument();
			auto newstring = doc->allocate_string(value.c_str());	// Must let rapidxml hold the strings
			node->value(newstring);
		}
		else
		{
			Add(value);
		}
	}
}

std::ostream& operator << (std::ostream& out, const XMLNodeBase& node)
{
	if (node.isValid())
	{
		out << "<" << node.GetNodeName() << ">" << node.GetValue() << "</" << node.GetNodeName() << ">";
	}
	return out;
}

void XMLNodeBase::SetParent(rapidxml::xml_node<>* parent)
{
	m_parent = parent;
}

void XMLNodeBase::Add(const std::string& value, bool insert)
{
	assert(m_parent != NULL);
	auto node = GetNode();
	if (node && !insert)
	{
		SetValue(value);
	}
	else
	{
		// Use existing node if it exists and just overwrite it's values
		// We need to allocate the memory out of the document pool
		auto document = GetDocument();
		assert(document != NULL);
		auto newValue = document->allocate_string(value.c_str());	// Must let rapidxml hold the strings
		auto newName = document->allocate_string(GetName().c_str());	// Must let rapidxml hold the strings
		rapidxml::xml_node<> *node = document->allocate_node( rapidxml::node_element, newName, newValue);
		m_parent->append_node(node);								// Put at the end
	}
}


void XMLNodeBase::Remove()
{
	assert(false);	// Todo
	assert(m_parent != NULL);
	if (isValid())
	{
		auto parent = GetParent();
		assert(parent != NULL);
		// Remove this node from the parent and invalidate this node

//		if (parent
	}
}

namespace xmlindent
{
	std::ostream& operator<<(std::ostream& stream, const xmlindent::indent& val)
	{
		for (int i = 0; i < val.level; i++) {
			stream << " ";
		}
		return stream;
	}

}