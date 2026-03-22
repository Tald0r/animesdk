#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_B90C1A15EA6E3C2B.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_15B5E2EA11C53410;
class Class_2_208CC9941471731A_480;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIFASHIONSTOREGAMESELECTPAGECONTROLLER_CREATELEVELITEM_OFFSET UNITYSDK_OFFSET(0xD052000)
#define MOLEMOLE_UIFASHIONSTOREGAMESELECTPAGECONTROLLER_GET_CURSELECTLEVELID_OFFSET UNITYSDK_OFFSET(0xD052150)
#define MOLEMOLE_UIFASHIONSTOREGAMESELECTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xD051A60)
#define MOLEMOLE_UIFASHIONSTOREGAMESELECTPAGECONTROLLER_ONCLICKSTARTLEVEL_OFFSET UNITYSDK_OFFSET(0xD052170)
#define MOLEMOLE_UIFASHIONSTOREGAMESELECTPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xD051A70)
#define MOLEMOLE_UIFASHIONSTOREGAMESELECTPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xD052340)
#define MOLEMOLE_UIFASHIONSTOREGAMESELECTPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xD051B10)
#define MOLEMOLE_UIFASHIONSTOREGAMESELECTPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xD0523D0)
#define MOLEMOLE_UIFASHIONSTOREGAMESELECTPAGECONTROLLER__ONUIINIT_B__4_0_OFFSET UNITYSDK_OFFSET(0xD0523E0)
#define MOLEMOLE_UIFASHIONSTOREGAMESELECTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xD052450)
#define MOLEMOLE_UIFASHIONSTOREGAMESELECTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xD0524C0)
#define MOLEMOLE_UIFASHIONSTOREGAMESELECTPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xD0524D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFashionStoreGameSelectPageController_TypeDefinitionIndex = 69606;

	class UIFashionStoreGameSelectPageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_15B5E2EA11C53410* _view; // 0x2F8
		::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_480*>* m_levelConfigs; // 0x300
		::Class_2_208CC9941471731A_480* m_curLevel; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMESELECTPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMESELECTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMESELECTPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMESELECTPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateLevelItem(::Enum_3_B90C1A15EA6E3C2B arg1, ::System::Func_1<::MoleMole::UIControlReference*>* arg2)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::Enum_3_B90C1A15EA6E3C2B, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMESELECTPAGECONTROLLER_CREATELEVELITEM_OFFSET))(this, arg1, arg2);
		}

		::System::Int32 get_CurSelectLevelID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMESELECTPAGECONTROLLER_GET_CURSELECTLEVELID_OFFSET))(this);
		}

		::System::Void OnClickStartLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMESELECTPAGECONTROLLER_ONCLICKSTARTLEVEL_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMESELECTPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__4_0(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMESELECTPAGECONTROLLER__ONUIINIT_B__4_0_OFFSET))(this, index);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMESELECTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMESELECTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMESELECTPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
