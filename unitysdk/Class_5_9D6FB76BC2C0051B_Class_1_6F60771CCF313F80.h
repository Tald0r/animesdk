#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_5_0A8A59ADAC5CDE67;
namespace System { template <typename T> class Func_1; }
namespace System { template <typename T> class WeakReference_1; }

#define CLASS_5_9D6FB76BC2C0051B_CLASS_1_6F60771CCF313F80_METHOD_1_0F30679B05E70FC1_OFFSET UNITYSDK_OFFSET(0x8272E20)
#define CLASS_5_9D6FB76BC2C0051B_CLASS_1_6F60771CCF313F80_METHOD_1_7732DDB4048EA548_OFFSET UNITYSDK_OFFSET(0x8272B90)
#define CLASS_5_9D6FB76BC2C0051B_CLASS_1_6F60771CCF313F80_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x8272CD0)
#define CLASS_5_9D6FB76BC2C0051B_CLASS_1_6F60771CCF313F80_METHOD_1_D240830C442C70A4_OFFSET UNITYSDK_OFFSET(0x8272AC0)
#define CLASS_5_9D6FB76BC2C0051B_CLASS_1_6F60771CCF313F80__CTOR_OFFSET UNITYSDK_OFFSET(0x8272AB0)

inline static constexpr unsigned int Class_5_9D6FB76BC2C0051B_Class_1_6F60771CCF313F80_TypeDefinitionIndex = 40082;

class Class_5_9D6FB76BC2C0051B_Class_1_6F60771CCF313F80 : public ::System::Object
{
public:
	::System::Func_1<::System::Boolean>* Field_1_2; // 0x10
	::Class_5_0A8A59ADAC5CDE67* Field_1_0; // 0x18
	::System::Func_1<::System::Boolean>* Field_1_3; // 0x20
	::System::WeakReference_1<::Class_5_0A8A59ADAC5CDE67*>* Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_9D6FB76BC2C0051B_CLASS_1_6F60771CCF313F80__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_D240830C442C70A4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_9D6FB76BC2C0051B_CLASS_1_6F60771CCF313F80_METHOD_1_D240830C442C70A4_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_7732DDB4048EA548(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_5_9D6FB76BC2C0051B_CLASS_1_6F60771CCF313F80_METHOD_1_7732DDB4048EA548_OFFSET))(this, a1);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_9D6FB76BC2C0051B_CLASS_1_6F60771CCF313F80_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Boolean Method_1_0F30679B05E70FC1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_9D6FB76BC2C0051B_CLASS_1_6F60771CCF313F80_METHOD_1_0F30679B05E70FC1_OFFSET))(this);
	}
};
