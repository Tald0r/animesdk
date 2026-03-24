#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Configuration { class SettingsProperty; }

#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x18BA06A0)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x18BA06E0)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_CLONE_OFFSET UNITYSDK_OFFSET(0x18BA0720)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x18BA0760)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18BA07A0)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x18BA05A0)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x18BA05E0)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x18BA0620)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x18BA0660)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_ONADDCOMPLETE_OFFSET UNITYSDK_OFFSET(0x18BA0820)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_ONADD_OFFSET UNITYSDK_OFFSET(0x18BA07E0)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_ONCLEARCOMPLETE_OFFSET UNITYSDK_OFFSET(0x18BA08A0)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x18BA0860)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_ONREMOVECOMPLETE_OFFSET UNITYSDK_OFFSET(0x18BA0920)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_ONREMOVE_OFFSET UNITYSDK_OFFSET(0x18BA08E0)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x18BA0960)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_SETREADONLY_OFFSET UNITYSDK_OFFSET(0x18BA09A0)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x18BA0560)

namespace System::Configuration
{
	inline static constexpr unsigned int SettingsPropertyCollection_TypeDefinitionIndex = 4074;

	class SettingsPropertyCollection : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Configuration::SettingsProperty* get_Item(::System::String* name)
		{
			return ((::System::Configuration::SettingsProperty*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_GET_ITEM_OFFSET))(this, name);
		}

		::System::Object* get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Void Add(::System::Configuration::SettingsProperty* property)
		{
			return ((::System::Void(*)(::PVOID, ::System::Configuration::SettingsProperty*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_ADD_OFFSET))(this, property);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_CLEAR_OFFSET))(this);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_CLONE_OFFSET))(this);
		}

		::System::Void CopyTo(::System::Array* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_COPYTO_OFFSET))(this, array, index);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void OnAdd(::System::Configuration::SettingsProperty* property)
		{
			return ((::System::Void(*)(::PVOID, ::System::Configuration::SettingsProperty*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_ONADD_OFFSET))(this, property);
		}

		::System::Void OnAddComplete(::System::Configuration::SettingsProperty* property)
		{
			return ((::System::Void(*)(::PVOID, ::System::Configuration::SettingsProperty*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_ONADDCOMPLETE_OFFSET))(this, property);
		}

		::System::Void OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_ONCLEAR_OFFSET))(this);
		}

		::System::Void OnClearComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_ONCLEARCOMPLETE_OFFSET))(this);
		}

		::System::Void OnRemove(::System::Configuration::SettingsProperty* property)
		{
			return ((::System::Void(*)(::PVOID, ::System::Configuration::SettingsProperty*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_ONREMOVE_OFFSET))(this, property);
		}

		::System::Void OnRemoveComplete(::System::Configuration::SettingsProperty* property)
		{
			return ((::System::Void(*)(::PVOID, ::System::Configuration::SettingsProperty*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_ONREMOVECOMPLETE_OFFSET))(this, property);
		}

		::System::Void Remove(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_REMOVE_OFFSET))(this, name);
		}

		::System::Void SetReadOnly()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYCOLLECTION_SETREADONLY_OFFSET))(this);
		}
	};
}
