#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

class Class_1_627A5A7833BA1936_1;
class Class_1_A010C24EB4F49904;
class Class_2_FB50CDBDDEDBBCC8_5;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_A010C24EB4F49904_STRUCT_2_6623E0D4848EBFDE_3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3AE140)
#define CLASS_1_A010C24EB4F49904_STRUCT_2_6623E0D4848EBFDE_3_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2C7C30)

inline static constexpr unsigned int Class_1_A010C24EB4F49904_Struct_2_6623E0D4848EBFDE_3_TypeDefinitionIndex = 56896;

struct alignas(8) Class_1_A010C24EB4F49904_Struct_2_6623E0D4848EBFDE_3
{
	::System::Runtime::CompilerServices::TaskAwaiter_1<::Class_1_627A5A7833BA1936_1*> Field_2_4; // 0x10
	::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Class_1_627A5A7833BA1936_1*> Field_2_1; // 0x18
	::Class_1_A010C24EB4F49904* Field_2_2; // 0x30
	::Class_2_FB50CDBDDEDBBCC8_5* Field_2_3; // 0x38
	::System::Int32 Field_2_0; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A010C24EB4F49904_STRUCT_2_6623E0D4848EBFDE_3_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_A010C24EB4F49904_STRUCT_2_6623E0D4848EBFDE_3_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
