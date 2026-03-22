#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define CLASS_2_333F084E3F91D79C_45__CTOR_OFFSET UNITYSDK_OFFSET(0xB026B60)

inline static constexpr unsigned int Class_2_333F084E3F91D79C_45_TypeDefinitionIndex = 48901;

class Class_2_333F084E3F91D79C_45 : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_333F084E3F91D79C_45__CTOR_OFFSET))(this);
	}
};
