#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GraphicSettingProfileContextBase.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/SSAOQuality.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ShadowQuality.h"

#define MOLEMOLE_SHADOWQUALITYPROFILECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xB3C2C50)

namespace MoleMole
{
	inline static constexpr unsigned int ShadowQualityProfileContext_TypeDefinitionIndex = 49605;

	class ShadowQualityProfileContext : public ::MoleMole::GraphicSettingProfileContextBase
	{
	public:
		::UnityEngine::NAPRenderPipeline0::ShadowQuality ShadowQualitySetting; // 0x18
		::UnityEngine::NAPRenderPipeline0::SSAOQuality SSAOMaxQuality; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHADOWQUALITYPROFILECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
