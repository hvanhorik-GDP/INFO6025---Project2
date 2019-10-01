#pragma once
#include "cItem_Common.h"

class cItem_Font : public cItem_Common
{
public:


	cItem_Font(std::string id,
				std::string path,
				rapidxml::xml_node<>* parent,
				std::size_t index);
	virtual ~cItem_Font();
	// For debugging purposes - dumps the contents in human readable form
	friend std::ostream& operator<<(std::ostream& stream, const cItem_Font& val);

private:
	cItem_Font();				// Bad Consructor

	friend class cAssetManager_Audios;

};

