#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_PLUGINUI_JOYPADMANAGERINTERNAL_INSTANCE_OFFSET UNITYSDK_OFFSET(0x18DB5A80)
#define MIHOYO_SDK_PLUGINUI_JOYPADMANAGERINTERNAL_ISTOP_OFFSET UNITYSDK_OFFSET(0x18DB5E90)
#define MIHOYO_SDK_PLUGINUI_JOYPADMANAGERINTERNAL_POPUI_OFFSET UNITYSDK_OFFSET(0x18DB5CF0)
#define MIHOYO_SDK_PLUGINUI_JOYPADMANAGERINTERNAL_PUSHUI_OFFSET UNITYSDK_OFFSET(0x18DB5BA0)
#define MIHOYO_SDK_PLUGINUI_JOYPADMANAGERINTERNAL__CTOR_OFFSET UNITYSDK_OFFSET(0x18DB5B40)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int JoypadManagerInternal_TypeDefinitionIndex = 34002;

	class JoypadManagerInternal : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PluginUI::JoypadManagerInternal** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PluginUI::JoypadManagerInternal**)Il2CppClass::FromTypeDefinitionIndex(JoypadManagerInternal_TypeDefinitionIndex)->GetStaticField(0x243F0);
		}
		::System::String* m_strTopUI; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* m_lstUIStack; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_JOYPADMANAGERINTERNAL__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PluginUI::JoypadManagerInternal* Instance()
		{
			return ((::MiHoYo::SDK::PluginUI::JoypadManagerInternal*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_JOYPADMANAGERINTERNAL_INSTANCE_OFFSET))();
		}

		::System::Void PushUI(::System::String* strUIName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_JOYPADMANAGERINTERNAL_PUSHUI_OFFSET))(this, strUIName);
		}

		::System::Void PopUI(::System::String* strUIName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_JOYPADMANAGERINTERNAL_POPUI_OFFSET))(this, strUIName);
		}

		::System::Boolean IsTop(::System::String* strUIName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_JOYPADMANAGERINTERNAL_ISTOP_OFFSET))(this, strUIName);
		}
	};
}
