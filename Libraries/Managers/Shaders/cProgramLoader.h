#pragma once
#include "../AssetManager/cItem_Program.h"
#include "sUniform.h"

class cProgramLoader
{
public:
	cProgramLoader();
	~cProgramLoader();
	bool Load(cItem_Program& info);

	vecAttributes* GetAttributes();
	vecUniforms* GetUniforms();

	std::string GetLastError();
private:
	bool WasThereALinkError(unsigned int programID, std::string& errorText);

	void GetAttributes(cItem_Program& info);
	void GetUniforms(cItem_Program& info);

	vecAttributes m_vecAttributes;
	vecUniforms m_vecUniforms;
	std::string m_lastError;
};

