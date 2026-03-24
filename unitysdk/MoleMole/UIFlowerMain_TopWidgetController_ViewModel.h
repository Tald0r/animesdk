#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F57C3EEEB03201AF.h"

template <typename T> class Class_0_16E4307DCC419505_95;

#define MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER_VIEWMODEL_GET_SHOWTIPS_OFFSET UNITYSDK_OFFSET(0xA92EF40)
#define MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xA92EF60)
#define MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER_VIEWMODEL_SET_SHOWTIPS_OFFSET UNITYSDK_OFFSET(0xA92EF50)
#define MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xA92EB80)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerMain_TopWidgetController_ViewModel_TypeDefinitionIndex = 37816;

	class UIFlowerMain_TopWidgetController_ViewModel : public ::Class_1_F57C3EEEB03201AF
	{
	public:
		::Class_0_16E4307DCC419505_95<::System::Boolean>* _ShowTips_k__BackingField; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_95<::System::Boolean>* get_ShowTips()
		{
			return ((::Class_0_16E4307DCC419505_95<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER_VIEWMODEL_GET_SHOWTIPS_OFFSET))(this);
		}

		::System::Void set_ShowTips(::Class_0_16E4307DCC419505_95<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_95<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER_VIEWMODEL_SET_SHOWTIPS_OFFSET))(this, value);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}
