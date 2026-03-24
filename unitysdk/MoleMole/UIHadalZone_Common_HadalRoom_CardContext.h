#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_84CEDCEF739506C1_2;
namespace System { class Action; }

#define MOLEMOLE_UIHADALZONE_COMMON_HADALROOM_CARDCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x6C71330)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_Common_HadalRoom_CardContext_TypeDefinitionIndex = 40927;

	class UIHadalZone_Common_HadalRoom_CardContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* clickCallback; // 0x28
		::Class_2_84CEDCEF739506C1_2* monsterConfig; // 0x30
		::System::Boolean hideMonsterLevel; // 0x38
		::System::Int32 monsterLevel; // 0x3C
		::System::Int32 cardSelectIndex; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_COMMON_HADALROOM_CARDCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
