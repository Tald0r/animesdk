#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define CLASS_2_C85A6D3427BDA124_6__CTOR_OFFSET UNITYSDK_OFFSET(0xBC6F9E0)

inline static constexpr unsigned int Class_2_C85A6D3427BDA124_6_TypeDefinitionIndex = 42027;

class Class_2_C85A6D3427BDA124_6 : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C85A6D3427BDA124_6__CTOR_OFFSET))(this);
	}
};
