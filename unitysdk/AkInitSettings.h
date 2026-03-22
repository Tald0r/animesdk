#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkFloorPlane.h"
#include "unitysdk/System/Object.h"

class AkOutputSettings;
namespace System { class String; }

#define AKINITSETTINGS_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1AE04E90)
#define AKINITSETTINGS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AE04DD0)
#define AKINITSETTINGS_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1AE04E20)
#define AKINITSETTINGS_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1AE04D60)
#define AKINITSETTINGS_GET_BDEBUGOUTOFRANGECHECKENABLED_OFFSET UNITYSDK_OFFSET(0x1AE05FA0)
#define AKINITSETTINGS_GET_BENABLEGAMESYNCPREPARATION_OFFSET UNITYSDK_OFFSET(0x1AE05270)
#define AKINITSETTINGS_GET_BUSELENGINETHREAD_OFFSET UNITYSDK_OFFSET(0x1AE059C0)
#define AKINITSETTINGS_GET_BUSESOUNDBANKMGRTHREAD_OFFSET UNITYSDK_OFFSET(0x1AE058C0)
#define AKINITSETTINGS_GET_EFLOORPLANE_OFFSET UNITYSDK_OFFSET(0x1AE05C90)
#define AKINITSETTINGS_GET_FDEBUGOUTOFRANGELIMIT_OFFSET UNITYSDK_OFFSET(0x1AE05EA0)
#define AKINITSETTINGS_GET_SETTINGSMAINOUTPUT_OFFSET UNITYSDK_OFFSET(0x1AE05690)
#define AKINITSETTINGS_GET_SZPLUGINDLLPATH_OFFSET UNITYSDK_OFFSET(0x1AE05AD0)
#define AKINITSETTINGS_GET_UBANKREADBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x1AE05D90)
#define AKINITSETTINGS_GET_UCOMMANDQUEUESIZE_OFFSET UNITYSDK_OFFSET(0x1AE05170)
#define AKINITSETTINGS_GET_UCONTINUOUSPLAYBACKLOOKAHEAD_OFFSET UNITYSDK_OFFSET(0x1AE05370)
#define AKINITSETTINGS_GET_UMAXHARDWARETIMEOUTMS_OFFSET UNITYSDK_OFFSET(0x1AE057C0)
#define AKINITSETTINGS_GET_UMAXNUMPATHS_OFFSET UNITYSDK_OFFSET(0x1AE05070)
#define AKINITSETTINGS_GET_UMONITORQUEUEPOOLSIZE_OFFSET UNITYSDK_OFFSET(0x1AE05570)
#define AKINITSETTINGS_GET_UNUMSAMPLESPERFRAME_OFFSET UNITYSDK_OFFSET(0x1AE05470)
#define AKINITSETTINGS_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1AE04D70)
#define AKINITSETTINGS_SET_BDEBUGOUTOFRANGECHECKENABLED_OFFSET UNITYSDK_OFFSET(0x1AE05F20)
#define AKINITSETTINGS_SET_BENABLEGAMESYNCPREPARATION_OFFSET UNITYSDK_OFFSET(0x1AE051F0)
#define AKINITSETTINGS_SET_BUSELENGINETHREAD_OFFSET UNITYSDK_OFFSET(0x1AE05940)
#define AKINITSETTINGS_SET_BUSESOUNDBANKMGRTHREAD_OFFSET UNITYSDK_OFFSET(0x1AE05840)
#define AKINITSETTINGS_SET_EFLOORPLANE_OFFSET UNITYSDK_OFFSET(0x1AE05C10)
#define AKINITSETTINGS_SET_FDEBUGOUTOFRANGELIMIT_OFFSET UNITYSDK_OFFSET(0x1AE05E10)
#define AKINITSETTINGS_SET_SETTINGSMAINOUTPUT_OFFSET UNITYSDK_OFFSET(0x1AE055F0)
#define AKINITSETTINGS_SET_SZPLUGINDLLPATH_OFFSET UNITYSDK_OFFSET(0x1AE05A40)
#define AKINITSETTINGS_SET_UBANKREADBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x1AE05D10)
#define AKINITSETTINGS_SET_UCOMMANDQUEUESIZE_OFFSET UNITYSDK_OFFSET(0x1AE050F0)
#define AKINITSETTINGS_SET_UCONTINUOUSPLAYBACKLOOKAHEAD_OFFSET UNITYSDK_OFFSET(0x1AE052F0)
#define AKINITSETTINGS_SET_UMAXHARDWARETIMEOUTMS_OFFSET UNITYSDK_OFFSET(0x1AE05740)
#define AKINITSETTINGS_SET_UMAXNUMPATHS_OFFSET UNITYSDK_OFFSET(0x1AE04FF0)
#define AKINITSETTINGS_SET_UMONITORQUEUEPOOLSIZE_OFFSET UNITYSDK_OFFSET(0x1AE054F0)
#define AKINITSETTINGS_SET_UNUMSAMPLESPERFRAME_OFFSET UNITYSDK_OFFSET(0x1AE053F0)
#define AKINITSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE04D50)

inline static constexpr unsigned int AkInitSettings_TypeDefinitionIndex = 29940;

class AkInitSettings : public ::System::Object
{
public:
	::System::Boolean swigCMemOwn; // 0x10
	::System::IntPtr swigCPtr; // 0x18

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKINITSETTINGS__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	static ::System::IntPtr getCPtr(::AkInitSettings* obj)
	{
		return ((::System::IntPtr(*)(::AkInitSettings*))((::PBYTE)hIl2Cpp + AKINITSETTINGS_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKINITSETTINGS_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITSETTINGS_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITSETTINGS_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKINITSETTINGS_DISPOSE_1_OFFSET))(this, disposing);
	}

