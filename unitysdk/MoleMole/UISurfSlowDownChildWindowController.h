#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"
#include "unitysdk/MoleMole/UISurfAutoSkillButton_1.h"

class Class_2_60DDD9C206686F44;
class Class_2_79AE422BA06F6D26_19;
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UISURFSLOWDOWNCHILDWINDOWCONTROLLER_GET_BUTTON_OFFSET UNITYSDK_OFFSET(0xCAA9EC0)
#define MOLEMOLE_UISURFSLOWDOWNCHILDWINDOWCONTROLLER_GET_EVENT_OFFSET UNITYSDK_OFFSET(0xCAA9EB0)
#define MOLEMOLE_UISURFSLOWDOWNCHILDWINDOWCONTROLLER_GET_KEYPANELROOT_OFFSET UNITYSDK_OFFSET(0xCAA9E90)
#define MOLEMOLE_UISURFSLOWDOWNCHILDWINDOWCONTROLLER_GET_SKILLBUTTON_OFFSET UNITYSDK_OFFSET(0xCAA9E70)
#define MOLEMOLE_UISURFSLOWDOWNCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xCAA9ED0)

namespace MoleMole
{
	inline static constexpr unsigned int UISurfSlowDownChildWindowController_TypeDefinitionIndex = 71136;

	class UISurfSlowDownChildWindowController : public ::MoleMole::UISurfAutoSkillButton_1<::Class_2_79AE422BA06F6D26_19*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURFSLOWDOWNCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_60DDD9C206686F44* get_SkillButton()
		{
			return ((::Class_2_60DDD9C206686F44*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURFSLOWDOWNCHILDWINDOWCONTROLLER_GET_SKILLBUTTON_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_KeyPanelRoot()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURFSLOWDOWNCHILDWINDOWCONTROLLER_GET_KEYPANELROOT_OFFSET))(this);
		}

		::MoleMole::InputLogicEventType get_Event()
		{
			return ((::MoleMole::InputLogicEventType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURFSLOWDOWNCHILDWINDOWCONTROLLER_GET_EVENT_OFFSET))(this);
		}

		::MoleMole::LogicButtonInputType get_Button()
		{
			return ((::MoleMole::LogicButtonInputType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURFSLOWDOWNCHILDWINDOWCONTROLLER_GET_BUTTON_OFFSET))(this);
		}
	};
}
