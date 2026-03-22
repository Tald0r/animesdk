#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define CLASS_2_F7F8DFDD129D66AF___C_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x7460CB0)
#define CLASS_2_F7F8DFDD129D66AF___C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x7460CA0)
#define CLASS_2_F7F8DFDD129D66AF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x7460C50)
#define CLASS_2_F7F8DFDD129D66AF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x7460C90)

inline static constexpr unsigned int Class_2_F7F8DFDD129D66AF___c_TypeDefinitionIndex = 64210;

class Class_2_F7F8DFDD129D66AF___c : public ::System::Object
{
public:
	static ::Class_2_F7F8DFDD129D66AF___c** StaticGet___9()
	{
		return (::Class_2_F7F8DFDD129D66AF___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F7F8DFDD129D66AF___c_TypeDefinitionIndex)->GetStaticField(0x2AD60);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__8_2()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F7F8DFDD129D66AF___c_TypeDefinitionIndex)->GetStaticField(0x2AD68);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__8_3()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F7F8DFDD129D66AF___c_TypeDefinitionIndex)->GetStaticField(0x2AD70);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_F7F8DFDD129D66AF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7F8DFDD129D66AF___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7F8DFDD129D66AF___C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7F8DFDD129D66AF___C_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}
};
