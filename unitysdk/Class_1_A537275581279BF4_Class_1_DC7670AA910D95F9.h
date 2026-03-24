#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_A537275581279BF4_CLASS_1_DC7670AA910D95F9_METHOD_1_F127D0D5A4792016_OFFSET UNITYSDK_OFFSET(0xAAA4460)
#define CLASS_1_A537275581279BF4_CLASS_1_DC7670AA910D95F9__CTOR_OFFSET UNITYSDK_OFFSET(0xAAA4450)

inline static constexpr unsigned int Class_1_A537275581279BF4_Class_1_DC7670AA910D95F9_TypeDefinitionIndex = 39598;

class Class_1_A537275581279BF4_Class_1_DC7670AA910D95F9 : public ::System::Object
{
public:
	::System::Action_1<::UnityEngine::GameObject*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A537275581279BF4_CLASS_1_DC7670AA910D95F9__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F127D0D5A4792016(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_A537275581279BF4_CLASS_1_DC7670AA910D95F9_METHOD_1_F127D0D5A4792016_OFFSET))(this, a1);
	}
};
