#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_07AAFA6F7F79BEB3;
class Class_3_F67472AB575CAD5E;
class Class_3_F67472AB575CAD5E_Class_1_2DCCD7109DCE33A1_1;
namespace MoleMole::Battle { class Entity; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_3_F67472AB575CAD5E_STRUCT_2_FB77308175BDF85C_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x33D460)
#define CLASS_3_F67472AB575CAD5E_STRUCT_2_FB77308175BDF85C_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2613F0)

inline static constexpr unsigned int Class_3_F67472AB575CAD5E_Struct_2_FB77308175BDF85C_TypeDefinitionIndex = 40872;

struct alignas(8) Class_3_F67472AB575CAD5E_Struct_2_FB77308175BDF85C
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x10
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::MoleMole::Battle::Entity*> Field_2_8; // 0x20
	::Class_3_07AAFA6F7F79BEB3* Field_2_2; // 0x38
	::MoleMole::Battle::Entity* Field_2_7; // 0x40
	::Class_3_F67472AB575CAD5E_Class_1_2DCCD7109DCE33A1_1* Field_2_4; // 0x48
	::Class_3_F67472AB575CAD5E* Field_2_3; // 0x50
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_9; // 0x58
	::System::Boolean Field_2_6; // 0x68
	::UnityEngine::Vector3 Field_2_5; // 0x6C
	::System::Int32 Field_2_0; // 0x78

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_STRUCT_2_FB77308175BDF85C_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_STRUCT_2_FB77308175BDF85C_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
