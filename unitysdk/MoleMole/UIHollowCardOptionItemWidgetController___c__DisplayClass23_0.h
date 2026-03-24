#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowCardOptionItemWidgetController; }
namespace System { class Action; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UIHOLLOWCARDOPTIONITEMWIDGETCONTROLLER___C__DISPLAYCLASS23_0__CHANGEINFOSTATE_B__0_OFFSET UNITYSDK_OFFSET(0x892A800)
#define MOLEMOLE_UIHOLLOWCARDOPTIONITEMWIDGETCONTROLLER___C__DISPLAYCLASS23_0__CHANGEINFOSTATE_B__1_OFFSET UNITYSDK_OFFSET(0x892A940)
#define MOLEMOLE_UIHOLLOWCARDOPTIONITEMWIDGETCONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x892A7F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCardOptionItemWidgetController___c__DisplayClass23_0_TypeDefinitionIndex = 72655;

	class UIHollowCardOptionItemWidgetController___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::System::Action* __9__1; // 0x10
		::UnityEngine::Animation* anim; // 0x18
		::MoleMole::UIHollowCardOptionItemWidgetController* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONITEMWIDGETCONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Void _ChangeInfoState_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONITEMWIDGETCONTROLLER___C__DISPLAYCLASS23_0__CHANGEINFOSTATE_B__0_OFFSET))(this);
		}

		::System::Void _ChangeInfoState_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONITEMWIDGETCONTROLLER___C__DISPLAYCLASS23_0__CHANGEINFOSTATE_B__1_OFFSET))(this);
		}
	};
}
