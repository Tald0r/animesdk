#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_C762A9E56D8D4676;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }

#define MOLEMOLE_UIHOUSERHYTHMREWARDPAGECONTROLLER_CHECKLEVELUP_OFFSET UNITYSDK_OFFSET(0xC07E130)
#define MOLEMOLE_UIHOUSERHYTHMREWARDPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xC07DEF0)
#define MOLEMOLE_UIHOUSERHYTHMREWARDPAGECONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xC07DF00)
#define MOLEMOLE_UIHOUSERHYTHMREWARDPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xC07DF70)
#define MOLEMOLE_UIHOUSERHYTHMREWARDPAGECONTROLLER_ONITEMGET_OFFSET UNITYSDK_OFFSET(0xC07EF00)
#define MOLEMOLE_UIHOUSERHYTHMREWARDPAGECONTROLLER_ONLIVEHOUSEGETREWARD_OFFSET UNITYSDK_OFFSET(0xC07EE30)
#define MOLEMOLE_UIHOUSERHYTHMREWARDPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xC07EC60)
#define MOLEMOLE_UIHOUSERHYTHMREWARDPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xC07E030)
#define MOLEMOLE_UIHOUSERHYTHMREWARDPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC07F060)
#define MOLEMOLE_UIHOUSERHYTHMREWARDPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xC07F070)
#define MOLEMOLE_UIHOUSERHYTHMREWARDPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xC07F0E0)
#define MOLEMOLE_UIHOUSERHYTHMREWARDPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xC07F0F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHouseRhythmRewardPageController_TypeDefinitionIndex = 70565;

	class UIHouseRhythmRewardPageController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMREWARDPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMREWARDPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_C762A9E56D8D4676* get__viewModel()
		{
			return ((::Class_2_C762A9E56D8D4676*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMREWARDPAGECONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMREWARDPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMREWARDPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMREWARDPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void CheckLevelUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMREWARDPAGECONTROLLER_CHECKLEVELUP_OFFSET))(this);
		}

		::System::Void OnLiveHouseGetReward(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMREWARDPAGECONTROLLER_ONLIVEHOUSEGETREWARD_OFFSET))(this, args);
		}

		::System::Void OnItemGet(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMREWARDPAGECONTROLLER_ONITEMGET_OFFSET))(this, args);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMREWARDPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMREWARDPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMREWARDPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
