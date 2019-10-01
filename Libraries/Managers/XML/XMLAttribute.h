#pragma once

#include "XMLNodeBase.h"
#include <rapidxml/rapidxml.hpp>
#include <string>
#include <vector>

class XMLAttribute
{
public:
	XMLAttribute();
	XMLAttribute(rapidxml::xml_node<>* parent);
	virtual ~XMLAttribute() {}

	// Get the actual recorded node name
	std::string GetAttributeName() const;

	// Validate the node
	bool isValid() const { return (m_node); }

	// Get & Set Values of a node
	std::string GetValue() const;
	void SetValue(const std::string& value);

	friend std::ostream& operator << (std::ostream& out, const XMLAttribute& node);

public:
	// virtual function for derived classes to specify their node name
	virtual const std::string& GetName() const = 0;
	bool hasNode() const;
	rapidxml::xml_node<>* GetNode() const;
private:
	rapidxml::xml_node<>* m_node;
};

