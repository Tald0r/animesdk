#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_864;

#define MOLEMOLE_UISUMMEREVENTREWARDROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0xABA5C60)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerEventRewardRowWidgetController_Data_TypeDefinitionIndex = 44419;

	class UISummerEventRewardRowWidgetController_Data : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_864* Template; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTREWARDROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
