#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_7CCA2D9104451005;
namespace MoleMole { class UIControlReference; }
namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIVOIDFRONTDETAILSTORYROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xA6D2760)
#define MOLEMOLE_UIVOIDFRONTDETAILSTORYROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xA6D27D0)
#define MOLEMOLE_UIVOIDFRONTDETAILSTORYROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA6D28D0)
#define MOLEMOLE_UIVOIDFRONTDETAILSTORYROWWIDGETCONTROLLER_SETCHOICE_OFFSET UNITYSDK_OFFSET(0xA6D29D0)
#define MOLEMOLE_UIVOIDFRONTDETAILSTORYROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA6D2E20)
#define MOLEMOLE_UIVOIDFRONTDETAILSTORYROWWIDGETCONTROLLER__ONUIINIT_B__3_0_OFFSET UNITYSDK_OFFSET(0xA6D2E50)
#define MOLEMOLE_UIVOIDFRONTDETAILSTORYROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xA6D2EC0)
#define MOLEMOLE_UIVOIDFRONTDETAILSTORYROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA6D2F30)

namespace MoleMole
{
	inline static constexpr unsigned int UIVoidFrontDetailStoryRowWidgetController_TypeDefinitionIndex = 55367;

	class UIVoidFrontDetailStoryRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTDETAILSTORYROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_7CCA2D9104451005* get__viewModel()
		{
			return ((::Class_2_7CCA2D9104451005*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTDETAILSTORYROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTDETAILSTORYROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTDETAILSTORYROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void SetChoice(::System::Int32 nodeId, ::System::Int32 sourceDes, ::System::Int32 idx, ::System::Action_1<::System::Int32>* onClick)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTDETAILSTORYROWWIDGETCONTROLLER_SETCHOICE_OFFSET))(this, nodeId, sourceDes, idx, onClick);
		}

		::System::Void _OnUIInit_b__3_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTDETAILSTORYROWWIDGETCONTROLLER__ONUIINIT_B__3_0_OFFSET))(this, args);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTDETAILSTORYROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTDETAILSTORYROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
