#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define CLASS_2_333F084E3F91D79C_101__CTOR_OFFSET UNITYSDK_OFFSET(0xBC481C0)

inline static constexpr unsigned int Class_2_333F084E3F91D79C_101_TypeDefinitionIndex = 60566;

class Class_2_333F084E3F91D79C_101 : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_333F084E3F91D79C_101__CTOR_OFFSET))(this);
	}
};
