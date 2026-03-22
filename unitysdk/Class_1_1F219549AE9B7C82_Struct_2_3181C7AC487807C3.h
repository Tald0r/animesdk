#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1F219549AE9B7C82_Enum_3_05F7423D39739F87.h"
#include "unitysdk/Class_1_1F219549AE9B7C82_Struct_2_864D927135D66FAE.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"
#include "unitysdk/System/ValueType.h"

class Class_2_9E3E3CDA608A4F58;
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_1F219549AE9B7C82_STRUCT_2_3181C7AC487807C3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x430E60)
#define CLASS_1_1F219549AE9B7C82_STRUCT_2_3181C7AC487807C3_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x259A50)

inline static constexpr unsigned int Class_1_1F219549AE9B7C82_Struct_2_3181C7AC487807C3_TypeDefinitionIndex = 57038;

struct alignas(8) Class_1_1F219549AE9B7C82_Struct_2_3181C7AC487807C3
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_6; // 0x10
	::Class_1_1F219549AE9B7C82_Struct_2_864D927135D66FAE Field_2_4; // 0x20
	::System::Nullable_1<::System::Threading::CancellationTokenRegistration> Field_2_5; // 0x30
	::System::String* Field_2_3; // 0x50
	::Class_2_9E3E3CDA608A4F58* Field_2_2; // 0x58
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::Class_1_1F219549AE9B7C82_Enum_3_05F7423D39739F87> Field_2_1; // 0x60
	::System::Int32 Field_2_0; // 0x78

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F219549AE9B7C82_STRUCT_2_3181C7AC487807C3_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_1F219549AE9B7C82_STRUCT_2_3181C7AC487807C3_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
