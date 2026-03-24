#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent.h"

#define UNITYENGINE_UI_BUTTON_BUTTONCLICKEDEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9F4590)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Button_ButtonClickedEvent_TypeDefinitionIndex = 8328;

	class Button_ButtonClickedEvent : public ::UnityEngine::Events::UnityEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BUTTON_BUTTONCLICKEDEVENT__CTOR_OFFSET))(this);
		}
	};
}
