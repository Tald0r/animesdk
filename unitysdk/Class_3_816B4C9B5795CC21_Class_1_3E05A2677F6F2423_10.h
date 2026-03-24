#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_3_816B4C9B5795CC21_CLASS_1_3E05A2677F6F2423_10__CTOR_OFFSET UNITYSDK_OFFSET(0x76A2EB0)

inline static constexpr unsigned int Class_3_816B4C9B5795CC21_Class_1_3E05A2677F6F2423_10_TypeDefinitionIndex = 65269;

class Class_3_816B4C9B5795CC21_Class_1_3E05A2677F6F2423_10 : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816B4C9B5795CC21_CLASS_1_3E05A2677F6F2423_10__CTOR_OFFSET))(this);
	}
};
