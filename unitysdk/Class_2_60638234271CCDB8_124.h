#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_9E3E3CDA608A4F58;
class Class_2_A8F5ABF31E066ED4;
class ShaderAniHelp;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_60638234271CCDB8_124_METHOD_2_8BCB3191E6BEE7CB_OFFSET UNITYSDK_OFFSET(0x8DDDF20)
#define CLASS_2_60638234271CCDB8_124_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x8DDE0A0)
#define CLASS_2_60638234271CCDB8_124_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x8DDDBD0)
#define CLASS_2_60638234271CCDB8_124__CTOR_OFFSET UNITYSDK_OFFSET(0x8DDE090)

inline static constexpr unsigned int Class_2_60638234271CCDB8_124_TypeDefinitionIndex = 61493;

class Class_2_60638234271CCDB8_124 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x18
	::Class_2_9E3E3CDA608A4F58* Field_2_14; // 0x20
	::UnityEngine::GameObject* Field_2_15; // 0x28
	::Class_2_9E3E3CDA608A4F58* Field_2_8; // 0x30
	::UnityEngine::GameObject* Field_2_5; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x40
	::MoleMole::MonoGamepadModule* Field_2_7; // 0x48
	::Class_2_60DDD9C206686F44* Field_2_3; // 0x50
	::Class_2_A8F5ABF31E066ED4* Field_2_10; // 0x58
	::UnityEngine::RectTransform* Field_2_11; // 0x60
	::Class_2_A8F5ABF31E066ED4* Field_2_12; // 0x68
	::UnityEngine::GameObject* Field_2_4; // 0x70
	::Class_2_A8F5ABF31E066ED4* Field_2_2; // 0x78
	::ShaderAniHelp* Field_2_13; // 0x80
	::UnityEngine::GameObject* Field_2_6; // 0x88
	::Class_2_A8F5ABF31E066ED4* Field_2_9; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_124__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_124_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8BCB3191E6BEE7CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_124_METHOD_2_8BCB3191E6BEE7CB_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_124_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
