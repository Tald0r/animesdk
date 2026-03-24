#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_7FCEFD11BF5FFFA5;
namespace System { template <typename T> class Action_1; }

#define CLASS_2_292758B41FB4BF40___C_METHOD_1_5FFF477DE12718CC_OFFSET UNITYSDK_OFFSET(0x83EEBA0)
#define CLASS_2_292758B41FB4BF40___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x83EEB50)
#define CLASS_2_292758B41FB4BF40___C__CTOR_OFFSET UNITYSDK_OFFSET(0x83EEB90)

inline static constexpr unsigned int Class_2_292758B41FB4BF40___c_TypeDefinitionIndex = 43801;

class Class_2_292758B41FB4BF40___c : public ::System::Object
{
public:
	static ::Class_2_292758B41FB4BF40___c** StaticGet___9()
	{
		return (::Class_2_292758B41FB4BF40___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_292758B41FB4BF40___c_TypeDefinitionIndex)->GetStaticField(0x32F60);
	}
	static ::System::Action_1<::Class_3_7FCEFD11BF5FFFA5*>** StaticGet___9__3_0()
	{
		return (::System::Action_1<::Class_3_7FCEFD11BF5FFFA5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_292758B41FB4BF40___c_TypeDefinitionIndex)->GetStaticField(0x32F68);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_292758B41FB4BF40___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_292758B41FB4BF40___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5FFF477DE12718CC(::Class_3_7FCEFD11BF5FFFA5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_7FCEFD11BF5FFFA5*))((::PBYTE)hIl2Cpp + CLASS_2_292758B41FB4BF40___C_METHOD_1_5FFF477DE12718CC_OFFSET))(this, a1);
	}
};
