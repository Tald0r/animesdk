#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
class Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C;

#define CLASS_2_4B0D186A1228FA4E___C_METHOD_1_D429B3A47EE61AE8_OFFSET UNITYSDK_OFFSET(0x79A3ED0)
#define CLASS_2_4B0D186A1228FA4E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x79A3E80)
#define CLASS_2_4B0D186A1228FA4E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x79A3EC0)

inline static constexpr unsigned int Class_2_4B0D186A1228FA4E___c_TypeDefinitionIndex = 64121;

class Class_2_4B0D186A1228FA4E___c : public ::System::Object
{
public:
	static ::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C** StaticGet___9__2_0()
	{
		return (::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4B0D186A1228FA4E___c_TypeDefinitionIndex)->GetStaticField(0x3F520);
	}
	static ::Class_2_4B0D186A1228FA4E___c** StaticGet___9()
	{
		return (::Class_2_4B0D186A1228FA4E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4B0D186A1228FA4E___c_TypeDefinitionIndex)->GetStaticField(0x3F528);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_4B0D186A1228FA4E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B0D186A1228FA4E___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D429B3A47EE61AE8(::Class_0_16E4307DCC419505_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_4B0D186A1228FA4E___C_METHOD_1_D429B3A47EE61AE8_OFFSET))(this, a1);
	}
};
