#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_472679C84451629A_24;
namespace MoleMole { class ActivityOVABattleSpecialContext; }

#define MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER___C__DISPLAYCLASS35_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB29CFA0)
#define MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER___C__DISPLAYCLASS35_0__ONENTERSPECIALENTRY_B__0_OFFSET UNITYSDK_OFFSET(0xB29CFB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarStoryActivityPageController___c__DisplayClass35_0_TypeDefinitionIndex = 39944;

	class UIAvatarStoryActivityPageController___c__DisplayClass35_0 : public ::System::Object
	{
	public:
		::MoleMole::ActivityOVABattleSpecialContext* context; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER___C__DISPLAYCLASS35_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnEnterSpecialEntry_b__0(::Class_3_472679C84451629A_24* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_472679C84451629A_24*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER___C__DISPLAYCLASS35_0__ONENTERSPECIALENTRY_B__0_OFFSET))(this, rsp);
		}
	};
}
