#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_B5A08814C9C2DFB7;

#define MOLEMOLE_UIHOUSERHYTHMREWARDPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x7D1D2C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHouseRhythmRewardPageController_Context_TypeDefinitionIndex = 70566;

	class UIHouseRhythmRewardPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_B5A08814C9C2DFB7* HouseRhythmData; // 0x28
		::System::Boolean ShowGetBtn; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMREWARDPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
