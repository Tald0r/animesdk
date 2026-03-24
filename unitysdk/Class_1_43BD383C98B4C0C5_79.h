#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5F85BB78E8FC7968;

#define CLASS_1_43BD383C98B4C0C5_79_SPAWN_OFFSET UNITYSDK_OFFSET(0xC4A0780)
#define CLASS_1_43BD383C98B4C0C5_79__CTOR_OFFSET UNITYSDK_OFFSET(0xC4A0820)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_79_TypeDefinitionIndex = 70832;

class Class_1_43BD383C98B4C0C5_79 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_79__CTOR_OFFSET))(this);
	}

	::Class_1_5F85BB78E8FC7968* Spawn()
	{
		return ((::Class_1_5F85BB78E8FC7968*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_79_SPAWN_OFFSET))(this);
	}
};
