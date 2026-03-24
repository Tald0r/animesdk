#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_177;
class Class_0_16E4307DCC419505_194;
class Class_1_8D68BB826C7B7E2E;
class Class_1_997A61FC149EE531;
class Class_1_B7C41BE725AAED79;
class Class_1_CF009758DC576A56;
class Class_3_5737BCC156B16103;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_3_5737BCC156B16103_STRUCT_2_0A755E56BBBD3518_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x35C650)
#define CLASS_3_5737BCC156B16103_STRUCT_2_0A755E56BBBD3518_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2613F0)

inline static constexpr unsigned int Class_3_5737BCC156B16103_Struct_2_0A755E56BBBD3518_TypeDefinitionIndex = 54516;

struct alignas(8) Class_3_5737BCC156B16103_Struct_2_0A755E56BBBD3518
{
	::Class_1_CF009758DC576A56* Field_2_11; // 0x10
	::System::String* Field_2_5; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::Class_0_16E4307DCC419505_177*> Field_2_1; // 0x20
	::System::Collections::Generic::List_1<::Class_1_8D68BB826C7B7E2E*>* Field_2_9; // 0x38
	::Class_0_16E4307DCC419505_194* Field_2_6; // 0x40
	::Class_1_997A61FC149EE531* Field_2_7; // 0x48
	::Class_1_B7C41BE725AAED79* Field_2_2; // 0x50
	::System::Collections::Generic::List_1_Enumerator<::Class_1_CF009758DC576A56*> Field_2_10; // 0x58
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_0_16E4307DCC419505_177*> Field_2_12; // 0x70
	::Class_3_5737BCC156B16103* Field_2_3; // 0x88
	::System::Collections::Generic::List_1<::Class_1_997A61FC149EE531*>* Field_2_8; // 0x90
	::System::Int32 Field_2_4; // 0x98
	::System::Int32 Field_2_0; // 0x9C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5737BCC156B16103_STRUCT_2_0A755E56BBBD3518_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_3_5737BCC156B16103_STRUCT_2_0A755E56BBBD3518_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
