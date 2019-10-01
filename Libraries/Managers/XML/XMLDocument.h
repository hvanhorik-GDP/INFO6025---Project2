#pragma once

#include "XMLNodeBase.h"
#include <rapidxml/rapidxml.hpp>
#include <string>
#include <vector>
#include "XMLNodeBase.h"

class XMLDocument : public XMLNodeBase
{
public:
	XMLDocument();
	virtual ~XMLDocument() {};
	virtual const std::string& GetName() const { return gName; };
	void Read(const std::string& inFile);
	void Write(const std::string& outFile) const;
	//rapidxml::xml_node<>* GetRoot(const std::string &root) const;
	rapidxml::xml_node<>* GetDocument();

private:
	rapidxml::xml_document<> m_document;
	std::vector<char> m_buffer;				// Need to keep read buffer perm
	static const std::string gName;
};

