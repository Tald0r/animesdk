#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_684B8CD1961BDDD2.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM_EMPTY_OFFSET UNITYSDK_OFFSET(0xACA4DC0)
#define MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM_GETCOMPONENTSAFELY_OFFSET UNITYSDK_OFFSET(0xACA4EF0)
#define MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM_GET_SOUNDEMITTER_OFFSET UNITYSDK_OFFSET(0xACA3540)
#define MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM_METHOD_5_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0xACA5360)
#define MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM_METHOD_5_E5B2D19C36637166_OFFSET UNITYSDK_OFFSET(0xACA53E0)
#define MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xACA5040)
#define MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xACA4AA0)
#define MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM_ONENABLE_OFFSET UNITYSDK_OFFSET(0xACA47F0)
#define MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM_ONREALDISABLE_OFFSET UNITYSDK_OFFSET(0xACA4B60)
#define MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM_ONREALENABLE_OFFSET UNITYSDK_OFFSET(0xACA48B0)
#define MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM_UNREGISTEREMITTER_OFFSET UNITYSDK_OFFSET(0xACA50B0)
#define MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM__CCTOR_OFFSET UNITYSDK_OFFSET(0xACA52C0)
#define MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM__CTOR_OFFSET UNITYSDK_OFFSET(0xACA5280)

namespace MoleMole::Audio
{
	inline static constexpr unsigned int MonoSoundEmitterCustom_TypeDefinitionIndex = 39895;

	class MonoSoundEmitterCustom : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Audio::MonoSoundEmitterCustom*>** StaticGet_staticMonoDic()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Audio::MonoSoundEmitterCustom*>**)Il2CppClass::FromTypeDefinitionIndex(MonoSoundEmitterCustom_TypeDefinitionIndex)->GetStaticField(0x38E70);
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

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM_ONDISABLE_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_SoundEmitter()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM_GET_SOUNDEMITTER_OFFSET))(this);
		}

		::System::Void OnRealEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM_ONREALENABLE_OFFSET))(this);
		}

		::System::Void OnRealDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM_ONREALDISABLE_OFFSET))(this);
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

		::System::Void Method_5_7FBAA229ED524F8E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM_METHOD_5_7FBAA229ED524F8E_OFFSET))(this);
		}

		::System::Void Method_5_E5B2D19C36637166()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDEMITTERCUSTOM_METHOD_5_E5B2D19C36637166_OFFSET))(this);
		}
	};
}
