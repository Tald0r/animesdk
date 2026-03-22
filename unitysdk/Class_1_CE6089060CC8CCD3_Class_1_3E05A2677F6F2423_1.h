#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_1_CE6089060CC8CCD3_CLASS_1_3E05A2677F6F2423_1__CTOR_OFFSET UNITYSDK_OFFSET(0x9D2C4A0)

inline static constexpr unsigned int Class_1_CE6089060CC8CCD3_Class_1_3E05A2677F6F2423_1_TypeDefinitionIndex = 44280;

class Class_1_CE6089060CC8CCD3_Class_1_3E05A2677F6F2423_1 : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE6089060CC8CCD3_CLASS_1_3E05A2677F6F2423_1__CTOR_OFFSET))(this);
	}
};
