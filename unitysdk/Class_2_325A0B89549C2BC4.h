#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_47EB23CB5C4B2615_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine { class Transform; }

#define CLASS_2_325A0B89549C2BC4_METHOD_2_2FA8AE0519AC7829_OFFSET UNITYSDK_OFFSET(0xD3E2C20)
#define CLASS_2_325A0B89549C2BC4_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xD3E2B10)
#define CLASS_2_325A0B89549C2BC4_METHOD_2_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0xD3E2CB0)
#define CLASS_2_325A0B89549C2BC4_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xD3E2D90)
#define CLASS_2_325A0B89549C2BC4_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD3E2D30)
#define CLASS_2_325A0B89549C2BC4__CTOR_OFFSET UNITYSDK_OFFSET(0xD3E2D20)

inline static constexpr unsigned int Class_2_325A0B89549C2BC4_TypeDefinitionIndex = 45299;

class Class_2_325A0B89549C2BC4 : public ::Class_1_47EB23CB5C4B2615_1
{
public:
	::MoleMole::Battle::Entity* Field_2_4; // 0x18
	::System::Threading::CancellationTokenSource* Field_2_2; // 0x20
	::UnityEngine::Transform* Field_2_3; // 0x28
	::System::String* Field_2_0; // 0x30
	::System::Single Field_2_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_325A0B89549C2BC4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_325A0B89549C2BC4_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_B2C0ADBFEA309440()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_325A0B89549C2BC4_METHOD_2_B2C0ADBFEA309440_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_325A0B89549C2BC4_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_2_2FA8AE0519AC7829()
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_325A0B89549C2BC4_METHOD_2_2FA8AE0519AC7829_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_325A0B89549C2BC4_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}
};
