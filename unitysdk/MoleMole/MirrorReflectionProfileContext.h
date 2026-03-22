#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GraphicSettingProfileContextBase.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MirrorReflectionQuality.h"

#define MOLEMOLE_MIRRORREFLECTIONPROFILECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x82E41F0)

namespace MoleMole
{
	inline static constexpr unsigned int MirrorReflectionProfileContext_TypeDefinitionIndex = 52458;

	class MirrorReflectionProfileContext : public ::MoleMole::GraphicSettingProfileContextBase
	{
	public:
		::System::Single SSRMinSmoothness; // 0x18
		::System::Int32 SSRDownScale; // 0x1C
		::UnityEngine::NAPRenderPipeline0::MirrorReflectionQuality MirrorReflectionSetting; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MIRRORREFLECTIONPROFILECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
