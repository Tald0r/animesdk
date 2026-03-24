#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_208CC9941471731A_339;
class Class_2_208CC9941471731A_97;
class Class_2_3CC769D284A54927_1;
class Class_2_3CC769D284A54927_1_Class_1_1A520E7D82BE4A56_9;
class Class_3_88D140F5E09465E1_4;
class Class_3_9F091E965E210217_17;
namespace MoleMole::Battle { class Entity; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class CancellationTokenSource; }

#define CLASS_2_3CC769D284A54927_1_STRUCT_2_048CE7BB1057CB3E_2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x38EDA0)
#define CLASS_2_3CC769D284A54927_1_STRUCT_2_048CE7BB1057CB3E_2_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2613F0)

inline static constexpr unsigned int Class_2_3CC769D284A54927_1_Struct_2_048CE7BB1057CB3E_2_TypeDefinitionIndex = 65080;

struct alignas(8) Class_2_3CC769D284A54927_1_Struct_2_048CE7BB1057CB3E_2
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_16; // 0x10
	::Cysharp::Threading::Tasks::UniTask Field_2_12; // 0x20
	::Class_2_208CC9941471731A_339* Field_2_8; // 0x30
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_3_88D140F5E09465E1_4*> Field_2_15; // 0x38
	::Cysharp::Threading::Tasks::UniTask Field_2_13; // 0x50
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x60
	::Class_3_9F091E965E210217_17* Field_2_6; // 0x70
	::System::Threading::CancellationTokenSource* Field_2_14; // 0x78
	::Class_3_88D140F5E09465E1_4* Field_2_10; // 0x80
	::Class_2_208CC9941471731A_97* Field_2_11; // 0x88
	::Class_2_3CC769D284A54927_1* Field_2_2; // 0x90
	::Class_2_3CC769D284A54927_1_Class_1_1A520E7D82BE4A56_9* Field_2_4; // 0x98
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Int32> Field_2_17; // 0xA0
	::MoleMole::Battle::Entity* Field_2_5; // 0xB0
	::System::Boolean Field_2_9; // 0xB8
	::System::Int32 Field_2_7; // 0xBC
	::System::Int32 Field_2_3; // 0xC0
	::System::Int32 Field_2_0; // 0xC4

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_STRUCT_2_048CE7BB1057CB3E_2_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_STRUCT_2_048CE7BB1057CB3E_2_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
