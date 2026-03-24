#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/ValueType.h"

class Class_2_74BD0166ECF298D9;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_74BD0166ECF298D9_STRUCT_2_D77D6021057D6BB2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3428A0)
#define CLASS_2_74BD0166ECF298D9_STRUCT_2_D77D6021057D6BB2_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2613F0)

inline static constexpr unsigned int Class_2_74BD0166ECF298D9_Struct_2_D77D6021057D6BB2_TypeDefinitionIndex = 51455;

struct alignas(8) Class_2_74BD0166ECF298D9_Struct_2_D77D6021057D6BB2
{
	::Foundation::ViewObject::ViewObjectHandle Field_2_4; // 0x10
	::System::Collections::Generic::IEnumerable_1<::System::UInt32>* Field_2_2; // 0x20
	::Class_2_74BD0166ECF298D9* Field_2_3; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x30
	::System::Int32 Field_2_0; // 0x40
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter Field_2_5; // 0x44

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74BD0166ECF298D9_STRUCT_2_D77D6021057D6BB2_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_74BD0166ECF298D9_STRUCT_2_D77D6021057D6BB2_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
