#include "Player.h"
#include <string>

namespace player
{
	Player::Player(rapidxml::xml_node<>* parent)
		: XMLArrayBase(parent)
	{
		assert(isValid());
	}

	PlayerName Player::GetPlayerName()
	{
		assert(isValid());
		return player::PlayerName(GetNode());
	}

	Description Player::GetDescription()
	{
		assert(isValid());
		return player::Description(GetNode());
	}

	HeightCM Player::GetHeightCM()
	{
		assert(isValid());
		return player::HeightCM(GetNode());
	}

	WeightKG Player::GetWeightKG()
	{
		assert(isValid());
		return player::WeightKG(GetNode());
	}

	attributes::CurrentAttributes Player::GetCurrentAttributes()
	{
		assert(isValid());
		return attributes::CurrentAttributes(GetNode());
	}

	attributes::MaximumAttributes Player::GetMaximumAttributes()
	{
		assert(isValid());
		return attributes::MaximumAttributes(GetNode());
	}


	const std::string Player::gName = "Player";
}
