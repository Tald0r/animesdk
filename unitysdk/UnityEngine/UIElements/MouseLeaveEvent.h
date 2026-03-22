#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/MouseEventBase_1.h"

#define UNITYENGINE_UIELEMENTS_MOUSELEAVEEVENT_INIT_OFFSET UNITYSDK_OFFSET(0x18925800)
#define UNITYENGINE_UIELEMENTS_MOUSELEAVEEVENT_LOCALINIT_OFFSET UNITYSDK_OFFSET(0x189258A0)
#define UNITYENGINE_UIELEMENTS_MOUSELEAVEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x189258B0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int MouseLeaveEvent_TypeDefinitionIndex = 23841;

	class MouseLeaveEvent : public ::UnityEngine::UIElements::MouseEventBase_1<::UnityEngine::UIElements::MouseLeaveEvent*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSELEAVEEVENT__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSELEAVEEVENT_INIT_OFFSET))(this);
		}

		::System::Void LocalInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSELEAVEEVENT_LOCALINIT_OFFSET))(this);
		}
	};
}
