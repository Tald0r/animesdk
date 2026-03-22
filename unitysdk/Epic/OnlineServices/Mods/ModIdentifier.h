#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Mods/ModIdentifierInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_MODS_MODIDENTIFIER_GET_ARTIFACTID_OFFSET UNITYSDK_OFFSET(0x18DCAA30)
#define EPIC_ONLINESERVICES_MODS_MODIDENTIFIER_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x18DCAA10)
#define EPIC_ONLINESERVICES_MODS_MODIDENTIFIER_GET_NAMESPACEID_OFFSET UNITYSDK_OFFSET(0x18DCA9F0)
#define EPIC_ONLINESERVICES_MODS_MODIDENTIFIER_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x18DCAA50)
#define EPIC_ONLINESERVICES_MODS_MODIDENTIFIER_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x18DCAA70)
#define EPIC_ONLINESERVICES_MODS_MODIDENTIFIER_SET_1_OFFSET UNITYSDK_OFFSET(0x18DCB0B0)
#define EPIC_ONLINESERVICES_MODS_MODIDENTIFIER_SET_ARTIFACTID_OFFSET UNITYSDK_OFFSET(0x18DCAA40)
#define EPIC_ONLINESERVICES_MODS_MODIDENTIFIER_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0x18DCAA20)
#define EPIC_ONLINESERVICES_MODS_MODIDENTIFIER_SET_NAMESPACEID_OFFSET UNITYSDK_OFFSET(0x18DCAA00)
#define EPIC_ONLINESERVICES_MODS_MODIDENTIFIER_SET_OFFSET UNITYSDK_OFFSET(0x18DCAA90)
#define EPIC_ONLINESERVICES_MODS_MODIDENTIFIER_SET_TITLE_OFFSET UNITYSDK_OFFSET(0x18DCAA60)
#define EPIC_ONLINESERVICES_MODS_MODIDENTIFIER_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x18DCAA80)
#define EPIC_ONLINESERVICES_MODS_MODIDENTIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x18DCB200)

namespace Epic::OnlineServices::Mods
{
	inline static constexpr unsigned int ModIdentifier_TypeDefinitionIndex = 32501;

	class ModIdentifier : public ::System::Object
	{
	public:
		::System::String* _ItemId_k__BackingField; // 0x10
		::System::String* _NamespaceId_k__BackingField; // 0x18
		::System::String* _ArtifactId_k__BackingField; // 0x20
		::System::String* _Version_k__BackingField; // 0x28
		::System::String* _Title_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODIDENTIFIER__CTOR_OFFSET))(this);
		}

		::System::String* get_NamespaceId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODIDENTIFIER_GET_NAMESPACEID_OFFSET))(this);
		}

		::System::Void set_NamespaceId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODIDENTIFIER_SET_NAMESPACEID_OFFSET))(this, value);
		}

		::System::String* get_ItemId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODIDENTIFIER_GET_ITEMID_OFFSET))(this);
		}

		::System::Void set_ItemId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODIDENTIFIER_SET_ITEMID_OFFSET))(this, value);
		}

		::System::String* get_ArtifactId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODIDENTIFIER_GET_ARTIFACTID_OFFSET))(this);
		}

		::System::Void set_ArtifactId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODIDENTIFIER_SET_ARTIFACTID_OFFSET))(this, value);
		}

		::System::String* get_Title()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODIDENTIFIER_GET_TITLE_OFFSET))(this);
		}

		::System::Void set_Title(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODIDENTIFIER_SET_TITLE_OFFSET))(this, value);
		}

		::System::String* get_Version()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODIDENTIFIER_GET_VERSION_OFFSET))(this);
		}

		::System::Void set_Version(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODIDENTIFIER_SET_VERSION_OFFSET))(this, value);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Mods::ModIdentifierInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Mods::ModIdentifierInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODIDENTIFIER_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODIDENTIFIER_SET_1_OFFSET))(this, other);
		}
	};
}
