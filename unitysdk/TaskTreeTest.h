#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_AA2FAB933F36B228;
class Class_2_D6F9B792012303A1;
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Threading::Tasks { template <typename T> class TaskCompletionSource_1; }

#define TASKTREETEST_BUILDTASK_OFFSET UNITYSDK_OFFSET(0x1A5544D0)
#define TASKTREETEST_BUILDTREE_OFFSET UNITYSDK_OFFSET(0x1A5541F0)
#define TASKTREETEST_DELAYTEST_OFFSET UNITYSDK_OFFSET(0x1A554090)
#define TASKTREETEST_ROOTBEGIN_OFFSET UNITYSDK_OFFSET(0x1A5545E0)
#define TASKTREETEST_ROOTCANCEL_OFFSET UNITYSDK_OFFSET(0x1A554960)
#define TASKTREETEST_ROOTEND_OFFSET UNITYSDK_OFFSET(0x1A5547A0)
#define TASKTREETEST_SETTASK_OFFSET UNITYSDK_OFFSET(0x1A554130)
#define TASKTREETEST_START_OFFSET UNITYSDK_OFFSET(0x1A553BF0)
#define TASKTREETEST_TESTCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1A553CB0)
#define TASKTREETEST_TEST_OFFSET UNITYSDK_OFFSET(0x1A553AF0)
#define TASKTREETEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1A554B20)

inline static constexpr unsigned int TaskTreeTest_TypeDefinitionIndex = 78726;

class TaskTreeTest : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TASKTREETEST__CTOR_OFFSET))(this);
	}

	::System::Void Test()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TASKTREETEST_TEST_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TASKTREETEST_START_OFFSET))(this);
	}

	::System::Void TestComplete()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TASKTREETEST_TESTCOMPLETE_OFFSET))(this);
	}

	::System::Collections::IEnumerator* DelayTest(::System::Threading::Tasks::TaskCompletionSource_1<::System::Int32>* completionSource)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Threading::Tasks::TaskCompletionSource_1<::System::Int32>*))((::PBYTE)hIl2Cpp + TASKTREETEST_DELAYTEST_OFFSET))(this, completionSource);
	}

	::System::Void SetTask(::System::Threading::Tasks::TaskCompletionSource_1<::System::Int32>* taskCompletionSource)
	{
		return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::TaskCompletionSource_1<::System::Int32>*))((::PBYTE)hIl2Cpp + TASKTREETEST_SETTASK_OFFSET))(this, taskCompletionSource);
	}

	::Class_1_AA2FAB933F36B228* BuildTree(::System::String* name)
	{
		return ((::Class_1_AA2FAB933F36B228*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TASKTREETEST_BUILDTREE_OFFSET))(this, name);
	}

	::System::Void RootBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TASKTREETEST_ROOTBEGIN_OFFSET))(this);
	}

	::System::Void RootEnd()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TASKTREETEST_ROOTEND_OFFSET))(this);
	}

	::System::Void RootCancel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TASKTREETEST_ROOTCANCEL_OFFSET))(this);
	}

	::Class_2_D6F9B792012303A1* BuildTask(::Class_1_AA2FAB933F36B228* taskTree, ::System::String* name, ::System::Int32 ms)
	{
		return ((::Class_2_D6F9B792012303A1*(*)(::PVOID, ::Class_1_AA2FAB933F36B228*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + TASKTREETEST_BUILDTASK_OFFSET))(this, taskTree, name, ms);
	}
};
