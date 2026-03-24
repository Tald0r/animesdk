#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_986CA5FC483F9BD8;
namespace Foundation { class MyLogger; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_95F3660BF03C2263_METHOD_1_50E8968F71132C9A_OFFSET UNITYSDK_OFFSET(0x6ADAB20)
#define CLASS_1_95F3660BF03C2263_METHOD_1_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x6ADA9E0)
#define CLASS_1_95F3660BF03C2263_METHOD_1_E5A4070510CA83D7_OFFSET UNITYSDK_OFFSET(0x6ADA730)
#define CLASS_1_95F3660BF03C2263__CCTOR_OFFSET UNITYSDK_OFFSET(0x6ADA5A0)

inline static constexpr unsigned int Class_1_95F3660BF03C2263_TypeDefinitionIndex = 38039;

class Class_1_95F3660BF03C2263 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>** StaticGet_Field_1_9()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_95F3660BF03C2263_TypeDefinitionIndex)->GetStaticField(0x3E420);
	}
	static ::Class_1_986CA5FC483F9BD8** StaticGet_Field_1_7()
	{
		return (::Class_1_986CA5FC483F9BD8**)Il2CppClass::FromTypeDefinitionIndex(Class_1_95F3660BF03C2263_TypeDefinitionIndex)->GetStaticField(0x3E428);
	}
	static ::Class_1_986CA5FC483F9BD8** StaticGet_Field_1_5()
	{
		return (::Class_1_986CA5FC483F9BD8**)Il2CppClass::FromTypeDefinitionIndex(Class_1_95F3660BF03C2263_TypeDefinitionIndex)->GetStaticField(0x3E430);
	}
	static ::Foundation::MyLogger** StaticGet_Field_1_2()
	{
		return (::Foundation::MyLogger**)Il2CppClass::FromTypeDefinitionIndex(Class_1_95F3660BF03C2263_TypeDefinitionIndex)->GetStaticField(0x3E438);
	}
	static ::System::Collections::Generic::List_1<::System::Single>** StaticGet_Field_1_3()
	{
		return (::System::Collections::Generic::List_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_95F3660BF03C2263_TypeDefinitionIndex)->GetStaticField(0x3E440);
	}
	static ::Class_1_986CA5FC483F9BD8** StaticGet_Field_1_8()
	{
		return (::Class_1_986CA5FC483F9BD8**)Il2CppClass::FromTypeDefinitionIndex(Class_1_95F3660BF03C2263_TypeDefinitionIndex)->GetStaticField(0x3E448);
	}
	static ::Class_1_986CA5FC483F9BD8** StaticGet_Field_1_6()
	{
		return (::Class_1_986CA5FC483F9BD8**)Il2CppClass::FromTypeDefinitionIndex(Class_1_95F3660BF03C2263_TypeDefinitionIndex)->GetStaticField(0x3E450);
	}
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_95F3660BF03C2263_TypeDefinitionIndex)->GetStaticField(0xF260);
	}
	static ::System::Int32* StaticGet_Field_1_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_95F3660BF03C2263_TypeDefinitionIndex)->GetStaticField(0xF264);
	}
	// static const ::System::Int32 Field_1_1 = 0x3C; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_95F3660BF03C2263__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_E5A4070510CA83D7(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_95F3660BF03C2263_METHOD_1_E5A4070510CA83D7_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_50E8968F71132C9A(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_95F3660BF03C2263_METHOD_1_50E8968F71132C9A_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_60E1F7F58CCF739F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_95F3660BF03C2263_METHOD_1_60E1F7F58CCF739F_OFFSET))();
	}
};
