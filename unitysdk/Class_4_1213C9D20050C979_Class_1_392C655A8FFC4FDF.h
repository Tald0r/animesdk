#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_2_67F3C5E647F33C2D;
class Class_4_1213C9D20050C979_Class_1_840255FE48460818_1;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_4_1213C9D20050C979_CLASS_1_392C655A8FFC4FDF_METHOD_1_6EFE459E10EB1D5E_OFFSET UNITYSDK_OFFSET(0xB7B7EC0)
#define CLASS_4_1213C9D20050C979_CLASS_1_392C655A8FFC4FDF_METHOD_1_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0xB7B7B80)
#define CLASS_4_1213C9D20050C979_CLASS_1_392C655A8FFC4FDF_METHOD_1_A39055E0EAF0CACF_OFFSET UNITYSDK_OFFSET(0xB7B7FE0)
#define CLASS_4_1213C9D20050C979_CLASS_1_392C655A8FFC4FDF_METHOD_1_D62B9256DD010494_OFFSET UNITYSDK_OFFSET(0xB7B8010)
#define CLASS_4_1213C9D20050C979_CLASS_1_392C655A8FFC4FDF__CTOR_OFFSET UNITYSDK_OFFSET(0xB7B7B70)

inline static constexpr unsigned int Class_4_1213C9D20050C979_Class_1_392C655A8FFC4FDF_TypeDefinitionIndex = 77366;

class Class_4_1213C9D20050C979_Class_1_392C655A8FFC4FDF : public ::System::Object
{
public:
	::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>* Field_1_2; // 0x10
	::System::Action* Field_1_3; // 0x18
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* Field_1_0; // 0x20
	::Class_4_1213C9D20050C979_Class_1_840255FE48460818_1* Field_1_1; // 0x28
	::System::Action* Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1213C9D20050C979_CLASS_1_392C655A8FFC4FDF__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1213C9D20050C979_CLASS_1_392C655A8FFC4FDF_METHOD_1_82E992240300FB30_OFFSET))(this);
	}

	::System::Void Method_1_6EFE459E10EB1D5E(::Class_2_67F3C5E647F33C2D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_67F3C5E647F33C2D*))((::PBYTE)hIl2Cpp + CLASS_4_1213C9D20050C979_CLASS_1_392C655A8FFC4FDF_METHOD_1_6EFE459E10EB1D5E_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_A39055E0EAF0CACF(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_4_1213C9D20050C979_CLASS_1_392C655A8FFC4FDF_METHOD_1_A39055E0EAF0CACF_OFFSET))(this, a1);
	}

	::System::Void Method_1_D62B9256DD010494()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1213C9D20050C979_CLASS_1_392C655A8FFC4FDF_METHOD_1_D62B9256DD010494_OFFSET))(this);
	}
};
