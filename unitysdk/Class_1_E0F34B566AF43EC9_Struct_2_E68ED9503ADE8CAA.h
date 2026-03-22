#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_1_534AF681CC2BD5FD_209_Class_0_16E7307DCC43CB2C_24;
class Class_1_534AF681CC2BD5FD_209_Class_1_73A02482F7EC2D72;
class Class_5_AF65C3A968E836D2;
namespace MoleMole::Config { class AtmosphereData; }
namespace System { class Action; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_E0F34B566AF43EC9_STRUCT_2_E68ED9503ADE8CAA_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x364F10)
#define CLASS_1_E0F34B566AF43EC9_STRUCT_2_E68ED9503ADE8CAA_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x259A50)

inline static constexpr unsigned int Class_1_E0F34B566AF43EC9_Struct_2_E68ED9503ADE8CAA_TypeDefinitionIndex = 66563;

struct alignas(8) Class_1_E0F34B566AF43EC9_Struct_2_E68ED9503ADE8CAA
{
	::MoleMole::Config::AtmosphereData* Field_2_3; // 0x10
	::MoleMole::Config::AtmosphereData* Field_2_4; // 0x18
	::Class_5_AF65C3A968E836D2* Field_2_2; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_8; // 0x28
	::System::Action* Field_2_5; // 0x38
	::Class_1_534AF681CC2BD5FD_209_Class_0_16E7307DCC43CB2C_24* Field_2_7; // 0x40
	::Class_1_534AF681CC2BD5FD_209_Class_1_73A02482F7EC2D72* Field_2_6; // 0x48
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x50
	::System::Int32 Field_2_0; // 0x60

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0F34B566AF43EC9_STRUCT_2_E68ED9503ADE8CAA_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_E0F34B566AF43EC9_STRUCT_2_E68ED9503ADE8CAA_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
