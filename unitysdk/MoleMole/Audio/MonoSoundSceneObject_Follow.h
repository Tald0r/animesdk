#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_AUDIO_MONOSOUNDSCENEOBJECT_FOLLOW_AWAKE_OFFSET UNITYSDK_OFFSET(0xB499B80)
#define MOLEMOLE_AUDIO_MONOSOUNDSCENEOBJECT_FOLLOW_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB499F90)
#define MOLEMOLE_AUDIO_MONOSOUNDSCENEOBJECT_FOLLOW__CTOR_OFFSET UNITYSDK_OFFSET(0xB49A180)

namespace MoleMole::Audio
{
	inline static constexpr unsigned int MonoSoundSceneObject_Follow_TypeDefinitionIndex = 38887;

	class MonoSoundSceneObject_Follow : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* eventName; // 0x18
		::UnityEngine::GameObject* soundEmitter; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENEOBJECT_FOLLOW__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENEOBJECT_FOLLOW_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENEOBJECT_FOLLOW_ONDESTROY_OFFSET))(this);
		}
	};
}
