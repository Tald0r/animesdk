#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_55.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_92;
class Class_0_16E4307DCC419505_95;

#define CLASS_1_F9B85D8EC8C11DE1_METHOD_1_0DF2EFD11B115106_OFFSET UNITYSDK_OFFSET(0x19B11980)
#define CLASS_1_F9B85D8EC8C11DE1_METHOD_1_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x19B19A10)
#define CLASS_1_F9B85D8EC8C11DE1_METHOD_1_B4FE8EFDD780CD9A_OFFSET UNITYSDK_OFFSET(0x19B19BD0)
#define CLASS_1_F9B85D8EC8C11DE1__CCTOR_OFFSET UNITYSDK_OFFSET(0x19B199A0)

inline static constexpr unsigned int Class_1_F9B85D8EC8C11DE1_TypeDefinitionIndex = 30902;

class Class_1_F9B85D8EC8C11DE1 : public ::System::Object
{
public:
	static ::Il2CppArray<::Class_0_16E4307DCC419505_92*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::Class_0_16E4307DCC419505_92*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F9B85D8EC8C11DE1_TypeDefinitionIndex)->GetStaticField(0x23780);
	}
	static ::Il2CppArray<::Class_0_16E4307DCC419505_95*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::Class_0_16E4307DCC419505_95*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F9B85D8EC8C11DE1_TypeDefinitionIndex)->GetStaticField(0x23788);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F9B85D8EC8C11DE1__CCTOR_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_95* Method_1_0DF2EFD11B115106(::Enum_3_0A3761FE34514D6C_55 a1)
	{
		return ((::Class_0_16E4307DCC419505_95*(*)(::Enum_3_0A3761FE34514D6C_55))((::PBYTE)hIl2Cpp + CLASS_1_F9B85D8EC8C11DE1_METHOD_1_0DF2EFD11B115106_OFFSET))(a1);
	}

	static ::System::Void Method_1_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F9B85D8EC8C11DE1_METHOD_1_0FD0EC313FAAB75A_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_95* Method_1_B4FE8EFDD780CD9A(::Enum_3_0A3761FE34514D6C_55 a1)
	{
		return ((::Class_0_16E4307DCC419505_95*(*)(::Enum_3_0A3761FE34514D6C_55))((::PBYTE)hIl2Cpp + CLASS_1_F9B85D8EC8C11DE1_METHOD_1_B4FE8EFDD780CD9A_OFFSET))(a1);
	}
};
