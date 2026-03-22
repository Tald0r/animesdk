#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_79AE422BA06F6D26_50_Class_2_BE5D25EF31E0E752_1;
class MonoUIDailyQuestParam;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class MonoInputKey; }
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_79AE422BA06F6D26_50_METHOD_2_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0x85004B0)
#define CLASS_2_79AE422BA06F6D26_50_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x8500110)
#define CLASS_2_79AE422BA06F6D26_50_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x8500630)
#define CLASS_2_79AE422BA06F6D26_50__CTOR_OFFSET UNITYSDK_OFFSET(0x8500620)

inline static constexpr unsigned int Class_2_79AE422BA06F6D26_50_TypeDefinitionIndex = 59370;

class Class_2_79AE422BA06F6D26_50 : public ::Class_1_EEA0111A28582B57
{
public:
	::MonoUIDailyQuestParam* Field_2_4; // 0x18
	::MonoUITableScrollV2* Field_2_2; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x28
	::Class_2_60DDD9C206686F44* Field_2_10; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_11; // 0x38
	::UnityEngine::RectTransform* Field_2_15; // 0x40
	::MoleMole::MonoInputKey* Field_2_6; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_18; // 0x50
	::Class_2_60DDD9C206686F44* Field_2_5; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_12; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_17; // 0x68
	::MoleMole::UIGeneralButtonController* Field_2_9; // 0x70
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_14; // 0x78
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x80
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_13; // 0x88
	::Class_2_0D31A1661D004892<::Class_2_79AE422BA06F6D26_50_Class_2_BE5D25EF31E0E752_1*>* Field_2_1; // 0x90
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x98
	::MoleMole::NotificationBadge* Field_2_16; // 0xA0
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_3; // 0xA8
	::MoleMole::MonoGamepadCustomList* Field_2_20; // 0xB0
	::Class_2_60DDD9C206686F44* Field_2_19; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_79AE422BA06F6D26_50__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_79AE422BA06F6D26_50_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_79AE422BA06F6D26_50_METHOD_2_52607DE4C357D269_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_79AE422BA06F6D26_50_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
