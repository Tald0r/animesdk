#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_5A2E25C59169DD77;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIURBANMAPLEFTTASTLISTROW02WIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD6E5160)
#define MOLEMOLE_UIURBANMAPLEFTTASTLISTROW02WIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD6E51D0)
#define MOLEMOLE_UIURBANMAPLEFTTASTLISTROW02WIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xD6E52D0)
#define MOLEMOLE_UIURBANMAPLEFTTASTLISTROW02WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xD6E5470)
#define MOLEMOLE_UIURBANMAPLEFTTASTLISTROW02WIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD6E54A0)
#define MOLEMOLE_UIURBANMAPLEFTTASTLISTROW02WIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xD6E5510)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapLeftTastListRow02WidgetController_TypeDefinitionIndex = 40871;

	class UIUrbanMapLeftTastListRow02WidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPLEFTTASTLISTROW02WIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_5A2E25C59169DD77* get__viewModel()
		{
			return ((::Class_2_5A2E25C59169DD77*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPLEFTTASTLISTROW02WIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPLEFTTASTLISTROW02WIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPLEFTTASTLISTROW02WIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPLEFTTASTLISTROW02WIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPLEFTTASTLISTROW02WIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
