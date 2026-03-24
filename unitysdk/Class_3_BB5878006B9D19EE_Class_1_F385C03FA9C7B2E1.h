#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3B91E8B5FF29338A;
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }

#define CLASS_3_BB5878006B9D19EE_CLASS_1_F385C03FA9C7B2E1_METHOD_1_88EC24EBAAE67376_OFFSET UNITYSDK_OFFSET(0x98B6EF0)
#define CLASS_3_BB5878006B9D19EE_CLASS_1_F385C03FA9C7B2E1__CTOR_OFFSET UNITYSDK_OFFSET(0x98B6EE0)

inline static constexpr unsigned int Class_3_BB5878006B9D19EE_Class_1_F385C03FA9C7B2E1_TypeDefinitionIndex = 43621;

class Class_3_BB5878006B9D19EE_Class_1_F385C03FA9C7B2E1 : public ::System::Object
{
public:
	::System::Action* Field_1_4; // 0x10
	::MoleMole::Battle::Entity* Field_1_3; // 0x18
	::Class_1_3B91E8B5FF29338A* Field_1_0; // 0x20
	::System::Int32 Field_1_2; // 0x28
	::System::Boolean Field_1_1; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_CLASS_1_F385C03FA9C7B2E1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_88EC24EBAAE67376(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_CLASS_1_F385C03FA9C7B2E1_METHOD_1_88EC24EBAAE67376_OFFSET))(this, a1);
	}
};
