#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_CA832D813F452AD6;

#define CLASS_2_60638234271CCDB8_21_METHOD_2_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0x9390100)
#define CLASS_2_60638234271CCDB8_21_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x9390270)
#define CLASS_2_60638234271CCDB8_21_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x938FD80)
#define CLASS_2_60638234271CCDB8_21__CTOR_OFFSET UNITYSDK_OFFSET(0x9390260)

inline static constexpr unsigned int Class_2_60638234271CCDB8_21_TypeDefinitionIndex = 39976;

class Class_2_60638234271CCDB8_21 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_9; // 0x18
	::Class_2_60DDD9C206686F44* Field_2_12; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x28
	::UnityEngine::Transform* Field_2_0; // 0x30
	::UnityEngine::GameObject* Field_2_10; // 0x38
	::Class_2_A8F5ABF31E066ED4* Field_2_5; // 0x40
	::UnityEngine::GameObject* Field_2_16; // 0x48
	::Class_2_60DDD9C206686F44* Field_2_2; // 0x50
	::MoleMole::MonoGamepadCustomList* Field_2_11; // 0x58
	::MoleMole::NotificationBadge* Field_2_17; // 0x60
	::Class_3_CA832D813F452AD6<::MoleMole::UIItemIconBtnWidgetController*>* Field_2_7; // 0x68
	::Class_2_60DDD9C206686F44* Field_2_1; // 0x70
	::Class_3_CA832D813F452AD6<::MoleMole::UIItemIconBtnWidgetController*>* Field_2_8; // 0x78
	::UnityEngine::GameObject* Field_2_14; // 0x80
	::UnityEngine::GameObject* Field_2_15; // 0x88
	::UnityEngine::GameObject* Field_2_4; // 0x90
	::UnityEngine::GameObject* Field_2_3; // 0x98
	::MoleMole::MonoGamepadSelectable* Field_2_13; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_21__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_21_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_21_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_21_METHOD_2_52607DE4C357D269_OFFSET))(this);
	}
};
