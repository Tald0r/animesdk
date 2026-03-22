#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBaseController; }
namespace System { class Action; }
namespace UnityEngine { class Animation; }

#define CLASS_1_9A0F982A4CDA0D1A_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x5EB33D0)
#define CLASS_1_9A0F982A4CDA0D1A_METHOD_1_E535FE3B272F388C_OFFSET UNITYSDK_OFFSET(0x5EB31F0)
#define CLASS_1_9A0F982A4CDA0D1A__CTOR_OFFSET UNITYSDK_OFFSET(0x5EB31B0)

inline static constexpr unsigned int Class_1_9A0F982A4CDA0D1A_TypeDefinitionIndex = 38470;

class Class_1_9A0F982A4CDA0D1A : public ::System::Object
{
public:
	::System::Action* Field_1_2; // 0x10
	::UnityEngine::Animation* Field_1_0; // 0x18
	::Foundation::Coroutine::CoroutineHandle Field_1_1; // 0x20

	::System::Void _ctor(::UnityEngine::Animation* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*))((::PBYTE)hIl2Cpp + CLASS_1_9A0F982A4CDA0D1A__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_E535FE3B272F388C(::MoleMole::UIBaseController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + CLASS_1_9A0F982A4CDA0D1A_METHOD_1_E535FE3B272F388C_OFFSET))(this, a1);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A0F982A4CDA0D1A_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}
};
