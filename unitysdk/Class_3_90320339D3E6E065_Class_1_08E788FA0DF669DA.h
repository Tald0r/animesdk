#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_2_67F3C5E647F33C2D;
class Class_3_90320339D3E6E065_Class_1_7BA88696A75A7FE8_1;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_3_90320339D3E6E065_CLASS_1_08E788FA0DF669DA_METHOD_1_0C44FB644D25C1C2_OFFSET UNITYSDK_OFFSET(0x8D0A430)
#define CLASS_3_90320339D3E6E065_CLASS_1_08E788FA0DF669DA_METHOD_1_4B214700971975B6_OFFSET UNITYSDK_OFFSET(0x8D0A4C0)
#define CLASS_3_90320339D3E6E065_CLASS_1_08E788FA0DF669DA_METHOD_1_6EFE459E10EB1D5E_OFFSET UNITYSDK_OFFSET(0x8D0A310)
#define CLASS_3_90320339D3E6E065_CLASS_1_08E788FA0DF669DA_METHOD_1_A39055E0EAF0CACF_OFFSET UNITYSDK_OFFSET(0x8D0A490)
#define CLASS_3_90320339D3E6E065_CLASS_1_08E788FA0DF669DA__CTOR_OFFSET UNITYSDK_OFFSET(0x8D0A300)

inline static constexpr unsigned int Class_3_90320339D3E6E065_Class_1_08E788FA0DF669DA_TypeDefinitionIndex = 69307;

class Class_3_90320339D3E6E065_Class_1_08E788FA0DF669DA : public ::System::Object
{
public:
	::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>* Field_1_2; // 0x10
	::System::Action* Field_1_3; // 0x18
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* Field_1_0; // 0x20
	::Class_3_90320339D3E6E065_Class_1_7BA88696A75A7FE8_1* Field_1_1; // 0x28
	::System::Action* Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_90320339D3E6E065_CLASS_1_08E788FA0DF669DA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6EFE459E10EB1D5E(::Class_2_67F3C5E647F33C2D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_67F3C5E647F33C2D*))((::PBYTE)hIl2Cpp + CLASS_3_90320339D3E6E065_CLASS_1_08E788FA0DF669DA_METHOD_1_6EFE459E10EB1D5E_OFFSET))(this, a1);
	}

	::System::Void Method_1_0C44FB644D25C1C2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_90320339D3E6E065_CLASS_1_08E788FA0DF669DA_METHOD_1_0C44FB644D25C1C2_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_A39055E0EAF0CACF(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_3_90320339D3E6E065_CLASS_1_08E788FA0DF669DA_METHOD_1_A39055E0EAF0CACF_OFFSET))(this, a1);
	}

	::System::Void Method_1_4B214700971975B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_90320339D3E6E065_CLASS_1_08E788FA0DF669DA_METHOD_1_4B214700971975B6_OFFSET))(this);
	}
};
