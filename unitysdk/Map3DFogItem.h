#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"

#define MAP3DFOGITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x89D7680)

inline static constexpr unsigned int Map3DFogItem_TypeDefinitionIndex = 74449;

class Map3DFogItem : public ::System::Object
{
public:
	::System::Single lifeTime; // 0x10
	::System::Single intensity; // 0x14
	::UnityEngine::Bounds fogBounds; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAP3DFOGITEM__CTOR_OFFSET))(this);
	}
};
