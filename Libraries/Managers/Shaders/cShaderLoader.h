#pragma once
#include "../AssetManager/cItem_Shader.h"
#include "sUniform.h"

class cShaderLoader
{
public:
	cShaderLoader();
	~cShaderLoader();
	bool Load(cItem_Shader& shader);
	
	vecAttributes* GetAttributes();
	vecUniforms* GetUniforms();

	std::string GetLastError();
private:
	bool LoadSourceFromFile(cItem_Shader& shader);
	bool CompileShaderFromSource(cItem_Shader& shader, std::string& error);
	bool WasThereACompileError(unsigned int shaderID, std::string& errorText);
	void GetAttributes(cItem_Shader& info);
	void GetUniforms(cItem_Shader& info);

	vecAttributes m_vecAttributes;
	vecUniforms m_vecUniforms;
	std::string m_lastError;

};

