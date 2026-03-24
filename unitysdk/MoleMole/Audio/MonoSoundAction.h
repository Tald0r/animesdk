#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace MoleMole::Config { class ConfigSoundActionGeneral; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_AUDIO_MONOSOUNDACTION_AWAKE_OFFSET UNITYSDK_OFFSET(0xACA3DB0)
#define MOLEMOLE_AUDIO_MONOSOUNDACTION_GET_SOUNDACTIONSOURCEHINT_OFFSET UNITYSDK_OFFSET(0xACA3CE0)
#define MOLEMOLE_AUDIO_MONOSOUNDACTION_GET_SOUNDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xACA31B0)
#define MOLEMOLE_AUDIO_MONOSOUNDACTION_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xACA4290)
#define MOLEMOLE_AUDIO_MONOSOUNDACTION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xACA4080)
#define MOLEMOLE_AUDIO_MONOSOUNDACTION_ONENABLE_OFFSET UNITYSDK_OFFSET(0xACA3E40)
#define MOLEMOLE_AUDIO_MONOSOUNDACTION_ONLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0xACA4590)
#define MOLEMOLE_AUDIO_MONOSOUNDACTION_ONLIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0xACA46B0)
#define MOLEMOLE_AUDIO_MONOSOUNDACTION_TRIGGERONDISABLESOUNDACTION_OFFSET UNITYSDK_OFFSET(0xACA4200)
#define MOLEMOLE_AUDIO_MONOSOUNDACTION_TRIGGERONENABLESOUNDACTION_OFFSET UNITYSDK_OFFSET(0xACA3FF0)
#define MOLEMOLE_AUDIO_MONOSOUNDACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xACA47D0)

namespace MoleMole::Audio
{
	inline static constexpr unsigned int MonoSoundAction_TypeDefinitionIndex = 57048;

	class MonoSoundAction : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::Boolean onlyReactOnSelfActive; // 0x58
		::MoleMole::Config::ConfigSoundActionGeneral* onEnableAction; // 0x60
		::MoleMole::Config::ConfigSoundActionGeneral* onDisableAction; // 0x68
		::System::Boolean isEntity; // 0x70
		::System::Boolean useDefaultGameObject; // 0x71
		::System::Boolean useSelf; // 0x72
		::UnityEngine::GameObject* target; // 0x78
		::System::Boolean muteEnable; // 0x80
		::System::Boolean muteDisable; // 0x81
		::UnityEngine::GameObject* selfAutoEmitter; // 0x88
		::System::Boolean m_currentEnabled; // 0x90
		::System::Boolean m_selfActive; // 0x91

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDACTION__CTOR_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_soundGameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDACTION_GET_SOUNDGAMEOBJECT_OFFSET))(this);
		}

		::System::String* get_soundActionSourceHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDACTION_GET_SOUNDACTIONSOURCEHINT_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDACTION_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDACTION_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDACTION_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDACTION_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnLightweightActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDACTION_ONLIGHTWEIGHTACTIVE_OFFSET))(this);
		}

		::System::Void OnLightweightDeactive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDACTION_ONLIGHTWEIGHTDEACTIVE_OFFSET))(this);
		}

		::System::Void TriggerOnEnableSoundAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDACTION_TRIGGERONENABLESOUNDACTION_OFFSET))(this);
		}

		::System::Void TriggerOnDisableSoundAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDACTION_TRIGGERONDISABLESOUNDACTION_OFFSET))(this);
		}
	};
}
