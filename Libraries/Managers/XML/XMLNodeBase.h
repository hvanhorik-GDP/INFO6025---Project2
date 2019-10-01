#pragma once

#include <rapidxml/rapidxml.hpp>
#include <string>
#include <vector>
#include <ostream>


namespace xmlindent
{
	class indent {
	public:
		indent(int level) : level(level) {}
		friend std::ostream& operator<<(std::ostream& stream, const indent& val);
		int level;
	};
}

class XMLNodeBase
{
public:

public:
	XMLNodeBase();
	XMLNodeBase(rapidxml::xml_node<>* parent);
	virtual ~XMLNodeBase() {}

	// Get the actual recorded node name
	std::string GetNodeName() const;

	// Validate the node
	bool isValid() const { return (m_parent);  }
	bool hasNode() const;

	// Add and Remove a node
	void Remove();
	void Add(const std::string& value = std::string(), bool insert = true);

	// Get & Set Values of a node
	std::string GetValue() const;
	void SetValue(const std::string &value);

	friend std::ostream& operator << (std::ostream& out, const XMLNodeBase& node);
	virtual rapidxml::xml_node<>* GetNode() const;
	rapidxml::xml_node<>* GetParent() const;

protected:		// HACK - Make protected later
	// virtual function for derived classes to specify their node name
	virtual const std::string& GetName() const = 0;
	bool hasParent() const;
//	XMLNodeBase(rapidxml::xml_node<>* parent);
	rapidxml::xml_document<>* GetDocument() const;
	void SetParent(rapidxml::xml_node<>* parent);
private:
	rapidxml::xml_node<>* m_parent;
//	XMLNodeBase(const XMLNodeBase& in);

};

