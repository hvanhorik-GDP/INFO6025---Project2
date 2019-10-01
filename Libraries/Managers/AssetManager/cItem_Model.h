#pragma once
#include "cItem_Common.h"

class cItem_Model : public cItem_Common
{
public:


	cItem_Model(std::string id,
		std::string path,
		rapidxml::xml_node<>* parent,
		std::size_t index);
	virtual ~cItem_Model();
	// For debugging purposes - dumps the contents in human readable form
	friend std::ostream& operator<<(std::ostream& stream, const cItem_Model& val);

private:
	cItem_Model();				// Bad Consructor

	friend class cAssetManager_Audios;

};

