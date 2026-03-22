#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/CommandEventBase_1.h"

#define UNITYENGINE_UIELEMENTS_VALIDATECOMMANDEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x18934910)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int ValidateCommandEvent_TypeDefinitionIndex = 23794;

	class ValidateCommandEvent : public ::UnityEngine::UIElements::CommandEventBase_1<::UnityEngine::UIElements::ValidateCommandEvent*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VALIDATECOMMANDEVENT__CTOR_OFFSET))(this);
		}
	};
}
