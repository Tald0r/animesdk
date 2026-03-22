#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_MONOEFFECTPLUGINRENDERSETTING_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x67B35F0)
#define MOLEMOLE_MONOEFFECTPLUGINRENDERSETTING_ONENABLE_OFFSET UNITYSDK_OFFSET(0x67B3550)
#define MOLEMOLE_MONOEFFECTPLUGINRENDERSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x67B3690)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginRenderSetting_TypeDefinitionIndex = 74410;

	class MonoEffectPluginRenderSetting : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean ForceFullScreenTransparent; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINRENDERSETTING__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINRENDERSETTING_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINRENDERSETTING_ONDISABLE_OFFSET))(this);
		}
	};
}
