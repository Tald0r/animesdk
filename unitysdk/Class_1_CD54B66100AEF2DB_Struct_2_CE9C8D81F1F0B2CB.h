#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/System/ValueType.h"

class Class_1_CD54B66100AEF2DB;
namespace MoleMole::Config { class ConfigShootingGroundCamera; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_CD54B66100AEF2DB_STRUCT_2_CE9C8D81F1F0B2CB_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3A2F10)
#define CLASS_1_CD54B66100AEF2DB_STRUCT_2_CE9C8D81F1F0B2CB_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2613F0)

inline static constexpr unsigned int Class_1_CD54B66100AEF2DB_Struct_2_CE9C8D81F1F0B2CB_TypeDefinitionIndex = 52830;

struct alignas(8) Class_1_CD54B66100AEF2DB_Struct_2_CE9C8D81F1F0B2CB
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_5; // 0x10
	::Class_1_CD54B66100AEF2DB* Field_2_2; // 0x20
	::PipelineCamera::ScopedDelegateHandle Field_2_4; // 0x28
	::MoleMole::Config::ConfigShootingGroundCamera* Field_2_3; // 0x30
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_1; // 0x38
	::System::Int32 Field_2_0; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD54B66100AEF2DB_STRUCT_2_CE9C8D81F1F0B2CB_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_CD54B66100AEF2DB_STRUCT_2_CE9C8D81F1F0B2CB_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
