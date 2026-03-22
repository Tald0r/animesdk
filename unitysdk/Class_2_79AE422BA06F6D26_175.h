#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIEquipStateController; }
namespace MoleMole { class UIGeneralEquipDetailV2WidgetController; }
namespace MoleMole { class UIGeneralSortWidgetController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class Class_3_A2BF74BADF6F7D16;

#define CLASS_2_79AE422BA06F6D26_175_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x687E700)
#define CLASS_2_79AE422BA06F6D26_175_METHOD_2_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0x687EAD0)
#define CLASS_2_79AE422BA06F6D26_175_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x687EC70)
#define CLASS_2_79AE422BA06F6D26_175__CTOR_OFFSET UNITYSDK_OFFSET(0x687EC60)

inline static constexpr unsigned int Class_2_79AE422BA06F6D26_175_TypeDefinitionIndex = 53458;

class Class_2_79AE422BA06F6D26_175 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_A2BF74BADF6F7D16<::MoleMole::UIGeneralEquipDetailV2WidgetController*>* Field_2_11; // 0x18
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_10; // 0x20
	::Class_2_A8F5ABF31E066ED4* Field_2_3; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x30
	::UnityEngine::GameObject* Field_2_0; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x40
	::UnityEngine::RectTransform* Field_2_15; // 0x48
	::UnityEngine::GameObject* Field_2_9; // 0x50
	::UnityEngine::RectTransform* Field_2_18; // 0x58
	::Class_2_60DDD9C206686F44* Field_2_13; // 0x60
	::Class_2_60DDD9C206686F44* Field_2_6; // 0x68
	::MonoUITableScrollV2* Field_2_16; // 0x70
	::MonoUITableScrollV2* Field_2_1; // 0x78
	::MonoUITableScrollV2* Field_2_2; // 0x80
	::UnityEngine::GameObject* Field_2_8; // 0x88
	::MoleMole::UIEquipStateController* Field_2_12; // 0x90
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x98
	::Class_3_A2BF74BADF6F7D16<::MoleMole::UIGeneralSortWidgetController*>* Field_2_17; // 0xA0
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_19; // 0xA8
	::UnityEngine::RectTransform* Field_2_14; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_79AE422BA06F6D26_175__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_79AE422BA06F6D26_175_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8D61BE16C9463302()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_79AE422BA06F6D26_175_METHOD_2_8D61BE16C9463302_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_79AE422BA06F6D26_175_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
