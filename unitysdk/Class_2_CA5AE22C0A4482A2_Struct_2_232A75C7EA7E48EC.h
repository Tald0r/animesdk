#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_61AC41B6DCFBC671_Struct_2_FFD4C042B6998745.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Foundation/ObjectPoolOfT_1_ObjectHandler_1.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/ValueType.h"

class Class_2_208CC9941471731A_793;
class Class_2_8A73177250348A72;
class Class_2_CA5AE22C0A4482A2;
class Class_2_CA5AE22C0A4482A2_Class_1_4F7CF8049BCF140A;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_CA5AE22C0A4482A2_STRUCT_2_232A75C7EA7E48EC_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2EA480)
#define CLASS_2_CA5AE22C0A4482A2_STRUCT_2_232A75C7EA7E48EC_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2613F0)

inline static constexpr unsigned int Class_2_CA5AE22C0A4482A2_Struct_2_232A75C7EA7E48EC_TypeDefinitionIndex = 80290;

struct alignas(8) Class_2_CA5AE22C0A4482A2_Struct_2_232A75C7EA7E48EC
{
	::Class_2_8A73177250348A72* Field_2_6; // 0x10
	::System::Collections::Generic::List_1_Enumerator<::Class_2_61AC41B6DCFBC671_Struct_2_FFD4C042B6998745> Field_2_7; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_8; // 0x50
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x60
	::Foundation::ObjectPoolOfT_1_ObjectHandler_1<::System::Collections::Generic::List_1<::Class_2_61AC41B6DCFBC671_Struct_2_FFD4C042B6998745>*, ::System::Collections::Generic::List_1<::Class_2_61AC41B6DCFBC671_Struct_2_FFD4C042B6998745>*> Field_2_4; // 0x70
	::Class_2_CA5AE22C0A4482A2* Field_2_2; // 0x78
	::Class_2_CA5AE22C0A4482A2_Class_1_4F7CF8049BCF140A* Field_2_3; // 0x80
	::Class_2_208CC9941471731A_793* Field_2_5; // 0x88
	::System::Int32 Field_2_0; // 0x90

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_STRUCT_2_232A75C7EA7E48EC_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_STRUCT_2_232A75C7EA7E48EC_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
