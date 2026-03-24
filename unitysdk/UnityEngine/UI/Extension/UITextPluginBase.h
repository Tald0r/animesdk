#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"

#define UNITYENGINE_UI_EXTENSION_UITEXTPLUGINBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xAEB53E0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITextPluginBase_TypeDefinitionIndex = 59858;

	class UITextPluginBase : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTPLUGINBASE__CTOR_OFFSET))(this);
		}
	};
}
