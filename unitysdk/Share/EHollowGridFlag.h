#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EHollowGridFlag_TypeDefinitionIndex = 11981;

	enum class EHollowGridFlag : ::System::UInt32
	{
		Target = 0x10000,
		VisibleByTriggerEvent = 0x100,
		Brighten = 0x4000,
		ShowEventType = 0x8,
		Travelled = 0x4,
		Guide = 0x8000,
		SyncToClient = 0x200,
		Unlocked = 0x2000,
		Door = 0x400,
		Empty = 0x80000,
		CanTriggerMultiTimes = 0x800,
		CanTriggerEvent = 0x20,
		Visible = 0x40,
		ShowEventID = 0x10,
		BrightenOnlyVisible = 0x20000,
		TemporaryVisibleAtAround = 0x1000,
		VisibleAtGridAround = 0x80,
		CanMove = 0x2,
		Core = 0x1,
		Blocked = 0x100000,
		Unstable = 0x40000,
	};
}
