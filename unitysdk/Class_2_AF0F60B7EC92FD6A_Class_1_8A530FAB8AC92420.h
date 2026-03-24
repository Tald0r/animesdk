#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_AF0F60B7EC92FD6A;
namespace MoleMole::Battle { class Entity; }

#define CLASS_2_AF0F60B7EC92FD6A_CLASS_1_8A530FAB8AC92420_METHOD_1_E712C48FF2FEC12C_OFFSET UNITYSDK_OFFSET(0x9210930)
#define CLASS_2_AF0F60B7EC92FD6A_CLASS_1_8A530FAB8AC92420__CTOR_OFFSET UNITYSDK_OFFSET(0x9210920)

inline static constexpr unsigned int Class_2_AF0F60B7EC92FD6A_Class_1_8A530FAB8AC92420_TypeDefinitionIndex = 77456;

class Class_2_AF0F60B7EC92FD6A_Class_1_8A530FAB8AC92420 : public ::System::Object
{
public:
	::Class_2_AF0F60B7EC92FD6A* Field_1_1; // 0x10
	::MoleMole::Battle::Entity* Field_1_2; // 0x18
	::MoleMole::Battle::Entity* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF0F60B7EC92FD6A_CLASS_1_8A530FAB8AC92420__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_E712C48FF2FEC12C(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_AF0F60B7EC92FD6A_CLASS_1_8A530FAB8AC92420_METHOD_1_E712C48FF2FEC12C_OFFSET))(this, a1);
	}
};
