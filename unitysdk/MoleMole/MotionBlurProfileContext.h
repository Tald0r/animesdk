#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GraphicSettingProfileContextBase.h"

#define MOLEMOLE_MOTIONBLURPROFILECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xA7F0D10)

namespace MoleMole
{
	inline static constexpr unsigned int MotionBlurProfileContext_TypeDefinitionIndex = 64190;

	class MotionBlurProfileContext : public ::MoleMole::GraphicSettingProfileContextBase
	{
	public:
		::System::Boolean enable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOTIONBLURPROFILECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
