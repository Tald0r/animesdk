#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_684B8CD1961BDDD2.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM_EMPTY_OFFSET UNITYSDK_OFFSET(0x6BD55A0)
#define MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM_GETCOMPONENTSAFELY_OFFSET UNITYSDK_OFFSET(0x6BD56D0)
#define MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM_GET_SOUNDEMITTER_OFFSET UNITYSDK_OFFSET(0x6BD3EA0)
#define MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x6BD5820)
#define MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x6BD5340)
#define MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM_ONENABLE_OFFSET UNITYSDK_OFFSET(0x6BD5150)
#define MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM_UNREGISTEREMITTER_OFFSET UNITYSDK_OFFSET(0x6BD5890)
#define MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM__CCTOR_OFFSET UNITYSDK_OFFSET(0x6BD5AA0)
#define MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM__CTOR_OFFSET UNITYSDK_OFFSET(0x6BD5A60)

namespace MoleMole::Audio
{
	inline static constexpr unsigned int MonoSoundEmitterCustom_TypeDefinitionIndex = 54592;

	class MonoSoundEmitterCustom : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Audio::MonoSoundEmitterCustom*>** StaticGet_staticMonoDic()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Audio::MonoSoundEmitterCustom*>**)Il2CppClass::FromTypeDefinitionIndex(MonoSoundEmitterCustom_TypeDefinitionIndex)->GetStaticField(0x361E0);
		}
		::Enum_3_684B8CD1961BDDD2 emitterType; // 0x18
		::System::Single radius; // 0x1C
		::UnityEngine::Vector3 offset; // 0x20
		::UnityEngine::Vector3 extend; // 0x2C
		::System::Boolean reTarget; // 0x38
		::System::String* attachPoint; // 0x40
		::UnityEngine::Transform* targetTrans; // 0x48
		::UnityEngine::GameObject* Field_5_8; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM__CCTOR_OFFSET))();
		}

		::UnityEngine::GameObject* get_SoundEmitter()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM_GET_SOUNDEMITTER_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM_ONDISABLE_OFFSET))(this);
		}

		static ::System::Void Empty()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM_EMPTY_OFFSET))();
		}

		static ::MoleMole::Audio::MonoSoundEmitterCustom* GetComponentSafely(::System::Int32 a1)
		{
			return ((::MoleMole::Audio::MonoSoundEmitterCustom*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM_GETCOMPONENTSAFELY_OFFSET))(a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM_ONDESTROY_OFFSET))(this);
		}

		::System::Void UnregisterEmitter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM_UNREGISTEREMITTER_OFFSET))(this);
		}
	};
}
