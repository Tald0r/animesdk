#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/MontageTickData.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int MontageTickLayerData_TypeDefinitionIndex = 42383;

	struct alignas(4) MontageTickLayerData
	{
		::System::Single time; // 0x10
		::System::Single length; // 0x14
		::System::Boolean isLoop; // 0x18
		::NPCCrowd::Animation::MontageTickData dataLayer1; // 0x1C
		::NPCCrowd::Animation::MontageTickData dataLayer2; // 0x2C
		::NPCCrowd::Animation::MontageTickData dataLayer3; // 0x3C
		::NPCCrowd::Animation::MontageTickData dataLayer4; // 0x4C
		::System::Boolean needBlend; // 0x5C
		::System::Single blendTime; // 0x60
	};
}
