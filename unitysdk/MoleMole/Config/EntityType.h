#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int EntityType_TypeDefinitionIndex = 61438;

	enum class EntityType : ::System::Int32
	{
		SmallItem = 40,
		UI3DModel = 34,
		Crate = 16,
		Particle = 6,
		EnemyIndicator = 27,
		Bullet = 14,
		UIMonster = 32,
		ServerNPC = 22,
		MiniMap = 12,
		Skybox = 7,
		Follower = 3,
		Other = 21,
		TimeDrivenAttack = 15,
		Robot = 4,
		TeamEntity = 25,
		UIAvatar = 28,
		NPC = 5,
		Trigger = 10,
		Buddy = 20,
		MainCamera = 11,
		IndicatedLight = 35,
		DodgeDummy = 18,
		AraTrail = 24,
		ServerTriggerBox = 23,
		CurveMove = 29,
		Prop = 36,
		Monster = 2,
		SimpleRigidbody = 30,
		None = 0,
		UIBuddy = 31,
		Gadget = 39,
		Count = 41,
		ExecuteCore = 19,
		Level = 8,
		Avatar = 1,
		UIWeapon = 33,
		PartyGameSceneObj = 38,
		MainCityAvatarData = 37,
		SceneObject = 26,
		LevelArea = 9,
		Effect = 17,
		DropItem = 13,
	};
}
