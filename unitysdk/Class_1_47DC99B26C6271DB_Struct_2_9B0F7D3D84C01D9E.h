#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_1_47DC99B26C6271DB;
class Class_1_7ECB9691B142D586;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class Texture; }

#define CLASS_1_47DC99B26C6271DB_STRUCT_2_9B0F7D3D84C01D9E_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x44A3D0)
#define CLASS_1_47DC99B26C6271DB_STRUCT_2_9B0F7D3D84C01D9E_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x259A50)

inline static constexpr unsigned int Class_1_47DC99B26C6271DB_Struct_2_9B0F7D3D84C01D9E_TypeDefinitionIndex = 52618;

struct alignas(8) Class_1_47DC99B26C6271DB_Struct_2_9B0F7D3D84C01D9E
{
	::System::Action_2<::UnityEngine::Texture*, ::System::Int32>* Field_2_7; // 0x10
	::System::Action_1<::Class_1_7ECB9691B142D586*>* Field_2_5; // 0x18
	::System::Action_1<::Class_1_7ECB9691B142D586*>* Field_2_6; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_12; // 0x28
	::System::String* Field_2_9; // 0x38
	::System::Action* Field_2_4; // 0x40
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x48
	::System::Action_2<::UnityEngine::Texture*, ::System::Int32>* Field_2_8; // 0x58
	::Class_1_47DC99B26C6271DB* Field_2_3; // 0x60
	::System::Threading::CancellationToken Field_2_11; // 0x68
	::System::Action_1<::Class_1_7ECB9691B142D586*>* Field_2_2; // 0x70
	::System::Boolean Field_2_10; // 0x78
	::System::Int32 Field_2_0; // 0x7C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB_STRUCT_2_9B0F7D3D84C01D9E_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB_STRUCT_2_9B0F7D3D84C01D9E_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
