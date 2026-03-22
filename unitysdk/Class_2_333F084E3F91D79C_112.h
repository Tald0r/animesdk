#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define CLASS_2_333F084E3F91D79C_112__CTOR_OFFSET UNITYSDK_OFFSET(0x9224210)

inline static constexpr unsigned int Class_2_333F084E3F91D79C_112_TypeDefinitionIndex = 63170;

class Class_2_333F084E3F91D79C_112 : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_333F084E3F91D79C_112__CTOR_OFFSET))(this);
	}
};
