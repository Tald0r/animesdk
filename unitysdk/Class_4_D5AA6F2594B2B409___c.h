#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_4_D5AA6F2594B2B409___C_METHOD_1_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0x6278470)
#define CLASS_4_D5AA6F2594B2B409___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x6278420)
#define CLASS_4_D5AA6F2594B2B409___C__CTOR_OFFSET UNITYSDK_OFFSET(0x6278460)

inline static constexpr unsigned int Class_4_D5AA6F2594B2B409___c_TypeDefinitionIndex = 76409;

class Class_4_D5AA6F2594B2B409___c : public ::System::Object
{
public:
	static ::Class_4_D5AA6F2594B2B409___c** StaticGet___9()
	{
		return (::Class_4_D5AA6F2594B2B409___c**)Il2CppClass::FromTypeDefinitionIndex(Class_4_D5AA6F2594B2B409___c_TypeDefinitionIndex)->GetStaticField(0x3C690);
	}
	static ::System::Action** StaticGet___9__7_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_4_D5AA6F2594B2B409___c_TypeDefinitionIndex)->GetStaticField(0x3C698);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_D5AA6F2594B2B409___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D5AA6F2594B2B409___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D7852DE078ACC1F1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D5AA6F2594B2B409___C_METHOD_1_D7852DE078ACC1F1_OFFSET))(this);
	}
};
