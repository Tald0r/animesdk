#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralSortWidgetController; }
namespace MoleMole { class UIGeneralToggleWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_A2BF74BADF6F7D16;

#define CLASS_2_16662C3A313ABE0B_METHOD_2_29352E75304CF2A0_OFFSET UNITYSDK_OFFSET(0xB97AA80)
#define CLASS_2_16662C3A313ABE0B_METHOD_2_8AF27F640869EFF7_OFFSET UNITYSDK_OFFSET(0xB97A7A0)
#define CLASS_2_16662C3A313ABE0B_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xB97ABC0)
#define CLASS_2_16662C3A313ABE0B__CTOR_OFFSET UNITYSDK_OFFSET(0xB97ABB0)

inline static constexpr unsigned int Class_2_16662C3A313ABE0B_TypeDefinitionIndex = 52710;

class Class_2_16662C3A313ABE0B : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::MonoGamepadNavigatableList* Field_2_10; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x20
	::Class_3_A2BF74BADF6F7D16<::MoleMole::UIGeneralSortWidgetController*>* Field_2_7; // 0x28
	::Class_2_60DDD9C206686F44* Field_2_2; // 0x30
	::Class_2_60DDD9C206686F44* Field_2_6; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x48
	::Class_2_A8F5ABF31E066ED4* Field_2_5; // 0x50
	::UnityEngine::RectTransform* Field_2_0; // 0x58
	::Class_3_A2BF74BADF6F7D16<::MoleMole::UIGeneralToggleWidgetController*>* Field_2_8; // 0x60
	::MonoUITableScrollV2* Field_2_1; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16662C3A313ABE0B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8AF27F640869EFF7(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_16662C3A313ABE0B_METHOD_2_8AF27F640869EFF7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_16662C3A313ABE0B_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_29352E75304CF2A0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16662C3A313ABE0B_METHOD_2_29352E75304CF2A0_OFFSET))(this);
	}
};
