#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define CLASS_2_C85A6D3427BDA124_4__CTOR_OFFSET UNITYSDK_OFFSET(0x9672BC0)

inline static constexpr unsigned int Class_2_C85A6D3427BDA124_4_TypeDefinitionIndex = 42884;

class Class_2_C85A6D3427BDA124_4 : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C85A6D3427BDA124_4__CTOR_OFFSET))(this);
	}
};
