#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ScreenPlayData;

#define SINGLESCREEN__CTOR_OFFSET UNITYSDK_OFFSET(0x16C5B160)

inline static constexpr unsigned int SingleScreen_TypeDefinitionIndex = 59778;

class SingleScreen : public ::System::Object
{
public:
	::ScreenPlayData* ShowDatas; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SINGLESCREEN__CTOR_OFFSET))(this);
	}
};
