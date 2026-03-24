#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class Class_2_9D73084CAFECD5DE;
class Class_3_1B2A8F1569E55080;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_9D73084CAFECD5DE_STRUCT_2_ADA0DDC01EC4BFFB_3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x35E260)
#define CLASS_2_9D73084CAFECD5DE_STRUCT_2_ADA0DDC01EC4BFFB_3_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x308FB0)

inline static constexpr unsigned int Class_2_9D73084CAFECD5DE_Struct_2_ADA0DDC01EC4BFFB_3_TypeDefinitionIndex = 52175;

struct alignas(8) Class_2_9D73084CAFECD5DE_Struct_2_ADA0DDC01EC4BFFB_3
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x10
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder Field_2_1; // 0x20
	::Class_3_1B2A8F1569E55080* Field_2_3; // 0x40
	::Class_2_9D73084CAFECD5DE* Field_2_2; // 0x48
	::System::Int32 Field_2_0; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D73084CAFECD5DE_STRUCT_2_ADA0DDC01EC4BFFB_3_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_9D73084CAFECD5DE_STRUCT_2_ADA0DDC01EC4BFFB_3_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
