#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F57C3EEEB03201AF.h"
#include "unitysdk/MoleMole/UISuibianTempleResolvePageController_ResolveType.h"
#include "unitysdk/MoleMole/UISuibianTempleResolvePageController_UIState_MaterialCost.h"

class Class_1_1685EC66FBD28897;
namespace System { class String; }
template <typename T> class Class_0_16E4307DCC419505_103;
template <typename T> class Class_0_16E4307DCC41950C_11;
template <typename T> class Class_0_16E4307DCC41950C_12;

#define MOLEMOLE_UISUIBIANTEMPLERESOLVEPAGECONTROLLER_UISTATE_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xC3CB1C0)
#define MOLEMOLE_UISUIBIANTEMPLERESOLVEPAGECONTROLLER_UISTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xC3CB660)
#define MOLEMOLE_UISUIBIANTEMPLERESOLVEPAGECONTROLLER_UISTATE__ONCREATEPROPERTY_B__15_0_OFFSET UNITYSDK_OFFSET(0xC3CB6E0)
#define MOLEMOLE_UISUIBIANTEMPLERESOLVEPAGECONTROLLER_UISTATE__ONCREATEPROPERTY_B__15_1_OFFSET UNITYSDK_OFFSET(0xC3CB950)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleResolvePageController_UIState_TypeDefinitionIndex = 44696;

	class UISuibianTempleResolvePageController_UIState : public ::Class_1_F57C3EEEB03201AF
	{
	public:
		::Class_0_16E4307DCC419505_103<::System::Int32>* ItemID; // 0x60
		::Class_0_16E4307DCC41950C_11<::MoleMole::UISuibianTempleResolvePageController_UIState_MaterialCost>* Materials; // 0x68
		::Class_0_16E4307DCC41950C_11<::System::Int32>* ScrollItems; // 0x70
		::Class_0_16E4307DCC41950C_12<::System::String*>* NameText; // 0x78
		::Class_0_16E4307DCC41950C_11<::Class_1_1685EC66FBD28897*>* ViewItems; // 0x80
		::Class_0_16E4307DCC419505_103<::System::Int32>* MinSlider; // 0x88
		::Class_0_16E4307DCC419505_103<::System::Int32>* CurrentSlider; // 0x90
		::Class_0_16E4307DCC41950C_11<::System::Int32>* SourceItems; // 0x98
		::Class_0_16E4307DCC419505_103<::System::Int32>* RecycleID; // 0xA0
		::Class_0_16E4307DCC419505_103<::System::Int32>* MaxSlider; // 0xA8
		::Class_0_16E4307DCC419505_103<::MoleMole::UISuibianTempleResolvePageController_ResolveType>* Type; // 0xB0
		::Class_0_16E4307DCC419505_103<::System::Int32>* MaxRecyleCount; // 0xB8
		::Class_0_16E4307DCC419505_103<::System::Int32>* ProductOrMaterialType; // 0xC0
		::Class_0_16E4307DCC41950C_12<::System::String*>* DescText; // 0xC8

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
