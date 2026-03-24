#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture2D; }

#define CLASS_1_DC89F79F3CA3BF7A_METHOD_1_08D88ECD5B34198F_OFFSET UNITYSDK_OFFSET(0xB54D6C0)
#define CLASS_1_DC89F79F3CA3BF7A_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0xB54DA90)
#define CLASS_1_DC89F79F3CA3BF7A_METHOD_1_57F015DFC718ABA3_OFFSET UNITYSDK_OFFSET(0xB54CA20)
#define CLASS_1_DC89F79F3CA3BF7A_METHOD_1_5A94436233800AC6_OFFSET UNITYSDK_OFFSET(0xB54C7B0)
#define CLASS_1_DC89F79F3CA3BF7A_METHOD_1_6055A93732CC885D_OFFSET UNITYSDK_OFFSET(0xB54D030)
#define CLASS_1_DC89F79F3CA3BF7A_METHOD_1_703A0703601D757D_OFFSET UNITYSDK_OFFSET(0xB54D9E0)
#define CLASS_1_DC89F79F3CA3BF7A_METHOD_1_76CD9B9D1269FA90_1_OFFSET UNITYSDK_OFFSET(0xB54DCC0)
#define CLASS_1_DC89F79F3CA3BF7A_METHOD_1_76CD9B9D1269FA90_OFFSET UNITYSDK_OFFSET(0xB54DAB0)
#define CLASS_1_DC89F79F3CA3BF7A_METHOD_1_7AEA4B2B25797605_OFFSET UNITYSDK_OFFSET(0xB54CEE0)
#define CLASS_1_DC89F79F3CA3BF7A_METHOD_1_80C89A8348CDA98E_OFFSET UNITYSDK_OFFSET(0xB54D790)
#define CLASS_1_DC89F79F3CA3BF7A_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xB54D970)
#define CLASS_1_DC89F79F3CA3BF7A_METHOD_1_97DA323BD1E7817B_OFFSET UNITYSDK_OFFSET(0xB54D480)
#define CLASS_1_DC89F79F3CA3BF7A_METHOD_1_B06F516E4459C742_OFFSET UNITYSDK_OFFSET(0xB54D330)
#define CLASS_1_DC89F79F3CA3BF7A_METHOD_1_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0xB54DE80)
#define CLASS_1_DC89F79F3CA3BF7A_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0xB54D470)
#define CLASS_1_DC89F79F3CA3BF7A_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB54D400)
#define CLASS_1_DC89F79F3CA3BF7A_METHOD_1_CF6556369B8D1E38_OFFSET UNITYSDK_OFFSET(0xB54C6B0)
#define CLASS_1_DC89F79F3CA3BF7A_METHOD_1_DC715239B8B98D9C_OFFSET UNITYSDK_OFFSET(0xB54D0A0)
#define CLASS_1_DC89F79F3CA3BF7A_METHOD_1_E02D9A7C491EACE0_OFFSET UNITYSDK_OFFSET(0xB54D5A0)
#define CLASS_1_DC89F79F3CA3BF7A__CTOR_1_OFFSET UNITYSDK_OFFSET(0xB54C490)
#define CLASS_1_DC89F79F3CA3BF7A__CTOR_OFFSET UNITYSDK_OFFSET(0xB54C360)

inline static constexpr unsigned int Class_1_DC89F79F3CA3BF7A_TypeDefinitionIndex = 64577;

class Class_1_DC89F79F3CA3BF7A : public ::System::Object
{
public:
	::UnityEngine::Material* Field_1_10; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_11; // 0x18
	::UnityEngine::Renderer* Field_1_3; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>* Field_1_2; // 0x28
	::System::Int32 Field_1_5; // 0x30
	::System::Int32 Field_1_8; // 0x34
	::System::Single Field_1_9; // 0x38
	::System::Int32 Field_1_1; // 0x3C
	::System::Boolean Field_1_7; // 0x40
	::System::Boolean Field_1_6; // 0x41
	::System::Boolean Field_1_4; // 0x42
	::System::Int32 Field_1_0; // 0x44

	::System::Void _ctor(::UnityEngine::Renderer* a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Boolean a6, ::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>* a7, ::System::Int32 a8)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DC89F79F3CA3BF7A__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void _ctor_1(::UnityEngine::Renderer* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>* a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DC89F79F3CA3BF7A__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_CF6556369B8D1E38(::UnityEngine::Renderer* a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Boolean a6, ::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>* a7)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + CLASS_1_DC89F79F3CA3BF7A_METHOD_1_CF6556369B8D1E38_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_1_7AEA4B2B25797605()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC89F79F3CA3BF7A_METHOD_1_7AEA4B2B25797605_OFFSET))(this);
	}

	::System::Void Method_1_6055A93732CC885D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC89F79F3CA3BF7A_METHOD_1_6055A93732CC885D_OFFSET))(this);
	}

	::System::Void Method_1_B06F516E4459C742()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC89F79F3CA3BF7A_METHOD_1_B06F516E4459C742_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC89F79F3CA3BF7A_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_5A94436233800AC6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC89F79F3CA3BF7A_METHOD_1_5A94436233800AC6_OFFSET))(this);
	}

	::System::Void Method_1_08D88ECD5B34198F(::UnityEngine::Renderer* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + CLASS_1_DC89F79F3CA3BF7A_METHOD_1_08D88ECD5B34198F_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::UnityEngine::Texture2D* Method_1_80C89A8348CDA98E()
	{
		return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC89F79F3CA3BF7A_METHOD_1_80C89A8348CDA98E_OFFSET))(this);
	}

	::System::Void Method_1_57F015DFC718ABA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC89F79F3CA3BF7A_METHOD_1_57F015DFC718ABA3_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC89F79F3CA3BF7A_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC89F79F3CA3BF7A_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_76CD9B9D1269FA90(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DC89F79F3CA3BF7A_METHOD_1_76CD9B9D1269FA90_OFFSET))(this, a1);
	}

	::System::Void Method_1_76CD9B9D1269FA90_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DC89F79F3CA3BF7A_METHOD_1_76CD9B9D1269FA90_1_OFFSET))(this, a1);
	}

	::UnityEngine::Material* Method_1_703A0703601D757D()
	{
		return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC89F79F3CA3BF7A_METHOD_1_703A0703601D757D_OFFSET))(this);
	}

	::System::Void Method_1_DC715239B8B98D9C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC89F79F3CA3BF7A_METHOD_1_DC715239B8B98D9C_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC89F79F3CA3BF7A_METHOD_1_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::Il2CppArray<::UnityEngine::Material*>* Method_1_97DA323BD1E7817B()
	{
		return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC89F79F3CA3BF7A_METHOD_1_97DA323BD1E7817B_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC89F79F3CA3BF7A_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Void Method_1_E02D9A7C491EACE0(::Il2CppArray<::UnityEngine::Material*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + CLASS_1_DC89F79F3CA3BF7A_METHOD_1_E02D9A7C491EACE0_OFFSET))(this, a1);
	}
};
