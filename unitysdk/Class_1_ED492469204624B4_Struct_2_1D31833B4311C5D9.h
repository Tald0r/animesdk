#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Enum_3_ABCAEFDF06E3479A.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_307;
class Class_1_C98C01B00CFF7D8A;
class Class_1_ED492469204624B4;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_ED492469204624B4_STRUCT_2_1D31833B4311C5D9_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x45CB00)
#define CLASS_1_ED492469204624B4_STRUCT_2_1D31833B4311C5D9_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2613F0)

inline static constexpr unsigned int Class_1_ED492469204624B4_Struct_2_1D31833B4311C5D9_TypeDefinitionIndex = 74944;

struct alignas(8) Class_1_ED492469204624B4_Struct_2_1D31833B4311C5D9
{
	::Class_0_16E4307DCC419505_307* Field_2_4; // 0x10
	::Class_1_ED492469204624B4* Field_2_2; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_6; // 0x30
	::Class_1_C98C01B00CFF7D8A* Field_2_5; // 0x40
	::Enum_3_ABCAEFDF06E3479A Field_2_3; // 0x48
	::System::Int32 Field_2_0; // 0x4C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED492469204624B4_STRUCT_2_1D31833B4311C5D9_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_ED492469204624B4_STRUCT_2_1D31833B4311C5D9_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
