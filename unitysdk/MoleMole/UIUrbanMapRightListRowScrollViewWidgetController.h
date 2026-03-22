#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_285A7FDA478697F8;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIURBANMAPRIGHTLISTROWSCROLLVIEWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x71E04A0)
#define MOLEMOLE_UIURBANMAPRIGHTLISTROWSCROLLVIEWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x71E0510)
#define MOLEMOLE_UIURBANMAPRIGHTLISTROWSCROLLVIEWWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x71E0610)
#define MOLEMOLE_UIURBANMAPRIGHTLISTROWSCROLLVIEWWIDGETCONTROLLER_RESETPOS_OFFSET UNITYSDK_OFFSET(0x71E07C0)
#define MOLEMOLE_UIURBANMAPRIGHTLISTROWSCROLLVIEWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x71E0880)
#define MOLEMOLE_UIURBANMAPRIGHTLISTROWSCROLLVIEWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x71E08B0)
#define MOLEMOLE_UIURBANMAPRIGHTLISTROWSCROLLVIEWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x71E0920)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapRightListRowScrollViewWidgetController_TypeDefinitionIndex = 74435;

	class UIUrbanMapRightListRowScrollViewWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTLISTROWSCROLLVIEWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_285A7FDA478697F8* get__viewModel()
		{
			return ((::Class_2_285A7FDA478697F8*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTLISTROWSCROLLVIEWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTLISTROWSCROLLVIEWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTLISTROWSCROLLVIEWWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void ResetPos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTLISTROWSCROLLVIEWWIDGETCONTROLLER_RESETPOS_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTLISTROWSCROLLVIEWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTLISTROWSCROLLVIEWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
