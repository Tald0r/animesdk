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

#define CLASS_2_60638234271CCDB8_93_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x65945E0)
#define CLASS_2_60638234271CCDB8_93_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x6594040)
#define CLASS_2_60638234271CCDB8_93_METHOD_2_EC2B405D0723571D_OFFSET UNITYSDK_OFFSET(0x6594410)
#define CLASS_2_60638234271CCDB8_93__CTOR_OFFSET UNITYSDK_OFFSET(0x65945D0)

inline static constexpr unsigned int Class_2_60638234271CCDB8_93_TypeDefinitionIndex = 51342;

class Class_2_60638234271CCDB8_93 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x20
	::UnityEngine::GameObject* Field_2_6; // 0x28
	::ShaderAniHelp* Field_2_17; // 0x30
	::Class_2_9E3E3CDA608A4F58* Field_2_18; // 0x38
	::Class_2_A8F5ABF31E066ED4* Field_2_2; // 0x40
	::UnityEngine::GameObject* Field_2_8; // 0x48
	::UnityEngine::RectTransform* Field_2_13; // 0x50
	::UnityEngine::RectTransform* Field_2_0; // 0x58
	::UnityEngine::RectTransform* Field_2_1; // 0x60
	::Class_2_9E3E3CDA608A4F58* Field_2_10; // 0x68
	::Class_2_A8F5ABF31E066ED4* Field_2_14; // 0x70
	::Class_2_A8F5ABF31E066ED4* Field_2_16; // 0x78
	::Class_2_A8F5ABF31E066ED4* Field_2_11; // 0x80
	::Class_2_A8F5ABF31E066ED4* Field_2_15; // 0x88
	::Class_2_60DDD9C206686F44* Field_2_5; // 0x90
	::Class_2_A8F5ABF31E066ED4* Field_2_12; // 0x98
	::UnityEngine::GameObject* Field_2_7; // 0xA0
	::UnityEngine::GameObject* Field_2_19; // 0xA8
	::MoleMole::MonoGamepadModule* Field_2_9; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_93__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_93_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_EC2B405D0723571D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_93_METHOD_2_EC2B405D0723571D_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_93_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
