#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Photo { class ScopedFrontCameraControlAnimationBlendSpace1DConfig; }

#define MOLEMOLE_CONFIG_SCOPEDFRONTCAMERACONTROLEMOTION__CTOR_OFFSET UNITYSDK_OFFSET(0xD0A5C60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ScopedFrontCameraControlEmotion_TypeDefinitionIndex = 49803;

	class ScopedFrontCameraControlEmotion : public ::System::Object
	{
	public:
		::MoleMole::Photo::ScopedFrontCameraControlAnimationBlendSpace1DConfig* BlendSpace; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCOPEDFRONTCAMERACONTROLEMOTION__CTOR_OFFSET))(this);
		}
	};
}
