#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralActivityTagInfoWidgetController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class ContentSizeFitter; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_A2BF74BADF6F7D16;

#define CLASS_2_1B1C05BC0A38A2D5_2_METHOD_2_98E64CED7C9FDB63_OFFSET UNITYSDK_OFFSET(0xB08F8A0)
#define CLASS_2_1B1C05BC0A38A2D5_2_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0xB08FBA0)
#define CLASS_2_1B1C05BC0A38A2D5_2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xB08FC70)
#define CLASS_2_1B1C05BC0A38A2D5_2__CTOR_OFFSET UNITYSDK_OFFSET(0xB08FC60)

inline static constexpr unsigned int Class_2_1B1C05BC0A38A2D5_2_TypeDefinitionIndex = 38441;

class Class_2_1B1C05BC0A38A2D5_2 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x18
	::Class_2_60DDD9C206686F44* Field_2_14; // 0x20
	::Class_3_A2BF74BADF6F7D16<::MoleMole::UIGeneralActivityTagInfoWidgetController*>* Field_2_15; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x40
	::MonoUITableScrollV2* Field_2_8; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x50
	::MoleMole::MonoGamepadModule* Field_2_11; // 0x58
	::UnityEngine::UI::ContentSizeFitter* Field_2_13; // 0x60
	::UnityEngine::Transform* Field_2_4; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x70
	::UnityEngine::Transform* Field_2_9; // 0x78
	::MoleMole::MonoGamepadNavigatableList* Field_2_12; // 0x80
	::MonoUITableScrollV2* Field_2_1; // 0x88
	::UnityEngine::GameObject* Field_2_10; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B1C05BC0A38A2D5_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_98E64CED7C9FDB63(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1B1C05BC0A38A2D5_2_METHOD_2_98E64CED7C9FDB63_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1B1C05BC0A38A2D5_2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B1C05BC0A38A2D5_2_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
