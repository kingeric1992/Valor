#pragma once
#include "PCH.h"
class perilous
{
public:
	static perilous* GetSingleton()
	{
		static perilous singleton;
		return &singleton;
	}

	void init();

	void attempt_start_perilous_attack(RE::Actor* a_actor);

	void attempt_end_perilous_attack(RE::Actor* a_actor);

private:
	bool should_perilous_attack(RE::Actor* a_actor);

	void perform_perilous_attack(RE::Actor* a_actor);

	RE::SpellItem* perilousSpell;

	RE::TESEffectShader* temp;

	RE::Explosion* perilousExplosion;
	
	RE::TESObjectACTI* perilousExplosionNode;

	RE::BGSSoundDescriptorForm* perilousSound;
	
};
