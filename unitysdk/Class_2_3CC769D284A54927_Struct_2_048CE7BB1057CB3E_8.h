#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_208CC9941471731A_320;
class Class_2_208CC9941471731A_339;
class Class_2_3CC769D284A54927;
class Class_2_3CC769D284A54927_Class_1_0755F51D2CF0D842_4;
class Class_3_48A3D3A34C52331D_50;
class Class_3_9D33A2E94B3E53DC;
namespace MoleMole::Battle { class Entity; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class CancellationTokenSource; }

#define CLASS_2_3CC769D284A54927_STRUCT_2_048CE7BB1057CB3E_8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2F1930)
#define CLASS_2_3CC769D284A54927_STRUCT_2_048CE7BB1057CB3E_8_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2613F0)

inline static constexpr unsigned int Class_2_3CC769D284A54927_Struct_2_048CE7BB1057CB3E_8_TypeDefinitionIndex = 67774;

struct alignas(8) Class_2_3CC769D284A54927_Struct_2_048CE7BB1057CB3E_8
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x10
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Int32> Field_2_16; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_15; // 0x30
	::Cysharp::Threading::Tasks::UniTask Field_2_12; // 0x40
	::Cysharp::Threading::Tasks::UniTask Field_2_11; // 0x50
	::Class_2_3CC769D284A54927* Field_2_2; // 0x60
	::MoleMole::Battle::Entity* Field_2_5; // 0x68
	::Class_2_3CC769D284A54927_Class_1_0755F51D2CF0D842_4* Field_2_4; // 0x70
	::Class_3_9D33A2E94B3E53DC* Field_2_6; // 0x78
	::Class_2_208CC9941471731A_339* Field_2_8; // 0x80
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_3_48A3D3A34C52331D_50*> Field_2_14; // 0x88
	::Class_2_208CC9941471731A_320* Field_2_10; // 0xA0
	::System::Threading::CancellationTokenSource* Field_2_13; // 0xA8
	::Class_3_48A3D3A34C52331D_50* Field_2_9; // 0xB0
	::System::Int32 Field_2_7; // 0xB8
	::System::Int32 Field_2_0; // 0xBC
	::System::Int32 Field_2_3; // 0xC0

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_STRUCT_2_048CE7BB1057CB3E_8_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_STRUCT_2_048CE7BB1057CB3E_8_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
