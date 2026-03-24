#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_658B5C8C93170A87;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UISwitchTeamBattleLevelRowWidgetController_Data; }
namespace System { class Object; }

#define MOLEMOLE_UISWITCHTEAMBATTLELEVELROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xABAAA20)
#define MOLEMOLE_UISWITCHTEAMBATTLELEVELROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xABAAA90)
#define MOLEMOLE_UISWITCHTEAMBATTLELEVELROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xABAAB50)
#define MOLEMOLE_UISWITCHTEAMBATTLELEVELROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xABAAC30)
#define MOLEMOLE_UISWITCHTEAMBATTLELEVELROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xABAAE50)
#define MOLEMOLE_UISWITCHTEAMBATTLELEVELROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xABAAE60)
#define MOLEMOLE_UISWITCHTEAMBATTLELEVELROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xABAAED0)

namespace MoleMole
{
	inline static constexpr unsigned int UISwitchTeamBattleLevelRowWidgetController_TypeDefinitionIndex = 69231;

	class UISwitchTeamBattleLevelRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISWITCHTEAMBATTLELEVELROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_658B5C8C93170A87* get__viewModel()
		{
			return ((::Class_2_658B5C8C93170A87*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISWITCHTEAMBATTLELEVELROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISWITCHTEAMBATTLELEVELROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISWITCHTEAMBATTLELEVELROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshView(::MoleMole::UISwitchTeamBattleLevelRowWidgetController_Data* data)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UISwitchTeamBattleLevelRowWidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISWITCHTEAMBATTLELEVELROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, data);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISWITCHTEAMBATTLELEVELROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISWITCHTEAMBATTLELEVELROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}
	};
}
