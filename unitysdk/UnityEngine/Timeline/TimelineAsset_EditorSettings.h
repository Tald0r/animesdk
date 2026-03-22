#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_TIMELINE_TIMELINEASSET_EDITORSETTINGS_GET_FPS_OFFSET UNITYSDK_OFFSET(0x1A871050)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_EDITORSETTINGS_GET_ISDFS_OFFSET UNITYSDK_OFFSET(0x1A8710D0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_EDITORSETTINGS_SET_FPS_OFFSET UNITYSDK_OFFSET(0x1A871060)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_EDITORSETTINGS_SET_ISDFS_OFFSET UNITYSDK_OFFSET(0x1A8710E0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_EDITORSETTINGS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A871130)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_EDITORSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8710F0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TimelineAsset_EditorSettings_TypeDefinitionIndex = 29239;

	class TimelineAsset_EditorSettings : public ::System::Object
	{
	public:
		static ::System::Single* StaticGet_kMinFps()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(TimelineAsset_EditorSettings_TypeDefinitionIndex)->GetStaticField(0x7670);
		}
		static ::System::Single* StaticGet_kMaxFps()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(TimelineAsset_EditorSettings_TypeDefinitionIndex)->GetStaticField(0x7674);
		}
		static ::System::Single* StaticGet_kDefaultFps()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(TimelineAsset_EditorSettings_TypeDefinitionIndex)->GetStaticField(0x7678);
		}
		::System::Single m_Framerate; // 0x10
		::System::Boolean IsDFS; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_EDITORSETTINGS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_EDITORSETTINGS__CCTOR_OFFSET))();
		}

		::System::Single get_fps()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_EDITORSETTINGS_GET_FPS_OFFSET))(this);
		}

		::System::Void set_fps(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_EDITORSETTINGS_SET_FPS_OFFSET))(this, value);
		}

		::System::Boolean get_isDFS()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_EDITORSETTINGS_GET_ISDFS_OFFSET))(this);
		}

		::System::Void set_isDFS(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_EDITORSETTINGS_SET_ISDFS_OFFSET))(this, value);
		}
	};
}
