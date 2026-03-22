#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_2_67F3C5E647F33C2D;
class Class_3_1A345EAE5F749316_84;
class Class_3_765691B743A1DB23_Class_1_63365C960595A088;
class Class_3_765691B743A1DB23_Class_1_C6460009C1F3827B;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_765691B743A1DB23_CLASS_1_9CC8BD84440BB8B9_METHOD_1_40EBA7013E4CCDDF_OFFSET UNITYSDK_OFFSET(0x8CCE550)
#define CLASS_3_765691B743A1DB23_CLASS_1_9CC8BD84440BB8B9_METHOD_1_53B77E956AA9CFD2_OFFSET UNITYSDK_OFFSET(0x8CCE470)
#define CLASS_3_765691B743A1DB23_CLASS_1_9CC8BD84440BB8B9_METHOD_1_7D917315A29F0477_OFFSET UNITYSDK_OFFSET(0x8CCE730)
#define CLASS_3_765691B743A1DB23_CLASS_1_9CC8BD84440BB8B9_METHOD_1_A39055E0EAF0CACF_OFFSET UNITYSDK_OFFSET(0x8CCE440)
#define CLASS_3_765691B743A1DB23_CLASS_1_9CC8BD84440BB8B9_METHOD_1_FA582350FCD3A1E2_OFFSET UNITYSDK_OFFSET(0x8CCE3A0)
#define CLASS_3_765691B743A1DB23_CLASS_1_9CC8BD84440BB8B9__CTOR_OFFSET UNITYSDK_OFFSET(0x8CCE390)

inline static constexpr unsigned int Class_3_765691B743A1DB23_Class_1_9CC8BD84440BB8B9_TypeDefinitionIndex = 71816;

class Class_3_765691B743A1DB23_Class_1_9CC8BD84440BB8B9 : public ::System::Object
{
public:
	::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>* Field_1_3; // 0x10
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* Field_1_0; // 0x18
	::Class_3_765691B743A1DB23_Class_1_63365C960595A088* Field_1_1; // 0x20
	::System::Action_2<::System::Boolean, ::System::Collections::Generic::List_1<::Class_3_1A345EAE5F749316_84*>*>* Field_1_5; // 0x28
	::System::Action* Field_1_6; // 0x30
	::Class_3_765691B743A1DB23_Class_1_C6460009C1F3827B* Field_1_2; // 0x38
	::System::Action_2<::System::Boolean, ::System::Collections::Generic::List_1<::Class_3_1A345EAE5F749316_84*>*>* Field_1_4; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_765691B743A1DB23_CLASS_1_9CC8BD84440BB8B9__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FA582350FCD3A1E2(::System::Boolean a1, ::System::Collections::Generic::List_1<::Class_3_1A345EAE5F749316_84*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::List_1<::Class_3_1A345EAE5F749316_84*>*))((::PBYTE)hIl2Cpp + CLASS_3_765691B743A1DB23_CLASS_1_9CC8BD84440BB8B9_METHOD_1_FA582350FCD3A1E2_OFFSET))(this, a1, a2);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_A39055E0EAF0CACF(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_3_765691B743A1DB23_CLASS_1_9CC8BD84440BB8B9_METHOD_1_A39055E0EAF0CACF_OFFSET))(this, a1);
	}

	::System::Void Method_1_53B77E956AA9CFD2(::Class_2_67F3C5E647F33C2D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_67F3C5E647F33C2D*))((::PBYTE)hIl2Cpp + CLASS_3_765691B743A1DB23_CLASS_1_9CC8BD84440BB8B9_METHOD_1_53B77E956AA9CFD2_OFFSET))(this, a1);
	}

	::System::Void Method_1_40EBA7013E4CCDDF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_765691B743A1DB23_CLASS_1_9CC8BD84440BB8B9_METHOD_1_40EBA7013E4CCDDF_OFFSET))(this);
	}

	::System::Void Method_1_7D917315A29F0477(::System::Boolean a1, ::System::Collections::Generic::List_1<::Class_3_1A345EAE5F749316_84*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::List_1<::Class_3_1A345EAE5F749316_84*>*))((::PBYTE)hIl2Cpp + CLASS_3_765691B743A1DB23_CLASS_1_9CC8BD84440BB8B9_METHOD_1_7D917315A29F0477_OFFSET))(this, a1, a2);
	}
};
