#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_1_4486B0F1E94C2518_CLASS_1_5CBCCD805463F67B_1_METHOD_1_85EF24623D870F80_OFFSET UNITYSDK_OFFSET(0x6D28790)
#define CLASS_1_4486B0F1E94C2518_CLASS_1_5CBCCD805463F67B_1__CTOR_OFFSET UNITYSDK_OFFSET(0x6D28780)

inline static constexpr unsigned int Class_1_4486B0F1E94C2518_Class_1_5CBCCD805463F67B_1_TypeDefinitionIndex = 44401;

class Class_1_4486B0F1E94C2518_Class_1_5CBCCD805463F67B_1 : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4486B0F1E94C2518_CLASS_1_5CBCCD805463F67B_1__CTOR_OFFSET))(this);
	}

	::MoleMole::EntityHandle Method_1_85EF24623D870F80(::MoleMole::Battle::Entity* a1)
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_4486B0F1E94C2518_CLASS_1_5CBCCD805463F67B_1_METHOD_1_85EF24623D870F80_OFFSET))(this, a1);
	}
};
