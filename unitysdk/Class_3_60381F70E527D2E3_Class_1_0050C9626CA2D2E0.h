#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_2_67F3C5E647F33C2D;
class Class_3_1A345EAE5F749316_118;
class Class_3_60381F70E527D2E3_Class_1_B670C257C8E3D9E6;
class Class_3_60381F70E527D2E3_Class_1_FF0620E4EE271BCF;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_60381F70E527D2E3_CLASS_1_0050C9626CA2D2E0_METHOD_1_40EBA7013E4CCDDF_OFFSET UNITYSDK_OFFSET(0x613E310)
#define CLASS_3_60381F70E527D2E3_CLASS_1_0050C9626CA2D2E0_METHOD_1_53B77E956AA9CFD2_OFFSET UNITYSDK_OFFSET(0x613E0E0)
#define CLASS_3_60381F70E527D2E3_CLASS_1_0050C9626CA2D2E0_METHOD_1_A39055E0EAF0CACF_OFFSET UNITYSDK_OFFSET(0x613E1C0)
#define CLASS_3_60381F70E527D2E3_CLASS_1_0050C9626CA2D2E0_METHOD_1_E2876DA806F81297_OFFSET UNITYSDK_OFFSET(0x613E280)
#define CLASS_3_60381F70E527D2E3_CLASS_1_0050C9626CA2D2E0_METHOD_1_FA582350FCD3A1E2_OFFSET UNITYSDK_OFFSET(0x613E1F0)
#define CLASS_3_60381F70E527D2E3_CLASS_1_0050C9626CA2D2E0__CTOR_OFFSET UNITYSDK_OFFSET(0x613E0D0)

inline static constexpr unsigned int Class_3_60381F70E527D2E3_Class_1_0050C9626CA2D2E0_TypeDefinitionIndex = 52731;

class Class_3_60381F70E527D2E3_Class_1_0050C9626CA2D2E0 : public ::System::Object
{
public:
	::System::Action* Field_1_6; // 0x10
	::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>* Field_1_3; // 0x18
	::System::Action_2<::System::Boolean, ::System::Collections::Generic::List_1<::Class_3_1A345EAE5F749316_118*>*>* Field_1_4; // 0x20
	::Class_3_60381F70E527D2E3_Class_1_B670C257C8E3D9E6* Field_1_2; // 0x28
	::Class_3_60381F70E527D2E3_Class_1_FF0620E4EE271BCF* Field_1_1; // 0x30
	::System::Action_2<::System::Boolean, ::System::Collections::Generic::List_1<::Class_3_1A345EAE5F749316_118*>*>* Field_1_5; // 0x38
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* Field_1_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60381F70E527D2E3_CLASS_1_0050C9626CA2D2E0__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_53B77E956AA9CFD2(::Class_2_67F3C5E647F33C2D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_67F3C5E647F33C2D*))((::PBYTE)hIl2Cpp + CLASS_3_60381F70E527D2E3_CLASS_1_0050C9626CA2D2E0_METHOD_1_53B77E956AA9CFD2_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_A39055E0EAF0CACF(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_3_60381F70E527D2E3_CLASS_1_0050C9626CA2D2E0_METHOD_1_A39055E0EAF0CACF_OFFSET))(this, a1);
	}

	::System::Void Method_1_FA582350FCD3A1E2(::System::Boolean a1, ::System::Collections::Generic::List_1<::Class_3_1A345EAE5F749316_118*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::List_1<::Class_3_1A345EAE5F749316_118*>*))((::PBYTE)hIl2Cpp + CLASS_3_60381F70E527D2E3_CLASS_1_0050C9626CA2D2E0_METHOD_1_FA582350FCD3A1E2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E2876DA806F81297(::System::Boolean a1, ::System::Collections::Generic::List_1<::Class_3_1A345EAE5F749316_118*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::List_1<::Class_3_1A345EAE5F749316_118*>*))((::PBYTE)hIl2Cpp + CLASS_3_60381F70E527D2E3_CLASS_1_0050C9626CA2D2E0_METHOD_1_E2876DA806F81297_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_40EBA7013E4CCDDF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60381F70E527D2E3_CLASS_1_0050C9626CA2D2E0_METHOD_1_40EBA7013E4CCDDF_OFFSET))(this);
	}
};
