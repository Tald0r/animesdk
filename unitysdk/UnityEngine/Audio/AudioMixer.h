#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Audio/AudioMixerUpdateMode.h"
#include "unitysdk/UnityEngine/Object.h"

namespace System { class String; }
namespace UnityEngine::Audio { class AudioMixerGroup; }
namespace UnityEngine::Audio { class AudioMixerSnapshot; }

#define UNITYENGINE_AUDIO_AUDIOMIXER_CLEARFLOAT_OFFSET UNITYSDK_OFFSET(0x1AF60E80)
#define UNITYENGINE_AUDIO_AUDIOMIXER_FINDMATCHINGGROUPS_OFFSET UNITYSDK_OFFSET(0x1AF60B60)
#define UNITYENGINE_AUDIO_AUDIOMIXER_FINDSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1AF60B50)
#define UNITYENGINE_AUDIO_AUDIOMIXER_GETFLOAT_OFFSET UNITYSDK_OFFSET(0x1AF60E90)
#define UNITYENGINE_AUDIO_AUDIOMIXER_GET_OUTPUTAUDIOMIXERGROUP_OFFSET UNITYSDK_OFFSET(0x1AF60B30)
#define UNITYENGINE_AUDIO_AUDIOMIXER_GET_UPDATEMODE_OFFSET UNITYSDK_OFFSET(0x1AF60E50)
#define UNITYENGINE_AUDIO_AUDIOMIXER_SETFLOAT_OFFSET UNITYSDK_OFFSET(0x1AF60E70)
#define UNITYENGINE_AUDIO_AUDIOMIXER_SET_OUTPUTAUDIOMIXERGROUP_OFFSET UNITYSDK_OFFSET(0x1AF60B40)
#define UNITYENGINE_AUDIO_AUDIOMIXER_SET_UPDATEMODE_OFFSET UNITYSDK_OFFSET(0x1AF60E60)
#define UNITYENGINE_AUDIO_AUDIOMIXER_TRANSITIONTOSNAPSHOTINTERNAL_OFFSET UNITYSDK_OFFSET(0x1AF60E30)
#define UNITYENGINE_AUDIO_AUDIOMIXER_TRANSITIONTOSNAPSHOTS_OFFSET UNITYSDK_OFFSET(0x1AF60E40)
#define UNITYENGINE_AUDIO_AUDIOMIXER_TRANSITIONTOSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1AF60B70)
#define UNITYENGINE_AUDIO_AUDIOMIXER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF60B10)

namespace UnityEngine::Audio
{
	inline static constexpr unsigned int AudioMixer_TypeDefinitionIndex = 9621;

	class AudioMixer : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Audio::AudioMixerGroup* get_outputAudioMixerGroup()
		{
			return ((::UnityEngine::Audio::AudioMixerGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXER_GET_OUTPUTAUDIOMIXERGROUP_OFFSET))(this);
		}

		::System::Void set_outputAudioMixerGroup(::UnityEngine::Audio::AudioMixerGroup* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Audio::AudioMixerGroup*))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXER_SET_OUTPUTAUDIOMIXERGROUP_OFFSET))(this, value);
		}

		::UnityEngine::Audio::AudioMixerSnapshot* FindSnapshot(::System::String* name)
		{
			return ((::UnityEngine::Audio::AudioMixerSnapshot*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXER_FINDSNAPSHOT_OFFSET))(this, name);
		}

		::Il2CppArray<::UnityEngine::Audio::AudioMixerGroup*>* FindMatchingGroups(::System::String* subPath)
		{
			return ((::Il2CppArray<::UnityEngine::Audio::AudioMixerGroup*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXER_FINDMATCHINGGROUPS_OFFSET))(this, subPath);
		}

		::System::Void TransitionToSnapshot(::UnityEngine::Audio::AudioMixerSnapshot* snapshot, ::System::Single timeToReach)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Audio::AudioMixerSnapshot*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXER_TRANSITIONTOSNAPSHOT_OFFSET))(this, snapshot, timeToReach);
		}

		::System::Void TransitionToSnapshotInternal(::UnityEngine::Audio::AudioMixerSnapshot* snapshot, ::System::Single timeToReach)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Audio::AudioMixerSnapshot*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXER_TRANSITIONTOSNAPSHOTINTERNAL_OFFSET))(this, snapshot, timeToReach);
		}

		::System::Void TransitionToSnapshots(::Il2CppArray<::UnityEngine::Audio::AudioMixerSnapshot*>* snapshots, ::Il2CppArray<::System::Single>* weights, ::System::Single timeToReach)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Audio::AudioMixerSnapshot*>*, ::Il2CppArray<::System::Single>*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXER_TRANSITIONTOSNAPSHOTS_OFFSET))(this, snapshots, weights, timeToReach);
		}

		::UnityEngine::Audio::AudioMixerUpdateMode get_updateMode()
		{
			return ((::UnityEngine::Audio::AudioMixerUpdateMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXER_GET_UPDATEMODE_OFFSET))(this);
		}

		::System::Void set_updateMode(::UnityEngine::Audio::AudioMixerUpdateMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Audio::AudioMixerUpdateMode))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXER_SET_UPDATEMODE_OFFSET))(this, value);
		}

		::System::Boolean SetFloat(::System::String* name, ::System::Single value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXER_SETFLOAT_OFFSET))(this, name, value);
		}

		::System::Boolean ClearFloat(::System::String* name)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXER_CLEARFLOAT_OFFSET))(this, name);
		}

		::System::Boolean GetFloat(::System::String* name, ::System::Single& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXER_GETFLOAT_OFFSET))(this, name, value);
		}
	};
}
