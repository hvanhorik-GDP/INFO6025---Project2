#pragma once

#include <string>
#include <vector>

class XMLStringCache
{
public:
	static void MakeCache(const std::string& name);

private:
	XMLStringCache() {};
	~XMLStringCache() {}
	static std::vector<std::string> m_cache;

};

