#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_53C4A418F34F74D8.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_035093BE115F9154;
namespace MoleMole { class UIControlReference; }
namespace System { class Action; }

#define MOLEMOLE_UICOOPCLUEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xA26D410)
#define MOLEMOLE_UICOOPCLUEPAGECONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xA26D420)
#define MOLEMOLE_UICOOPCLUEPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xA26D490)
#define MOLEMOLE_UICOOPCLUEPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xA26D550)
#define MOLEMOLE_UICOOPCLUEPAGECONTROLLER_REGISTEREVENT_OFFSET UNITYSDK_OFFSET(0xA26D620)
#define MOLEMOLE_UICOOPCLUEPAGECONTROLLER_UNREGISTEREVENT_OFFSET UNITYSDK_OFFSET(0xA26D710)
#define MOLEMOLE_UICOOPCLUEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA26D780)
#define MOLEMOLE_UICOOPCLUEPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xA26D790)
#define MOLEMOLE_UICOOPCLUEPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xA26D800)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopCluePageController_TypeDefinitionIndex = 42057;

	class UICoopCluePageController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCLUEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCLUEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_035093BE115F9154* get__viewModel()
		{
			return ((::Class_2_035093BE115F9154*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCLUEPAGECONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCLUEPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCLUEPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void RegisterEvent(::Enum_3_53C4A418F34F74D8 eventType, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_53C4A418F34F74D8, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCLUEPAGECONTROLLER_REGISTEREVENT_OFFSET))(this, eventType, callback);
		}

		::System::Void UnregisterEvent(::Enum_3_53C4A418F34F74D8 eventType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_53C4A418F34F74D8))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCLUEPAGECONTROLLER_UNREGISTEREVENT_OFFSET))(this, eventType);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCLUEPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCLUEPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}
	};
}
