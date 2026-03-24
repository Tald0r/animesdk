#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class WeakReference; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Specialized { class StringDictionary; }

#define SYSTEM_DIAGNOSTICS_SWITCH_GETSUPPORTEDATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x191B9860)
#define SYSTEM_DIAGNOSTICS_SWITCH_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x191B95E0)
#define SYSTEM_DIAGNOSTICS_SWITCH_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x191B96B0)
#define SYSTEM_DIAGNOSTICS_SWITCH_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x191B96A0)
#define SYSTEM_DIAGNOSTICS_SWITCH_GET_INTIALIZEDLOCK_OFFSET UNITYSDK_OFFSET(0x191B9000)
#define SYSTEM_DIAGNOSTICS_SWITCH_GET_SWITCHSETTING_OFFSET UNITYSDK_OFFSET(0x191B8D20)
#define SYSTEM_DIAGNOSTICS_SWITCH_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x191B8FE0)
#define SYSTEM_DIAGNOSTICS_SWITCH_INITIALIZECONFIGSETTINGS_OFFSET UNITYSDK_OFFSET(0x191B9850)
#define SYSTEM_DIAGNOSTICS_SWITCH_INITIALIZEWITHSTATUS_OFFSET UNITYSDK_OFFSET(0x191B96D0)
#define SYSTEM_DIAGNOSTICS_SWITCH_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x191B9690)
#define SYSTEM_DIAGNOSTICS_SWITCH_ONSWITCHSETTINGCHANGED_OFFSET UNITYSDK_OFFSET(0x191B9870)
#define SYSTEM_DIAGNOSTICS_SWITCH_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x191B9880)
#define SYSTEM_DIAGNOSTICS_SWITCH_REFRESHALL_OFFSET UNITYSDK_OFFSET(0x191B98D0)
#define SYSTEM_DIAGNOSTICS_SWITCH_REFRESH_OFFSET UNITYSDK_OFFSET(0x191B9B00)
#define SYSTEM_DIAGNOSTICS_SWITCH_SET_SWITCHSETTING_OFFSET UNITYSDK_OFFSET(0x191B8D70)
#define SYSTEM_DIAGNOSTICS_SWITCH_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x191B9820)
#define SYSTEM_DIAGNOSTICS_SWITCH__CCTOR_OFFSET UNITYSDK_OFFSET(0x191B9BE0)
#define SYSTEM_DIAGNOSTICS_SWITCH__CTOR_1_OFFSET UNITYSDK_OFFSET(0x191B8B30)
#define SYSTEM_DIAGNOSTICS_SWITCH__CTOR_OFFSET UNITYSDK_OFFSET(0x191B8AB0)
#define SYSTEM_DIAGNOSTICS_SWITCH__PRUNECACHEDSWITCHES_OFFSET UNITYSDK_OFFSET(0x191B9040)

namespace System::Diagnostics
{
	inline static constexpr unsigned int Switch_TypeDefinitionIndex = 2761;

	class Switch : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::WeakReference*>** StaticGet_switches()
		{
			return (::System::Collections::Generic::List_1<::System::WeakReference*>**)Il2CppClass::FromTypeDefinitionIndex(Switch_TypeDefinitionIndex)->GetStaticField(0x2E00);
		}
		static ::System::Int32* StaticGet_s_LastCollectionCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Switch_TypeDefinitionIndex)->GetStaticField(0x11C0);
		}
		::System::Collections::Specialized::StringDictionary* attributes; // 0x10
		::System::String* description; // 0x18
		::System::String* displayName; // 0x20
		::System::String* switchValueString; // 0x28
		::System::String* defaultValue; // 0x30
		::System::Object* m_intializedLock; // 0x38
		::System::Object* switchSettings; // 0x40
		::System::Int32 switchSetting; // 0x48
		::System::Boolean initializing; // 0x4C
		::System::Boolean initialized; // 0x4D

		::System::Void _ctor(::System::String* displayName, ::System::String* description)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_SWITCH__CTOR_OFFSET))(this, displayName, description);
		}

		::System::Void _ctor_1(::System::String* displayName, ::System::String* description, ::System::String* defaultSwitchValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_SWITCH__CTOR_1_OFFSET))(this, displayName, description, defaultSwitchValue);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_SWITCH__CCTOR_OFFSET))();
		}

		::System::Object* get_IntializedLock()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_SWITCH_GET_INTIALIZEDLOCK_OFFSET))(this);
		}

		static ::System::Void _pruneCachedSwitches()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_SWITCH__PRUNECACHEDSWITCHES_OFFSET))();
		}

		::System::Collections::Specialized::StringDictionary* get_Attributes()
		{
			return ((::System::Collections::Specialized::StringDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_SWITCH_GET_ATTRIBUTES_OFFSET))(this);
		}

		::System::String* get_DisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_SWITCH_GET_DISPLAYNAME_OFFSET))(this);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_SWITCH_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::Int32 get_SwitchSetting()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_SWITCH_GET_SWITCHSETTING_OFFSET))(this);
		}

		::System::Void set_SwitchSetting(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_SWITCH_SET_SWITCHSETTING_OFFSET))(this, value);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_SWITCH_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_SWITCH_SET_VALUE_OFFSET))(this, value);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_SWITCH_INITIALIZE_OFFSET))(this);
		}

		::System::Boolean InitializeWithStatus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_SWITCH_INITIALIZEWITHSTATUS_OFFSET))(this);
		}

		::System::Boolean InitializeConfigSettings()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_SWITCH_INITIALIZECONFIGSETTINGS_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* GetSupportedAttributes()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_SWITCH_GETSUPPORTEDATTRIBUTES_OFFSET))(this);
		}

		::System::Void OnSwitchSettingChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_SWITCH_ONSWITCHSETTINGCHANGED_OFFSET))(this);
		}

		::System::Void OnValueChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_SWITCH_ONVALUECHANGED_OFFSET))(this);
		}

		static ::System::Void RefreshAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_SWITCH_REFRESHALL_OFFSET))();
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_SWITCH_REFRESH_OFFSET))(this);
		}
	};
}
