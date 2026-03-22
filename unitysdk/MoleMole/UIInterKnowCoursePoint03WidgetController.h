#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_C24561AE5AC74100.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_60638234271CCDB8_93;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIJourneyWidgetContext; }
namespace System { class Action; }

#define MOLEMOLE_UIINTERKNOWCOURSEPOINT03WIDGETCONTROLLER_GETVIEW_OFFSET UNITYSDK_OFFSET(0x8A637A0)
#define MOLEMOLE_UIINTERKNOWCOURSEPOINT03WIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x8A63600)
#define MOLEMOLE_UIINTERKNOWCOURSEPOINT03WIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x8A636A0)
#define MOLEMOLE_UIINTERKNOWCOURSEPOINT03WIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x8A63430)
#define MOLEMOLE_UIINTERKNOWCOURSEPOINT03WIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x8A634D0)
#define MOLEMOLE_UIINTERKNOWCOURSEPOINT03WIDGETCONTROLLER_PLAYNODEUIANIM_OFFSET UNITYSDK_OFFSET(0x8A63810)
#define MOLEMOLE_UIINTERKNOWCOURSEPOINT03WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x8A63AF0)
#define MOLEMOLE_UIINTERKNOWCOURSEPOINT03WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x8A63B20)
#define MOLEMOLE_UIINTERKNOWCOURSEPOINT03WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x8A63B90)
#define MOLEMOLE_UIINTERKNOWCOURSEPOINT03WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x8A63C10)
#define MOLEMOLE_UIINTERKNOWCOURSEPOINT03WIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x8A63C70)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnowCoursePoint03WidgetController_TypeDefinitionIndex = 75101;

	class UIInterKnowCoursePoint03WidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_60638234271CCDB8_93* _view; // 0x2A0
		::MoleMole::UIJourneyWidgetContext* context; // 0x2A8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT03WIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT03WIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT03WIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT03WIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT03WIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::Class_2_60638234271CCDB8_93* GetView()
		{
			return ((::Class_2_60638234271CCDB8_93*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT03WIDGETCONTROLLER_GETVIEW_OFFSET))(this);
		}

		::System::Void PlayNodeUIAnim(::Enum_3_C24561AE5AC74100 animEnum, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_C24561AE5AC74100, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT03WIDGETCONTROLLER_PLAYNODEUIANIM_OFFSET))(this, animEnum, callback);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT03WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT03WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT03WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPOINT03WIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