	::System::Void set_uMaxNumPaths(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKINITSETTINGS_SET_UMAXNUMPATHS_OFFSET))(this, value);
	}

	::System::UInt32 get_uMaxNumPaths()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITSETTINGS_GET_UMAXNUMPATHS_OFFSET))(this);
	}

	::System::Void set_uCommandQueueSize(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKINITSETTINGS_SET_UCOMMANDQUEUESIZE_OFFSET))(this, value);
	}

	::System::UInt32 get_uCommandQueueSize()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITSETTINGS_GET_UCOMMANDQUEUESIZE_OFFSET))(this);
	}

	::System::Void set_bEnableGameSyncPreparation(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKINITSETTINGS_SET_BENABLEGAMESYNCPREPARATION_OFFSET))(this, value);
	}

	::System::Boolean get_bEnableGameSyncPreparation()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITSETTINGS_GET_BENABLEGAMESYNCPREPARATION_OFFSET))(this);
	}

	::System::Void set_uContinuousPlaybackLookAhead(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKINITSETTINGS_SET_UCONTINUOUSPLAYBACKLOOKAHEAD_OFFSET))(this, value);
	}

	::System::UInt32 get_uContinuousPlaybackLookAhead()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITSETTINGS_GET_UCONTINUOUSPLAYBACKLOOKAHEAD_OFFSET))(this);
	}

	::System::Void set_uNumSamplesPerFrame(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKINITSETTINGS_SET_UNUMSAMPLESPERFRAME_OFFSET))(this, value);
	}

	::System::UInt32 get_uNumSamplesPerFrame()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITSETTINGS_GET_UNUMSAMPLESPERFRAME_OFFSET))(this);
	}

	::System::Void set_uMonitorQueuePoolSize(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKINITSETTINGS_SET_UMONITORQUEUEPOOLSIZE_OFFSET))(this, value);
	}

	::System::UInt32 get_uMonitorQueuePoolSize()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITSETTINGS_GET_UMONITORQUEUEPOOLSIZE_OFFSET))(this);
	}

	::System::Void set_settingsMainOutput(::AkOutputSettings* value)
	{
		return ((::System::Void(*)(::PVOID, ::AkOutputSettings*))((::PBYTE)hIl2Cpp + AKINITSETTINGS_SET_SETTINGSMAINOUTPUT_OFFSET))(this, value);
	}

	::AkOutputSettings* get_settingsMainOutput()
	{
		return ((::AkOutputSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITSETTINGS_GET_SETTINGSMAINOUTPUT_OFFSET))(this);
	}

	::System::Void set_uMaxHardwareTimeoutMs(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKINITSETTINGS_SET_UMAXHARDWARETIMEOUTMS_OFFSET))(this, value);
	}

	::System::UInt32 get_uMaxHardwareTimeoutMs()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITSETTINGS_GET_UMAXHARDWARETIMEOUTMS_OFFSET))(this);
	}

	::System::Void set_bUseSoundBankMgrThread(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKINITSETTINGS_SET_BUSESOUNDBANKMGRTHREAD_OFFSET))(this, value);
	}

	::System::Boolean get_bUseSoundBankMgrThread()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITSETTINGS_GET_BUSESOUNDBANKMGRTHREAD_OFFSET))(this);
	}

	::System::Void set_bUseLEngineThread(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKINITSETTINGS_SET_BUSELENGINETHREAD_OFFSET))(this, value);
	}

	::System::Boolean get_bUseLEngineThread()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITSETTINGS_GET_BUSELENGINETHREAD_OFFSET))(this);
	}

	::System::Void set_szPluginDLLPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AKINITSETTINGS_SET_SZPLUGINDLLPATH_OFFSET))(this, value);
	}

	::System::String* get_szPluginDLLPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITSETTINGS_GET_SZPLUGINDLLPATH_OFFSET))(this);
	}

	::System::Void set_eFloorPlane(::AkFloorPlane value)
	{
		return ((::System::Void(*)(::PVOID, ::AkFloorPlane))((::PBYTE)hIl2Cpp + AKINITSETTINGS_SET_EFLOORPLANE_OFFSET))(this, value);
	}

	::AkFloorPlane get_eFloorPlane()
	{
		return ((::AkFloorPlane(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITSETTINGS_GET_EFLOORPLANE_OFFSET))(this);
	}

	::System::Void set_uBankReadBufferSize(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKINITSETTINGS_SET_UBANKREADBUFFERSIZE_OFFSET))(this, value);
	}

	::System::UInt32 get_uBankReadBufferSize()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITSETTINGS_GET_UBANKREADBUFFERSIZE_OFFSET))(this);
	}

	::System::Void set_fDebugOutOfRangeLimit(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKINITSETTINGS_SET_FDEBUGOUTOFRANGELIMIT_OFFSET))(this, value);
	}

	::System::Single get_fDebugOutOfRangeLimit()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITSETTINGS_GET_FDEBUGOUTOFRANGELIMIT_OFFSET))(this);
	}

	::System::Void set_bDebugOutOfRangeCheckEnabled(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKINITSETTINGS_SET_BDEBUGOUTOFRANGECHECKENABLED_OFFSET))(this, value);
	}

	::System::Boolean get_bDebugOutOfRangeCheckEnabled()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITSETTINGS_GET_BDEBUGOUTOFRANGECHECKENABLED_OFFSET))(this);
	}
};
