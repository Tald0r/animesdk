#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_2AAE6D468E2B2684___C_METHOD_1_A2C3592E5EAA0AD5_OFFSET UNITYSDK_OFFSET(0xCA2BC50)
#define CLASS_1_2AAE6D468E2B2684___C_METHOD_1_CF54D1A276A16A63_OFFSET UNITYSDK_OFFSET(0xCA2BC60)
#define CLASS_1_2AAE6D468E2B2684___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCA2BC00)
#define CLASS_1_2AAE6D468E2B2684___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCA2BC40)

inline static constexpr unsigned int Class_1_2AAE6D468E2B2684___c_TypeDefinitionIndex = 72207;

class Class_1_2AAE6D468E2B2684___c : public ::System::Object
{
public:
	static ::System::Action_1<::System::String*>** StaticGet___9__0_0()
	{
		return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2AAE6D468E2B2684___c_TypeDefinitionIndex)->GetStaticField(0x35850);
	}
	static ::Class_1_2AAE6D468E2B2684___c** StaticGet___9()
	{
		return (::Class_1_2AAE6D468E2B2684___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2AAE6D468E2B2684___c_TypeDefinitionIndex)->GetStaticField(0x35858);
	}
	static ::System::Action_1<::System::String*>** StaticGet___9__3_0()
	{
		return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2AAE6D468E2B2684___c_TypeDefinitionIndex)->GetStaticField(0x35860);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2AAE6D468E2B2684___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AAE6D468E2B2684___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A2C3592E5EAA0AD5(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2AAE6D468E2B2684___C_METHOD_1_A2C3592E5EAA0AD5_OFFSET))(this, a1);
	}

	::System::Void Method_1_CF54D1A276A16A63(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2AAE6D468E2B2684___C_METHOD_1_CF54D1A276A16A63_OFFSET))(this, a1);
	}
};
