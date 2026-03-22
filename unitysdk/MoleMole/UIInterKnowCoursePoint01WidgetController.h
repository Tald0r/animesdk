#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_C24561AE5AC74100.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_706A0FECFC680F49;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIJourneyWidgetContext; }
namespace System { class Action; }

#define MOLEMOLE_UIINTERKNOWCOURSEPOINT01WIDGETCONTROLLER_GETVIEW_OFFSET UNITYSDK_OFFSET(0x86EDD20)
#define MOLEMOLE_UIINTERKNOWCOURSEPOINT01WIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x86EDB80)
#define MOLEMOLE_UIINTERKNOWCOURSEPOINT01WIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x86EDC20)
#define MOLEMOLE_UIINTERKNOWCOURSEPOINT01WIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x86ED9B0)
#define MOLEMOLE_UIINTERKNOWCOURSEPOINT01WIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x86EDA50)
#define MOLEMOLE_UIINTERKNOWCOURSEPOINT01WIDGETCONTROLLER_PLAYNODEUIANIM_OFFSET UNITYSDK_OFFSET(0x86EDD90)
#define MOLEMOLE_UIINTERKNOWCOURSEPOINT01WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x86EDF30)
#define MOLEMOLE_UIINTERKNOWCOURSEPOINT01WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x86EDF60)
#define MOLEMOLE_UIINTERKNOWCOURSEPOINT01WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x86EDFD0)
#define MOLEMOLE_UIINTERKNOWCOURSEPOINT01WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x86EE050)
#define MOLEMOLE_UIINTERKNOWCOURSEPOINT01WIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x86EE0B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnowCoursePoint01WidgetController_TypeDefinitionIndex = 50946;

	class UIInterKnowCoursePoint01WidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_706A0FECFC680F49* _view; // 0x2A0
		::MoleMole::UIJourneyWidgetContext* context; // 0x2A8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT01WIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT01WIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT01WIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT01WIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT01WIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::Class_2_706A0FECFC680F49* GetView()
		{
			return ((::Class_2_706A0FECFC680F49*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT01WIDGETCONTROLLER_GETVIEW_OFFSET))(this);
		}

		::System::Void PlayNodeUIAnim(::Enum_3_C24561AE5AC74100 animEnum, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_C24561AE5AC74100, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT01WIDGETCONTROLLER_PLAYNODEUIANIM_OFFSET))(this, animEnum, callback);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT01WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT01WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT01WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT01WIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
