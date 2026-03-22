#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class AkWwiseInitializationSettings;

#define AKINITIALIZER_AUTOCREATEIFNOTEXIST_OFFSET UNITYSDK_OFFSET(0x1AF29780)
#define AKINITIALIZER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1AF29950)
#define AKINITIALIZER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1AF2A790)
#define AKINITIALIZER_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0x1AF2A1E0)
#define AKINITIALIZER_ONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x1AF29FD0)
#define AKINITIALIZER_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x1AF2A440)
#define AKINITIALIZER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1AF29EF0)
#define AKINITIALIZER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1AF29D40)
#define AKINITIALIZER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1AF29B10)
#define AKINITIALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF2A950)

inline static constexpr unsigned int AkInitializer_TypeDefinitionIndex = 30124;

class AkInitializer : public ::UnityEngine::MonoBehaviour
{
public:
	static ::AkInitializer** StaticGet_ms_Instance()
	{
		return (::AkInitializer**)Il2CppClass::FromTypeDefinitionIndex(AkInitializer_TypeDefinitionIndex)->GetStaticField(0x23470);
	}
	::AkWwiseInitializationSettings* InitializationSettings; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITIALIZER__CTOR_OFFSET))(this);
	}

	static ::AkInitializer* AutoCreateIfNotExist()
	{
		return ((::AkInitializer*(*)())((::PBYTE)hIl2Cpp + AKINITIALIZER_AUTOCREATEIFNOTEXIST_OFFSET))();
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITIALIZER_AWAKE_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITIALIZER_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITIALIZER_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITIALIZER_ONDESTROY_OFFSET))(this);
	}

	::System::Void OnApplicationPause(::System::Boolean pauseStatus)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKINITIALIZER_ONAPPLICATIONPAUSE_OFFSET))(this, pauseStatus);
	}

	::System::Void OnApplicationFocus(::System::Boolean focus)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKINITIALIZER_ONAPPLICATIONFOCUS_OFFSET))(this, focus);
	}

	::System::Void OnApplicationQuit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITIALIZER_ONAPPLICATIONQUIT_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITIALIZER_LATEUPDATE_OFFSET))(this);
	}
};
