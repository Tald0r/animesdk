#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_AUDIO_MONOSOUNDSCENEDYNAMICOBJECT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x89DB7E0)
#define MOLEMOLE_AUDIO_MONOSOUNDSCENEDYNAMICOBJECT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x89DB4F0)
#define MOLEMOLE_AUDIO_MONOSOUNDSCENEDYNAMICOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x89DB9A0)

namespace MoleMole::Audio
{
	inline static constexpr unsigned int MonoSoundSceneDynamicObject_TypeDefinitionIndex = 75261;

	class MonoSoundSceneDynamicObject : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* eventName; // 0x18
		::System::Single activeDistance; // 0x20
		::UnityEngine::GameObject* soundEmitter; // 0x28
		::System::Boolean multiplePosition; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENEDYNAMICOBJECT__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENEDYNAMICOBJECT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENEDYNAMICOBJECT_ONDISABLE_OFFSET))(this);
		}
	};
}
