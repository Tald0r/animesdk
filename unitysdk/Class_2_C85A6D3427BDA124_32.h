#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define CLASS_2_C85A6D3427BDA124_32__CTOR_OFFSET UNITYSDK_OFFSET(0xA73FF60)

inline static constexpr unsigned int Class_2_C85A6D3427BDA124_32_TypeDefinitionIndex = 72913;

class Class_2_C85A6D3427BDA124_32 : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C85A6D3427BDA124_32__CTOR_OFFSET))(this);
	}
};
