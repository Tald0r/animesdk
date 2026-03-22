#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_1_AA2FAB933F36B228;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_AA2FAB933F36B228_CLASS_1_355EE8E957C44E92_METHOD_1_82A97E59CE3CAE70_OFFSET UNITYSDK_OFFSET(0xA68A260)
#define CLASS_1_AA2FAB933F36B228_CLASS_1_355EE8E957C44E92__CTOR_OFFSET UNITYSDK_OFFSET(0xA6898E0)

inline static constexpr unsigned int Class_1_AA2FAB933F36B228_Class_1_355EE8E957C44E92_TypeDefinitionIndex = 36885;

class Class_1_AA2FAB933F36B228_Class_1_355EE8E957C44E92 : public ::System::Object
{
public:
	::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>* Field_1_0; // 0x10
	::Class_1_AA2FAB933F36B228* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA2FAB933F36B228_CLASS_1_355EE8E957C44E92__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_82A97E59CE3CAE70()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA2FAB933F36B228_CLASS_1_355EE8E957C44E92_METHOD_1_82A97E59CE3CAE70_OFFSET))(this);
	}
};
