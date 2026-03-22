#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_9E3E3CDA608A4F58;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_CAE8D464F6109E71_METHOD_2_29352E75304CF2A0_OFFSET UNITYSDK_OFFSET(0xB426610)
#define CLASS_2_CAE8D464F6109E71_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xB426750)
#define CLASS_2_CAE8D464F6109E71_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0xB426350)
#define CLASS_2_CAE8D464F6109E71__CTOR_OFFSET UNITYSDK_OFFSET(0xB426740)

inline static constexpr unsigned int Class_2_CAE8D464F6109E71_TypeDefinitionIndex = 36643;

class Class_2_CAE8D464F6109E71 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_10; // 0x18
	::UnityEngine::Transform* Field_2_7; // 0x20
	::Class_2_9E3E3CDA608A4F58* Field_2_1; // 0x28
	::Class_2_A8F5ABF31E066ED4* Field_2_4; // 0x30
	::Class_2_A8F5ABF31E066ED4* Field_2_6; // 0x38
	::UnityEngine::CanvasGroup* Field_2_9; // 0x40
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x48
	::Class_2_A8F5ABF31E066ED4* Field_2_2; // 0x50
	::Class_2_A8F5ABF31E066ED4* Field_2_3; // 0x58
	::UnityEngine::UI::Text* Field_2_5; // 0x60
	::UnityEngine::RectTransform* Field_2_8; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CAE8D464F6109E71__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_CAE8D464F6109E71_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_29352E75304CF2A0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CAE8D464F6109E71_METHOD_2_29352E75304CF2A0_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_CAE8D464F6109E71_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
