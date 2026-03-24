#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

class Class_2_A598F7625AE8DE78_Class_1_32BCD41779DEEDDF;
class Class_2_A598F7625AE8DE78_Class_1_CF60BFEFF7CB7091;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Net { class WebResponse; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_A598F7625AE8DE78_STRUCT_2_0FE7CC2285618153_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x35F750)
#define CLASS_2_A598F7625AE8DE78_STRUCT_2_0FE7CC2285618153_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2613F0)

inline static constexpr unsigned int Class_2_A598F7625AE8DE78_Struct_2_0FE7CC2285618153_TypeDefinitionIndex = 71361;

struct alignas(8) Class_2_A598F7625AE8DE78_Struct_2_0FE7CC2285618153
{
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_2_4; // 0x10
	::System::String* Field_2_2; // 0x18
	::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::WebResponse*> Field_2_6; // 0x20
	::Class_2_A598F7625AE8DE78_Class_1_CF60BFEFF7CB7091* Field_2_5; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::Class_2_A598F7625AE8DE78_Class_1_32BCD41779DEEDDF*> Field_2_1; // 0x30
	::System::Single Field_2_3; // 0x48
	::System::Int32 Field_2_0; // 0x4C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A598F7625AE8DE78_STRUCT_2_0FE7CC2285618153_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_A598F7625AE8DE78_STRUCT_2_0FE7CC2285618153_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
