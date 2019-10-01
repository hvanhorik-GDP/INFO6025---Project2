#pragma once
#include "XMLNodeBase.h"
#include "XMLArrayBase.h"

namespace attributes {

	class Level : public XMLNodeBase
	{
	public:
		Level(rapidxml::xml_node<>* parent)
			: XMLNodeBase(parent) {}
	protected:
		virtual const std::string& GetName() const { return gName; };
	private:
		static const std::string gName;
	};

	class HitPoints : public XMLNodeBase
	{
	public:
		HitPoints(rapidxml::xml_node<>* parent)
			: XMLNodeBase(parent) {}
	protected:
		virtual const std::string& GetName() const { return gName; };
	private:
		static const std::string gName;
	};

	class Strength : public XMLNodeBase
	{
	public:
		Strength(rapidxml::xml_node<>* parent)
			: XMLNodeBase(parent) {}
	protected:
		virtual const std::string& GetName() const { return gName; };
	private:
		static const std::string gName;
	};

	class Constitution : public XMLNodeBase
	{
	public:
		Constitution(rapidxml::xml_node<>* parent)
			: XMLNodeBase(parent) {}
	protected:
		virtual const std::string& GetName() const { return gName; };
	private:
		static const std::string gName;
	};

	class Wisdom : public XMLNodeBase
	{
	public:
		Wisdom(rapidxml::xml_node<>* parent)
			: XMLNodeBase(parent) {}
	protected:
		virtual const std::string& GetName() const { return gName; };
	private:
		static const std::string gName;
	};

	class Dexterity : public XMLNodeBase
	{
	public:
		Dexterity(rapidxml::xml_node<>* parent)
			: XMLNodeBase(parent) {}
	protected:
		virtual const std::string& GetName() const { return gName; };
	private:
		static const std::string gName;
	};

	class Charisma : public XMLNodeBase
	{
	public:
		Charisma(rapidxml::xml_node<>* parent)
			: XMLNodeBase(parent) {}
	protected:
		virtual const std::string& GetName() const { return gName; };
	private:
		static const std::string gName;
	};

	class Intelligence : public XMLNodeBase
	{
	public:
		Intelligence(rapidxml::xml_node<>* parent)
			: XMLNodeBase(parent) {}
	protected:
		virtual const std::string& GetName() const { return gName; };
	private:
		static const std::string gName;
	};

	class SpeedKPH : public XMLNodeBase
	{
	public:
		SpeedKPH(rapidxml::xml_node<>* parent)
			: XMLNodeBase(parent) {}
	protected:
		virtual const std::string& GetName() const { return gName; };
	private:
		static const std::string gName;
	};

	class Attributes : public XMLArrayBase
	{
	public:
		Attributes();
		virtual ~Attributes() {}
		Attributes(rapidxml::xml_node<>* parent);
		Level GetLevel();
		HitPoints GetHitPoints();
		Strength GetStrength();
		Constitution GetConstitution();
		Wisdom GetWisdom();
		Dexterity GetDexterity();
		Charisma GetCharisma();
		Intelligence GetIntelligence();
		SpeedKPH GetSpeedKPH();
	protected:
		virtual const std::string& GetName() const { return gName; };
	private:
		static const std::string gName;
	};

	class CurrentAttributes : public Attributes
	{
	public:
		CurrentAttributes();
		virtual ~CurrentAttributes()  {}
		CurrentAttributes(rapidxml::xml_node<>* parent);
	protected:
		virtual const std::string& GetName() const { return gName; };
	private:
		static const std::string gName;
	};

	class MaximumAttributes : public Attributes
	{
	public:
		MaximumAttributes();
		virtual ~MaximumAttributes()  {}
		MaximumAttributes(rapidxml::xml_node<>* parent);
	protected:
		virtual const std::string& GetName() const { return gName; };
	private:
		static const std::string gName;
	};

	

}

//<CurrentAttributes>
//< Level>14 < / Level >
//< HitPoints>217 < / HitPoints >
//< Strength>17 < / Strength >
//< Constitution>7 < / Constitution >
//< Wisdom>14 < / Wisdom >
//< Dexterity>15 < / Dexterity >
//< Charisma>21 < / Charisma >
//< Intelligence>18 < / Intelligence >
//< SpeedKPH>28 < / SpeedKPH >
//< / CurrentAttributes>

