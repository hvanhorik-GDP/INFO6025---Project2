#include "XMLDocument.h"
#include <fstream>

XMLDocument::XMLDocument() 
	: XMLNodeBase() 
{
}

void XMLDocument::Read(const std::string& inFile)
{
	std::ifstream lib(inFile);
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
	file << data;
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

