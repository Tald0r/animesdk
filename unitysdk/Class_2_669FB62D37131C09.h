#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/Struct_2_6D798C312C19218B.h"
#include "unitysdk/Struct_2_9B079B18CA73BD4E_1.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Jobs/TransformAccessArray.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_64D03B7C3ED03921;
class Class_3_6124F7AF16B30AB1;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class GameObject; }
template <typename T1, typename T2> class Class_1_5CF0EC0BFBEDEBC5;

#define CLASS_2_669FB62D37131C09_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8AE86B0)
#define CLASS_2_669FB62D37131C09_METHOD_2_0899A62ED8A05541_OFFSET UNITYSDK_OFFSET(0x8AEB280)
#define CLASS_2_669FB62D37131C09_METHOD_2_0E8E49198F3FD551_OFFSET UNITYSDK_OFFSET(0x8AEA5F0)
#define CLASS_2_669FB62D37131C09_METHOD_2_31D2DFCB01965F15_OFFSET UNITYSDK_OFFSET(0x8AEACE0)
#define CLASS_2_669FB62D37131C09_METHOD_2_490CA2A07334B2BF_OFFSET UNITYSDK_OFFSET(0x8AE9BB0)
#define CLASS_2_669FB62D37131C09_METHOD_2_4BE99DDCF7F1FD88_OFFSET UNITYSDK_OFFSET(0x8AEA920)
#define CLASS_2_669FB62D37131C09_METHOD_2_5707280798BD7788_OFFSET UNITYSDK_OFFSET(0x8AEB640)
#define CLASS_2_669FB62D37131C09_METHOD_2_66DE10154C51BE5C_OFFSET UNITYSDK_OFFSET(0x8AEB070)
#define CLASS_2_669FB62D37131C09_METHOD_2_7BD23CE0FABFB62E_1_OFFSET UNITYSDK_OFFSET(0x8AEAE30)
#define CLASS_2_669FB62D37131C09_METHOD_2_7BD23CE0FABFB62E_OFFSET UNITYSDK_OFFSET(0x8AE9A70)
#define CLASS_2_669FB62D37131C09_METHOD_2_83A2D2FF4410F4BE_OFFSET UNITYSDK_OFFSET(0x8AE9C60)
#define CLASS_2_669FB62D37131C09_METHOD_2_89D1F247B9D324EE_1_OFFSET UNITYSDK_OFFSET(0x8AEBF00)
#define CLASS_2_669FB62D37131C09_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x8AEAF70)
#define CLASS_2_669FB62D37131C09_METHOD_2_AAE2380A4AD9C102_OFFSET UNITYSDK_OFFSET(0x8AE9D30)
#define CLASS_2_669FB62D37131C09_METHOD_2_CD8EB704BDED69B6_OFFSET UNITYSDK_OFFSET(0x8AEC010)
#define CLASS_2_669FB62D37131C09_METHOD_2_DED295B47DC8B418_OFFSET UNITYSDK_OFFSET(0x8AE96B0)
#define CLASS_2_669FB62D37131C09_METHOD_2_E21AC6EE08DC160A_OFFSET UNITYSDK_OFFSET(0x8AE8BB0)
#define CLASS_2_669FB62D37131C09_METHOD_2_E26DE46BC5335E39_OFFSET UNITYSDK_OFFSET(0x8AEA0D0)
#define CLASS_2_669FB62D37131C09_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x8AE9EE0)
#define CLASS_2_669FB62D37131C09_METHOD_2_F174DD1ABB7D08BF_OFFSET UNITYSDK_OFFSET(0x8AE9240)
#define CLASS_2_669FB62D37131C09_ONCREATE_OFFSET UNITYSDK_OFFSET(0x8AE85A0)
#define CLASS_2_669FB62D37131C09__CCTOR_OFFSET UNITYSDK_OFFSET(0x8AE89F0)
#define CLASS_2_669FB62D37131C09__CTOR_OFFSET UNITYSDK_OFFSET(0x8AE88B0)

inline static constexpr unsigned int Class_2_669FB62D37131C09_TypeDefinitionIndex = 49681;

