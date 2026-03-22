#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_376;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_2F8B08547945A90F_METHOD_1_A0374C870A27A45B_OFFSET UNITYSDK_OFFSET(0x71B1EA0)
#define CLASS_1_2F8B08547945A90F_METHOD_1_E0605E6F5A574306_OFFSET UNITYSDK_OFFSET(0x71B2110)
#define CLASS_1_2F8B08547945A90F_METHOD_1_F29D7A7F508EABE1_OFFSET UNITYSDK_OFFSET(0x71B22B0)
#define CLASS_1_2F8B08547945A90F__CCTOR_OFFSET UNITYSDK_OFFSET(0x71B1DD0)

inline static constexpr unsigned int Class_1_2F8B08547945A90F_TypeDefinitionIndex = 65375;

class Class_1_2F8B08547945A90F : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_376*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_376*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F8B08547945A90F_TypeDefinitionIndex)->GetStaticField(0x31AC0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F8B08547945A90F__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_A0374C870A27A45B(::Class_0_16E4307DCC419505_376* a1)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_376*))((::PBYTE)hIl2Cpp + CLASS_1_2F8B08547945A90F_METHOD_1_A0374C870A27A45B_OFFSET))(a1);
	}

	static ::System::Void Method_1_E0605E6F5A574306(::Class_0_16E4307DCC419505_376* a1)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_376*))((::PBYTE)hIl2Cpp + CLASS_1_2F8B08547945A90F_METHOD_1_E0605E6F5A574306_OFFSET))(a1);
	}

	static ::System::Void Method_1_F29D7A7F508EABE1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F8B08547945A90F_METHOD_1_F29D7A7F508EABE1_OFFSET))();
	}
};
