#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F57C3EEEB03201AF.h"
#include "unitysdk/MoleMole/UISuibianTempleResolvePageController_ResolveType.h"
#include "unitysdk/MoleMole/UISuibianTempleResolvePageController_UIState_MaterialCost.h"

class Class_1_1685EC66FBD28897;
namespace System { class String; }
template <typename T> class Class_0_16E4307DCC419505_118;
template <typename T> class Class_0_16E4307DCC41950C_12;
template <typename T> class Class_0_16E4307DCC41950C_13;

#define MOLEMOLE_UISUIBIANTEMPLERESOLVEPAGECONTROLLER_UISTATE_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xA463200)
#define MOLEMOLE_UISUIBIANTEMPLERESOLVEPAGECONTROLLER_UISTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xA4636A0)
#define MOLEMOLE_UISUIBIANTEMPLERESOLVEPAGECONTROLLER_UISTATE__ONCREATEPROPERTY_B__15_0_OFFSET UNITYSDK_OFFSET(0xA463720)
#define MOLEMOLE_UISUIBIANTEMPLERESOLVEPAGECONTROLLER_UISTATE__ONCREATEPROPERTY_B__15_1_OFFSET UNITYSDK_OFFSET(0xA463990)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleResolvePageController_UIState_TypeDefinitionIndex = 60582;

	class UISuibianTempleResolvePageController_UIState : public ::Class_1_F57C3EEEB03201AF
	{
	public:
		::Class_0_16E4307DCC41950C_13<::System::Int32>* ItemID; // 0x60
		::Class_0_16E4307DCC41950C_13<::System::Int32>* MaxSlider; // 0x68
		::Class_0_16E4307DCC419505_118<::MoleMole::UISuibianTempleResolvePageController_UIState_MaterialCost>* Materials; // 0x70
		::Class_0_16E4307DCC41950C_12<::System::String*>* NameText; // 0x78
		::Class_0_16E4307DCC41950C_13<::System::Int32>* MinSlider; // 0x80
		::Class_0_16E4307DCC41950C_13<::MoleMole::UISuibianTempleResolvePageController_ResolveType>* Type; // 0x88
		::Class_0_16E4307DCC41950C_13<::System::Int32>* RecycleID; // 0x90
		::Class_0_16E4307DCC419505_118<::System::Int32>* SourceItems; // 0x98
		::Class_0_16E4307DCC41950C_12<::System::String*>* DescText; // 0xA0
		::Class_0_16E4307DCC41950C_13<::System::Int32>* ProductOrMaterialType; // 0xA8
		::Class_0_16E4307DCC41950C_13<::System::Int32>* MaxRecyleCount; // 0xB0
		::Class_0_16E4307DCC419505_118<::System::Int32>* ScrollItems; // 0xB8
		::Class_0_16E4307DCC41950C_13<::System::Int32>* CurrentSlider; // 0xC0
		::Class_0_16E4307DCC419505_118<::Class_1_1685EC66FBD28897*>* ViewItems; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLERESOLVEPAGECONTROLLER_UISTATE__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLERESOLVEPAGECONTROLLER_UISTATE_ONCREATEPROPERTY_OFFSET))(this);
		}

		::System::String* _OnCreateProperty_b__15_0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLERESOLVEPAGECONTROLLER_UISTATE__ONCREATEPROPERTY_B__15_0_OFFSET))(this);
		}

		::System::String* _OnCreateProperty_b__15_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLERESOLVEPAGECONTROLLER_UISTATE__ONCREATEPROPERTY_B__15_1_OFFSET))(this);
		}
	};
}
