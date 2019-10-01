#pragma once
#include "XMLArrayBase.h"
#include "PlayerElements.h"
#include "CharacterAttributes.h"

namespace player
{
	class Player :
		public XMLArrayBase
	{
	public:
		Player(rapidxml::xml_node<>* parent);
		virtual ~Player() {};
		PlayerName GetPlayerName();
		Description GetDescription();
		HeightCM GetHeightCM();
		WeightKG GetWeightKG();
		attributes::CurrentAttributes GetCurrentAttributes();
		attributes::MaximumAttributes GetMaximumAttributes();

	protected:
		virtual const std::string& GetName() const { return gName; };
	private:
		static const std::string gName;

	};

}