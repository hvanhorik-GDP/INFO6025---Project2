#pragma once

#include "cItem_Common.h"
#include <vector>

class cItem_Shader : public cItem_Common
{
public:
	enum type
	{
		unknown,
		vertex,
		fragment
	};

	cItem_Shader(std::string id,
		std::string path,
		rapidxml::xml_node<>* parent,
		std::size_t index);
	virtual ~cItem_Shader();

	std::string GetTypeString() const;
	cItem_Shader::type GetType() const;
	unsigned int GetID() const;
	// For debugging purposes - dumps the contents in human readable form
	friend std::ostream& operator<<(std::ostream& stream, const cItem_Shader& val);

private:
	cItem_Shader();				// Bad Consructor

	type m_shaderType;
	unsigned int m_ID;
	std::vector<std::string> m_vecSource;
	bool m_valid;
	std::string m_error;

	friend class cAssetManager_Shaders;
	friend class cShaderLoader;
};

