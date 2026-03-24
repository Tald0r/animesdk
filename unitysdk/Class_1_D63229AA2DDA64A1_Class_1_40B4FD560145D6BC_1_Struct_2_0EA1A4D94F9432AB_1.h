#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class Class_1_D63229AA2DDA64A1_Class_1_40B4FD560145D6BC_1;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_D63229AA2DDA64A1_CLASS_1_40B4FD560145D6BC_1_STRUCT_2_0EA1A4D94F9432AB_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x332790)
#define CLASS_1_D63229AA2DDA64A1_CLASS_1_40B4FD560145D6BC_1_STRUCT_2_0EA1A4D94F9432AB_1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2613F0)

inline static constexpr unsigned int Class_1_D63229AA2DDA64A1_Class_1_40B4FD560145D6BC_1_Struct_2_0EA1A4D94F9432AB_1_TypeDefinitionIndex = 76081;

struct alignas(8) Class_1_D63229AA2DDA64A1_Class_1_40B4FD560145D6BC_1_Struct_2_0EA1A4D94F9432AB_1
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x10
	::Class_1_D63229AA2DDA64A1_Class_1_40B4FD560145D6BC_1* Field_2_2; // 0x20
	::System::Int32 Field_2_0; // 0x28

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D63229AA2DDA64A1_CLASS_1_40B4FD560145D6BC_1_STRUCT_2_0EA1A4D94F9432AB_1_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_D63229AA2DDA64A1_CLASS_1_40B4FD560145D6BC_1_STRUCT_2_0EA1A4D94F9432AB_1_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
