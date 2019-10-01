#pragma once
#include "cItem_Common.h"

class cItem_Image : public cItem_Common
{
public:


	cItem_Image(std::string id,
		std::string path,
		rapidxml::xml_node<>* parent,
		std::size_t index);
	virtual ~cItem_Image();
	// For debugging purposes - dumps the contents in human readable form
	friend std::ostream& operator<<(std::ostream& stream, const cItem_Image& val);

private:
	cItem_Image();				// Bad Consructor

	friend class cAssetManager_Audios;

};

