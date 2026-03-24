#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_1_4486B0F1E94C2518_CLASS_1_5CBCCD805463F67B_METHOD_1_85EF24623D870F80_OFFSET UNITYSDK_OFFSET(0xA4070D0)
#define CLASS_1_4486B0F1E94C2518_CLASS_1_5CBCCD805463F67B__CTOR_OFFSET UNITYSDK_OFFSET(0xA4070C0)

inline static constexpr unsigned int Class_1_4486B0F1E94C2518_Class_1_5CBCCD805463F67B_TypeDefinitionIndex = 44400;

class Class_1_4486B0F1E94C2518_Class_1_5CBCCD805463F67B : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4486B0F1E94C2518_CLASS_1_5CBCCD805463F67B__CTOR_OFFSET))(this);
	}

	::MoleMole::EntityHandle Method_1_85EF24623D870F80(::MoleMole::Battle::Entity* a1)
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_4486B0F1E94C2518_CLASS_1_5CBCCD805463F67B_METHOD_1_85EF24623D870F80_OFFSET))(this, a1);
	}
};
