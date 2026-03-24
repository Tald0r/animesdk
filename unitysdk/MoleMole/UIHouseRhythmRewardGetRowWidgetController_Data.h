#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_80DF1DB3FC47B2D6;

#define MOLEMOLE_UIHOUSERHYTHMREWARDGETROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9EAB9C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHouseRhythmRewardGetRowWidgetController_Data_TypeDefinitionIndex = 51659;

	class UIHouseRhythmRewardGetRowWidgetController_Data : public ::System::Object
	{
	public:
		::Class_1_80DF1DB3FC47B2D6* AccessData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMREWARDGETROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
