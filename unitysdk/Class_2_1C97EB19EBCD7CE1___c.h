#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define CLASS_2_1C97EB19EBCD7CE1___C_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x8A37B20)
#define CLASS_2_1C97EB19EBCD7CE1___C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x8A37B10)
#define CLASS_2_1C97EB19EBCD7CE1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8A37AC0)
#define CLASS_2_1C97EB19EBCD7CE1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8A37B00)

inline static constexpr unsigned int Class_2_1C97EB19EBCD7CE1___c_TypeDefinitionIndex = 42458;

class Class_2_1C97EB19EBCD7CE1___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__18_3()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1C97EB19EBCD7CE1___c_TypeDefinitionIndex)->GetStaticField(0x2FD20);
	}
	static ::Class_2_1C97EB19EBCD7CE1___c** StaticGet___9()
	{
		return (::Class_2_1C97EB19EBCD7CE1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1C97EB19EBCD7CE1___c_TypeDefinitionIndex)->GetStaticField(0x2FD28);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__18_2()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1C97EB19EBCD7CE1___c_TypeDefinitionIndex)->GetStaticField(0x2FD30);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_1C97EB19EBCD7CE1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C97EB19EBCD7CE1___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C97EB19EBCD7CE1___C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C97EB19EBCD7CE1___C_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}
};
