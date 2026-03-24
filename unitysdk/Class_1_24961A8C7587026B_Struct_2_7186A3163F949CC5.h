#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/ValueType.h"

class Class_1_24961A8C7587026B_Class_1_CFC78C1677C25A47;
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_24961A8C7587026B_STRUCT_2_7186A3163F949CC5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x37C6C0)
#define CLASS_1_24961A8C7587026B_STRUCT_2_7186A3163F949CC5_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2613F0)

inline static constexpr unsigned int Class_1_24961A8C7587026B_Struct_2_7186A3163F949CC5_TypeDefinitionIndex = 61707;

struct alignas(8) Class_1_24961A8C7587026B_Struct_2_7186A3163F949CC5
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::String*> Field_2_1; // 0x10
	::Foundation::AssetPath Field_2_2; // 0x28
	::Class_1_24961A8C7587026B_Class_1_CFC78C1677C25A47* Field_2_3; // 0x38
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x40
	::System::Int32 Field_2_0; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24961A8C7587026B_STRUCT_2_7186A3163F949CC5_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_24961A8C7587026B_STRUCT_2_7186A3163F949CC5_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
