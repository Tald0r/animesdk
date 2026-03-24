#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIPhotoWallEditModeWidgetController; }
namespace MoleMole { class UIPhotoWallWatchModeWidgetController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UIImgEventTrigger; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_60638234271CCDB8_82_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x70544A0)
#define CLASS_2_60638234271CCDB8_82_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x7053F50)
#define CLASS_2_60638234271CCDB8_82_METHOD_2_EC2B405D0723571D_OFFSET UNITYSDK_OFFSET(0x70542D0)
#define CLASS_2_60638234271CCDB8_82__CTOR_OFFSET UNITYSDK_OFFSET(0x7054490)

inline static constexpr unsigned int Class_2_60638234271CCDB8_82_TypeDefinitionIndex = 52625;

class Class_2_60638234271CCDB8_82 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UIImgEventTrigger* Field_2_2; // 0x18
	::UnityEngine::GameObject* Field_2_7; // 0x20
	::UnityEngine::GameObject* Field_2_4; // 0x28
	::Class_2_60DDD9C206686F44* Field_2_14; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x38
	::Class_2_A8F5ABF31E066ED4* Field_2_13; // 0x40
	::UnityEngine::GameObject* Field_2_5; // 0x48
	::Class_2_60DDD9C206686F44* Field_2_15; // 0x50
	::Class_2_60DDD9C206686F44* Field_2_8; // 0x58
	::MoleMole::MonoGamepadModule* Field_2_10; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_12; // 0x68
	::UnityEngine::GameObject* Field_2_11; // 0x70
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x78
	::Class_3_647A206587033F4E<::MoleMole::UIPhotoWallWatchModeWidgetController*>* Field_2_1; // 0x80
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x88
	::Class_3_647A206587033F4E<::MoleMole::UIPhotoWallEditModeWidgetController*>* Field_2_3; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_82__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_82_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_82_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_EC2B405D0723571D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_82_METHOD_2_EC2B405D0723571D_OFFSET))(this);
	}
};
