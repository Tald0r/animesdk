#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine::Events { class UnityAction; }

#define CLASS_5_DE4B38B986B2B267___C_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x6C850D0)
#define CLASS_5_DE4B38B986B2B267___C_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x6C851E0)
#define CLASS_5_DE4B38B986B2B267___C_METHOD_1_99F7FA3906D7C9C7_OFFSET UNITYSDK_OFFSET(0x6C85110)
#define CLASS_5_DE4B38B986B2B267___C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x6C85310)
#define CLASS_5_DE4B38B986B2B267___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x6C85080)
#define CLASS_5_DE4B38B986B2B267___C__CTOR_OFFSET UNITYSDK_OFFSET(0x6C850C0)

inline static constexpr unsigned int Class_5_DE4B38B986B2B267___c_TypeDefinitionIndex = 39751;

class Class_5_DE4B38B986B2B267___c : public ::System::Object
{
public:
	static ::UnityEngine::Events::UnityAction** StaticGet___9__1_7()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_5_DE4B38B986B2B267___c_TypeDefinitionIndex)->GetStaticField(0x33A30);
	}
	static ::Class_5_DE4B38B986B2B267___c** StaticGet___9()
	{
		return (::Class_5_DE4B38B986B2B267___c**)Il2CppClass::FromTypeDefinitionIndex(Class_5_DE4B38B986B2B267___c_TypeDefinitionIndex)->GetStaticField(0x33A38);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__1_3()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_5_DE4B38B986B2B267___c_TypeDefinitionIndex)->GetStaticField(0x33A40);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__1_1()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_5_DE4B38B986B2B267___c_TypeDefinitionIndex)->GetStaticField(0x33A48);
	}
	static ::System::Func_1<::UnityEngine::Events::UnityAction*>** StaticGet___9__1_4()
	{
		return (::System::Func_1<::UnityEngine::Events::UnityAction*>**)Il2CppClass::FromTypeDefinitionIndex(Class_5_DE4B38B986B2B267___c_TypeDefinitionIndex)->GetStaticField(0x33A50);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_5_DE4B38B986B2B267___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_DE4B38B986B2B267___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_DE4B38B986B2B267___C_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::UnityEngine::Events::UnityAction* Method_1_99F7FA3906D7C9C7()
	{
		return ((::UnityEngine::Events::UnityAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_DE4B38B986B2B267___C_METHOD_1_99F7FA3906D7C9C7_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_DE4B38B986B2B267___C_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_DE4B38B986B2B267___C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
