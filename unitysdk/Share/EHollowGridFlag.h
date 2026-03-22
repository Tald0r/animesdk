#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EHollowGridFlag_TypeDefinitionIndex = 13086;

	enum class EHollowGridFlag : ::System::UInt32
	{
		Target = 0x10000,
		SyncToClient = 0x200,
		Blocked = 0x100000,
		CanTriggerMultiTimes = 0x800,
		Travelled = 0x4,
		Unlocked = 0x2000,
		ShowEventType = 0x8,
		CanMove = 0x2,
		VisibleByTriggerEvent = 0x100,
		TemporaryVisibleAtAround = 0x1000,
		Core = 0x1,
		Visible = 0x40,
		ShowEventID = 0x10,
		CanTriggerEvent = 0x20,
		Unstable = 0x40000,
		VisibleAtGridAround = 0x80,
		Guide = 0x8000,
		Brighten = 0x4000,
		Door = 0x400,
		Empty = 0x80000,
		BrightenOnlyVisible = 0x20000,
	};
}
