#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralBtn03WidgetController; }
namespace UnityEngine::Events { class UnityAction; }

#define CLASS_1_F29C68BEB3C6B152_CLASS_1_4514C0E3CB1367A5_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xB44B0E0)
#define CLASS_1_F29C68BEB3C6B152_CLASS_1_4514C0E3CB1367A5_METHOD_1_711ACF9969F0460C_OFFSET UNITYSDK_OFFSET(0xB44B0B0)
#define CLASS_1_F29C68BEB3C6B152_CLASS_1_4514C0E3CB1367A5__CTOR_OFFSET UNITYSDK_OFFSET(0xB44B0A0)

inline static constexpr unsigned int Class_1_F29C68BEB3C6B152_Class_1_4514C0E3CB1367A5_TypeDefinitionIndex = 74231;

class Class_1_F29C68BEB3C6B152_Class_1_4514C0E3CB1367A5 : public ::System::Object
{
public:
	::MoleMole::UIGeneralBtn03WidgetController* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_CLASS_1_4514C0E3CB1367A5__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_711ACF9969F0460C(::MoleMole::UIGeneralBtn03WidgetController* a1, ::UnityEngine::Events::UnityAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralBtn03WidgetController*, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_CLASS_1_4514C0E3CB1367A5_METHOD_1_711ACF9969F0460C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_CLASS_1_4514C0E3CB1367A5_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}
};
