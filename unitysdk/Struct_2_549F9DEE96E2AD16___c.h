#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BB7873D919742DF3_Class_3_F972A9FF1E378E1A;

#define STRUCT_2_549F9DEE96E2AD16___C_METHOD_1_96878E0074222561_OFFSET UNITYSDK_OFFSET(0x79F8E80)
#define STRUCT_2_549F9DEE96E2AD16___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x79F8E30)
#define STRUCT_2_549F9DEE96E2AD16___C__CTOR_OFFSET UNITYSDK_OFFSET(0x79F8E70)

inline static constexpr unsigned int Struct_2_549F9DEE96E2AD16___c_TypeDefinitionIndex = 68748;

class Struct_2_549F9DEE96E2AD16___c : public ::System::Object
{
public:
	static ::Struct_2_549F9DEE96E2AD16___c** StaticGet___9()
	{
		return (::Struct_2_549F9DEE96E2AD16___c**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_549F9DEE96E2AD16___c_TypeDefinitionIndex)->GetStaticField(0x31470);
	}
	static ::Class_1_BB7873D919742DF3_Class_3_F972A9FF1E378E1A** StaticGet___9__3_0()
	{
		return (::Class_1_BB7873D919742DF3_Class_3_F972A9FF1E378E1A**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_549F9DEE96E2AD16___c_TypeDefinitionIndex)->GetStaticField(0x31478);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_549F9DEE96E2AD16___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_549F9DEE96E2AD16___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_96878E0074222561(::System::UInt16 a1, ::System::UInt16 a2, ::System::UInt16 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::UInt16, ::System::UInt16))((::PBYTE)hIl2Cpp + STRUCT_2_549F9DEE96E2AD16___C_METHOD_1_96878E0074222561_OFFSET))(this, a1, a2, a3);
	}
};
