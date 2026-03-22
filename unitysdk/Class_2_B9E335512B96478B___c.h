#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
class Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C;

#define CLASS_2_B9E335512B96478B___C_METHOD_1_A7026620A45AD4CE_OFFSET UNITYSDK_OFFSET(0x125FF170)
#define CLASS_2_B9E335512B96478B___C_METHOD_1_C59580B937A51A11_OFFSET UNITYSDK_OFFSET(0x125FF090)
#define CLASS_2_B9E335512B96478B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x125FF040)
#define CLASS_2_B9E335512B96478B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x125FF080)

inline static constexpr unsigned int Class_2_B9E335512B96478B___c_TypeDefinitionIndex = 40451;

class Class_2_B9E335512B96478B___c : public ::System::Object
{
public:
	static ::Class_2_B9E335512B96478B___c** StaticGet___9()
	{
		return (::Class_2_B9E335512B96478B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B9E335512B96478B___c_TypeDefinitionIndex)->GetStaticField(0x2C010);
	}
	static ::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C** StaticGet___9__5_0()
	{
		return (::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B9E335512B96478B___c_TypeDefinitionIndex)->GetStaticField(0x2C018);
	}
	static ::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C** StaticGet___9__2_0()
	{
		return (::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B9E335512B96478B___c_TypeDefinitionIndex)->GetStaticField(0x2C020);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_B9E335512B96478B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B9E335512B96478B___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C59580B937A51A11(::Class_0_16E4307DCC419505_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_B9E335512B96478B___C_METHOD_1_C59580B937A51A11_OFFSET))(this, a1);
	}

	::System::Void Method_1_A7026620A45AD4CE(::Class_0_16E4307DCC419505_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_B9E335512B96478B___C_METHOD_1_A7026620A45AD4CE_OFFSET))(this, a1);
	}
};
