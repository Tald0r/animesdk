#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E053999CF96A442A;
class Class_2_208CC9941471731A_53;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIHollowCardOptionItemWidgetController; }
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIHOLLOWCARDOPTIONITEMWIDGETCONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB113490)
#define MOLEMOLE_UIHOLLOWCARDOPTIONITEMWIDGETCONTROLLER___C__DISPLAYCLASS26_0__REFRESHVIEW_B__2_OFFSET UNITYSDK_OFFSET(0xB1134A0)
#define MOLEMOLE_UIHOLLOWCARDOPTIONITEMWIDGETCONTROLLER___C__DISPLAYCLASS26_0__REFRESHVIEW_B__4_OFFSET UNITYSDK_OFFSET(0xB113FE0)
#define MOLEMOLE_UIHOLLOWCARDOPTIONITEMWIDGETCONTROLLER___C__DISPLAYCLASS26_0__REFRESHVIEW_G___CHANGECARD_0_OFFSET UNITYSDK_OFFSET(0xB1134B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCardOptionItemWidgetController___c__DisplayClass26_0_TypeDefinitionIndex = 72651;

	class UIHollowCardOptionItemWidgetController___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::System::String* icon2Str; // 0x10
		::Class_2_A8F5ABF31E066ED4* icon2; // 0x18
		::MoleMole::UIHollowCardOptionItemWidgetController* __4__this; // 0x20
		::Class_1_E053999CF96A442A* choice; // 0x28
		::System::String* icon1Str; // 0x30
		::Class_2_208CC9941471731A_53* template2; // 0x38
		::Class_2_A8F5ABF31E066ED4* icon1; // 0x40
		::Class_2_208CC9941471731A_53* template1; // 0x48
		::System::Int32 itemid2; // 0x50
		::System::Int32 itemid1; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONITEMWIDGETCONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONITEMWIDGETCONTROLLER___C__DISPLAYCLASS26_0__REFRESHVIEW_B__2_OFFSET))(this);
		}

		::System::Void _RefreshView_g___ChangeCard_0(::System::Boolean useAnim, ::System::Action* finishCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONITEMWIDGETCONTROLLER___C__DISPLAYCLASS26_0__REFRESHVIEW_G___CHANGECARD_0_OFFSET))(this, useAnim, finishCallback);
		}

		::System::Void _RefreshView_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONITEMWIDGETCONTROLLER___C__DISPLAYCLASS26_0__REFRESHVIEW_B__4_OFFSET))(this);
		}
	};
}
