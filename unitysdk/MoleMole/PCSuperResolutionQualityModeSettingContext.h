#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SystemSettingContextBase.h"
#include "unitysdk/UnityEngine/Rendering/DLSSQualityMode.h"

#define MOLEMOLE_PCSUPERRESOLUTIONQUALITYMODESETTINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x67C89E0)

namespace MoleMole
{
	inline static constexpr unsigned int PCSuperResolutionQualityModeSettingContext_TypeDefinitionIndex = 56107;

	class PCSuperResolutionQualityModeSettingContext : public ::MoleMole::SystemSettingContextBase
	{
	public:
		::UnityEngine::Rendering::DLSSQualityMode QualityMode; // 0x28
		::System::Single RenderTargetFactor; // 0x2C
		::System::Single RenderScaleValue; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PCSUPERRESOLUTIONQUALITYMODESETTINGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