class Class_2_669FB62D37131C09 : public ::Foundation::SingletonDisposable_1<::Class_2_669FB62D37131C09*>
{
public:
	static ::System::Collections::Generic::HashSet_1<::UnityEngine::GameObject*>** StaticGet_Field_2_16()
	{
		return (::System::Collections::Generic::HashSet_1<::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_669FB62D37131C09_TypeDefinitionIndex)->GetStaticField(0x33840);
	}
	static ::System::Collections::Generic::HashSet_1<::UnityEngine::GameObject*>** StaticGet_Field_2_15()
	{
		return (::System::Collections::Generic::HashSet_1<::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_669FB62D37131C09_TypeDefinitionIndex)->GetStaticField(0x33848);
	}
	static ::System::Boolean* StaticGet_Field_2_13()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_669FB62D37131C09_TypeDefinitionIndex)->GetStaticField(0xCD00);
	}
	static ::System::Boolean* StaticGet_Field_2_10()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_669FB62D37131C09_TypeDefinitionIndex)->GetStaticField(0xCD01);
	}
	static ::System::Single* StaticGet_Field_2_6()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_669FB62D37131C09_TypeDefinitionIndex)->GetStaticField(0xCD04);
	}
	static ::System::Boolean* StaticGet_Field_2_9()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_669FB62D37131C09_TypeDefinitionIndex)->GetStaticField(0xCD08);
	}
	static ::System::Boolean* StaticGet_Field_2_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_669FB62D37131C09_TypeDefinitionIndex)->GetStaticField(0xCD09);
	}
	static ::System::Boolean* StaticGet_Field_2_5()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_669FB62D37131C09_TypeDefinitionIndex)->GetStaticField(0xCD0A);
	}
	static ::System::Boolean* StaticGet_Field_2_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_669FB62D37131C09_TypeDefinitionIndex)->GetStaticField(0xCD0B);
	}
	static ::System::Single* StaticGet_Field_2_7()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_669FB62D37131C09_TypeDefinitionIndex)->GetStaticField(0xCD0C);
	}
	static ::System::Single* StaticGet_Field_2_8()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_669FB62D37131C09_TypeDefinitionIndex)->GetStaticField(0xCD10);
	}
	static ::System::Single* StaticGet_Field_2_12()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_669FB62D37131C09_TypeDefinitionIndex)->GetStaticField(0xCD14);
	}
	static ::System::Single* StaticGet_Field_2_14()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_669FB62D37131C09_TypeDefinitionIndex)->GetStaticField(0xCD18);
	}
	static ::System::Single* StaticGet_Field_2_11()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_669FB62D37131C09_TypeDefinitionIndex)->GetStaticField(0xCD1C);
	}
	// static const ::System::Int32 Field_2_0 = 0x80; // 0x0
	// static const ::System::Single Field_2_1; // 0x0
	// static const ::System::Boolean Field_2_2; // 0x0
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_24; // 0x10
	::Class_1_5CF0EC0BFBEDEBC5<::UnityEngine::GameObject*, ::Class_1_64D03B7C3ED03921*>* Field_2_18; // 0x18
	::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::Class_3_6124F7AF16B30AB1*>* Field_2_17; // 0x20
	::Unity::Collections::NativeList_1<::Struct_2_6D798C312C19218B> Field_2_19; // 0x28
	::UnityEngine::Jobs::TransformAccessArray Field_2_20; // 0x38
	::Unity::Jobs::JobHandle Field_2_22; // 0x40
	::Unity::Collections::NativeList_1<::Struct_2_9B079B18CA73BD4E_1> Field_2_21; // 0x50
	::System::Single Field_2_23; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_669FB62D37131C09__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_669FB62D37131C09__CCTOR_OFFSET))();
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_669FB62D37131C09_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_669FB62D37131C09_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_E21AC6EE08DC160A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_669FB62D37131C09_METHOD_2_E21AC6EE08DC160A_OFFSET))(this);
	}

	::System::Void Method_2_DED295B47DC8B418(::Class_1_64D03B7C3ED03921* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_64D03B7C3ED03921*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_669FB62D37131C09_METHOD_2_DED295B47DC8B418_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_2_7BD23CE0FABFB62E(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_669FB62D37131C09_METHOD_2_7BD23CE0FABFB62E_OFFSET))(a1);
	}

	::System::Void Method_2_490CA2A07334B2BF(::Class_3_6124F7AF16B30AB1* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_6124F7AF16B30AB1*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_669FB62D37131C09_METHOD_2_490CA2A07334B2BF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_83A2D2FF4410F4BE(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_669FB62D37131C09_METHOD_2_83A2D2FF4410F4BE_OFFSET))(this, a1);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_669FB62D37131C09_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_2_E26DE46BC5335E39()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_669FB62D37131C09_METHOD_2_E26DE46BC5335E39_OFFSET))(this);
	}

	::System::Void Method_2_31D2DFCB01965F15(::Class_3_6124F7AF16B30AB1* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_6124F7AF16B30AB1*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_669FB62D37131C09_METHOD_2_31D2DFCB01965F15_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4BE99DDCF7F1FD88()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_669FB62D37131C09_METHOD_2_4BE99DDCF7F1FD88_OFFSET))(this);
	}

	static ::System::Void Method_2_7BD23CE0FABFB62E_1(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_669FB62D37131C09_METHOD_2_7BD23CE0FABFB62E_1_OFFSET))(a1);
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_669FB62D37131C09_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_2_66DE10154C51BE5C(::Class_1_64D03B7C3ED03921* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_64D03B7C3ED03921*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_669FB62D37131C09_METHOD_2_66DE10154C51BE5C_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_2_F174DD1ABB7D08BF(::UnityEngine::Vector3& a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_669FB62D37131C09_METHOD_2_F174DD1ABB7D08BF_OFFSET))(a1);
	}

	::System::Void Method_2_AAE2380A4AD9C102(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_669FB62D37131C09_METHOD_2_AAE2380A4AD9C102_OFFSET))(this, a1);
	}

	::System::Void Method_2_0899A62ED8A05541(::Class_1_64D03B7C3ED03921* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_64D03B7C3ED03921*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_669FB62D37131C09_METHOD_2_0899A62ED8A05541_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_5707280798BD7788(::UnityEngine::GameObject* a1, ::Class_1_64D03B7C3ED03921*& a2, ::System::Single& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::Class_1_64D03B7C3ED03921*&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_669FB62D37131C09_METHOD_2_5707280798BD7788_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_0E8E49198F3FD551(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_669FB62D37131C09_METHOD_2_0E8E49198F3FD551_OFFSET))(this, a1);
	}

	::System::Void Method_2_89D1F247B9D324EE_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_669FB62D37131C09_METHOD_2_89D1F247B9D324EE_1_OFFSET))(this);
	}

	::System::Void Method_2_CD8EB704BDED69B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_669FB62D37131C09_METHOD_2_CD8EB704BDED69B6_OFFSET))(this);
	}
};
