#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM___C__DISPLAYCLASS9_1__CTOR_OFFSET UNITYSDK_OFFSET(0x991F9D0)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM___C__DISPLAYCLASS9_1__REFRESHLEVELPERFORMCAMERA_B__3_OFFSET UNITYSDK_OFFSET(0x991F9E0)

namespace MoleMole
{
	inline static constexpr unsigned int LevelPerformCameraSubSystem___c__DisplayClass9_1_TypeDefinitionIndex = 72985;

	class LevelPerformCameraSubSystem___c__DisplayClass9_1 : public ::System::Object
	{
	public:
		::System::Single finalYaw; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM___C__DISPLAYCLASS9_1__CTOR_OFFSET))(this);
		}

		::System::Single _RefreshLevelPerformCamera_b__3()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM___C__DISPLAYCLASS9_1__REFRESHLEVELPERFORMCAMERA_B__3_OFFSET))(this);
		}
	};
}
