#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_253;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_2F8B08547945A90F___C_METHOD_1_7519F151EAC666F9_OFFSET UNITYSDK_OFFSET(0x13CA8020)
#define CLASS_1_2F8B08547945A90F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13CA7FD0)
#define CLASS_1_2F8B08547945A90F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13CA8010)

inline static constexpr unsigned int Class_1_2F8B08547945A90F___c_TypeDefinitionIndex = 46759;

class Class_1_2F8B08547945A90F___c : public ::System::Object
{
public:
	static ::Class_1_2F8B08547945A90F___c** StaticGet___9()
	{
		return (::Class_1_2F8B08547945A90F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F8B08547945A90F___c_TypeDefinitionIndex)->GetStaticField(0x2F290);
	}
	static ::System::Action_1<::Class_0_16E4307DCC419505_253*>** StaticGet___9__3_0()
	{
		return (::System::Action_1<::Class_0_16E4307DCC419505_253*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F8B08547945A90F___c_TypeDefinitionIndex)->GetStaticField(0x2F298);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F8B08547945A90F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F8B08547945A90F___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7519F151EAC666F9(::Class_0_16E4307DCC419505_253* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_253*))((::PBYTE)hIl2Cpp + CLASS_1_2F8B08547945A90F___C_METHOD_1_7519F151EAC666F9_OFFSET))(this, a1);
	}
};
