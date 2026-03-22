#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_34AE173D4F8AF3B1;
class Class_1_9D34F5E162651ADD;
namespace MoleMole { class UIGeneralTipsWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class RectTransform; }

#define CLASS_1_ADD89AA9330DB5F7_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x82AE590)
#define CLASS_1_ADD89AA9330DB5F7_METHOD_1_18F57E63F42743CC_OFFSET UNITYSDK_OFFSET(0x82AE440)
#define CLASS_1_ADD89AA9330DB5F7_METHOD_1_2A06553F29FD7BA3_OFFSET UNITYSDK_OFFSET(0x82ADD50)
#define CLASS_1_ADD89AA9330DB5F7__CTOR_OFFSET UNITYSDK_OFFSET(0x82ADC70)

inline static constexpr unsigned int Class_1_ADD89AA9330DB5F7_TypeDefinitionIndex = 73943;

class Class_1_ADD89AA9330DB5F7 : public ::System::Object
{
public:
	::Class_1_9D34F5E162651ADD* Field_1_1; // 0x10
	::UnityEngine::AnimationCurve* Field_1_3; // 0x18
	::System::Collections::Generic::List_1<::Class_1_34AE173D4F8AF3B1*>* Field_1_0; // 0x20
	::Foundation::Coroutine::CoroutineHandle Field_1_2; // 0x28

	::System::Void _ctor(::UnityEngine::RectTransform* a1, ::UnityEngine::AnimationCurve* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_ADD89AA9330DB5F7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2A06553F29FD7BA3(::MoleMole::UIGeneralTipsWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralTipsWidgetController*))((::PBYTE)hIl2Cpp + CLASS_1_ADD89AA9330DB5F7_METHOD_1_2A06553F29FD7BA3_OFFSET))(this, a1);
	}

	::System::Void Method_1_18F57E63F42743CC(::MoleMole::UIGeneralTipsWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralTipsWidgetController*))((::PBYTE)hIl2Cpp + CLASS_1_ADD89AA9330DB5F7_METHOD_1_18F57E63F42743CC_OFFSET))(this, a1);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ADD89AA9330DB5F7_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}
};
