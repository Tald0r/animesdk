#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_4565DCF72DE284B9;
class Class_2_E7199313189EE055;
namespace MoleMole { class DebugPathGuidePoints; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace UnityEngine::UI::Extension { class PathGuide; }

#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTROLLER_GET_MAPMODEL_OFFSET UNITYSDK_OFFSET(0xAB12ED0)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xAB12AB0)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xAB12B20)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xAB12C20)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xAB12F90)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xAB12FC0)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xAB13030)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapTrackLineWidgetController_TypeDefinitionIndex = 74284;

	class UIUrbanMapTrackLineWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::MoleMole::DebugPathGuidePoints* DebugComp; // 0x2A0
		::UnityEngine::UI::Extension::PathGuide* PathGuide; // 0x2A8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_4565DCF72DE284B9* get__viewModel()
		{
			return ((::Class_2_4565DCF72DE284B9*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::Class_2_E7199313189EE055* get_MapModel()
		{
			return ((::Class_2_E7199313189EE055*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTROLLER_GET_MAPMODEL_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
