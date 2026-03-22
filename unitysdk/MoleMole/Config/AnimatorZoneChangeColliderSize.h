#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneChangeColliderSize_CapsuleDirection.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneChangeColliderSize_ColliderType.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_BDDDDB46A99CFF4C;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_CHECKMATCHANDCLEARRECORD_OFFSET UNITYSDK_OFFSET(0x96FB580)
#define MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x96FBA30)
#define MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x96FB1E0)
#define MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x96FAB90)
#define MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x96FB2C0)
#define MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_RECORDCOLLIDERSIZEINDEX_OFFSET UNITYSDK_OFFSET(0x96FAEC0)
#define MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE__CTOR_OFFSET UNITYSDK_OFFSET(0x96FBAB0)
#define MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x96FBAC0)
#define MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x96FBB40)
#define MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x96FBBE0)
#define MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x96FBC70)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneChangeColliderSize_TypeDefinitionIndex = 52070;

	class AnimatorZoneChangeColliderSize : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::String* ColliderName; // 0x50
		::System::String* BlendCurveExit; // 0x58
		::System::String* BlendCurveEntry; // 0x60
		::System::Single BlendTimeEntry; // 0x68
		::MoleMole::Config::AnimatorZoneChangeColliderSize_ColliderType Collider; // 0x6C
		::System::Single OverrideColliderParam; // 0x70
		::UnityEngine::Vector3 OverrideCenter; // 0x74
		::MoleMole::Config::AnimatorZoneChangeColliderSize_CapsuleDirection Direction; // 0x80
		::System::Single OverrideColliderParam2; // 0x84
		::System::Boolean EnableOverrideCenter; // 0x88
		::System::Single OverrideColliderParam1; // 0x8C
		::System::Single BlendTimeExit; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_BDDDDB46A99CFF4C* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnUpdate(::MoleMole::Battle::Entity* entity, ::System::Single deltaTime, ::Class_1_BDDDDB46A99CFF4C* zoneInfo, ::System::Single animNormalizedTime, ::UnityEngine::AnimatorStateInfo& curStateInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_ONUPDATE_OFFSET))(this, entity, deltaTime, zoneInfo, animNormalizedTime, curStateInfo);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_BDDDDB46A99CFF4C* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::Class_1_BDDDDB46A99CFF4C* CreateZoneInfoInstance()
		{
			return ((::Class_1_BDDDDB46A99CFF4C*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Boolean RecordColliderSizeIndex(::MoleMole::Battle::Entity* entity, ::MoleMole::Config::AnimatorZoneChangeColliderSize_ColliderType colliderType, ::System::String* colName, ::System::Int32 recordIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Config::AnimatorZoneChangeColliderSize_ColliderType, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_RECORDCOLLIDERSIZEINDEX_OFFSET))(this, entity, colliderType, colName, recordIndex);
		}

		::System::Boolean CheckMatchAndClearRecord(::MoleMole::Battle::Entity* entity, ::MoleMole::Config::AnimatorZoneChangeColliderSize_ColliderType colliderType, ::System::String* colName, ::System::Int32 recordIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Config::AnimatorZoneChangeColliderSize_ColliderType, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_CHECKMATCHANDCLEARRECORD_OFFSET))(this, entity, colliderType, colName, recordIndex);
		}

		::Class_1_BDDDDB46A99CFF4C* __base_CreateZoneInfoInstance()
		{
			return ((::Class_1_BDDDDB46A99CFF4C*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnUpdate(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_BDDDDB46A99CFF4C* P2, ::System::Single P3, ::UnityEngine::AnimatorStateInfo& P4)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE___BASE_ONUPDATE_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_BDDDDB46A99CFF4C* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_BDDDDB46A99CFF4C* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
