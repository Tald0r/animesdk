#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_2_39CEA7F613ED7FAD;
class Class_2_39CEA7F613ED7FAD_Class_1_ECFA015AF9D9505A;
namespace System { class Action; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class Renderer; }

#define CLASS_2_39CEA7F613ED7FAD_STRUCT_2_3A7CCFC517574D11_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x381FD0)
#define CLASS_2_39CEA7F613ED7FAD_STRUCT_2_3A7CCFC517574D11_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2613F0)

inline static constexpr unsigned int Class_2_39CEA7F613ED7FAD_Struct_2_3A7CCFC517574D11_TypeDefinitionIndex = 38929;

struct alignas(8) Class_2_39CEA7F613ED7FAD_Struct_2_3A7CCFC517574D11
{
	::Class_2_39CEA7F613ED7FAD_Class_1_ECFA015AF9D9505A* Field_2_7; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_12; // 0x18
	::Il2CppArray<::UnityEngine::Renderer*>* Field_2_4; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x30
	::System::Threading::CancellationToken Field_2_8; // 0x40
	::Class_2_39CEA7F613ED7FAD* Field_2_2; // 0x48
	::System::Action* Field_2_11; // 0x50
	::System::Action* Field_2_6; // 0x58
	::System::Boolean Field_2_3; // 0x60
	::System::Int32 Field_2_10; // 0x64
	::System::Int32 Field_2_0; // 0x68
	::System::Single Field_2_5; // 0x6C
	::System::Single Field_2_9; // 0x70

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_39CEA7F613ED7FAD_STRUCT_2_3A7CCFC517574D11_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_39CEA7F613ED7FAD_STRUCT_2_3A7CCFC517574D11_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
