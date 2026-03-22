#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

class Class_1_627A5A7833BA1936_1;
class Class_1_A010C24EB4F49904;
class Class_1_B37365D9009BA07B;
class Class_2_A48F3719AA1CF200_20;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
template <typename T> class Class_2_FB50CDBDDEDBBCC8_1;

#define CLASS_1_A010C24EB4F49904_STRUCT_2_6623E0D4848EBFDE_5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3AE150)
#define CLASS_1_A010C24EB4F49904_STRUCT_2_6623E0D4848EBFDE_5_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2C3CA0)

inline static constexpr unsigned int Class_1_A010C24EB4F49904_Struct_2_6623E0D4848EBFDE_5_TypeDefinitionIndex = 56898;

struct alignas(8) Class_1_A010C24EB4F49904_Struct_2_6623E0D4848EBFDE_5
{
	::Class_1_A010C24EB4F49904* Field_2_2; // 0x10
	::System::Runtime::CompilerServices::TaskAwaiter_1<::Class_1_627A5A7833BA1936_1*> Field_2_4; // 0x18
	::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Class_2_FB50CDBDDEDBBCC8_1<::Class_1_B37365D9009BA07B*>*> Field_2_1; // 0x20
	::Class_2_A48F3719AA1CF200_20* Field_2_3; // 0x38
	::System::Int32 Field_2_0; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A010C24EB4F49904_STRUCT_2_6623E0D4848EBFDE_5_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_A010C24EB4F49904_STRUCT_2_6623E0D4848EBFDE_5_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
