#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class Class_3_474F8DCAF16A784A_Class_1_0843937CB96DFE96;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_3_474F8DCAF16A784A_CLASS_1_0843937CB96DFE96_STRUCT_2_9ACE56868CDFC3B5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x35E790)
#define CLASS_3_474F8DCAF16A784A_CLASS_1_0843937CB96DFE96_STRUCT_2_9ACE56868CDFC3B5_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x259A50)

inline static constexpr unsigned int Class_3_474F8DCAF16A784A_Class_1_0843937CB96DFE96_Struct_2_9ACE56868CDFC3B5_TypeDefinitionIndex = 51919;

struct alignas(8) Class_3_474F8DCAF16A784A_Class_1_0843937CB96DFE96_Struct_2_9ACE56868CDFC3B5
{
	::Class_3_474F8DCAF16A784A_Class_1_0843937CB96DFE96* Field_2_2; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x18
	::System::Int32 Field_2_0; // 0x28

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_474F8DCAF16A784A_CLASS_1_0843937CB96DFE96_STRUCT_2_9ACE56868CDFC3B5_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_3_474F8DCAF16A784A_CLASS_1_0843937CB96DFE96_STRUCT_2_9ACE56868CDFC3B5_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
