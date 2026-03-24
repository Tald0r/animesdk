#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_5;
class Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C;

#define CLASS_2_673E7B5D39E9C444___C_METHOD_1_7DAF5B3ADF494895_OFFSET UNITYSDK_OFFSET(0x7267E70)
#define CLASS_2_673E7B5D39E9C444___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x7267E20)
#define CLASS_2_673E7B5D39E9C444___C__CTOR_OFFSET UNITYSDK_OFFSET(0x7267E60)

inline static constexpr unsigned int Class_2_673E7B5D39E9C444___c_TypeDefinitionIndex = 69371;

class Class_2_673E7B5D39E9C444___c : public ::System::Object
{
public:
	static ::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C** StaticGet___9__2_0()
	{
		return (::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C**)Il2CppClass::FromTypeDefinitionIndex(Class_2_673E7B5D39E9C444___c_TypeDefinitionIndex)->GetStaticField(0x457D0);
	}
	static ::Class_2_673E7B5D39E9C444___c** StaticGet___9()
	{
		return (::Class_2_673E7B5D39E9C444___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_673E7B5D39E9C444___c_TypeDefinitionIndex)->GetStaticField(0x457D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_673E7B5D39E9C444___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_673E7B5D39E9C444___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7DAF5B3ADF494895(::Class_0_16E4307DCC419505_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_5*))((::PBYTE)hIl2Cpp + CLASS_2_673E7B5D39E9C444___C_METHOD_1_7DAF5B3ADF494895_OFFSET))(this, a1);
	}
};
