#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace System { class Exception; }

#define MOLEMOLE_UTILS_TYPEERASEDCOMPLETIONSOURCEIMPL_GETNEXTTASK_OFFSET UNITYSDK_OFFSET(0x3863E0)
#define MOLEMOLE_UTILS_TYPEERASEDCOMPLETIONSOURCEIMPL_GETTASK_OFFSET UNITYSDK_OFFSET(0x386340)
#define MOLEMOLE_UTILS_TYPEERASEDCOMPLETIONSOURCEIMPL_ISTRIGGERED_OFFSET UNITYSDK_OFFSET(0x3862B0)
#define MOLEMOLE_UTILS_TYPEERASEDCOMPLETIONSOURCEIMPL_TRYSETCANCELED_OFFSET UNITYSDK_OFFSET(0x386320)
#define MOLEMOLE_UTILS_TYPEERASEDCOMPLETIONSOURCEIMPL_TRYSETEXCEPTION_OFFSET UNITYSDK_OFFSET(0x386330)
#define MOLEMOLE_UTILS_TYPEERASEDCOMPLETIONSOURCEIMPL_TRYSETRESULT_OFFSET UNITYSDK_OFFSET(0x386480)
#define MOLEMOLE_UTILS_TYPEERASEDCOMPLETIONSOURCEIMPL__CTOR_OFFSET UNITYSDK_OFFSET(0x386280)

namespace MoleMole::Utils
{
	inline static constexpr unsigned int TypeErasedCompletionSourceImpl_TypeDefinitionIndex = 70334;

	struct alignas(8) TypeErasedCompletionSourceImpl
	{
		::Cysharp::Threading::Tasks::UniTaskCompletionSource* _next; // 0x10
		::Cysharp::Threading::Tasks::UniTaskCompletionSource* _last; // 0x18

		/*
		::System::Void _ctor(::MoleMole::Utils::DefaultConstruct _)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Utils::DefaultConstruct))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_TYPEERASEDCOMPLETIONSOURCEIMPL__CTOR_OFFSET))(this, _);
		}
		*/

		::System::Boolean IsTriggered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_TYPEERASEDCOMPLETIONSOURCEIMPL_ISTRIGGERED_OFFSET))(this);
		}

		/*
		::System::Boolean TrySetCanceled(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_TYPEERASEDCOMPLETIONSOURCEIMPL_TRYSETCANCELED_OFFSET))(this, cancellationToken);
		}
		*/

		::System::Boolean TrySetException(::System::Exception* exception)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_TYPEERASEDCOMPLETIONSOURCEIMPL_TRYSETEXCEPTION_OFFSET))(this, exception);
		}

		/*
		::Cysharp::Threading::Tasks::UniTask GetTask()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_TYPEERASEDCOMPLETIONSOURCEIMPL_GETTASK_OFFSET))(this);
		}
		*/

		/*
		::Cysharp::Threading::Tasks::UniTask GetNextTask()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_TYPEERASEDCOMPLETIONSOURCEIMPL_GETNEXTTASK_OFFSET))(this);
		}
		*/

		::System::Boolean TrySetResult()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_TYPEERASEDCOMPLETIONSOURCEIMPL_TRYSETRESULT_OFFSET))(this);
		}
	};
}
