#include "CharacterAttributes.h"


namespace attributes {

	const std::string Level::gName = "Level";
	const std::string HitPoints::gName = "HitPoints";
	const std::string Strength::gName = "Strength";
	const std::string Constitution::gName = "Constitution";
	const std::string Wisdom::gName = "Wisdom";
	const std::string Dexterity::gName = "Dexterity";
	const std::string Charisma::gName = "Charisma";
	const std::string Intelligence::gName = "Intelligence";
	const std::string SpeedKPH::gName = "SpeedKPH";


	Attributes::Attributes()
		: XMLArrayBase()
	{

	}
	Attributes::Attributes(rapidxml::xml_node<>* parent)
		: XMLArrayBase(parent)
	{
		assert(isValid());
	}

	Level Attributes::GetLevel()
	{
		assert(isValid());
		return Level(GetNode());
	}

	HitPoints Attributes::GetHitPoints()
	{
		assert(isValid());
		return HitPoints(GetNode());
	}

	Strength Attributes::GetStrength()
	{
		assert(isValid());
		return Strength(GetNode());
	}

	Constitution Attributes::GetConstitution()
	{
		assert(isValid());
		return Constitution(GetNode());
	}

	Wisdom Attributes::GetWisdom()
	{
		assert(isValid());
		return Wisdom(GetNode());
	}

	Dexterity Attributes::GetDexterity()
	{
		assert(isValid());
		return Dexterity(GetNode());
	}

	Charisma Attributes::GetCharisma()
	{
		assert(isValid());
		return Charisma(GetNode());
	}

	Intelligence Attributes::GetIntelligence()
	{
		assert(isValid());
		return Intelligence(GetNode());
	}

	SpeedKPH Attributes::GetSpeedKPH()
	{
		assert(isValid());
		return SpeedKPH(GetNode());
	}


	CurrentAttributes::CurrentAttributes()
		: Attributes()
	{

	}
	CurrentAttributes::CurrentAttributes(rapidxml::xml_node<>* parent)
		: Attributes(parent)
	{
		assert(isValid());
	}

	MaximumAttributes::MaximumAttributes()
		: Attributes()
	{

	}
	MaximumAttributes::MaximumAttributes(rapidxml::xml_node<>* parent)
		: Attributes(parent)
	{
		assert(isValid());
	}

	const std::string Attributes::gName = "";
	const std::string CurrentAttributes::gName = "CurrentAttributes";
	const std::string MaximumAttributes::gName = "MaximumAttributes";


}

//< Level>14 < / Level >
//< HitPoints>217 < / HitPoints >
//< Strength>17 < / Strength >
//< Constitution>7 < / Constitution >
//< Wisdom>14 < / Wisdom >
//< Dexterity>15 < / Dexterity >
//< Charisma>21 < / Charisma >
//< Intelligence>18 < / Intelligence >
//< SpeedKPH>28 < / SpeedKPH >
