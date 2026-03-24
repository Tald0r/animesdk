#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_55.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_93;
class Class_0_16E4307DCC419505_94;

#define CLASS_1_87AF7F6FCFB00F62_METHOD_1_0DF2EFD11B115106_OFFSET UNITYSDK_OFFSET(0x1A0D6CF0)
#define CLASS_1_87AF7F6FCFB00F62_METHOD_1_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x1A0D6B30)
#define CLASS_1_87AF7F6FCFB00F62_METHOD_1_B4FE8EFDD780CD9A_OFFSET UNITYSDK_OFFSET(0x1A0D7120)
#define CLASS_1_87AF7F6FCFB00F62__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0D6AC0)

inline static constexpr unsigned int Class_1_87AF7F6FCFB00F62_TypeDefinitionIndex = 31831;

class Class_1_87AF7F6FCFB00F62 : public ::System::Object
{
public:
	static ::Il2CppArray<::Class_0_16E4307DCC419505_93*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::Class_0_16E4307DCC419505_93*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_87AF7F6FCFB00F62_TypeDefinitionIndex)->GetStaticField(0x24FD0);
	}
	static ::Il2CppArray<::Class_0_16E4307DCC419505_94*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::Class_0_16E4307DCC419505_94*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_87AF7F6FCFB00F62_TypeDefinitionIndex)->GetStaticField(0x24FD8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_87AF7F6FCFB00F62__CCTOR_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_94* Method_1_0DF2EFD11B115106(::Enum_3_0A3761FE34514D6C_55 a1)
	{
		return ((::Class_0_16E4307DCC419505_94*(*)(::Enum_3_0A3761FE34514D6C_55))((::PBYTE)hIl2Cpp + CLASS_1_87AF7F6FCFB00F62_METHOD_1_0DF2EFD11B115106_OFFSET))(a1);
	}

	static ::System::Void Method_1_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_87AF7F6FCFB00F62_METHOD_1_0FD0EC313FAAB75A_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_94* Method_1_B4FE8EFDD780CD9A(::Enum_3_0A3761FE34514D6C_55 a1)
	{
		return ((::Class_0_16E4307DCC419505_94*(*)(::Enum_3_0A3761FE34514D6C_55))((::PBYTE)hIl2Cpp + CLASS_1_87AF7F6FCFB00F62_METHOD_1_B4FE8EFDD780CD9A_OFFSET))(a1);
	}
};
