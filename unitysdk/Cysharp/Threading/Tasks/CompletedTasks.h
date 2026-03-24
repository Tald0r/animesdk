#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Object.h"

#define CYSHARP_THREADING_TASKS_COMPLETEDTASKS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B6FBA40)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int CompletedTasks_TypeDefinitionIndex = 28098;

	class CompletedTasks : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Int32>* StaticGet_One()
		{
			return (::Cysharp::Threading::Tasks::UniTask_1<::System::Int32>*)Il2CppClass::FromTypeDefinitionIndex(CompletedTasks_TypeDefinitionIndex)->GetStaticField(0x21080);
		}
		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>* StaticGet_False()
		{
			return (::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>*)Il2CppClass::FromTypeDefinitionIndex(CompletedTasks_TypeDefinitionIndex)->GetStaticField(0x21090);
		}
		static ::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::AsyncUnit>* StaticGet_AsyncUnit()
		{
			return (::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::AsyncUnit>*)Il2CppClass::FromTypeDefinitionIndex(CompletedTasks_TypeDefinitionIndex)->GetStaticField(0x210A0);
		}
		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Int32>* StaticGet_Zero()
		{
			return (::Cysharp::Threading::Tasks::UniTask_1<::System::Int32>*)Il2CppClass::FromTypeDefinitionIndex(CompletedTasks_TypeDefinitionIndex)->GetStaticField(0x210B0);
		}
		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Int32>* StaticGet_MinusOne()
		{
			return (::Cysharp::Threading::Tasks::UniTask_1<::System::Int32>*)Il2CppClass::FromTypeDefinitionIndex(CompletedTasks_TypeDefinitionIndex)->GetStaticField(0x210C0);
		}
		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>* StaticGet_True()
		{
			return (::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>*)Il2CppClass::FromTypeDefinitionIndex(CompletedTasks_TypeDefinitionIndex)->GetStaticField(0x210D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_COMPLETEDTASKS__CCTOR_OFFSET))();
		}
	};
}
