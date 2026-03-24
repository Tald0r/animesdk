#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_5;
class Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C_1;

#define CLASS_2_3666106E6F1A0ED0___C_METHOD_1_FAA945ED465745BC_OFFSET UNITYSDK_OFFSET(0xAF19100)
#define CLASS_2_3666106E6F1A0ED0___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xAF190B0)
#define CLASS_2_3666106E6F1A0ED0___C__CTOR_OFFSET UNITYSDK_OFFSET(0xAF190F0)

inline static constexpr unsigned int Class_2_3666106E6F1A0ED0___c_TypeDefinitionIndex = 58100;

class Class_2_3666106E6F1A0ED0___c : public ::System::Object
{
public:
	static ::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C_1** StaticGet___9__12_1()
	{
		return (::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C_1**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3666106E6F1A0ED0___c_TypeDefinitionIndex)->GetStaticField(0x2D0F0);
	}
	static ::Class_2_3666106E6F1A0ED0___c** StaticGet___9()
	{
		return (::Class_2_3666106E6F1A0ED0___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3666106E6F1A0ED0___c_TypeDefinitionIndex)->GetStaticField(0x2D0F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_3666106E6F1A0ED0___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3666106E6F1A0ED0___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FAA945ED465745BC(::Class_0_16E4307DCC419505_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_5*))((::PBYTE)hIl2Cpp + CLASS_2_3666106E6F1A0ED0___C_METHOD_1_FAA945ED465745BC_OFFSET))(this, a1);
	}
};
