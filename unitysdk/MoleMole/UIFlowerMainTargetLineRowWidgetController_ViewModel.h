#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F57C3EEEB03201AF.h"

#define MOLEMOLE_UIFLOWERMAINTARGETLINEROWWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xA96E5D0)
#define MOLEMOLE_UIFLOWERMAINTARGETLINEROWWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xA96E630)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerMainTargetLineRowWidgetController_ViewModel_TypeDefinitionIndex = 62052;

	class UIFlowerMainTargetLineRowWidgetController_ViewModel : public ::Class_1_F57C3EEEB03201AF
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTARGETLINEROWWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTARGETLINEROWWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}
