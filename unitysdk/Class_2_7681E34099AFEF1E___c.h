#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CLASS_2_7681E34099AFEF1E___C_METHOD_1_960FB21182E69E27_1_OFFSET UNITYSDK_OFFSET(0x8B2E240)
#define CLASS_2_7681E34099AFEF1E___C_METHOD_1_960FB21182E69E27_OFFSET UNITYSDK_OFFSET(0x8B2E120)
#define CLASS_2_7681E34099AFEF1E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8B2E0D0)
#define CLASS_2_7681E34099AFEF1E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8B2E110)

inline static constexpr unsigned int Class_2_7681E34099AFEF1E___c_TypeDefinitionIndex = 58349;

class Class_2_7681E34099AFEF1E___c : public ::System::Object
{
public:
	static ::System::Action_1<::System::Boolean>** StaticGet___9__39_0()
	{
		return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7681E34099AFEF1E___c_TypeDefinitionIndex)->GetStaticField(0x3BA70);
	}
	static ::System::Action_1<::System::Boolean>** StaticGet___9__39_1()
	{
		return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7681E34099AFEF1E___c_TypeDefinitionIndex)->GetStaticField(0x3BA78);
	}
	static ::Class_2_7681E34099AFEF1E___c** StaticGet___9()
	{
		return (::Class_2_7681E34099AFEF1E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7681E34099AFEF1E___c_TypeDefinitionIndex)->GetStaticField(0x3BA80);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_960FB21182E69E27(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E___C_METHOD_1_960FB21182E69E27_OFFSET))(this, a1);
	}

	::System::Void Method_1_960FB21182E69E27_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E___C_METHOD_1_960FB21182E69E27_1_OFFSET))(this, a1);
	}
};
