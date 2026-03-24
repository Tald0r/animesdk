#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C2937544035FD07F.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_2_B30EB13395677771;
class Class_3_7E6E8DD3EAC12A67_9;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_CB9A9DC80DF9CCD6_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xA08AC80)
#define CLASS_2_CB9A9DC80DF9CCD6_METHOD_2_45B6B3287967A12A_OFFSET UNITYSDK_OFFSET(0xA08B020)
#define CLASS_2_CB9A9DC80DF9CCD6_METHOD_2_6BDB7E9A1BFD7BA8_OFFSET UNITYSDK_OFFSET(0xA08AE60)
#define CLASS_2_CB9A9DC80DF9CCD6_METHOD_2_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0xA08AEE0)
#define CLASS_2_CB9A9DC80DF9CCD6_METHOD_2_E6C00B86269D85D6_OFFSET UNITYSDK_OFFSET(0xA08B2F0)
#define CLASS_2_CB9A9DC80DF9CCD6_ONSTART_OFFSET UNITYSDK_OFFSET(0xA08AD40)
#define CLASS_2_CB9A9DC80DF9CCD6__CTOR_OFFSET UNITYSDK_OFFSET(0xA08AE50)

inline static constexpr unsigned int Class_2_CB9A9DC80DF9CCD6_TypeDefinitionIndex = 63918;

class Class_2_CB9A9DC80DF9CCD6 : public ::Class_1_C2937544035FD07F
{
public:
	::Class_2_B30EB13395677771* Field_2_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB9A9DC80DF9CCD6__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB9A9DC80DF9CCD6_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB9A9DC80DF9CCD6_ONSTART_OFFSET))(this);
	}

	::System::Void Method_2_6BDB7E9A1BFD7BA8(::Class_3_7E6E8DD3EAC12A67_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_7E6E8DD3EAC12A67_9*))((::PBYTE)hIl2Cpp + CLASS_2_CB9A9DC80DF9CCD6_METHOD_2_6BDB7E9A1BFD7BA8_OFFSET))(this, a1);
	}

	::System::Void Method_2_775B6D644F07B554()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB9A9DC80DF9CCD6_METHOD_2_775B6D644F07B554_OFFSET))(this);
	}

	::System::Void Method_2_45B6B3287967A12A(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Action* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_CB9A9DC80DF9CCD6_METHOD_2_45B6B3287967A12A_OFFSET))(this, a1, a2, a3);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> Method_2_E6C00B86269D85D6(::System::Threading::CancellationToken a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::PVOID, ::System::Threading::CancellationToken, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_CB9A9DC80DF9CCD6_METHOD_2_E6C00B86269D85D6_OFFSET))(this, a1, a2);
	}
};
