#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F57C3EEEB03201AF.h"
#include "unitysdk/Enum_3_EDC2AF1268851C10.h"
#include "unitysdk/MoleMole/UISuibianDevelopRightWidgetController_DevelopRightState.h"

class Class_2_49EA731F6D649ADF;
template <typename T> class Class_0_16E4307DCC41950C_12;

#define MOLEMOLE_UISUIBIANDEVELOPRIGHTWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xD3C3EA0)
#define MOLEMOLE_UISUIBIANDEVELOPRIGHTWIDGETCONTROLLER_VIEWMODEL_SETPRODUCTID_OFFSET UNITYSDK_OFFSET(0xD3C4000)
#define MOLEMOLE_UISUIBIANDEVELOPRIGHTWIDGETCONTROLLER_VIEWMODEL_SETRIGHTTABTYPE_OFFSET UNITYSDK_OFFSET(0xD3C3F80)
#define MOLEMOLE_UISUIBIANDEVELOPRIGHTWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xD3C4080)
#define MOLEMOLE_UISUIBIANDEVELOPRIGHTWIDGETCONTROLLER_VIEWMODEL__ONCREATEPROPERTY_B__2_0_OFFSET UNITYSDK_OFFSET(0xD3C4100)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianDevelopRightWidgetController_ViewModel_TypeDefinitionIndex = 72039;

	class UISuibianDevelopRightWidgetController_ViewModel : public ::Class_1_F57C3EEEB03201AF
	{
	public:
		::Class_2_49EA731F6D649ADF* productViewModel; // 0x60
		::Class_0_16E4307DCC41950C_12<::MoleMole::UISuibianDevelopRightWidgetController_DevelopRightState>* developRightState; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANDEVELOPRIGHTWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANDEVELOPRIGHTWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET))(this);
		}

		::System::Void SetRightTabType(::Enum_3_EDC2AF1268851C10 developTabType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_EDC2AF1268851C10))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANDEVELOPRIGHTWIDGETCONTROLLER_VIEWMODEL_SETRIGHTTABTYPE_OFFSET))(this, developTabType);
		}

		::System::Void SetProductID(::System::Int32 productID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANDEVELOPRIGHTWIDGETCONTROLLER_VIEWMODEL_SETPRODUCTID_OFFSET))(this, productID);
		}

		::MoleMole::UISuibianDevelopRightWidgetController_DevelopRightState _OnCreateProperty_b__2_0()
		{
			return ((::MoleMole::UISuibianDevelopRightWidgetController_DevelopRightState(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANDEVELOPRIGHTWIDGETCONTROLLER_VIEWMODEL__ONCREATEPROPERTY_B__2_0_OFFSET))(this);
		}
	};
}
