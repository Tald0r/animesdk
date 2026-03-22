#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_BDDDDB46A99CFF4C;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigAttachmentItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATORZONECHARACTERATTACHMENTS_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x6FC3120)
#define MOLEMOLE_CONFIG_ANIMATORZONECHARACTERATTACHMENTS_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x6FC2D70)
#define MOLEMOLE_CONFIG_ANIMATORZONECHARACTERATTACHMENTS_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x6FC2FA0)
#define MOLEMOLE_CONFIG_ANIMATORZONECHARACTERATTACHMENTS__CTOR_OFFSET UNITYSDK_OFFSET(0x6FC31A0)
#define MOLEMOLE_CONFIG_ANIMATORZONECHARACTERATTACHMENTS___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x6FC31B0)
#define MOLEMOLE_CONFIG_ANIMATORZONECHARACTERATTACHMENTS___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x6FC3230)
#define MOLEMOLE_CONFIG_ANIMATORZONECHARACTERATTACHMENTS___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x6FC32C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneCharacterAttachments_TypeDefinitionIndex = 61838;

	class AnimatorZoneCharacterAttachments : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigAttachmentItem*>* attachmentGroupList; // 0x50
		::System::Boolean isFollow; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHARACTERATTACHMENTS__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_BDDDDB46A99CFF4C* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHARACTERATTACHMENTS_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_BDDDDB46A99CFF4C* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHARACTERATTACHMENTS_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::Class_1_BDDDDB46A99CFF4C* CreateZoneInfoInstance()
		{
			return ((::Class_1_BDDDDB46A99CFF4C*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHARACTERATTACHMENTS_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::Class_1_BDDDDB46A99CFF4C* __base_CreateZoneInfoInstance()
		{
			return ((::Class_1_BDDDDB46A99CFF4C*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHARACTERATTACHMENTS___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_BDDDDB46A99CFF4C* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHARACTERATTACHMENTS___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_BDDDDB46A99CFF4C* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHARACTERATTACHMENTS___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
