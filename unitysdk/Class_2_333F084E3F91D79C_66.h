#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define CLASS_2_333F084E3F91D79C_66__CTOR_OFFSET UNITYSDK_OFFSET(0x83CE8D0)

inline static constexpr unsigned int Class_2_333F084E3F91D79C_66_TypeDefinitionIndex = 52300;

class Class_2_333F084E3F91D79C_66 : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_333F084E3F91D79C_66__CTOR_OFFSET))(this);
	}
};
