#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_5_4E6AD13D7FCF6283;
namespace System { template <typename T> class Func_1; }
namespace System { template <typename T> class WeakReference_1; }

#define CLASS_4_8C41CE74BEA50FFC_CLASS_1_6F60771CCF313F80_METHOD_1_0F30679B05E70FC1_OFFSET UNITYSDK_OFFSET(0x7FF7460)
#define CLASS_4_8C41CE74BEA50FFC_CLASS_1_6F60771CCF313F80_METHOD_1_7732DDB4048EA548_OFFSET UNITYSDK_OFFSET(0x7FF7590)
#define CLASS_4_8C41CE74BEA50FFC_CLASS_1_6F60771CCF313F80_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x7FF7240)
#define CLASS_4_8C41CE74BEA50FFC_CLASS_1_6F60771CCF313F80_METHOD_1_D240830C442C70A4_OFFSET UNITYSDK_OFFSET(0x7FF7390)
#define CLASS_4_8C41CE74BEA50FFC_CLASS_1_6F60771CCF313F80__CTOR_OFFSET UNITYSDK_OFFSET(0x7FF7230)

inline static constexpr unsigned int Class_4_8C41CE74BEA50FFC_Class_1_6F60771CCF313F80_TypeDefinitionIndex = 72159;

class Class_4_8C41CE74BEA50FFC_Class_1_6F60771CCF313F80 : public ::System::Object
{
public:
	::System::Func_1<::System::Boolean>* Field_1_2; // 0x10
	::System::Func_1<::System::Boolean>* Field_1_3; // 0x18
	::Class_5_4E6AD13D7FCF6283* Field_1_0; // 0x20
	::System::WeakReference_1<::Class_5_4E6AD13D7FCF6283*>* Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8C41CE74BEA50FFC_CLASS_1_6F60771CCF313F80__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8C41CE74BEA50FFC_CLASS_1_6F60771CCF313F80_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Boolean Method_1_D240830C442C70A4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8C41CE74BEA50FFC_CLASS_1_6F60771CCF313F80_METHOD_1_D240830C442C70A4_OFFSET))(this);
	}

	::System::Boolean Method_1_0F30679B05E70FC1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8C41CE74BEA50FFC_CLASS_1_6F60771CCF313F80_METHOD_1_0F30679B05E70FC1_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_7732DDB4048EA548(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_4_8C41CE74BEA50FFC_CLASS_1_6F60771CCF313F80_METHOD_1_7732DDB4048EA548_OFFSET))(this, a1);
	}
};
