#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_C66B315ABE7BC9BF_METHOD_2_7879E8D5956B4E2C_OFFSET UNITYSDK_OFFSET(0xD6733C0)
#define CLASS_2_C66B315ABE7BC9BF_METHOD_2_8BCB3191E6BEE7CB_OFFSET UNITYSDK_OFFSET(0xD6736A0)
#define CLASS_2_C66B315ABE7BC9BF_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xD673820)
#define CLASS_2_C66B315ABE7BC9BF__CTOR_OFFSET UNITYSDK_OFFSET(0xD673810)

inline static constexpr unsigned int Class_2_C66B315ABE7BC9BF_TypeDefinitionIndex = 67145;

class Class_2_C66B315ABE7BC9BF : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_A8F5ABF31E066ED4* Field_2_13; // 0x18
	::Class_2_60DDD9C206686F44* Field_2_5; // 0x20
	::MoleMole::MonoGamepadCustomList* Field_2_7; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x30
	::UnityEngine::UI::Text* Field_2_4; // 0x38
	::Class_2_60DDD9C206686F44* Field_2_6; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_11; // 0x48
	::Class_2_60DDD9C206686F44* Field_2_3; // 0x50
	::Class_2_60DDD9C206686F44* Field_2_1; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_12; // 0x68
	::UnityEngine::UI::Text* Field_2_2; // 0x70
	::UnityEngine::RectTransform* Field_2_10; // 0x78
	::UnityEngine::RectTransform* Field_2_0; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C66B315ABE7BC9BF__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7879E8D5956B4E2C(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C66B315ABE7BC9BF_METHOD_2_7879E8D5956B4E2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8BCB3191E6BEE7CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C66B315ABE7BC9BF_METHOD_2_8BCB3191E6BEE7CB_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C66B315ABE7BC9BF_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
