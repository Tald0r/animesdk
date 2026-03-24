#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class Class_1_54491056660B0A90;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_54491056660B0A90_STRUCT_2_99B24E1F1BCC2A08_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x37B950)
#define CLASS_1_54491056660B0A90_STRUCT_2_99B24E1F1BCC2A08_1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2613F0)

inline static constexpr unsigned int Class_1_54491056660B0A90_Struct_2_99B24E1F1BCC2A08_1_TypeDefinitionIndex = 66540;

struct alignas(8) Class_1_54491056660B0A90_Struct_2_99B24E1F1BCC2A08_1
{
	::Class_1_54491056660B0A90* Field_2_2; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x18
	::System::Int32 Field_2_0; // 0x28

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54491056660B0A90_STRUCT_2_99B24E1F1BCC2A08_1_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_54491056660B0A90_STRUCT_2_99B24E1F1BCC2A08_1_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
