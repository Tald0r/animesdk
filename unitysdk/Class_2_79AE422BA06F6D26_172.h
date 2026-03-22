#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
class MonoUIExpandAndShrinkCell;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralPopUpHintWidgetController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UIToggleButton; }
template <typename T> class Class_3_A2BF74BADF6F7D16;

#define CLASS_2_79AE422BA06F6D26_172_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x12603230)
#define CLASS_2_79AE422BA06F6D26_172_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x12603560)
#define CLASS_2_79AE422BA06F6D26_172_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x126036C0)
#define CLASS_2_79AE422BA06F6D26_172__CTOR_OFFSET UNITYSDK_OFFSET(0x126036B0)

inline static constexpr unsigned int Class_2_79AE422BA06F6D26_172_TypeDefinitionIndex = 53256;

class Class_2_79AE422BA06F6D26_172 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_13; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x28
	::UnityEngine::RectTransform* Field_2_15; // 0x30
	::MonoUIExpandAndShrinkCell* Field_2_16; // 0x38
	::UnityEngine::RectTransform* Field_2_12; // 0x40
	::Class_3_A2BF74BADF6F7D16<::MoleMole::UIGeneralPopUpHintWidgetController*>* Field_2_6; // 0x48
	::Class_2_A8F5ABF31E066ED4* Field_2_9; // 0x50
	::Class_2_A8F5ABF31E066ED4* Field_2_4; // 0x58
	::UnityEngine::RectTransform* Field_2_11; // 0x60
	::UnityEngine::GameObject* Field_2_2; // 0x68
	::UnityEngine::UI::Extension::UIToggleButton* Field_2_0; // 0x70
	::UnityEngine::GameObject* Field_2_1; // 0x78
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x80
	::Class_2_A8F5ABF31E066ED4* Field_2_14; // 0x88
	::UnityEngine::RectTransform* Field_2_10; // 0x90
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_79AE422BA06F6D26_172__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_79AE422BA06F6D26_172_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_79AE422BA06F6D26_172_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_79AE422BA06F6D26_172_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
