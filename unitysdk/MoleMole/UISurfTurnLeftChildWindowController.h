#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"
#include "unitysdk/MoleMole/UISurfAutoSkillButton_1.h"

class Class_2_0C1EE8A3BE8526FC;
class Class_2_60DDD9C206686F44;
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UISURFTURNLEFTCHILDWINDOWCONTROLLER_GET_BUTTON_OFFSET UNITYSDK_OFFSET(0x7C47B50)
#define MOLEMOLE_UISURFTURNLEFTCHILDWINDOWCONTROLLER_GET_ENABLEDRAGINPUTINSKILLBUTTON_OFFSET UNITYSDK_OFFSET(0x7C47B60)
#define MOLEMOLE_UISURFTURNLEFTCHILDWINDOWCONTROLLER_GET_EVENT_OFFSET UNITYSDK_OFFSET(0x7C47B40)
#define MOLEMOLE_UISURFTURNLEFTCHILDWINDOWCONTROLLER_GET_KEYPANELROOT_OFFSET UNITYSDK_OFFSET(0x7C47B20)
#define MOLEMOLE_UISURFTURNLEFTCHILDWINDOWCONTROLLER_GET_SKILLBUTTON_OFFSET UNITYSDK_OFFSET(0x7C47B00)
#define MOLEMOLE_UISURFTURNLEFTCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x7C47B70)

namespace MoleMole
{
	inline static constexpr unsigned int UISurfTurnLeftChildWindowController_TypeDefinitionIndex = 39974;

	class UISurfTurnLeftChildWindowController : public ::MoleMole::UISurfAutoSkillButton_1<::Class_2_0C1EE8A3BE8526FC*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURFTURNLEFTCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_60DDD9C206686F44* get_SkillButton()
		{
			return ((::Class_2_60DDD9C206686F44*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURFTURNLEFTCHILDWINDOWCONTROLLER_GET_SKILLBUTTON_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_KeyPanelRoot()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURFTURNLEFTCHILDWINDOWCONTROLLER_GET_KEYPANELROOT_OFFSET))(this);
		}

		::MoleMole::InputLogicEventType get_Event()
		{
			return ((::MoleMole::InputLogicEventType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURFTURNLEFTCHILDWINDOWCONTROLLER_GET_EVENT_OFFSET))(this);
		}

		::MoleMole::LogicButtonInputType get_Button()
		{
			return ((::MoleMole::LogicButtonInputType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURFTURNLEFTCHILDWINDOWCONTROLLER_GET_BUTTON_OFFSET))(this);
		}

		::System::Boolean get_EnableDragInputInSkillButton()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURFTURNLEFTCHILDWINDOWCONTROLLER_GET_ENABLEDRAGINPUTINSKILLBUTTON_OFFSET))(this);
		}
	};
}
