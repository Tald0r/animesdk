#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_ITEMCOLLECTLAYERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xCDADC40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_ItemCollectLayerConfig_TypeDefinitionIndex = 59121;

	class ConfigHollowChessboard_ItemCollectLayerConfig : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 BurstDurationRange; // 0x10
		::System::Single AdvanceDisappearAmoutRatio; // 0x18
		::UnityEngine::Vector2 AdvanceDisappearTimeRatioRange; // 0x1C
		::System::Single CollectDuration; // 0x24
		::System::Single BurstFrameCount; // 0x28
		::System::Single Weight; // 0x2C
		::System::Single CollectFrameCount; // 0x30
		::UnityEngine::Vector2 BurstDistanceRatio; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_ITEMCOLLECTLAYERCONFIG__CTOR_OFFSET))(this);
		}
	};
}
