#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class Class_3_00D9F8D189C6D68A;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_4_051B8081F92F411F___C_METHOD_1_A07DB1B89DF8A155_OFFSET UNITYSDK_OFFSET(0x69ADEB0)
#define CLASS_4_051B8081F92F411F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x69ADE60)
#define CLASS_4_051B8081F92F411F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x69ADEA0)

inline static constexpr unsigned int Class_4_051B8081F92F411F___c_TypeDefinitionIndex = 40257;

class Class_4_051B8081F92F411F___c : public ::System::Object
{
public:
	static ::Class_4_051B8081F92F411F___c** StaticGet___9()
	{
		return (::Class_4_051B8081F92F411F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_4_051B8081F92F411F___c_TypeDefinitionIndex)->GetStaticField(0x3FE40);
	}
	static ::System::Func_2<::Class_3_00D9F8D189C6D68A*, ::MoleMole::HollowChessboard::HollowCell>** StaticGet___9__2_0()
	{
		return (::System::Func_2<::Class_3_00D9F8D189C6D68A*, ::MoleMole::HollowChessboard::HollowCell>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_051B8081F92F411F___c_TypeDefinitionIndex)->GetStaticField(0x3FE48);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_051B8081F92F411F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_051B8081F92F411F___C__CTOR_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowCell Method_1_A07DB1B89DF8A155(::Class_3_00D9F8D189C6D68A* a1)
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID, ::Class_3_00D9F8D189C6D68A*))((::PBYTE)hIl2Cpp + CLASS_4_051B8081F92F411F___C_METHOD_1_A07DB1B89DF8A155_OFFSET))(this, a1);
	}
};
