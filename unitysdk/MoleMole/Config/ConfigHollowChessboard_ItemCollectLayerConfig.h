#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_ITEMCOLLECTLAYERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xB91A280)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_ItemCollectLayerConfig_TypeDefinitionIndex = 79831;

	class ConfigHollowChessboard_ItemCollectLayerConfig : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 BurstDistanceRatio; // 0x10
		::System::Single AdvanceDisappearAmoutRatio; // 0x18
		::System::Single BurstFrameCount; // 0x1C
		::System::Single CollectDuration; // 0x20
		::UnityEngine::Vector2 BurstDurationRange; // 0x24
		::System::Single Weight; // 0x2C
		::UnityEngine::Vector2 AdvanceDisappearTimeRatioRange; // 0x30
		::System::Single CollectFrameCount; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_ITEMCOLLECTLAYERCONFIG__CTOR_OFFSET))(this);
		}
	};
}
