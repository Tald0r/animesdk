#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/PointerEventBase_1.h"

#define UNITYENGINE_UIELEMENTS_POINTERLEAVEEVENT_INIT_OFFSET UNITYSDK_OFFSET(0x18929E00)
#define UNITYENGINE_UIELEMENTS_POINTERLEAVEEVENT_LOCALINIT_OFFSET UNITYSDK_OFFSET(0x18929EA0)
#define UNITYENGINE_UIELEMENTS_POINTERLEAVEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x18929EB0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PointerLeaveEvent_TypeDefinitionIndex = 23864;

	class PointerLeaveEvent : public ::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::PointerLeaveEvent*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERLEAVEEVENT__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERLEAVEEVENT_INIT_OFFSET))(this);
		}

		::System::Void LocalInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERLEAVEEVENT_LOCALINIT_OFFSET))(this);
		}
	};
}
