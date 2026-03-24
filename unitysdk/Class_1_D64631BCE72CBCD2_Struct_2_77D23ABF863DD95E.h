#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/ValueType.h"

class Class_1_7ECB9691B142D586;
class Class_1_D64631BCE72CBCD2;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_D64631BCE72CBCD2_STRUCT_2_77D23ABF863DD95E_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x308E40)
#define CLASS_1_D64631BCE72CBCD2_STRUCT_2_77D23ABF863DD95E_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2613F0)

inline static constexpr unsigned int Class_1_D64631BCE72CBCD2_Struct_2_77D23ABF863DD95E_TypeDefinitionIndex = 54897;

struct alignas(8) Class_1_D64631BCE72CBCD2_Struct_2_77D23ABF863DD95E
{
	::System::String* Field_2_6; // 0x10
	::Class_1_D64631BCE72CBCD2* Field_2_2; // 0x18
	::System::Action_1<::Class_1_7ECB9691B142D586*>* Field_2_8; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_11; // 0x28
	::System::Action* Field_2_10; // 0x38
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x40
	::System::Action_1<::Class_1_7ECB9691B142D586*>* Field_2_3; // 0x50
	::System::Action_1<::Class_1_7ECB9691B142D586*>* Field_2_9; // 0x58
	::System::Int32 Field_2_0; // 0x60
	::System::Boolean Field_2_7; // 0x64
	::System::Boolean Field_2_5; // 0x65
	::MoleMole::HollowChessboard::HollowCell Field_2_4; // 0x68

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D64631BCE72CBCD2_STRUCT_2_77D23ABF863DD95E_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_D64631BCE72CBCD2_STRUCT_2_77D23ABF863DD95E_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
