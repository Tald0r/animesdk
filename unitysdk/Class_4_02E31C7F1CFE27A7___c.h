#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_997A61FC149EE531;
namespace System { template <typename T> class Action_1; }

#define CLASS_4_02E31C7F1CFE27A7___C_METHOD_1_E9D938B6A30770AD_OFFSET UNITYSDK_OFFSET(0x9B14090)
#define CLASS_4_02E31C7F1CFE27A7___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9B14040)
#define CLASS_4_02E31C7F1CFE27A7___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9B14080)

inline static constexpr unsigned int Class_4_02E31C7F1CFE27A7___c_TypeDefinitionIndex = 56884;

class Class_4_02E31C7F1CFE27A7___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_997A61FC149EE531*>** StaticGet___9__3_0()
	{
		return (::System::Action_1<::Class_1_997A61FC149EE531*>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_02E31C7F1CFE27A7___c_TypeDefinitionIndex)->GetStaticField(0x3DD00);
	}
	static ::Class_4_02E31C7F1CFE27A7___c** StaticGet___9()
	{
		return (::Class_4_02E31C7F1CFE27A7___c**)Il2CppClass::FromTypeDefinitionIndex(Class_4_02E31C7F1CFE27A7___c_TypeDefinitionIndex)->GetStaticField(0x3DD08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_02E31C7F1CFE27A7___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_02E31C7F1CFE27A7___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E9D938B6A30770AD(::Class_1_997A61FC149EE531* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_997A61FC149EE531*))((::PBYTE)hIl2Cpp + CLASS_4_02E31C7F1CFE27A7___C_METHOD_1_E9D938B6A30770AD_OFFSET))(this, a1);
	}
};
