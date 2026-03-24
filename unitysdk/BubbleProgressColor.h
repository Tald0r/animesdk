#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

#define BUBBLEPROGRESSCOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0x98C0900)

inline static constexpr unsigned int BubbleProgressColor_TypeDefinitionIndex = 44031;

class BubbleProgressColor : public ::System::Object
{
public:
	::UnityEngine::Color Color1; // 0x10
	::UnityEngine::Color Color2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUBBLEPROGRESSCOLOR__CTOR_OFFSET))(this);
	}
};
