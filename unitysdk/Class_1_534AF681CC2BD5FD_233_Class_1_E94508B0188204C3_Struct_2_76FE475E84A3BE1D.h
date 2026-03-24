#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_534AF681CC2BD5FD_233_Class_1_E94508B0188204C3_Struct_2_07071E4F5DB33E02.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_534AF681CC2BD5FD_233_Class_1_E94508B0188204C3;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_STRUCT_2_76FE475E84A3BE1D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x35D4C0)
#define CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_STRUCT_2_76FE475E84A3BE1D_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2613F0)

inline static constexpr unsigned int Class_1_534AF681CC2BD5FD_233_Class_1_E94508B0188204C3_Struct_2_76FE475E84A3BE1D_TypeDefinitionIndex = 63999;

struct alignas(8) Class_1_534AF681CC2BD5FD_233_Class_1_E94508B0188204C3_Struct_2_76FE475E84A3BE1D
{
	::Class_1_534AF681CC2BD5FD_233_Class_1_E94508B0188204C3_Struct_2_07071E4F5DB33E02 Field_2_9; // 0x10
	::Class_1_534AF681CC2BD5FD_233_Class_1_E94508B0188204C3* Field_2_2; // 0x50
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Boolean> Field_2_14; // 0x58
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x68
	::System::Boolean Field_2_3; // 0x78
	::System::Boolean Field_2_12; // 0x79
	::System::Boolean Field_2_6; // 0x7A
	::System::Int32 Field_2_4; // 0x7C
	::System::Int32 Field_2_11; // 0x80
	::System::Single Field_2_13; // 0x84
	::UnityEngine::Vector3 Field_2_5; // 0x88
	::System::Int32 Field_2_10; // 0x94
	::System::Int32 Field_2_8; // 0x98
	::UnityEngine::Vector3 Field_2_7; // 0x9C
	::System::Int32 Field_2_0; // 0xA8

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_STRUCT_2_76FE475E84A3BE1D_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_233_CLASS_1_E94508B0188204C3_STRUCT_2_76FE475E84A3BE1D_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
