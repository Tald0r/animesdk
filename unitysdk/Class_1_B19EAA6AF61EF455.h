#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Random; }

#define CLASS_1_B19EAA6AF61EF455_METHOD_1_182C04BCF0853D9D_OFFSET UNITYSDK_OFFSET(0x98B08C0)
#define CLASS_1_B19EAA6AF61EF455_METHOD_1_771CA6E874864247_OFFSET UNITYSDK_OFFSET(0x98B06F0)
#define CLASS_1_B19EAA6AF61EF455_METHOD_1_BC8E2121E3BBA5BE_OFFSET UNITYSDK_OFFSET(0x98B09B0)
#define CLASS_1_B19EAA6AF61EF455_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x98B0660)
#define CLASS_1_B19EAA6AF61EF455_METHOD_1_D09831639F615812_OFFSET UNITYSDK_OFFSET(0x98B0900)
#define CLASS_1_B19EAA6AF61EF455_METHOD_1_D0CD9A971CA3B1CF_OFFSET UNITYSDK_OFFSET(0x98B0AF0)
#define CLASS_1_B19EAA6AF61EF455_METHOD_1_DB2B44FABAA6A6B5_OFFSET UNITYSDK_OFFSET(0x98B0820)

inline static constexpr unsigned int Class_1_B19EAA6AF61EF455_TypeDefinitionIndex = 39092;

class Class_1_B19EAA6AF61EF455 : public ::System::Object
{
public:
	static ::System::Random** StaticGet_Field_1_1()
	{
		return (::System::Random**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B19EAA6AF61EF455_TypeDefinitionIndex)->GetStaticField(0x3E060);
	}
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B19EAA6AF61EF455_TypeDefinitionIndex)->GetStaticField(0xF1A0);
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B19EAA6AF61EF455_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::System::Int32 Method_1_771CA6E874864247(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B19EAA6AF61EF455_METHOD_1_771CA6E874864247_OFFSET))(a1, a2);
	}

	static ::System::Random* Method_1_182C04BCF0853D9D()
	{
		return ((::System::Random*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B19EAA6AF61EF455_METHOD_1_182C04BCF0853D9D_OFFSET))();
	}

	static ::System::Single Method_1_DB2B44FABAA6A6B5()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_B19EAA6AF61EF455_METHOD_1_DB2B44FABAA6A6B5_OFFSET))();
	}

	static ::System::Void Method_1_D09831639F615812(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B19EAA6AF61EF455_METHOD_1_D09831639F615812_OFFSET))(a1);
	}

	static ::System::Single Method_1_BC8E2121E3BBA5BE(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B19EAA6AF61EF455_METHOD_1_BC8E2121E3BBA5BE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D0CD9A971CA3B1CF()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B19EAA6AF61EF455_METHOD_1_D0CD9A971CA3B1CF_OFFSET))();
	}
};
