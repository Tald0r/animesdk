#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIGHOLLOWCHESSBOARDCAMERADRAGSPEEDITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x10AABA00)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigHollowChessboardCameraDragSpeedItem_TypeDefinitionIndex = 74999;

	class ConfigHollowChessboardCameraDragSpeedItem : public ::System::Object
	{
	public:
		::System::Single MouseDragSpeedZPosEffectRatio; // 0x10
		::System::Single MouseDragSpeedRatio; // 0x14
		::System::Single TouchDragSpeedRatio; // 0x18
		::System::Single GamepadDragSpeedZPosEffectRatio; // 0x1C
		::System::Single TouchDragSpeedZPosEffectRatio; // 0x20
		::System::Single GamepadDragSpeedRatio; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGHOLLOWCHESSBOARDCAMERADRAGSPEEDITEM__CTOR_OFFSET))(this);
		}
	};
}
