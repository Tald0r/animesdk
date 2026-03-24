#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1F76884FC39FD584;
class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class MonoUITableScrollV2;
namespace MoleMole { class MonoInputKey; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIDailyQuestHandBookWidgetController; }
namespace MoleMole { class UIHandBookManualWidgetController; }
namespace MoleMole { class UIHandBookPrimerWidgetController; }
namespace MoleMole { class UIHandBookProxyQuestWidgetController; }
namespace MoleMole { class UIHandBookTabBtnsTipsWidgetController; }
namespace MoleMole { class UIHandBookTacticsWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UITabButton; }
template <typename T> class Class_3_647A206587033F4E;
template <typename T> class Class_3_CA832D813F452AD6;

#define CLASS_2_C7387D40D4120A48_METHOD_2_8AF27F640869EFF7_OFFSET UNITYSDK_OFFSET(0xA865F90)
#define CLASS_2_C7387D40D4120A48_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xA8665B0)
#define CLASS_2_C7387D40D4120A48_METHOD_2_DD784213055292FB_OFFSET UNITYSDK_OFFSET(0xA8663F0)
#define CLASS_2_C7387D40D4120A48__CTOR_OFFSET UNITYSDK_OFFSET(0xA8665A0)

inline static constexpr unsigned int Class_2_C7387D40D4120A48_TypeDefinitionIndex = 38761;

class Class_2_C7387D40D4120A48 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UITabButton* Field_2_6; // 0x18
	::UnityEngine::UI::Extension::UITabButton* Field_2_3; // 0x20
	::UnityEngine::UI::Extension::UITabButton* Field_2_12; // 0x28
	::Class_3_CA832D813F452AD6<::MoleMole::UIHandBookTabBtnsTipsWidgetController*>* Field_2_17; // 0x30
	::UnityEngine::RectTransform* Field_2_15; // 0x38
	::Class_2_1F76884FC39FD584* Field_2_1; // 0x40
	::Class_3_647A206587033F4E<::MoleMole::UIDailyQuestHandBookWidgetController*>* Field_2_5; // 0x48
	::UnityEngine::UI::Extension::UITabButton* Field_2_7; // 0x50
	::MoleMole::MonoInputKey* Field_2_10; // 0x58
	::Class_3_647A206587033F4E<::MoleMole::UIHandBookProxyQuestWidgetController*>* Field_2_9; // 0x60
	::MonoUITableScrollV2* Field_2_13; // 0x68
	::Class_3_647A206587033F4E<::MoleMole::UIHandBookManualWidgetController*>* Field_2_4; // 0x70
	::Class_3_647A206587033F4E<::MoleMole::UIHandBookManualWidgetController*>* Field_2_8; // 0x78
	::UnityEngine::Transform* Field_2_14; // 0x80
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x88
	::UnityEngine::UI::Extension::UITabButton* Field_2_2; // 0x90
	::Class_3_647A206587033F4E<::MoleMole::UIHandBookTacticsWidgetController*>* Field_2_11; // 0x98
	::Class_3_647A206587033F4E<::MoleMole::UIHandBookPrimerWidgetController*>* Field_2_16; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7387D40D4120A48__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8AF27F640869EFF7(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C7387D40D4120A48_METHOD_2_8AF27F640869EFF7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DD784213055292FB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7387D40D4120A48_METHOD_2_DD784213055292FB_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C7387D40D4120A48_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
