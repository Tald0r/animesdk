#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/DebugColor.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneHitWallEffect_NormalMethod.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneHitWallEffect_RayAxis.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneHitWallEffect_RayMethod.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneHitWallEffect_ScratchPreferMethod.h"
#include "unitysdk/MoleMole/Config/Vector3Range.h"
#include "unitysdk/MoleMole/WeaponDamageDecalType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_A5AF8EA2F7094EFB;
namespace MoleMole::Config { class EffectTimeSegmentConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT_GET_HOLDER_OFFSET UNITYSDK_OFFSET(0x6D31E80)
#define MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT_ONDISABLED_OFFSET UNITYSDK_OFFSET(0x6D31CE0)
#define MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT_ONENABLED_OFFSET UNITYSDK_OFFSET(0x6D31C80)
#define MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT_PREPARE_OFFSET UNITYSDK_OFFSET(0x6D31EA0)
#define MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT_SET_HOLDER_OFFSET UNITYSDK_OFFSET(0x6D31E90)
#define MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT__AUTOSETENDFRAME_OFFSET UNITYSDK_OFFSET(0x6D31E20)
#define MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x6D32520)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int ScratchConfigObject_TypeDefinitionIndex = 50366;

	class ScratchConfigObject : public ::System::Object
	{
	public:
		::System::String* OverrideShakeKey; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* BeginTypeSpecialEffects; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* ScratchTypeSpecialEffects; // 0x20
		::System::String* effRayStartName; // 0x28
		::System::String* effRayDirName; // 0x30
		::UnityEngine::Transform* rayDirObject; // 0x38
		::UnityEngine::Transform* rayStopTo; // 0x40
		::System::Collections::Generic::List_1<::MoleMole::Config::EffectTimeSegmentConfig*>* EffectSegmentList; // 0x48
		::UnityEngine::Transform* _Holder_k__BackingField; // 0x50
		::UnityEngine::Transform* rayStartFrom; // 0x58
		::System::Int32 lerpRayCount; // 0x60
		::MoleMole::WeaponDamageDecalType CharacterDecalType; // 0x64
		::System::Single effRayDistance; // 0x68
		::MoleMole::Config::Vector3Range BeginTypeSpecialEffectsRange; // 0x6C
		::UnityEngine::Vector3 oneRayEuler; // 0x84
		::UnityEngine::Vector3 effRayEulerOffset; // 0x90
		::System::Int32 hitRayFrameUpdateInterval; // 0x9C
		::MoleMole::Config::AnimatorZoneHitWallEffect_RayMethod rayMethod; // 0xA0
		::System::Boolean isSymmetryRay; // 0xA4
		::MoleMole::Config::AnimatorZoneHitWallEffect_ScratchPreferMethod preferMethod; // 0xA8
		::MoleMole::Config::AnimatorZoneHitWallEffect_RayAxis effRayStartDirAxis; // 0xAC
		::MoleMole::Config::AnimatorZoneHitWallEffect_NormalMethod normalMethod; // 0xB0
		::MoleMole::Config::Vector3Range ScratchTypeSpecialEffectsRange; // 0xB4
		::MoleMole::Battle::DebugColor debugColor; // 0xCC
		::System::Int32 totalRayCount; // 0xEC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT__CTOR_OFFSET))(this);
		}

		::System::Void OnEnabled()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT_ONENABLED_OFFSET))(this);
		}

		::System::Void OnDisabled()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT_ONDISABLED_OFFSET))(this);
		}

		::System::Void _AutoSetEndFrame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT__AUTOSETENDFRAME_OFFSET))(this);
		}

		::UnityEngine::Transform* get_Holder()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT_GET_HOLDER_OFFSET))(this);
		}

		::System::Void set_Holder(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT_SET_HOLDER_OFFSET))(this, value);
		}

		::System::Void Prepare(::Class_3_A5AF8EA2F7094EFB* speModel)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_A5AF8EA2F7094EFB*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT_PREPARE_OFFSET))(this, speModel);
		}
	};
}
