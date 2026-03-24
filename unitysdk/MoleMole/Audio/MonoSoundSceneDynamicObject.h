#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_AUDIO_MONOSOUNDSCENEDYNAMICOBJECT_METHOD_5_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0xB37B2A0)
#define MOLEMOLE_AUDIO_MONOSOUNDSCENEDYNAMICOBJECT_METHOD_5_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0xB37B500)
#define MOLEMOLE_AUDIO_MONOSOUNDSCENEDYNAMICOBJECT_METHOD_5_7C2C2820B36B9508_OFFSET UNITYSDK_OFFSET(0xB37AEF0)
#define MOLEMOLE_AUDIO_MONOSOUNDSCENEDYNAMICOBJECT_METHOD_5_EAC2737A96E071C9_OFFSET UNITYSDK_OFFSET(0xB37B480)
#define MOLEMOLE_AUDIO_MONOSOUNDSCENEDYNAMICOBJECT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xB37B1E0)
#define MOLEMOLE_AUDIO_MONOSOUNDSCENEDYNAMICOBJECT_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB37AE30)
#define MOLEMOLE_AUDIO_MONOSOUNDSCENEDYNAMICOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0xB37B460)

namespace MoleMole::Audio
{
	inline static constexpr unsigned int MonoSoundSceneDynamicObject_TypeDefinitionIndex = 56554;

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

		::System::Void Method_5_EAC2737A96E071C9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENEDYNAMICOBJECT_METHOD_5_EAC2737A96E071C9_OFFSET))(this);
		}

		::System::Void Method_5_7C2C2820B36B9508()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENEDYNAMICOBJECT_METHOD_5_7C2C2820B36B9508_OFFSET))(this);
		}

		::System::Void Method_5_18982EFD3B740683()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENEDYNAMICOBJECT_METHOD_5_18982EFD3B740683_OFFSET))(this);
		}

		::System::Void Method_5_289F28027FF47717()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENEDYNAMICOBJECT_METHOD_5_289F28027FF47717_OFFSET))(this);
		}
	};
}
