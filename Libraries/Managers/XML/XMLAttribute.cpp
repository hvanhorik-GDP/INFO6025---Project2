#include "XMLAttribute.h"
#include <ostream>

XMLAttribute::XMLAttribute()
{
}

XMLAttribute::XMLAttribute(rapidxml::xml_node<>* node)
	: m_node(node)
{
}

bool XMLAttribute::hasNode() const
{
	return (m_node);
}

std::string XMLAttribute::GetValue() const
{
	if (!hasNode())
		return std::string();
	auto attribute = m_node->first_attribute(GetName().c_str());
	return (attribute) ? attribute->value() : std::string();
}

 void XMLAttribute::SetValue(const std::string & value)
{
	assert(hasNode());
	auto attribute = m_node->first_attribute(GetName().c_str());
	if (attribute)
	{
		auto doc = attribute->document();
		assert(doc != NULL);
		auto newstring = doc->allocate_string(value.c_str());	// Must let rapidxml hold the strings
		attribute->value(newstring);
	}
	else
	{
		auto doc = m_node->document();
		assert(doc != NULL);
		auto newValue = doc->allocate_string(value.c_str());	// Must let rapidxml hold the strings
		auto newName = doc->allocate_string(GetName().c_str());	// Must let rapidxml hold the strings
		rapidxml::xml_attribute<>* attribute = doc->allocate_attribute(newName, newValue);
		m_node->append_attribute(attribute); /* Append the attribute */
	}
}

std::ostream& operator << (std::ostream& out, const XMLAttribute& attribute)
{
	if (attribute.isValid())
	{
		out << attribute.GetName() << " = \"" << attribute.GetValue() << "\" ";
	}
	return out;
}

rapidxml::xml_node<>* XMLAttribute::GetNode() const
{
	return m_node;
}
