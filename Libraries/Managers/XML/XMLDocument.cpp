#include "XMLDocument.h"
#include <rapidxml/rapidxml_ext.hpp>

#include <fstream>
#include <iostream>
#include <sstream>
#include <exception>

XMLDocument::XMLDocument() 
	: XMLNodeBase() 
{
}

void XMLDocument::Read(const std::string& inFile)
{
	std::ifstream lib(inFile);
	if (!lib.is_open())
	{
		std::stringstream msg;
		msg << "Can't open file: " << inFile;
		std::cout << msg.str() << std::endl;
		throw std::exception(msg.str().c_str());
	}
	std::vector<char> buffer((std::istreambuf_iterator<char>
		(lib)), std::istreambuf_iterator<char>());
	m_buffer = buffer;
	m_buffer.push_back('\0');

	//	document.parse<0>(ss.str());
	m_document.parse<0>(&m_buffer[0]);
	SetParent(&m_document);
}

void XMLDocument::Write(const std::string& outFile) const
{
	std::string data = std::string(m_buffer.begin(), m_buffer.end());

	std::ofstream file(outFile);
	auto nod = m_document.first_node();
	file << m_document;
//	rapidxml::print(std::ostreambuf_iterator<char>(file), m_document);
	file.close();
}

//rapidxml::xml_node<>* XMLDocument::GetRoot(const std::string& root) const
//{
//	return m_document.first_node(root.c_str());
//}

rapidxml::xml_node<>* XMLDocument::GetDocument()
{
	rapidxml::xml_document<>* doc = &m_document;
	return doc;
}

const std::string XMLDocument::gName = "";

