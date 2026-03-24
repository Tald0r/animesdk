#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_C24561AE5AC74100.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_60638234271CCDB8_124;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIJourneyWidgetContext; }
namespace System { class Action; }

#define MOLEMOLE_UIINTERKNOWCOURSEPOINT02WIDGETCONTROLLER_GETVIEW_OFFSET UNITYSDK_OFFSET(0x8EA9DF0)
#define MOLEMOLE_UIINTERKNOWCOURSEPOINT02WIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x8EA9C50)
#define MOLEMOLE_UIINTERKNOWCOURSEPOINT02WIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x8EA9CF0)
#define MOLEMOLE_UIINTERKNOWCOURSEPOINT02WIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x8EA9A80)
#define MOLEMOLE_UIINTERKNOWCOURSEPOINT02WIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x8EA9B20)
#define MOLEMOLE_UIINTERKNOWCOURSEPOINT02WIDGETCONTROLLER_PLAYNODEUIANIM_OFFSET UNITYSDK_OFFSET(0x8EA9E60)
#define MOLEMOLE_UIINTERKNOWCOURSEPOINT02WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x8EAA0F0)
#define MOLEMOLE_UIINTERKNOWCOURSEPOINT02WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x8EAA120)
#define MOLEMOLE_UIINTERKNOWCOURSEPOINT02WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x8EAA190)
#define MOLEMOLE_UIINTERKNOWCOURSEPOINT02WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x8EAA210)
#define MOLEMOLE_UIINTERKNOWCOURSEPOINT02WIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x8EAA270)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnowCoursePoint02WidgetController_TypeDefinitionIndex = 81177;

	class UIInterKnowCoursePoint02WidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_60638234271CCDB8_124* _view; // 0x2A0
		::MoleMole::UIJourneyWidgetContext* context; // 0x2A8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT02WIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT02WIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT02WIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT02WIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT02WIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::Class_2_60638234271CCDB8_124* GetView()
		{
			return ((::Class_2_60638234271CCDB8_124*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT02WIDGETCONTROLLER_GETVIEW_OFFSET))(this);
		}

		::System::Void PlayNodeUIAnim(::Enum_3_C24561AE5AC74100 animEnum, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_C24561AE5AC74100, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT02WIDGETCONTROLLER_PLAYNODEUIANIM_OFFSET))(this, animEnum, callback);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT02WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT02WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT02WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT02WIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
