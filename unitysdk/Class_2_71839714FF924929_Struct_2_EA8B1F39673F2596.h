#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_2_71839714FF924929;
class Class_2_71839714FF924929_Class_1_C40C6E99261D653F_4;
class Class_3_48A3D3A34C52331D_50;
class Class_3_5175B904C7D2D4F0;
class Class_3_6EF456A21AE85EEC_97;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_71839714FF924929_STRUCT_2_EA8B1F39673F2596_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x381FE0)
#define CLASS_2_71839714FF924929_STRUCT_2_EA8B1F39673F2596_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2613F0)

inline static constexpr unsigned int Class_2_71839714FF924929_Struct_2_EA8B1F39673F2596_TypeDefinitionIndex = 77910;

struct alignas(8) Class_2_71839714FF924929_Struct_2_EA8B1F39673F2596
{
	::Class_2_71839714FF924929_Class_1_C40C6E99261D653F_4* Field_2_12; // 0x10
	::System::Threading::CancellationToken Field_2_11; // 0x18
	::Class_2_71839714FF924929* Field_2_10; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_13; // 0x28
	::System::Collections::Generic::List_1<::Class_3_6EF456A21AE85EEC_97*>* Field_2_9; // 0x38
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::Class_3_48A3D3A34C52331D_50*> Field_2_1; // 0x40
	::System::Collections::Generic::List_1<::Class_3_5175B904C7D2D4F0*>* Field_2_8; // 0x58
	::System::Boolean Field_2_6; // 0x60
	::System::Boolean Field_2_7; // 0x61
	::System::Int32 Field_2_4; // 0x64
	::System::Int32 Field_2_0; // 0x68
	::System::Int32 Field_2_5; // 0x6C
	::System::UInt32 Field_2_2; // 0x70
	::System::Single Field_2_3; // 0x74

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71839714FF924929_STRUCT_2_EA8B1F39673F2596_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_71839714FF924929_STRUCT_2_EA8B1F39673F2596_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
