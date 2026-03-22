#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CLASS_3_7029660BF847CEF6___C_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0xAA83040)
#define CLASS_3_7029660BF847CEF6___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xAA82FF0)
#define CLASS_3_7029660BF847CEF6___C__CTOR_OFFSET UNITYSDK_OFFSET(0xAA83030)

inline static constexpr unsigned int Class_3_7029660BF847CEF6___c_TypeDefinitionIndex = 46370;

class Class_3_7029660BF847CEF6___c : public ::System::Object
{
public:
	static ::Class_3_7029660BF847CEF6___c** StaticGet___9()
	{
		return (::Class_3_7029660BF847CEF6___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_7029660BF847CEF6___c_TypeDefinitionIndex)->GetStaticField(0x3F770);
	}
	static ::System::Action_1<::System::Boolean>** StaticGet___9__8_0()
	{
		return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_7029660BF847CEF6___c_TypeDefinitionIndex)->GetStaticField(0x3F778);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_7029660BF847CEF6___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7029660BF847CEF6___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_7029660BF847CEF6___C_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}
};
