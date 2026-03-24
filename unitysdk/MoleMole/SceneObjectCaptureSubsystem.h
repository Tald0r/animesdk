#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"

namespace MoleMole { class SceneObjectCaptureMono; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_SCENEOBJECTCAPTURESUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xA659DF0)
#define MOLEMOLE_SCENEOBJECTCAPTURESUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA659E90)
#define MOLEMOLE_SCENEOBJECTCAPTURESUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xA659F40)
#define MOLEMOLE_SCENEOBJECTCAPTURESUBSYSTEM_TRYGETCAPTUREDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xA659FE0)
#define MOLEMOLE_SCENEOBJECTCAPTURESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA65A230)
#define MOLEMOLE_SCENEOBJECTCAPTURESUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xA65A250)
#define MOLEMOLE_SCENEOBJECTCAPTURESUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA65A2B0)
#define MOLEMOLE_SCENEOBJECTCAPTURESUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xA65A310)

namespace MoleMole
{
	inline static constexpr unsigned int SceneObjectCaptureSubsystem_TypeDefinitionIndex = 79727;

	class SceneObjectCaptureSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::SceneObjectCaptureSubsystem*>
	{
	public:
		// static const ::System::String* CaptureMonoRoot; // 0x0
		::MoleMole::SceneObjectCaptureMono* _captureMono; // 0x10
		::System::Boolean _isInitialized; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTCAPTURESUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTCAPTURESUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTCAPTURESUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTCAPTURESUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Boolean TryGetCapturedGameObject(::System::String* key, ::UnityEngine::GameObject*& gameObject)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*&))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTCAPTURESUBSYSTEM_TRYGETCAPTUREDGAMEOBJECT_OFFSET))(this, key, gameObject);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTCAPTURESUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTCAPTURESUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTCAPTURESUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
