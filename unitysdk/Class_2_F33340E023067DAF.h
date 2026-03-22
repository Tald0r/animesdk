#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystem.h"

#define CLASS_2_F33340E023067DAF__CTOR_OFFSET UNITYSDK_OFFSET(0xAC799E0)

inline static constexpr unsigned int Class_2_F33340E023067DAF_TypeDefinitionIndex = 42521;

class Class_2_F33340E023067DAF : public ::Nap::NapECS::EcsSystem
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F33340E023067DAF__CTOR_OFFSET))(this);
	}
};
