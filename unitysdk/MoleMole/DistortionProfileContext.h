#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GraphicSettingProfileContextBase.h"

#define MOLEMOLE_DISTORTIONPROFILECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1750AB50)

namespace MoleMole
{
	inline static constexpr unsigned int DistortionProfileContext_TypeDefinitionIndex = 73671;

	class DistortionProfileContext : public ::MoleMole::GraphicSettingProfileContextBase
	{
	public:
		::System::Boolean enable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DISTORTIONPROFILECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
