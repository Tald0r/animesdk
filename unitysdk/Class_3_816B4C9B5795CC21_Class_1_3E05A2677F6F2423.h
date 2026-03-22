#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_3_816B4C9B5795CC21_CLASS_1_3E05A2677F6F2423__CTOR_OFFSET UNITYSDK_OFFSET(0x1652A560)

inline static constexpr unsigned int Class_3_816B4C9B5795CC21_Class_1_3E05A2677F6F2423_TypeDefinitionIndex = 39199;

class Class_3_816B4C9B5795CC21_Class_1_3E05A2677F6F2423 : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816B4C9B5795CC21_CLASS_1_3E05A2677F6F2423__CTOR_OFFSET))(this);
	}
};
