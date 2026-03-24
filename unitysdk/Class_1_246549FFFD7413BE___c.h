#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_246549FFFD7413BE___C_METHOD_1_43F35D215407097A_1_OFFSET UNITYSDK_OFFSET(0x73A7050)
#define CLASS_1_246549FFFD7413BE___C_METHOD_1_43F35D215407097A_2_OFFSET UNITYSDK_OFFSET(0x73A7060)
#define CLASS_1_246549FFFD7413BE___C_METHOD_1_43F35D215407097A_OFFSET UNITYSDK_OFFSET(0x73A7040)
#define CLASS_1_246549FFFD7413BE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x73A6FF0)
#define CLASS_1_246549FFFD7413BE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x73A7030)

inline static constexpr unsigned int Class_1_246549FFFD7413BE___c_TypeDefinitionIndex = 43074;

class Class_1_246549FFFD7413BE___c : public ::System::Object
{
public:
	static ::Class_1_246549FFFD7413BE___c** StaticGet___9()
	{
		return (::Class_1_246549FFFD7413BE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_246549FFFD7413BE___c_TypeDefinitionIndex)->GetStaticField(0x2AA10);
	}
	static ::System::Func_2<::UnityEngine::Vector3, ::System::Single>** StaticGet___9__15_2()
	{
		return (::System::Func_2<::UnityEngine::Vector3, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_246549FFFD7413BE___c_TypeDefinitionIndex)->GetStaticField(0x2AA18);
	}
	static ::System::Func_2<::UnityEngine::Vector3, ::System::Single>** StaticGet___9__15_0()
	{
		return (::System::Func_2<::UnityEngine::Vector3, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_246549FFFD7413BE___c_TypeDefinitionIndex)->GetStaticField(0x2AA20);
	}
	static ::System::Func_2<::UnityEngine::Vector3, ::System::Single>** StaticGet___9__15_1()
	{
		return (::System::Func_2<::UnityEngine::Vector3, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_246549FFFD7413BE___c_TypeDefinitionIndex)->GetStaticField(0x2AA28);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_246549FFFD7413BE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_246549FFFD7413BE___C__CTOR_OFFSET))(this);
	}

	::System::Single Method_1_43F35D215407097A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_246549FFFD7413BE___C_METHOD_1_43F35D215407097A_OFFSET))(this, a1);
	}

	::System::Single Method_1_43F35D215407097A_1(::UnityEngine::Vector3 a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_246549FFFD7413BE___C_METHOD_1_43F35D215407097A_1_OFFSET))(this, a1);
	}

	::System::Single Method_1_43F35D215407097A_2(::UnityEngine::Vector3 a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_246549FFFD7413BE___C_METHOD_1_43F35D215407097A_2_OFFSET))(this, a1);
	}
};
