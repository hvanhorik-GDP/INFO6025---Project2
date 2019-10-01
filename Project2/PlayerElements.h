#pragma once
#include "XMLNodeBase.h"

namespace player
{

	class PlayerName : public XMLNodeBase
	{
	public:
		PlayerName(rapidxml::xml_node<>* parent)
			: XMLNodeBase(parent) {}
	protected:
		virtual const std::string& GetName() const { return gName; };
	private:
		static const std::string gName;
	};

	class Description : public XMLNodeBase
	{
	public:
		Description(rapidxml::xml_node<>* parent)
			: XMLNodeBase(parent) {}
	protected:
		virtual const std::string& GetName() const { return gName; };
	private:
		static const std::string gName;
	};

	class HeightCM : public XMLNodeBase
	{
	public:
		HeightCM(rapidxml::xml_node<>* parent)
			: XMLNodeBase(parent) {}
	protected:
		virtual const std::string& GetName() const { return gName; };
	private:
		static const std::string gName;
	};

	class WeightKG : public XMLNodeBase
	{
	public:
		WeightKG(rapidxml::xml_node<>* parent)
			: XMLNodeBase(parent) {}
	protected:
		virtual const std::string& GetName() const { return gName; };
	private:
		static const std::string gName;
	};

}
