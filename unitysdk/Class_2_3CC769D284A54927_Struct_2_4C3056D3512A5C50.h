#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_3CC769D284A54927;
class Class_3_F35B080B137ECC46;
class MonoRootMotion;
namespace MoleMole { class FishPosConfig; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_3CC769D284A54927_STRUCT_2_4C3056D3512A5C50_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x362030)
#define CLASS_2_3CC769D284A54927_STRUCT_2_4C3056D3512A5C50_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x259A50)

inline static constexpr unsigned int Class_2_3CC769D284A54927_Struct_2_4C3056D3512A5C50_TypeDefinitionIndex = 46635;

struct alignas(8) Class_2_3CC769D284A54927_Struct_2_4C3056D3512A5C50
{
	::Class_3_F35B080B137ECC46* Field_2_10; // 0x10
	::System::Collections::Generic::List_1_Enumerator<::MoleMole::FishPosConfig*> Field_2_4; // 0x18
	::MonoRootMotion* Field_2_11; // 0x30
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_12; // 0x38
	::Class_2_3CC769D284A54927* Field_2_2; // 0x48
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x50
	::System::Single Field_2_8; // 0x60
	::UnityEngine::Vector3 Field_2_7; // 0x64
	::System::Int32 Field_2_9; // 0x70
	::System::Int32 Field_2_0; // 0x74
	::System::Single Field_2_5; // 0x78
	::System::Single Field_2_6; // 0x7C
	::System::Boolean Field_2_3; // 0x80

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_STRUCT_2_4C3056D3512A5C50_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_STRUCT_2_4C3056D3512A5C50_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
