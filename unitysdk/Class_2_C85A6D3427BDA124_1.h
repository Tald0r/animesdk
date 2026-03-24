#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define CLASS_2_C85A6D3427BDA124_1__CTOR_OFFSET UNITYSDK_OFFSET(0xB343600)

inline static constexpr unsigned int Class_2_C85A6D3427BDA124_1_TypeDefinitionIndex = 40006;

class Class_2_C85A6D3427BDA124_1 : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C85A6D3427BDA124_1__CTOR_OFFSET))(this);
	}
};
