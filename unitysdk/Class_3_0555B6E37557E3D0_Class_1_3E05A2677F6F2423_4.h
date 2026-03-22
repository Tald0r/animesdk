#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_3_0555B6E37557E3D0_CLASS_1_3E05A2677F6F2423_4__CTOR_OFFSET UNITYSDK_OFFSET(0x652A7E0)

inline static constexpr unsigned int Class_3_0555B6E37557E3D0_Class_1_3E05A2677F6F2423_4_TypeDefinitionIndex = 47825;

class Class_3_0555B6E37557E3D0_Class_1_3E05A2677F6F2423_4 : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0555B6E37557E3D0_CLASS_1_3E05A2677F6F2423_4__CTOR_OFFSET))(this);
	}
};
