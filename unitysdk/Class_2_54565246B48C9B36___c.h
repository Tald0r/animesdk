#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
class Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C;

#define CLASS_2_54565246B48C9B36___C_METHOD_1_C686D2D2A2C339C7_OFFSET UNITYSDK_OFFSET(0x7AC6790)
#define CLASS_2_54565246B48C9B36___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x7AC6740)
#define CLASS_2_54565246B48C9B36___C__CTOR_OFFSET UNITYSDK_OFFSET(0x7AC6780)

inline static constexpr unsigned int Class_2_54565246B48C9B36___c_TypeDefinitionIndex = 40494;

class Class_2_54565246B48C9B36___c : public ::System::Object
{
public:
	static ::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C** StaticGet___9__4_0()
	{
		return (::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C**)Il2CppClass::FromTypeDefinitionIndex(Class_2_54565246B48C9B36___c_TypeDefinitionIndex)->GetStaticField(0x31940);
	}
	static ::Class_2_54565246B48C9B36___c** StaticGet___9()
	{
		return (::Class_2_54565246B48C9B36___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_54565246B48C9B36___c_TypeDefinitionIndex)->GetStaticField(0x31948);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_54565246B48C9B36___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54565246B48C9B36___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C686D2D2A2C339C7(::Class_0_16E4307DCC419505_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_54565246B48C9B36___C_METHOD_1_C686D2D2A2C339C7_OFFSET))(this, a1);
	}
};
