#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_EAE94311ABD78088___C_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x840E9C0)
#define CLASS_1_EAE94311ABD78088___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x840E970)
#define CLASS_1_EAE94311ABD78088___C__CTOR_OFFSET UNITYSDK_OFFSET(0x840E9B0)

inline static constexpr unsigned int Class_1_EAE94311ABD78088___c_TypeDefinitionIndex = 46203;

class Class_1_EAE94311ABD78088___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__0_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EAE94311ABD78088___c_TypeDefinitionIndex)->GetStaticField(0x30E00);
	}
	static ::Class_1_EAE94311ABD78088___c** StaticGet___9()
	{
		return (::Class_1_EAE94311ABD78088___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EAE94311ABD78088___c_TypeDefinitionIndex)->GetStaticField(0x30E08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EAE94311ABD78088___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EAE94311ABD78088___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EAE94311ABD78088___C_METHOD_1_832295EC279E5994_OFFSET))(this);
	}
};
