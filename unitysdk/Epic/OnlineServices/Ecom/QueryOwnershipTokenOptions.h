#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENOPTIONS_GET_CATALOGITEMIDS_OFFSET UNITYSDK_OFFSET(0x17EDB010)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENOPTIONS_GET_CATALOGNAMESPACE_OFFSET UNITYSDK_OFFSET(0x17EDB030)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x17EDAFF0)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENOPTIONS_SET_CATALOGITEMIDS_OFFSET UNITYSDK_OFFSET(0x17EDB020)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENOPTIONS_SET_CATALOGNAMESPACE_OFFSET UNITYSDK_OFFSET(0x17EDB040)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x17EDB000)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x17EDB050)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int QueryOwnershipTokenOptions_TypeDefinitionIndex = 32950;

	class QueryOwnershipTokenOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x10
		::System::String* _CatalogNamespace_k__BackingField; // 0x18
		::Il2CppArray<::System::String*>* _CatalogItemIds_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::Il2CppArray<::System::String*>* get_CatalogItemIds()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENOPTIONS_GET_CATALOGITEMIDS_OFFSET))(this);
		}

		::System::Void set_CatalogItemIds(::Il2CppArray<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENOPTIONS_SET_CATALOGITEMIDS_OFFSET))(this, value);
		}

		::System::String* get_CatalogNamespace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENOPTIONS_GET_CATALOGNAMESPACE_OFFSET))(this);
		}

		::System::Void set_CatalogNamespace(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENOPTIONS_SET_CATALOGNAMESPACE_OFFSET))(this, value);
		}
	};
}
