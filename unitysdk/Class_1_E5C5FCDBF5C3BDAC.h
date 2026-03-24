#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_A1B83C8DEA7CC5F6_1;
namespace System { class Action; }
namespace System::Threading { class CancellationTokenSource; }

#define CLASS_1_E5C5FCDBF5C3BDAC_METHOD_1_459C79521BFE514E_OFFSET UNITYSDK_OFFSET(0xA14BA30)
#define CLASS_1_E5C5FCDBF5C3BDAC_METHOD_1_4867D67F27947ACE_OFFSET UNITYSDK_OFFSET(0xA14C030)
#define CLASS_1_E5C5FCDBF5C3BDAC_METHOD_1_4E80C9CC9E7CA21F_OFFSET UNITYSDK_OFFSET(0xA14C1C0)
#define CLASS_1_E5C5FCDBF5C3BDAC_METHOD_1_830EF230132758F4_OFFSET UNITYSDK_OFFSET(0xA14B6A0)
#define CLASS_1_E5C5FCDBF5C3BDAC_METHOD_1_CFE6FB160FFF5938_OFFSET UNITYSDK_OFFSET(0xA14B940)
#define CLASS_1_E5C5FCDBF5C3BDAC_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0xA14B8D0)
#define CLASS_1_E5C5FCDBF5C3BDAC__CTOR_OFFSET UNITYSDK_OFFSET(0xA14B690)

inline static constexpr unsigned int Class_1_E5C5FCDBF5C3BDAC_TypeDefinitionIndex = 54943;

class Class_1_E5C5FCDBF5C3BDAC : public ::System::Object
{
public:
	::Class_1_A1B83C8DEA7CC5F6_1* Field_1_0; // 0x10
	::System::Action* Field_1_4; // 0x18
	::System::Threading::CancellationTokenSource* Field_1_5; // 0x20
	::System::Single Field_1_2; // 0x28
	::Foundation::Coroutine::CoroutineHandle Field_1_1; // 0x2C
	::System::Single Field_1_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5C5FCDBF5C3BDAC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_830EF230132758F4(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E5C5FCDBF5C3BDAC_METHOD_1_830EF230132758F4_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_A1B83C8DEA7CC5F6_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A1B83C8DEA7CC5F6_1*))((::PBYTE)hIl2Cpp + CLASS_1_E5C5FCDBF5C3BDAC_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_1_CFE6FB160FFF5938()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5C5FCDBF5C3BDAC_METHOD_1_CFE6FB160FFF5938_OFFSET))(this);
	}

	::System::Void Method_1_459C79521BFE514E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E5C5FCDBF5C3BDAC_METHOD_1_459C79521BFE514E_OFFSET))(this, a1);
	}

	::System::Void Method_1_4867D67F27947ACE(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E5C5FCDBF5C3BDAC_METHOD_1_4867D67F27947ACE_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_4E80C9CC9E7CA21F(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Threading::CancellationTokenSource* a4)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Threading::CancellationTokenSource*))((::PBYTE)hIl2Cpp + CLASS_1_E5C5FCDBF5C3BDAC_METHOD_1_4E80C9CC9E7CA21F_OFFSET))(this, a1, a2, a3, a4);
	}
};
