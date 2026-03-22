#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Struct_2_FE9BD044832BC9C3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_2_67F3C5E647F33C2D;
class Class_3_FD647B2CDD2F8026_Class_1_F9BE9C1C7506C55F;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_3_FD647B2CDD2F8026_CLASS_1_08E788FA0DF669DA_METHOD_1_00DEF5A164D9A9D5_OFFSET UNITYSDK_OFFSET(0xB566C80)
#define CLASS_3_FD647B2CDD2F8026_CLASS_1_08E788FA0DF669DA_METHOD_1_071850D2764E9D4C_OFFSET UNITYSDK_OFFSET(0xB566890)
#define CLASS_3_FD647B2CDD2F8026_CLASS_1_08E788FA0DF669DA_METHOD_1_6EFE459E10EB1D5E_OFFSET UNITYSDK_OFFSET(0xB566770)
#define CLASS_3_FD647B2CDD2F8026_CLASS_1_08E788FA0DF669DA_METHOD_1_A39055E0EAF0CACF_OFFSET UNITYSDK_OFFSET(0xB566C50)
#define CLASS_3_FD647B2CDD2F8026_CLASS_1_08E788FA0DF669DA__CTOR_OFFSET UNITYSDK_OFFSET(0xB566760)

inline static constexpr unsigned int Class_3_FD647B2CDD2F8026_Class_1_08E788FA0DF669DA_TypeDefinitionIndex = 51981;

class Class_3_FD647B2CDD2F8026_Class_1_08E788FA0DF669DA : public ::System::Object
{
public:
	::System::Action* Field_1_4; // 0x10
	::Struct_2_FE9BD044832BC9C3 Field_1_1; // 0x18
	::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>* Field_1_3; // 0x48
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* Field_1_0; // 0x50
	::Class_3_FD647B2CDD2F8026_Class_1_F9BE9C1C7506C55F* Field_1_2; // 0x58
	::System::Action* Field_1_5; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FD647B2CDD2F8026_CLASS_1_08E788FA0DF669DA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6EFE459E10EB1D5E(::Class_2_67F3C5E647F33C2D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_67F3C5E647F33C2D*))((::PBYTE)hIl2Cpp + CLASS_3_FD647B2CDD2F8026_CLASS_1_08E788FA0DF669DA_METHOD_1_6EFE459E10EB1D5E_OFFSET))(this, a1);
	}

	::System::Void Method_1_071850D2764E9D4C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FD647B2CDD2F8026_CLASS_1_08E788FA0DF669DA_METHOD_1_071850D2764E9D4C_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_A39055E0EAF0CACF(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_3_FD647B2CDD2F8026_CLASS_1_08E788FA0DF669DA_METHOD_1_A39055E0EAF0CACF_OFFSET))(this, a1);
	}

	::System::Void Method_1_00DEF5A164D9A9D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FD647B2CDD2F8026_CLASS_1_08E788FA0DF669DA_METHOD_1_00DEF5A164D9A9D5_OFFSET))(this);
	}
};
