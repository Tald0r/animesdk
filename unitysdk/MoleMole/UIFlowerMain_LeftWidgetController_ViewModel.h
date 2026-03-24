#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F57C3EEEB03201AF.h"

template <typename T> class Class_0_16E4307DCC419505_95;

#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_VIEWMODEL_GET_TESTINT_OFFSET UNITYSDK_OFFSET(0xB2AE170)
#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xB2AE190)
#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_VIEWMODEL_SET_TESTINT_OFFSET UNITYSDK_OFFSET(0xB2AE180)
#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xB2AE230)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerMain_LeftWidgetController_ViewModel_TypeDefinitionIndex = 66192;

	class UIFlowerMain_LeftWidgetController_ViewModel : public ::Class_1_F57C3EEEB03201AF
	{
	public:
		::Class_0_16E4307DCC419505_95<::System::Int32>* _TestInt_k__BackingField; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_95<::System::Int32>* get_TestInt()
		{
			return ((::Class_0_16E4307DCC419505_95<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_VIEWMODEL_GET_TESTINT_OFFSET))(this);
		}

		::System::Void set_TestInt(::Class_0_16E4307DCC419505_95<::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_95<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_VIEWMODEL_SET_TESTINT_OFFSET))(this, value);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}
