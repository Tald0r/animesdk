#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_2792CDC7654AACFF___C_METHOD_1_C8EED11299FD17DB_OFFSET UNITYSDK_OFFSET(0x8DF3090)
#define CLASS_1_2792CDC7654AACFF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8DF3040)
#define CLASS_1_2792CDC7654AACFF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8DF3080)

inline static constexpr unsigned int Class_1_2792CDC7654AACFF___c_TypeDefinitionIndex = 50623;

class Class_1_2792CDC7654AACFF___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__18_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2792CDC7654AACFF___c_TypeDefinitionIndex)->GetStaticField(0x3C500);
	}
	static ::Class_1_2792CDC7654AACFF___c** StaticGet___9()
	{
		return (::Class_1_2792CDC7654AACFF___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2792CDC7654AACFF___c_TypeDefinitionIndex)->GetStaticField(0x3C508);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2792CDC7654AACFF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2792CDC7654AACFF___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C8EED11299FD17DB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2792CDC7654AACFF___C_METHOD_1_C8EED11299FD17DB_OFFSET))(this);
	}
};
