#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SMapGroupMemberStateConfigControl.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Animator; }

#define MOLEMOLE_MAPGROUPMEMBERSTATECONFIG_GET_ANIMATOR_OFFSET UNITYSDK_OFFSET(0xE1170B0)
#define MOLEMOLE_MAPGROUPMEMBERSTATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xE117240)

namespace MoleMole
{
	inline static constexpr unsigned int MapGroupMemberStateConfig_TypeDefinitionIndex = 36601;

	class MapGroupMemberStateConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 GroupId; // 0x18
		::System::Int32 MemberId; // 0x1C
		::MoleMole::SMapGroupMemberStateConfigControl ControlInState; // 0x20
		::UnityEngine::Animator* Field_5_3; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAPGROUPMEMBERSTATECONFIG__CTOR_OFFSET))(this);
		}

		::UnityEngine::Animator* get_Animator()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAPGROUPMEMBERSTATECONFIG_GET_ANIMATOR_OFFSET))(this);
		}
	};
}
