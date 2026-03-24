#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"

namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_464B193BEA283187_GETRESULT_OFFSET UNITYSDK_OFFSET(0x91BDEF0)
#define CLASS_1_464B193BEA283187_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x91BE430)
#define CLASS_1_464B193BEA283187_METHOD_1_0F72EB07B305C2F1_1_OFFSET UNITYSDK_OFFSET(0x91BEE10)
#define CLASS_1_464B193BEA283187_METHOD_1_0F72EB07B305C2F1_OFFSET UNITYSDK_OFFSET(0x91BE7B0)
#define CLASS_1_464B193BEA283187_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x91BED60)
#define CLASS_1_464B193BEA283187_METHOD_1_7A96FCF0CDBA46BB_OFFSET UNITYSDK_OFFSET(0x91BF090)
#define CLASS_1_464B193BEA283187_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x91BDFE0)
#define CLASS_1_464B193BEA283187_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x91BE670)
#define CLASS_1_464B193BEA283187_METHOD_1_E8C89EF6EB960656_OFFSET UNITYSDK_OFFSET(0x91BEA30)
#define CLASS_1_464B193BEA283187_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x91BE530)
#define CLASS_1_464B193BEA283187_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x91BE5D0)
#define CLASS_1_464B193BEA283187__CTOR_OFFSET UNITYSDK_OFFSET(0x91BDAB0)

inline static constexpr unsigned int Class_1_464B193BEA283187_TypeDefinitionIndex = 44690;

class Class_1_464B193BEA283187 : public ::System::Object
{
public:
	::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Boolean> Field_1_0; // 0x10
	::System::Threading::CancellationTokenRegistration Field_1_3; // 0x30
	::System::Threading::CancellationToken Field_1_2; // 0x48
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_4; // 0x50
	::Foundation::Coroutine::CoroutineHandle Field_1_5; // 0x58
	::System::Boolean Field_1_1; // 0x5C

	::System::Void _ctor(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_464B193BEA283187__CTOR_OFFSET))(this, a1);
	}

	::System::Void GetResult(::System::Int16 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CLASS_1_464B193BEA283187_GETRESULT_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(::System::Int16 a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CLASS_1_464B193BEA283187_GETSTATUS_OFFSET))(this, a1);
	}

	::System::Void OnCompleted(::System::Action_1<::System::Object*>* a1, ::System::Object* a2, ::System::Int16 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Int16))((::PBYTE)hIl2Cpp + CLASS_1_464B193BEA283187_ONCOMPLETED_OFFSET))(this, a1, a2, a3);
	}

	::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus()
	{
		return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_464B193BEA283187_UNSAFEGETSTATUS_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_464B193BEA283187_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_0F72EB07B305C2F1(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_464B193BEA283187_METHOD_1_0F72EB07B305C2F1_OFFSET))(this, a1);
	}

	::System::Void Method_1_E8C89EF6EB960656(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_464B193BEA283187_METHOD_1_E8C89EF6EB960656_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_464B193BEA283187_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_0F72EB07B305C2F1_1(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_464B193BEA283187_METHOD_1_0F72EB07B305C2F1_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_464B193BEA283187_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_7A96FCF0CDBA46BB()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_464B193BEA283187_METHOD_1_7A96FCF0CDBA46BB_OFFSET))(this);
	}
};
