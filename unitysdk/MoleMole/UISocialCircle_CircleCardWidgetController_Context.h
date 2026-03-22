#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISOCIALCIRCLE_CIRCLECARDWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xAE11C20)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircle_CircleCardWidgetController_Context_TypeDefinitionIndex = 67044;

	class UISocialCircle_CircleCardWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLE_CIRCLECARDWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
