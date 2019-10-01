#pragma once
#include <ostream>
#include <map>
#include <string>
#include <rapidxml/rapidxml.hpp>


class iAssetManager
{
public:

	// A way to pass items around
	class iItem
	{
	public:
		iItem() {};
		virtual ~iItem() {}
		
		// For debugging purposes - dumps the contents in human readable form
		friend std::ostream& operator<<(std::ostream& stream, const iItem& val);
	};

	// Items are stored in a map so they can be looked up by string name
	typedef std::map<std::string, iItem*> iItems_map;

	iAssetManager() {};
	virtual ~iAssetManager() {}

	// Load assets from XML document
	virtual void LoadAssets(rapidxml::xml_node<>* parent) = 0;

	// Retrieve the item information
	virtual iAssetManager::iItems_map* GetItems(const std::string& name) = 0;

	// For debugging purposes - dumps the contents in human readable form
	friend std::ostream& operator<<(std::ostream& stream, const iAssetManager& val);
};