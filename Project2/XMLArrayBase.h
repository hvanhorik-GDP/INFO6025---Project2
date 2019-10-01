#pragma once
#include "XMLNodeBase.h"
#include <string>

class XMLArrayBase : public XMLNodeBase
{
public:
	XMLArrayBase();
	XMLArrayBase(rapidxml::xml_node<>* parent);
	virtual ~XMLArrayBase() {};
	rapidxml::xml_node<>* first();
	rapidxml::xml_node<>* next();
protected:
	virtual const std::string& GetName() const { return gName; };
private:
	rapidxml::xml_node<>* m_current;			// For iterators

	static const std::string gName;
};

