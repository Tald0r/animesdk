#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UISUPPORT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1A3E50F0)

inline static constexpr unsigned int UISupport_TypeDefinitionIndex = 27388;

class UISupport : public ::System::Object
{
public:
	static ::System::Void Initialize()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UISUPPORT_INITIALIZE_OFFSET))();
	}
};
