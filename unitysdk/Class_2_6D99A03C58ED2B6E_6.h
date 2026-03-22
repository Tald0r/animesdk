#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A3D0C07370D7EA03.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_662.h"

class Class_0_16E4307DCC419505_13;

#define CLASS_2_6D99A03C58ED2B6E_6__CCTOR_OFFSET UNITYSDK_OFFSET(0x191AD0D0)
#define CLASS_2_6D99A03C58ED2B6E_6__CTOR_OFFSET UNITYSDK_OFFSET(0x191AD0C0)

inline static constexpr unsigned int Class_2_6D99A03C58ED2B6E_6_TypeDefinitionIndex = 13751;

class Class_2_6D99A03C58ED2B6E_6 : public ::Class_1_A3D0C07370D7EA03
{
public:
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6D99A03C58ED2B6E_6_TypeDefinitionIndex)->GetStaticField(0x4400);
	}

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_662 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_662, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_6D99A03C58ED2B6E_6__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_6D99A03C58ED2B6E_6__CCTOR_OFFSET))();
	}
};
