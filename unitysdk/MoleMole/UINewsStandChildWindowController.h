#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_C2C2A3C0E7CA74C3;
class Class_2_D550F2BA5DA7BDE7;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UINewsStandContentWidgetController; }
namespace MoleMole { class UINewsStandHeadLineWidgetController; }
namespace MoleMole { class UIWidgetController; }
namespace System { class String; }

#define MOLEMOLE_UINEWSSTANDCHILDWINDOWCONTROLLER_GET_PLAYANIMWITHPARENT_OFFSET UNITYSDK_OFFSET(0x68DBB70)
#define MOLEMOLE_UINEWSSTANDCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x68DBB60)
#define MOLEMOLE_UINEWSSTANDCHILDWINDOWCONTROLLER_ISNEWSFIRST_OFFSET UNITYSDK_OFFSET(0x68DBED0)
#define MOLEMOLE_UINEWSSTANDCHILDWINDOWCONTROLLER_ONCLICKNEXT_OFFSET UNITYSDK_OFFSET(0x68DC0B0)
#define MOLEMOLE_UINEWSSTANDCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x68DBDA0)
#define MOLEMOLE_UINEWSSTANDCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x68DBE40)
#define MOLEMOLE_UINEWSSTANDCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x68DBB80)
#define MOLEMOLE_UINEWSSTANDCHILDWINDOWCONTROLLER_SHOWDETAILWINDOW_OFFSET UNITYSDK_OFFSET(0x68DBFF0)
#define MOLEMOLE_UINEWSSTANDCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x68DC270)
#define MOLEMOLE_UINEWSSTANDCHILDWINDOWCONTROLLER__ONCLICKNEXT_B__15_0_OFFSET UNITYSDK_OFFSET(0x68DC280)
#define MOLEMOLE_UINEWSSTANDCHILDWINDOWCONTROLLER__ONCLICKNEXT_G__GETPLAYANIMNAME_15_1_OFFSET UNITYSDK_OFFSET(0x68DC210)
#define MOLEMOLE_UINEWSSTANDCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x68DC7A0)
#define MOLEMOLE_UINEWSSTANDCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x68DC810)
#define MOLEMOLE_UINEWSSTANDCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x68DC820)

namespace MoleMole
{
	inline static constexpr unsigned int UINewsStandChildWindowController_TypeDefinitionIndex = 51123;

	class UINewsStandChildWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_C2C2A3C0E7CA74C3* _view; // 0x2F8
		::MoleMole::UINewsStandHeadLineWidgetController* _headLineWidget; // 0x300
		::MoleMole::UINewsStandContentWidgetController* _normalNewsWidget; // 0x308
		::MoleMole::UIWidgetController* _currentWidget; // 0x310
		::Class_2_D550F2BA5DA7BDE7* _newsStandModel; // 0x318
		::System::Int32 _playIndex; // 0x320

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Boolean get_PlayAnimWithParent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDCHILDWINDOWCONTROLLER_GET_PLAYANIMWITHPARENT_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean IsNewsFirst()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDCHILDWINDOWCONTROLLER_ISNEWSFIRST_OFFSET))(this);
		}

		::System::Void ShowDetailWindow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDCHILDWINDOWCONTROLLER_SHOWDETAILWINDOW_OFFSET))(this);
		}

		::System::Void OnClickNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDCHILDWINDOWCONTROLLER_ONCLICKNEXT_OFFSET))(this);
		}

		::System::Void _OnClickNext_b__15_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDCHILDWINDOWCONTROLLER__ONCLICKNEXT_B__15_0_OFFSET))(this);
		}

		::System::String* _OnClickNext_g__GetPlayAnimName_15_1(::System::Boolean isFadeIn)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDCHILDWINDOWCONTROLLER__ONCLICKNEXT_G__GETPLAYANIMNAME_15_1_OFFSET))(this, isFadeIn);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
