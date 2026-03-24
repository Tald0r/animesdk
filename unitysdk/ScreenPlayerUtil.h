#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SCREENPLAYERUTIL__CTOR_OFFSET UNITYSDK_OFFSET(0xD85D450)

inline static constexpr unsigned int ScreenPlayerUtil_TypeDefinitionIndex = 69736;

class ScreenPlayerUtil : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCREENPLAYERUTIL__CTOR_OFFSET))(this);
	}
};
