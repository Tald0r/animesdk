#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_477098397AE68C7E;
class Class_2_9D73084CAFECD5DE_Class_1_BE8BAB4F87EAB1EC;
class Class_3_0886A771C4D53727_22;
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_9D73084CAFECD5DE_STRUCT_2_95B76D574059C221_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x36F380)
#define CLASS_2_9D73084CAFECD5DE_STRUCT_2_95B76D574059C221_1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2613F0)

inline static constexpr unsigned int Class_2_9D73084CAFECD5DE_Struct_2_95B76D574059C221_1_TypeDefinitionIndex = 52174;

struct alignas(8) Class_2_9D73084CAFECD5DE_Struct_2_95B76D574059C221_1
{
	::Class_2_477098397AE68C7E* Field_2_5; // 0x10
	::System::String* Field_2_4; // 0x18
	::Class_2_9D73084CAFECD5DE_Class_1_BE8BAB4F87EAB1EC* Field_2_3; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x28
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_6; // 0x38
	::Class_3_0886A771C4D53727_22* Field_2_2; // 0x48
	::System::Int32 Field_2_0; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D73084CAFECD5DE_STRUCT_2_95B76D574059C221_1_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_9D73084CAFECD5DE_STRUCT_2_95B76D574059C221_1_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
