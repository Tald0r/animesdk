#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_69CBB7FF0BE6A673_19;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIMAINCITYINTERACTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x98BB860)
#define MOLEMOLE_UIMAINCITYINTERACTWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x98BB7B0)
#define MOLEMOLE_UIMAINCITYINTERACTWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x98BB530)
#define MOLEMOLE_UIMAINCITYINTERACTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x98BB900)
#define MOLEMOLE_UIMAINCITYINTERACTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x98BB2F0)
#define MOLEMOLE_UIMAINCITYINTERACTWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x98BB480)
#define MOLEMOLE_UIMAINCITYINTERACTWIDGETCONTROLLER_SHOWPICNPCTAG_OFFSET UNITYSDK_OFFSET(0x98BBA10)
#define MOLEMOLE_UIMAINCITYINTERACTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x98BBA80)
#define MOLEMOLE_UIMAINCITYINTERACTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x98BBB20)
#define MOLEMOLE_UIMAINCITYINTERACTWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x98BBB90)
#define MOLEMOLE_UIMAINCITYINTERACTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x98BBBF0)
#define MOLEMOLE_UIMAINCITYINTERACTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x98BBC60)
#define MOLEMOLE_UIMAINCITYINTERACTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x98BBCE0)
#define MOLEMOLE_UIMAINCITYINTERACTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x98BBD40)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityInteractWidgetController_TypeDefinitionIndex = 64138;

	class UIMainCityInteractWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_69CBB7FF0BE6A673_19* _view; // 0x2A0
		::System::Int32 _picIndex; // 0x2A8
		::System::Int32 _npcTag; // 0x2AC
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _children; // 0x2B0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYINTERACTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYINTERACTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYINTERACTWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYINTERACTWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYINTERACTWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYINTERACTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYINTERACTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Int32 ShowPicNpcTag()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYINTERACTWIDGETCONTROLLER_SHOWPICNPCTAG_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYINTERACTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYINTERACTWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYINTERACTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYINTERACTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYINTERACTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYINTERACTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
