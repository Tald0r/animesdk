#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_12F80F898C1E14E9;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_29110E4FC5FF5EE1___C_METHOD_1_BFF96E989AC38879_OFFSET UNITYSDK_OFFSET(0x6FF19B0)
#define CLASS_3_29110E4FC5FF5EE1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x6FF1960)
#define CLASS_3_29110E4FC5FF5EE1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x6FF19A0)

inline static constexpr unsigned int Class_3_29110E4FC5FF5EE1___c_TypeDefinitionIndex = 62554;

class Class_3_29110E4FC5FF5EE1___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_12F80F898C1E14E9*>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::Class_3_12F80F898C1E14E9*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_29110E4FC5FF5EE1___c_TypeDefinitionIndex)->GetStaticField(0x437E0);
	}
	static ::Class_3_29110E4FC5FF5EE1___c** StaticGet___9()
	{
		return (::Class_3_29110E4FC5FF5EE1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_29110E4FC5FF5EE1___c_TypeDefinitionIndex)->GetStaticField(0x437E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_29110E4FC5FF5EE1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_29110E4FC5FF5EE1___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BFF96E989AC38879(::Class_3_12F80F898C1E14E9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_12F80F898C1E14E9*))((::PBYTE)hIl2Cpp + CLASS_3_29110E4FC5FF5EE1___C_METHOD_1_BFF96E989AC38879_OFFSET))(this, a1);
	}
};
