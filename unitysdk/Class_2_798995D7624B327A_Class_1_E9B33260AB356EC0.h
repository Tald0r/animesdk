#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_798995D7624B327A;
namespace MoleMole::Battle { class Entity; }
namespace System { class IComparable; }

#define CLASS_2_798995D7624B327A_CLASS_1_E9B33260AB356EC0_METHOD_1_5BCD046CA58EDCB8_OFFSET UNITYSDK_OFFSET(0xA3FE1C0)
#define CLASS_2_798995D7624B327A_CLASS_1_E9B33260AB356EC0_METHOD_1_7E8383D5E61E2F61_1_OFFSET UNITYSDK_OFFSET(0xA3FE1F0)
#define CLASS_2_798995D7624B327A_CLASS_1_E9B33260AB356EC0_METHOD_1_7E8383D5E61E2F61_OFFSET UNITYSDK_OFFSET(0xA3FE180)
#define CLASS_2_798995D7624B327A_CLASS_1_E9B33260AB356EC0__CTOR_OFFSET UNITYSDK_OFFSET(0xA3FE170)

inline static constexpr unsigned int Class_2_798995D7624B327A_Class_1_E9B33260AB356EC0_TypeDefinitionIndex = 51389;

class Class_2_798995D7624B327A_Class_1_E9B33260AB356EC0 : public ::System::Object
{
public:
	::Class_2_798995D7624B327A* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_798995D7624B327A_CLASS_1_E9B33260AB356EC0__CTOR_OFFSET))(this);
	}

	::System::IComparable* Method_1_7E8383D5E61E2F61(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::IComparable*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_798995D7624B327A_CLASS_1_E9B33260AB356EC0_METHOD_1_7E8383D5E61E2F61_OFFSET))(this, a1);
	}

	::System::IComparable* Method_1_5BCD046CA58EDCB8(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::IComparable*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_798995D7624B327A_CLASS_1_E9B33260AB356EC0_METHOD_1_5BCD046CA58EDCB8_OFFSET))(this, a1);
	}

	::System::IComparable* Method_1_7E8383D5E61E2F61_1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::IComparable*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_798995D7624B327A_CLASS_1_E9B33260AB356EC0_METHOD_1_7E8383D5E61E2F61_1_OFFSET))(this, a1);
	}
};
