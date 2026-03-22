#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneHitWallEffect_HitWallEffectCreatedStatus.h"
#include "unitysdk/MoleMole/Config/Vector3Range.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_BDDDDB46A99CFF4C;
class Class_2_2D77BF48CC4DE842;
class Class_3_475B169F337F3520;
class Class_3_F35B080B137ECC46;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0xCCF1050)
#define MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT_GET_ISUPDATEONEFRAME_OFFSET UNITYSDK_OFFSET(0xCCF1040)
#define MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xCCF1EF0)
#define MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0xCCF10F0)
#define MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0xCCF1DF0)
#define MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT__CCTOR_OFFSET UNITYSDK_OFFSET(0xCCF2D70)
#define MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xCCF2CC0)
#define MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT__HANDLEHITDATA_OFFSET UNITYSDK_OFFSET(0xCCF1AC0)
#define MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT__PREPARE_OFFSET UNITYSDK_OFFSET(0xCCF1620)
#define MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT__PRINTRAY_OFFSET UNITYSDK_OFFSET(0xCCF1D30)
#define MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT__TRYCREATERAYCHECK_OFFSET UNITYSDK_OFFSET(0xCCF1850)
#define MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT__TRYCREATESCRATCHEFFECTS_OFFSET UNITYSDK_OFFSET(0xCCF2680)
#define MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT__TRYCREATETRIGGEREFFECT_OFFSET UNITYSDK_OFFSET(0xCCF1FF0)
#define MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0xCCF2E80)
#define MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xCCF2F00)
#define MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0xCCF2FA0)
#define MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0xCCF3030)
#define MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT___TRYCREATESCRATCHEFFECTS_B__31_0_OFFSET UNITYSDK_OFFSET(0xCCF2E30)
#define MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT___TRYCREATETRIGGEREFFECT_B__30_0_OFFSET UNITYSDK_OFFSET(0xCCF2DE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneHitWallEffect_TypeDefinitionIndex = 77990;

	class AnimatorZoneHitWallEffect : public ::MoleMole::Config::AnimatorZone
	{
	public:
		static ::System::Int32* StaticGet_S_QueryLayer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneHitWallEffect_TypeDefinitionIndex)->GetStaticField(0xB490);
		}
		::Class_3_F35B080B137ECC46* _characterModel; // 0x50
		::System::Collections::Generic::List_1<::System::String*>* ScratchSpecialEffects; // 0x58
		::System::Collections::Generic::HashSet_1<::MoleMole::Config::AnimatorZoneHitWallEffect_HitWallEffectCreatedStatus>* _specialEffectStatus; // 0x60
		::Class_3_475B169F337F3520* _hitWallComponent; // 0x68
		::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>* _zoneHits; // 0x70
		::System::Collections::Generic::List_1<::System::String*>* StartSpecialEffects; // 0x78
		::Class_2_2D77BF48CC4DE842* _zoneInfo; // 0x80
		::System::String* StartAttachPoint; // 0x88
		::System::String* StopAttachPoint; // 0x90
		::System::Int32 _frameCurCount; // 0x98
		::MoleMole::Config::Vector3Range StartSpecialEffectsRange; // 0x9C
		::MoleMole::Config::Vector3Range ScratchSpecialEffectsRange; // 0xB4
		::System::Int32 hitRayFrameUpdateInterval; // 0xCC
		::System::Boolean isEffectSide; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT__CCTOR_OFFSET))();
		}

		::System::Boolean get_isUpdateOneFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT_GET_ISUPDATEONEFRAME_OFFSET))(this);
		}

		::Class_1_BDDDDB46A99CFF4C* CreateZoneInfoInstance()
		{
			return ((::Class_1_BDDDDB46A99CFF4C*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_BDDDDB46A99CFF4C* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void _Prepare()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT__PREPARE_OFFSET))(this);
		}

		::System::Void _TryCreateRayCheck()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT__TRYCREATERAYCHECK_OFFSET))(this);
		}

		::System::Void _PrintRay(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::UnityEngine::Color c, ::System::Single d)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT__PRINTRAY_OFFSET))(this, start, end, c, d);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_BDDDDB46A99CFF4C* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void OnUpdate(::MoleMole::Battle::Entity* entity, ::System::Single deltaTime, ::Class_1_BDDDDB46A99CFF4C* zoneInfo, ::System::Single animNormalizedTime, ::UnityEngine::AnimatorStateInfo& curStateInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT_ONUPDATE_OFFSET))(this, entity, deltaTime, zoneInfo, animNormalizedTime, curStateInfo);
		}

		::System::Boolean _HandleHitData(::UnityEngine::RaycastHit& info)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT__HANDLEHITDATA_OFFSET))(this, info);
		}

		::System::Void _TryCreateTriggerEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT__TRYCREATETRIGGEREFFECT_OFFSET))(this);
		}

		::System::Void _TryCreateScratchEffects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT__TRYCREATESCRATCHEFFECTS_OFFSET))(this);
		}

		::System::Void __TryCreateTriggerEffect_b__30_0(::MoleMole::Battle::Entity* effectEntity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT___TRYCREATETRIGGEREFFECT_B__30_0_OFFSET))(this, effectEntity);
		}

		::System::Void __TryCreateScratchEffects_b__31_0(::MoleMole::Battle::Entity* effectEntity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT___TRYCREATESCRATCHEFFECTS_B__31_0_OFFSET))(this, effectEntity);
		}

		::Class_1_BDDDDB46A99CFF4C* __base_CreateZoneInfoInstance()
		{
			return ((::Class_1_BDDDDB46A99CFF4C*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnUpdate(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_BDDDDB46A99CFF4C* P2, ::System::Single P3, ::UnityEngine::AnimatorStateInfo& P4)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT___BASE_ONUPDATE_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_BDDDDB46A99CFF4C* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_BDDDDB46A99CFF4C* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
