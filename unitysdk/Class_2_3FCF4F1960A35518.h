#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8A3658A741325FC2.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_A00B784DE48ED0A8;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_3FCF4F1960A35518_METHOD_2_6FB4CBF7AA725D65_OFFSET UNITYSDK_OFFSET(0x9090B60)
#define CLASS_2_3FCF4F1960A35518_METHOD_2_ECA1CA7E247516D3_OFFSET UNITYSDK_OFFSET(0x9090A80)
#define CLASS_2_3FCF4F1960A35518__CTOR_OFFSET UNITYSDK_OFFSET(0x9090A70)

inline static constexpr unsigned int Class_2_3FCF4F1960A35518_TypeDefinitionIndex = 36977;

class Class_2_3FCF4F1960A35518 : public ::Class_1_8A3658A741325FC2
{
public:
	static ::UnityEngine::Vector3* StaticGet_Field_2_2()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Class_2_3FCF4F1960A35518_TypeDefinitionIndex)->GetStaticField(0x10000);
	}
	static ::UnityEngine::Vector3* StaticGet_Field_2_1()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Class_2_3FCF4F1960A35518_TypeDefinitionIndex)->GetStaticField(0x1000C);
	}
	::Foundation::Coroutine::CoroutineHandle Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3FCF4F1960A35518__CTOR_OFFSET))(this);
	}

	static ::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> Method_2_ECA1CA7E247516D3(::Class_1_A00B784DE48ED0A8* a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a2, ::System::Int32 a3)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::Class_1_A00B784DE48ED0A8*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3FCF4F1960A35518_METHOD_2_ECA1CA7E247516D3_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_A00B784DE48ED0A8* Method_2_6FB4CBF7AA725D65(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Int32 a3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a4, ::System::Int32 a5)
	{
		return ((::Class_1_A00B784DE48ED0A8*(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3FCF4F1960A35518_METHOD_2_6FB4CBF7AA725D65_OFFSET))(a1, a2, a3, a4, a5);
	}
};
