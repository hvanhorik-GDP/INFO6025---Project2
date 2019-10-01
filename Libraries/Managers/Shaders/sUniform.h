#pragma once

#include <string>
#include <vector>
#include <map>

struct sUniform
{
	unsigned int m_ID;
	int m_index;
	unsigned int m_type;
	int m_size;
	std::string m_name;
};

typedef sUniform sAttribute;
typedef std::vector<sUniform> vecUniforms;
typedef std::vector<sAttribute> vecAttributes;
