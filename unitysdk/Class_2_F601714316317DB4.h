#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace MoleMole { class UIInputFieldEx; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_F601714316317DB4_METHOD_2_7879E8D5956B4E2C_OFFSET UNITYSDK_OFFSET(0x7C0B440)
#define CLASS_2_F601714316317DB4_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x7C0B6E0)
#define CLASS_2_F601714316317DB4_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x7C0B7B0)
#define CLASS_2_F601714316317DB4__CTOR_OFFSET UNITYSDK_OFFSET(0x7C0B7A0)

inline static constexpr unsigned int Class_2_F601714316317DB4_TypeDefinitionIndex = 60357;

class Class_2_F601714316317DB4 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_60DDD9C206686F44* Field_2_6; // 0x18
	::UnityEngine::GameObject* Field_2_3; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x28
	::UnityEngine::UI::Text* Field_2_0; // 0x30
	::UnityEngine::UI::Text* Field_2_1; // 0x38
	::UnityEngine::GameObject* Field_2_12; // 0x40
	::MoleMole::UIGeneralButtonController* Field_2_13; // 0x48
	::UnityEngine::Transform* Field_2_2; // 0x50
	::Class_2_60DDD9C206686F44* Field_2_7; // 0x58
	::MoleMole::UIInputFieldEx* Field_2_4; // 0x60
	::UnityEngine::UI::Text* Field_2_5; // 0x68
	::UnityEngine::UI::Text* Field_2_8; // 0x70
	::UnityEngine::Transform* Field_2_11; // 0x78
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_10; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F601714316317DB4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7879E8D5956B4E2C(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F601714316317DB4_METHOD_2_7879E8D5956B4E2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F601714316317DB4_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F601714316317DB4_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
