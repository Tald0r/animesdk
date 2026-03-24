#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_539;

#define MOLEMOLE_UISOCIALCIRCLETAGROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x96FD520)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleTagRowWidgetController_Data_TypeDefinitionIndex = 64238;

	class UISocialCircleTagRowWidgetController_Data : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_539* Template; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLETAGROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
