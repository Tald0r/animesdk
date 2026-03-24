#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C04F87C132BA9A06_Enum_3_1C483F2753E8B2F7.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_208CC9941471731A_622;
class Class_2_2A212FCBF7BDBEDF;
class Class_2_2A212FCBF7BDBEDF_Class_1_2F7ED59C6FB13D68;
class Class_2_2A212FCBF7BDBEDF_Class_1_F1D9F4536221043B;
class Class_3_8C941823705A4CBB_19;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_2A212FCBF7BDBEDF_STRUCT_2_5D3E8BFAD3F30DDC_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x35ACE0)
#define CLASS_2_2A212FCBF7BDBEDF_STRUCT_2_5D3E8BFAD3F30DDC_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2613F0)

inline static constexpr unsigned int Class_2_2A212FCBF7BDBEDF_Struct_2_5D3E8BFAD3F30DDC_TypeDefinitionIndex = 41690;

struct alignas(8) Class_2_2A212FCBF7BDBEDF_Struct_2_5D3E8BFAD3F30DDC
{
	::Class_2_208CC9941471731A_622* Field_2_8; // 0x10
	::Class_2_2A212FCBF7BDBEDF_Class_1_2F7ED59C6FB13D68* Field_2_4; // 0x18
	::Class_2_2A212FCBF7BDBEDF* Field_2_2; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x28
	::System::Collections::Generic::List_1<::Class_3_8C941823705A4CBB_19*>* Field_2_5; // 0x38
	::Class_2_2A212FCBF7BDBEDF_Class_1_F1D9F4536221043B* Field_2_3; // 0x40
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_10; // 0x48
	::Il2CppArray<::Class_2_208CC9941471731A_622*>* Field_2_6; // 0x58
	::System::Int32 Field_2_7; // 0x60
	::System::Int32 Field_2_0; // 0x64
	::Class_2_C04F87C132BA9A06_Enum_3_1C483F2753E8B2F7 Field_2_9; // 0x68

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A212FCBF7BDBEDF_STRUCT_2_5D3E8BFAD3F30DDC_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_2A212FCBF7BDBEDF_STRUCT_2_5D3E8BFAD3F30DDC_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
