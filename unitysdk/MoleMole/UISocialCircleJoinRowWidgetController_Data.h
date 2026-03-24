#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_980CF00C390EFF81.h"
#include "unitysdk/System/Object.h"

class Class_2_2B9D1521AEB6DD72_2;

#define MOLEMOLE_UISOCIALCIRCLEJOINROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB6F6490)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleJoinRowWidgetController_Data_TypeDefinitionIndex = 80787;

	class UISocialCircleJoinRowWidgetController_Data : public ::System::Object
	{
	public:
		::Class_2_2B9D1521AEB6DD72_2* SocialCircleData; // 0x10
		::Enum_3_980CF00C390EFF81 JoinRowMode; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEJOINROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
