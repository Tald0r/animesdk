#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define CLASS_2_C85A6D3427BDA124_16__CTOR_OFFSET UNITYSDK_OFFSET(0x72D5410)

inline static constexpr unsigned int Class_2_C85A6D3427BDA124_16_TypeDefinitionIndex = 57916;

class Class_2_C85A6D3427BDA124_16 : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C85A6D3427BDA124_16__CTOR_OFFSET))(this);
	}
};
