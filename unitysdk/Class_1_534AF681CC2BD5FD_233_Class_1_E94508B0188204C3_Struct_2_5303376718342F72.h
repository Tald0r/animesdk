#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_STRUCT_2_5303376718342F72_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x36D450)
#define CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_STRUCT_2_5303376718342F72_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2613F0)

inline static constexpr unsigned int Class_1_534AF681CC2BD5FD_233_Class_1_E94508B0188204C3_Struct_2_5303376718342F72_TypeDefinitionIndex = 64001;

struct alignas(8) Class_1_534AF681CC2BD5FD_233_Class_1_E94508B0188204C3_Struct_2_5303376718342F72
{
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_2_8; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_10; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Boolean> Field_2_1; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_2_9; // 0x40
	::System::Int32 Field_2_6; // 0x48
	::System::Single Field_2_5; // 0x4C
	::UnityEngine::Vector3 Field_2_3; // 0x50
	::System::Single Field_2_7; // 0x5C
	::System::Int32 Field_2_0; // 0x60
	::UnityEngine::Vector3 Field_2_2; // 0x64
	::System::Single Field_2_4; // 0x70

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_STRUCT_2_5303376718342F72_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_STRUCT_2_5303376718342F72_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
