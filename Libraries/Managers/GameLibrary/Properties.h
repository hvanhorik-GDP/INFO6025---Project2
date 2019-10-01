#pragma once
#include "XML/XMLArrayBase.h"
#include "XML/XMLAttribute.h"

namespace gamelibrary
{

	class Property_type : public XMLAttribute
	{
	public:
		Property_type() {};
		virtual ~Property_type() final {}
		Property_type(rapidxml::xml_node<>* node) : XMLAttribute(node) {}
		virtual const std::string& GetName() const { return gName; };

	private:
		static const std::string gName;
	};

	class Property_value : public XMLAttribute
	{
	public:
		Property_value() {};
		virtual ~Property_value() final {}
		Property_value(rapidxml::xml_node<>* node) : XMLAttribute(node) {}
		virtual const std::string& GetName() const { return gName; };

	private:
		static const std::string gName;
	};

	class Properties : public XMLArrayBase
	{
	public:
		Properties(rapidxml::xml_node<>* parent, std::size_t index = 0)
			: XMLArrayBase(parent, index) {}
		void AddProperty(const std::string& type, const std::string& value);
		friend std::ostream& operator << (std::ostream& out, const Properties& node);
	protected:
		virtual const std::string& GetName() const { return gName; };
	private:
		static const std::string gName;
	};
}
