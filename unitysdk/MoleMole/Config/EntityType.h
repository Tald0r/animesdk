#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int EntityType_TypeDefinitionIndex = 47075;

	enum class EntityType : ::System::Int32
	{
		Count = 41,
		SmallItem = 40,
		PartyGameSceneObj = 38,
		ExecuteCore = 19,
		MainCamera = 11,
		TeamEntity = 25,
		Particle = 6,
		TimeDrivenAttack = 15,
		Buddy = 20,
		Crate = 16,
		Gadget = 39,
		SceneObject = 26,
		MainCityAvatarData = 37,
		Effect = 17,
		Level = 8,
		ServerNPC = 22,
		SimpleRigidbody = 30,
		Skybox = 7,
		Bullet = 14,
		UI3DModel = 34,
		Other = 21,
		Trigger = 10,
		NPC = 5,
		UIWeapon = 33,
		Avatar = 1,
		Monster = 2,
		IndicatedLight = 35,
		EnemyIndicator = 27,
		Prop = 36,
		Follower = 3,
		None = 0,
		ServerTriggerBox = 23,
		DodgeDummy = 18,
		CurveMove = 29,
		MiniMap = 12,
		UIMonster = 32,
		UIAvatar = 28,
		UIBuddy = 31,
		DropItem = 13,
		LevelArea = 9,
		AraTrail = 24,
		Robot = 4,
	};
}
