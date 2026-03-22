#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/ValueType.h"

class Class_5_0DB196DE3B98F87A;
class Class_5_2169ABC757988FED;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_5_0DB196DE3B98F87A_STRUCT_2_60511C0471F22FAC_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3796B0)
#define CLASS_5_0DB196DE3B98F87A_STRUCT_2_60511C0471F22FAC_1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x259A50)

inline static constexpr unsigned int Class_5_0DB196DE3B98F87A_Struct_2_60511C0471F22FAC_1_TypeDefinitionIndex = 76933;

struct alignas(8) Class_5_0DB196DE3B98F87A_Struct_2_60511C0471F22FAC_1
{
	::MoleMole::HollowChessboard::HollowEntity* Field_2_4; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_6; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x28
	::Class_5_0DB196DE3B98F87A* Field_2_2; // 0x38
	::System::Collections::Generic::List_1<::Class_5_2169ABC757988FED*>* Field_2_5; // 0x40
	::System::Int32 Field_2_0; // 0x48
	::MoleMole::HollowChessboard::HollowCell Field_2_3; // 0x4C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_STRUCT_2_60511C0471F22FAC_1_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_STRUCT_2_60511C0471F22FAC_1_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
