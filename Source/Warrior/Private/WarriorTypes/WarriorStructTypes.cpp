// Franco Orlando Fernandez All Rights Reserved


#include "WarriorTypes/WarriorStructTypes.h"

#include "AbilitySystem/Abilities/WarriorGameplayAbility.h"

bool FWarriorHeroAbilitySet::IsValid() const
{
	return InputTag.IsValid() && AbilityToGrant;
}