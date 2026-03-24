#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define CLASS_2_C85A6D3427BDA124_42__CTOR_OFFSET UNITYSDK_OFFSET(0x6213850)

inline static constexpr unsigned int Class_2_C85A6D3427BDA124_42_TypeDefinitionIndex = 80811;

class Class_2_C85A6D3427BDA124_42 : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C85A6D3427BDA124_42__CTOR_OFFSET))(this);
	}
};
