#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define CLASS_2_333F084E3F91D79C_51__CTOR_OFFSET UNITYSDK_OFFSET(0x773B6F0)

inline static constexpr unsigned int Class_2_333F084E3F91D79C_51_TypeDefinitionIndex = 50586;

class Class_2_333F084E3F91D79C_51 : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_333F084E3F91D79C_51__CTOR_OFFSET))(this);
	}
};
