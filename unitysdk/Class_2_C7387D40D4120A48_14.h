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
template <typename T> class Class_3_95EF0285C16C5E7C;
template <typename T> class Class_3_A2BF74BADF6F7D16;

#define CLASS_2_C7387D40D4120A48_14_METHOD_2_8AF27F640869EFF7_OFFSET UNITYSDK_OFFSET(0x9FF2AA0)
#define CLASS_2_C7387D40D4120A48_14_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x9FF30D0)
#define CLASS_2_C7387D40D4120A48_14_METHOD_2_DD784213055292FB_OFFSET UNITYSDK_OFFSET(0x9FF2F10)
#define CLASS_2_C7387D40D4120A48_14__CTOR_OFFSET UNITYSDK_OFFSET(0x9FF30C0)

inline static constexpr unsigned int Class_2_C7387D40D4120A48_14_TypeDefinitionIndex = 50414;

class Class_2_C7387D40D4120A48_14 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x18
	::UnityEngine::Transform* Field_2_14; // 0x20
	::UnityEngine::UI::Extension::UITabButton* Field_2_3; // 0x28
	::UnityEngine::UI::Extension::UITabButton* Field_2_2; // 0x30
	::Class_3_A2BF74BADF6F7D16<::MoleMole::UIHandBookProxyQuestWidgetController*>* Field_2_9; // 0x38
	::UnityEngine::RectTransform* Field_2_15; // 0x40
	::Class_3_A2BF74BADF6F7D16<::MoleMole::UIHandBookManualWidgetController*>* Field_2_8; // 0x48
	::Class_2_1F76884FC39FD584* Field_2_1; // 0x50
	::Class_3_A2BF74BADF6F7D16<::MoleMole::UIHandBookPrimerWidgetController*>* Field_2_16; // 0x58
	::MonoUITableScrollV2* Field_2_13; // 0x60
	::UnityEngine::UI::Extension::UITabButton* Field_2_7; // 0x68
	::UnityEngine::UI::Extension::UITabButton* Field_2_6; // 0x70
	::Class_3_A2BF74BADF6F7D16<::MoleMole::UIHandBookManualWidgetController*>* Field_2_4; // 0x78
	::MoleMole::MonoInputKey* Field_2_10; // 0x80
	::Class_3_95EF0285C16C5E7C<::MoleMole::UIHandBookTabBtnsTipsWidgetController*>* Field_2_17; // 0x88
	::UnityEngine::UI::Extension::UITabButton* Field_2_12; // 0x90
	::Class_3_A2BF74BADF6F7D16<::MoleMole::UIHandBookTacticsWidgetController*>* Field_2_11; // 0x98
	::Class_3_A2BF74BADF6F7D16<::MoleMole::UIDailyQuestHandBookWidgetController*>* Field_2_5; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7387D40D4120A48_14__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8AF27F640869EFF7(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C7387D40D4120A48_14_METHOD_2_8AF27F640869EFF7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DD784213055292FB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7387D40D4120A48_14_METHOD_2_DD784213055292FB_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C7387D40D4120A48_14_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
