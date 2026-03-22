#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E053999CF96A442A;
class Class_2_208CC9941471731A_240;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIHollowCardOptionItemWidgetController; }
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIHOLLOWCARDOPTIONITEMWIDGETCONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8C61EE0)
#define MOLEMOLE_UIHOLLOWCARDOPTIONITEMWIDGETCONTROLLER___C__DISPLAYCLASS26_0__REFRESHVIEW_B__2_OFFSET UNITYSDK_OFFSET(0x8C61EF0)
#define MOLEMOLE_UIHOLLOWCARDOPTIONITEMWIDGETCONTROLLER___C__DISPLAYCLASS26_0__REFRESHVIEW_B__4_OFFSET UNITYSDK_OFFSET(0x8C62A30)
#define MOLEMOLE_UIHOLLOWCARDOPTIONITEMWIDGETCONTROLLER___C__DISPLAYCLASS26_0__REFRESHVIEW_G___CHANGECARD_0_OFFSET UNITYSDK_OFFSET(0x8C61F00)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCardOptionItemWidgetController___c__DisplayClass26_0_TypeDefinitionIndex = 68285;

	class UIHollowCardOptionItemWidgetController___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::System::String* icon1Str; // 0x10
		::Class_2_208CC9941471731A_240* template2; // 0x18
		::Class_1_E053999CF96A442A* choice; // 0x20
		::Class_2_A8F5ABF31E066ED4* icon2; // 0x28
		::Class_2_A8F5ABF31E066ED4* icon1; // 0x30
		::Class_2_208CC9941471731A_240* template1; // 0x38
		::System::String* icon2Str; // 0x40
		::MoleMole::UIHollowCardOptionItemWidgetController* __4__this; // 0x48
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
