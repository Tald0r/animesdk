#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine::Events { class UnityAction; }

#define CLASS_5_768A3918946D2F06_1___C_METHOD_1_08FA67828C2BF0E2_OFFSET UNITYSDK_OFFSET(0x7AEEA00)
#define CLASS_5_768A3918946D2F06_1___C_METHOD_1_2CBE0B79DD36047E_OFFSET UNITYSDK_OFFSET(0x7AEEB10)
#define CLASS_5_768A3918946D2F06_1___C_METHOD_1_6660E692D9A5BA8C_OFFSET UNITYSDK_OFFSET(0x7AEE470)
#define CLASS_5_768A3918946D2F06_1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x7AEE420)
#define CLASS_5_768A3918946D2F06_1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x7AEE460)

inline static constexpr unsigned int Class_5_768A3918946D2F06_1___c_TypeDefinitionIndex = 76613;

class Class_5_768A3918946D2F06_1___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__1_2()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_5_768A3918946D2F06_1___c_TypeDefinitionIndex)->GetStaticField(0x3B1E0);
	}
	static ::Class_5_768A3918946D2F06_1___c** StaticGet___9()
	{
		return (::Class_5_768A3918946D2F06_1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_5_768A3918946D2F06_1___c_TypeDefinitionIndex)->GetStaticField(0x3B1E8);
	}
	static ::System::Func_1<::MoleMole::UIControllerContextBase*>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::MoleMole::UIControllerContextBase*>**)Il2CppClass::FromTypeDefinitionIndex(Class_5_768A3918946D2F06_1___c_TypeDefinitionIndex)->GetStaticField(0x3B1F0);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__1_3()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_5_768A3918946D2F06_1___c_TypeDefinitionIndex)->GetStaticField(0x3B1F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_5_768A3918946D2F06_1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_768A3918946D2F06_1___C__CTOR_OFFSET))(this);
	}

	::MoleMole::UIControllerContextBase* Method_1_6660E692D9A5BA8C()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_768A3918946D2F06_1___C_METHOD_1_6660E692D9A5BA8C_OFFSET))(this);
	}

	::System::String* Method_1_08FA67828C2BF0E2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_768A3918946D2F06_1___C_METHOD_1_08FA67828C2BF0E2_OFFSET))(this);
	}

	::System::Void Method_1_2CBE0B79DD36047E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_768A3918946D2F06_1___C_METHOD_1_2CBE0B79DD36047E_OFFSET))(this);
	}
};
