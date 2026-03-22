#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_EC28E1D3A39EE7DE_24;
class Class_3_C994930D9D24103B;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { class Object; }

#define MOLEMOLE_UIINTERKNOTHEADROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x8C8C8D0)
#define MOLEMOLE_UIINTERKNOTHEADROWWIDGETCONTROLLER_GET__VIEW_OFFSET UNITYSDK_OFFSET(0x8C8C940)
#define MOLEMOLE_UIINTERKNOTHEADROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x8C8CBC0)
#define MOLEMOLE_UIINTERKNOTHEADROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x8C8CEF0)
#define MOLEMOLE_UIINTERKNOTHEADROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x8C8D1B0)
#define MOLEMOLE_UIINTERKNOTHEADROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x8C8CA10)
#define MOLEMOLE_UIINTERKNOTHEADROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x8C8CAB0)
#define MOLEMOLE_UIINTERKNOTHEADROWWIDGETCONTROLLER_REFRESHHEADPORTRAIT_OFFSET UNITYSDK_OFFSET(0x8C8CC80)
#define MOLEMOLE_UIINTERKNOTHEADROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x8C8E270)
#define MOLEMOLE_UIINTERKNOTHEADROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x8C8E630)
#define MOLEMOLE_UIINTERKNOTHEADROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x8C8E640)
#define MOLEMOLE_UIINTERKNOTHEADROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x8C8E6B0)
#define MOLEMOLE_UIINTERKNOTHEADROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x8C8E720)
#define MOLEMOLE_UIINTERKNOTHEADROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x8C8E7A0)
#define MOLEMOLE_UIINTERKNOTHEADROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x8C8E800)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotHeadRowWidgetController_TypeDefinitionIndex = 61020;

	class UIInterKnotHeadRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Boolean _isValid; // 0x2D0
		::System::Int32 portrait; // 0x2D4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTHEADROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_EC28E1D3A39EE7DE_24* get__viewModel()
		{
			return ((::Class_2_EC28E1D3A39EE7DE_24*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTHEADROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::Class_3_C994930D9D24103B* get__view()
		{
			return ((::Class_3_C994930D9D24103B*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTHEADROWWIDGETCONTROLLER_GET__VIEW_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTHEADROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTHEADROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTHEADROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void RefreshHeadPortrait(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTHEADROWWIDGETCONTROLLER_REFRESHHEADPORTRAIT_OFFSET))(this, args);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTHEADROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTHEADROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshView(::MonoUITableScrollV2* scroll, ::System::Int32 portrait, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTHEADROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, scroll, portrait, index);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTHEADROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTHEADROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTHEADROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTHEADROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTHEADROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
