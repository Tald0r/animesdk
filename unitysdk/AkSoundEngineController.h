#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AkInitializer;
namespace UnityEngine { class GameObject; }

#define AKSOUNDENGINECONTROLLER_ACTIVATEAUDIO_OFFSET UNITYSDK_OFFSET(0x1B0F06B0)
#define AKSOUNDENGINECONTROLLER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B0F0170)
#define AKSOUNDENGINECONTROLLER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1B0F00B0)
#define AKSOUNDENGINECONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x1B0F0350)
#define AKSOUNDENGINECONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1B0F0220)
#define AKSOUNDENGINECONTROLLER_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0x1B0F0920)
#define AKSOUNDENGINECONTROLLER_ONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x1B0F0660)
#define AKSOUNDENGINECONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B0F05F0)
#define AKSOUNDENGINECONTROLLER_RESETEDITORLISTENER_OFFSET UNITYSDK_OFFSET(0x1B0F05E0)
#define AKSOUNDENGINECONTROLLER_TERMINATE_OFFSET UNITYSDK_OFFSET(0x1B0F0600)
#define AKSOUNDENGINECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B0F09C0)
#define AKSOUNDENGINECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0F0160)

inline static constexpr unsigned int AkSoundEngineController_TypeDefinitionIndex = 30139;

class AkSoundEngineController : public ::System::Object
{
public:
	static ::AkSoundEngineController** StaticGet_ms_Instance()
	{
		return (::AkSoundEngineController**)Il2CppClass::FromTypeDefinitionIndex(AkSoundEngineController_TypeDefinitionIndex)->GetStaticField(0x23320);
	}
	static ::System::Boolean* StaticGet_backGroundShowSound()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AkSoundEngineController_TypeDefinitionIndex)->GetStaticField(0x7880);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSOUNDENGINECONTROLLER__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKSOUNDENGINECONTROLLER__CCTOR_OFFSET))();
	}

	static ::AkSoundEngineController* get_Instance()
	{
		return ((::AkSoundEngineController*(*)())((::PBYTE)hIl2Cpp + AKSOUNDENGINECONTROLLER_GET_INSTANCE_OFFSET))();
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSOUNDENGINECONTROLLER_FINALIZE_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSOUNDENGINECONTROLLER_LATEUPDATE_OFFSET))(this);
	}

	::System::Void Init(::AkInitializer* akInitializer)
	{
		return ((::System::Void(*)(::PVOID, ::AkInitializer*))((::PBYTE)hIl2Cpp + AKSOUNDENGINECONTROLLER_INIT_OFFSET))(this, akInitializer);
	}

	::System::Void ResetEditorListener(::UnityEngine::GameObject* gameObject)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AKSOUNDENGINECONTROLLER_RESETEDITORLISTENER_OFFSET))(this, gameObject);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSOUNDENGINECONTROLLER_ONDISABLE_OFFSET))(this);
	}

	::System::Void Terminate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSOUNDENGINECONTROLLER_TERMINATE_OFFSET))(this);
	}

	::System::Void OnApplicationPause(::System::Boolean pauseStatus)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKSOUNDENGINECONTROLLER_ONAPPLICATIONPAUSE_OFFSET))(this, pauseStatus);
	}

	::System::Void OnApplicationFocus(::System::Boolean focus)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKSOUNDENGINECONTROLLER_ONAPPLICATIONFOCUS_OFFSET))(this, focus);
	}

	::System::Void ActivateAudio(::System::Boolean activate, ::System::Boolean renderAnyway)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + AKSOUNDENGINECONTROLLER_ACTIVATEAUDIO_OFFSET))(this, activate, renderAnyway);
	}
};
