#pragma once

#include <rapidxml/rapidxml.hpp>
#include <string>
#include <vector>

class XMLNodeBase
{
public:
	XMLNodeBase();
	XMLNodeBase(const XMLNodeBase & parent);
	virtual ~XMLNodeBase() {}

	// Get the actual recorded node name
	std::string GetNodeName() const;

	// Validate the node
	bool isValid() const { return (m_parent);  }
	bool hasNode() const;

	// Add and Remove a node
	void Remove();
	void Add(const std::string& value = std::string());

	// Get & Set Values of a node
	std::string GetValue() const;
	void SetValue(const std::string &value);

	std::ostream& Write(std::ostream& os, int indent = 0) const;
	friend std::ostream& operator << (std::ostream& out, const XMLNodeBase& node);

protected:
	// virtual function for derived classes to specify their node name
	virtual const std::string& GetName() const = 0;
	bool hasParent() const;
	XMLNodeBase(rapidxml::xml_node<>* parent);
	rapidxml::xml_node<>* GetNode() const;
	rapidxml::xml_node<>* GetParent() const;
	rapidxml::xml_document<>* GetDocument() const;
	void SetParent(rapidxml::xml_node<>* parent);
private:
	rapidxml::xml_node<>* m_parent;
};

