#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIFriendInviteRowWidgetController; }
namespace MoleMole { class UIFriendInviteRowWidgetController_Context; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB2B03E0)
#define MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER___C__DISPLAYCLASS5_0__ONSCROLLITEMUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0xB2B03F0)
#define MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER___C__DISPLAYCLASS5_0__ONSCROLLITEMUPDATE_B__1_OFFSET UNITYSDK_OFFSET(0xB2B0840)
#define MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER___C__DISPLAYCLASS5_0__ONSCROLLITEMUPDATE_B__2_OFFSET UNITYSDK_OFFSET(0xB2B0640)
#define MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER___C__DISPLAYCLASS5_0__ONSCROLLITEMUPDATE_B__3_OFFSET UNITYSDK_OFFSET(0xB2B07D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendInviteRowWidgetController___c__DisplayClass5_0_TypeDefinitionIndex = 45001;

	class UIFriendInviteRowWidgetController___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::MoleMole::UIFriendInviteRowWidgetController_Context* _data; // 0x10
		::System::Action* __9__2; // 0x18
		::System::Action_1<::System::Int32>* __9__3; // 0x20
		::MoleMole::UIFriendInviteRowWidgetController* __4__this; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnScrollItemUpdate_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER___C__DISPLAYCLASS5_0__ONSCROLLITEMUPDATE_B__0_OFFSET))(this);
		}

		::System::Void _OnScrollItemUpdate_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER___C__DISPLAYCLASS5_0__ONSCROLLITEMUPDATE_B__2_OFFSET))(this);
		}

		::System::Void _OnScrollItemUpdate_b__3(::System::Int32 retCode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER___C__DISPLAYCLASS5_0__ONSCROLLITEMUPDATE_B__3_OFFSET))(this, retCode);
		}

		::System::Void _OnScrollItemUpdate_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER___C__DISPLAYCLASS5_0__ONSCROLLITEMUPDATE_B__1_OFFSET))(this);
		}
	};
}
