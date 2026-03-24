#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"
#include "unitysdk/MoleMole/UISurfAutoSkillButton_1.h"

class Class_2_60DDD9C206686F44;
class Class_2_79AE422BA06F6D26_216;
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UISURFRESETCHILDWINDOWCONTROLLER_GET_BUTTON_OFFSET UNITYSDK_OFFSET(0x9906260)
#define MOLEMOLE_UISURFRESETCHILDWINDOWCONTROLLER_GET_EVENT_OFFSET UNITYSDK_OFFSET(0x9906250)
#define MOLEMOLE_UISURFRESETCHILDWINDOWCONTROLLER_GET_KEYPANELROOT_OFFSET UNITYSDK_OFFSET(0x9906230)
#define MOLEMOLE_UISURFRESETCHILDWINDOWCONTROLLER_GET_SKILLBUTTON_OFFSET UNITYSDK_OFFSET(0x9906210)
#define MOLEMOLE_UISURFRESETCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x9906270)

namespace MoleMole
{
	inline static constexpr unsigned int UISurfResetChildWindowController_TypeDefinitionIndex = 65985;

	class UISurfResetChildWindowController : public ::MoleMole::UISurfAutoSkillButton_1<::Class_2_79AE422BA06F6D26_216*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURFRESETCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_60DDD9C206686F44* get_SkillButton()
		{
			return ((::Class_2_60DDD9C206686F44*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURFRESETCHILDWINDOWCONTROLLER_GET_SKILLBUTTON_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_KeyPanelRoot()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURFRESETCHILDWINDOWCONTROLLER_GET_KEYPANELROOT_OFFSET))(this);
		}

		::MoleMole::InputLogicEventType get_Event()
		{
			return ((::MoleMole::InputLogicEventType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURFRESETCHILDWINDOWCONTROLLER_GET_EVENT_OFFSET))(this);
		}

		::MoleMole::LogicButtonInputType get_Button()
		{
			return ((::MoleMole::LogicButtonInputType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURFRESETCHILDWINDOWCONTROLLER_GET_BUTTON_OFFSET))(this);
		}
	};
}
