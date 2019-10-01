#pragma once

#include "cItem_Common.h"
#include <vector>

class cItem_Program : public cItem_Common
{
public:
	typedef std::vector<iAssetManager::iItem*> vecShaders;

	cItem_Program(std::string id,
		std::string path,
		rapidxml::xml_node<>* parent,
		std::size_t index);
	virtual ~cItem_Program();

	unsigned int GetID() const;
	vecShaders* GetShaders();
	// For debugging purposes - dumps the contents in human readable form
	friend std::ostream& operator<<(std::ostream& stream, const cItem_Program& val);

private:
	cItem_Program();				// Bad Consructor so hide

	unsigned int m_ID = 0;
	bool m_valid;
	vecShaders m_vecShaders;
	std::string m_error;

	friend class cAssetManager_Programs;
	friend class cProgramLoader;
};

