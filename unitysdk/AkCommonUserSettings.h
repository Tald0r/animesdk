#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AkCommonOutputSettings;
class AkCommonUserSettings_SpatialAudioSettings;
class AkDeviceSettings;
class AkInitSettings;
class AkMusicSettings;
class AkPlatformInitSettings;
class AkSpatialAudioInitSettings;
class AkStreamMgrSettings;
class AkUnityPlatformSpecificSettings;
namespace System { class String; }

#define AKCOMMONUSERSETTINGS_COPYTO_1_OFFSET UNITYSDK_OFFSET(0x1B66C000)
#define AKCOMMONUSERSETTINGS_COPYTO_2_OFFSET UNITYSDK_OFFSET(0x1B66C130)
#define AKCOMMONUSERSETTINGS_COPYTO_3_OFFSET UNITYSDK_OFFSET(0x1B66C140)
#define AKCOMMONUSERSETTINGS_COPYTO_4_OFFSET UNITYSDK_OFFSET(0x1B66C1E0)
#define AKCOMMONUSERSETTINGS_COPYTO_5_OFFSET UNITYSDK_OFFSET(0x1B66C2F0)
#define AKCOMMONUSERSETTINGS_COPYTO_6_OFFSET UNITYSDK_OFFSET(0x1B66C7D0)
#define AKCOMMONUSERSETTINGS_COPYTO_OFFSET UNITYSDK_OFFSET(0x1B66BCA0)
#define AKCOMMONUSERSETTINGS_GETPLUGINPATH_OFFSET UNITYSDK_OFFSET(0x1B66BA50)
#define AKCOMMONUSERSETTINGS_SETSAMPLERATE_OFFSET UNITYSDK_OFFSET(0x1B66C150)
#define AKCOMMONUSERSETTINGS_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1B66C7E0)
#define AKCOMMONUSERSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B66C820)

inline static constexpr unsigned int AkCommonUserSettings_TypeDefinitionIndex = 30983;

class AkCommonUserSettings : public ::System::Object
{
public:
	::System::String* m_BasePath; // 0x10
	::System::String* m_StartupLanguage; // 0x18
	::System::Boolean m_EngineLogging; // 0x20
	::System::UInt32 m_MaximumNumberOfPositioningPaths; // 0x24
	::System::UInt32 m_CommandQueueSize; // 0x28
	::System::UInt32 m_SamplesPerFrame; // 0x2C
	::AkCommonOutputSettings* m_MainOutputSettings; // 0x30
	::System::Single m_StreamingLookAheadRatio; // 0x38
	::System::UInt32 m_SampleRate; // 0x3C
	::System::UInt16 m_NumberOfRefillsInVoice; // 0x40
	::AkCommonUserSettings_SpatialAudioSettings* m_SpatialAudioSettings; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMONUSERSETTINGS__CTOR_OFFSET))(this);
	}

	static ::System::String* GetPluginPath()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + AKCOMMONUSERSETTINGS_GETPLUGINPATH_OFFSET))();
	}

	::System::Void CopyTo(::AkInitSettings* settings)
	{
		return ((::System::Void(*)(::PVOID, ::AkInitSettings*))((::PBYTE)hIl2Cpp + AKCOMMONUSERSETTINGS_COPYTO_OFFSET))(this, settings);
	}

	::System::Void CopyTo_1(::AkMusicSettings* settings)
	{
		return ((::System::Void(*)(::PVOID, ::AkMusicSettings*))((::PBYTE)hIl2Cpp + AKCOMMONUSERSETTINGS_COPYTO_1_OFFSET))(this, settings);
	}

	::System::Void CopyTo_2(::AkStreamMgrSettings* settings)
	{
		return ((::System::Void(*)(::PVOID, ::AkStreamMgrSettings*))((::PBYTE)hIl2Cpp + AKCOMMONUSERSETTINGS_COPYTO_2_OFFSET))(this, settings);
	}

	::System::Void CopyTo_3(::AkDeviceSettings* settings)
	{
		return ((::System::Void(*)(::PVOID, ::AkDeviceSettings*))((::PBYTE)hIl2Cpp + AKCOMMONUSERSETTINGS_COPYTO_3_OFFSET))(this, settings);
	}

	::System::Void SetSampleRate(::AkPlatformInitSettings* settings)
	{
		return ((::System::Void(*)(::PVOID, ::AkPlatformInitSettings*))((::PBYTE)hIl2Cpp + AKCOMMONUSERSETTINGS_SETSAMPLERATE_OFFSET))(this, settings);
	}

	::System::Void CopyTo_4(::AkPlatformInitSettings* settings)
	{
		return ((::System::Void(*)(::PVOID, ::AkPlatformInitSettings*))((::PBYTE)hIl2Cpp + AKCOMMONUSERSETTINGS_COPYTO_4_OFFSET))(this, settings);
	}

	::System::Void CopyTo_5(::AkSpatialAudioInitSettings* settings)
	{
		return ((::System::Void(*)(::PVOID, ::AkSpatialAudioInitSettings*))((::PBYTE)hIl2Cpp + AKCOMMONUSERSETTINGS_COPYTO_5_OFFSET))(this, settings);
	}

	::System::Void CopyTo_6(::AkUnityPlatformSpecificSettings* settings)
	{
		return ((::System::Void(*)(::PVOID, ::AkUnityPlatformSpecificSettings*))((::PBYTE)hIl2Cpp + AKCOMMONUSERSETTINGS_COPYTO_6_OFFSET))(this, settings);
	}

	::System::Void Validate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMONUSERSETTINGS_VALIDATE_OFFSET))(this);
	}
};
