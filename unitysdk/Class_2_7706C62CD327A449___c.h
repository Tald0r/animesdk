#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7ECB9691B142D586;
namespace System { template <typename T> class Action_1; }

#define CLASS_2_7706C62CD327A449___C_METHOD_1_69AEC1BEACE4EA4F_OFFSET UNITYSDK_OFFSET(0xE864D50)
#define CLASS_2_7706C62CD327A449___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE864D00)
#define CLASS_2_7706C62CD327A449___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE864D40)

inline static constexpr unsigned int Class_2_7706C62CD327A449___c_TypeDefinitionIndex = 49713;

class Class_2_7706C62CD327A449___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7ECB9691B142D586*>** StaticGet___9__2_0()
	{
		return (::System::Action_1<::Class_1_7ECB9691B142D586*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7706C62CD327A449___c_TypeDefinitionIndex)->GetStaticField(0x38D70);
	}
	static ::Class_2_7706C62CD327A449___c** StaticGet___9()
	{
		return (::Class_2_7706C62CD327A449___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7706C62CD327A449___c_TypeDefinitionIndex)->GetStaticField(0x38D78);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_7706C62CD327A449___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7706C62CD327A449___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_69AEC1BEACE4EA4F(::Class_1_7ECB9691B142D586* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7ECB9691B142D586*))((::PBYTE)hIl2Cpp + CLASS_2_7706C62CD327A449___C_METHOD_1_69AEC1BEACE4EA4F_OFFSET))(this, a1);
	}
};
