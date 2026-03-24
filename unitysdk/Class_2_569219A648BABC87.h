#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
class Class_2_CA67A9CEB871FFD3;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UIImgEventTrigger; }

#define CLASS_2_569219A648BABC87_METHOD_2_29352E75304CF2A0_OFFSET UNITYSDK_OFFSET(0x7DF9FB0)
#define CLASS_2_569219A648BABC87_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x7DFA0F0)
#define CLASS_2_569219A648BABC87_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x7DF9D20)
#define CLASS_2_569219A648BABC87__CTOR_OFFSET UNITYSDK_OFFSET(0x7DFA0E0)

inline static constexpr unsigned int Class_2_569219A648BABC87_TypeDefinitionIndex = 45094;

class Class_2_569219A648BABC87 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_60DDD9C206686F44* Field_2_2; // 0x18
	::UnityEngine::UI::Extension::UIImgEventTrigger* Field_2_4; // 0x20
	::Class_2_CA67A9CEB871FFD3* Field_2_0; // 0x28
	::Class_2_A8F5ABF31E066ED4* Field_2_6; // 0x30
	::Class_2_A8F5ABF31E066ED4* Field_2_3; // 0x38
	::MoleMole::MonoGamepadSelectable* Field_2_7; // 0x40
	::Class_2_60DDD9C206686F44* Field_2_1; // 0x48
	::UnityEngine::CanvasGroup* Field_2_8; // 0x50
	::UnityEngine::Transform* Field_2_5; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_569219A648BABC87__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_569219A648BABC87_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_569219A648BABC87_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_29352E75304CF2A0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_569219A648BABC87_METHOD_2_29352E75304CF2A0_OFFSET))(this);
	}
};
