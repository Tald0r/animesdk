#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F57C3EEEB03201AF.h"

template <typename T> class Class_0_16E4307DCC41950C_12;

#define MOLEMOLE_UISUIBIANTEMPLESELLWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xEE31360)
#define MOLEMOLE_UISUIBIANTEMPLESELLWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xEE317F0)
#define MOLEMOLE_UISUIBIANTEMPLESELLWIDGETCONTROLLER_VIEWMODEL__ONCREATEPROPERTY_B__3_1_OFFSET UNITYSDK_OFFSET(0xEE31870)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleSellWidgetController_ViewModel_TypeDefinitionIndex = 40474;

	class UISuibianTempleSellWidgetController_ViewModel : public ::Class_1_F57C3EEEB03201AF
	{
	public:
		::Class_0_16E4307DCC41950C_12<::System::Int32>* buddyShowEnergy; // 0x60
		::Class_0_16E4307DCC41950C_12<::System::Int32>* smallChangeGainLimit; // 0x68
		::Class_0_16E4307DCC41950C_12<::System::UInt32>* buddyUid; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLESELLWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLESELLWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET))(this);
		}

		::System::Int32 _OnCreateProperty_b__3_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLESELLWIDGETCONTROLLER_VIEWMODEL__ONCREATEPROPERTY_B__3_1_OFFSET))(this);
		}
	};
}
