#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_626;

#define MOLEMOLE_UISUMMEREVENTREWARDTABWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA74A010)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerEventRewardTabWidgetController_Data_TypeDefinitionIndex = 46508;

	class UISummerEventRewardTabWidgetController_Data : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_626* Template; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTREWARDTABWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
