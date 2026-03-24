#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SystemSettingContextBase.h"
#include "unitysdk/UnityEngine/Rendering/DLSSQualityMode.h"

namespace System { class String; }

#define MOLEMOLE_PCSUPERRESOLUTIONQUALITYMODESETTINGCONTEXT_GETOVERRIDEOPTIONTEXTKEY_OFFSET UNITYSDK_OFFSET(0xA47BE90)
#define MOLEMOLE_PCSUPERRESOLUTIONQUALITYMODESETTINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xA47C120)
#define MOLEMOLE_PCSUPERRESOLUTIONQUALITYMODESETTINGCONTEXT___BASE_GETOVERRIDEOPTIONTEXTKEY_OFFSET UNITYSDK_OFFSET(0xA47C150)

namespace MoleMole
{
	inline static constexpr unsigned int PCSuperResolutionQualityModeSettingContext_TypeDefinitionIndex = 59189;

	class PCSuperResolutionQualityModeSettingContext : public ::MoleMole::SystemSettingContextBase
	{
	public:
		::UnityEngine::Rendering::DLSSQualityMode QualityMode; // 0x28
		::System::Single RenderScaleValue; // 0x2C
		::System::Single RenderTargetFactor; // 0x30
		::System::Single RenderTargetFactorFSR; // 0x34
		::System::Single RenderScaleValueFSR; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PCSUPERRESOLUTIONQUALITYMODESETTINGCONTEXT__CTOR_OFFSET))(this);
		}

		::System::String* GetOverrideOptionTextKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PCSUPERRESOLUTIONQUALITYMODESETTINGCONTEXT_GETOVERRIDEOPTIONTEXTKEY_OFFSET))(this);
		}

		::System::String* __base_GetOverrideOptionTextKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PCSUPERRESOLUTIONQUALITYMODESETTINGCONTEXT___BASE_GETOVERRIDEOPTIONTEXTKEY_OFFSET))(this);
		}
	};
}
