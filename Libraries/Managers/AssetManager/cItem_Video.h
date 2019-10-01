#pragma once
#include "cItem_Common.h"

class cItem_Video : public cItem_Common
{
public:

	cItem_Video(std::string id,
		std::string path,
		rapidxml::xml_node<>* parent,
		std::size_t index);
	virtual ~cItem_Video();
	// For debugging purposes - dumps the contents in human readable form
	friend std::ostream& operator<<(std::ostream& stream, const cItem_Video& val);

private:
	cItem_Video();				// Bad Consructor

	friend class cAssetManager_Audios;

};

