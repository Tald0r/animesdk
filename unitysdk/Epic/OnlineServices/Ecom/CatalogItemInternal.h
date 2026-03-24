#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Ecom/EcomItemType.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Ecom { class CatalogItem; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8F2450)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_GET_CATALOGNAMESPACE_OFFSET UNITYSDK_OFFSET(0x8F18D0)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_GET_DESCRIPTIONTEXT_OFFSET UNITYSDK_OFFSET(0x8F1E50)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_GET_DEVELOPERTEXT_OFFSET UNITYSDK_OFFSET(0x8F2270)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_GET_ENTITLEMENTENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x6B0470)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_GET_ENTITLEMENTNAME_OFFSET UNITYSDK_OFFSET(0x8F1B90)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_GET_ID_OFFSET UNITYSDK_OFFSET(0x8F1A30)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_GET_ITEMTYPE_OFFSET UNITYSDK_OFFSET(0x4140D0)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_GET_LONGDESCRIPTIONTEXT_OFFSET UNITYSDK_OFFSET(0x8F1FB0)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_GET_TECHNICALDETAILSTEXT_OFFSET UNITYSDK_OFFSET(0x8F2110)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_GET_TITLETEXT_OFFSET UNITYSDK_OFFSET(0x8F1CF0)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x8F23E0)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_SET_CATALOGNAMESPACE_OFFSET UNITYSDK_OFFSET(0x8F1980)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_SET_DESCRIPTIONTEXT_OFFSET UNITYSDK_OFFSET(0x8F1F00)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_SET_DEVELOPERTEXT_OFFSET UNITYSDK_OFFSET(0x8F2320)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_SET_ENTITLEMENTENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x7E34E0)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_SET_ENTITLEMENTNAME_OFFSET UNITYSDK_OFFSET(0x8F1C40)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_SET_ID_OFFSET UNITYSDK_OFFSET(0x8F1AE0)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_SET_ITEMTYPE_OFFSET UNITYSDK_OFFSET(0x7E34B0)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_SET_LONGDESCRIPTIONTEXT_OFFSET UNITYSDK_OFFSET(0x8F2060)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x8F23D0)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_SET_TECHNICALDETAILSTEXT_OFFSET UNITYSDK_OFFSET(0x8F21C0)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_SET_TITLETEXT_OFFSET UNITYSDK_OFFSET(0x8F1DA0)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int CatalogItemInternal_TypeDefinitionIndex = 33818;

	struct alignas(8) CatalogItemInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_CatalogNamespace; // 0x18
		::System::IntPtr m_Id; // 0x20
		::System::IntPtr m_EntitlementName; // 0x28
		::System::IntPtr m_TitleText; // 0x30
		::System::IntPtr m_DescriptionText; // 0x38
		::System::IntPtr m_LongDescriptionText; // 0x40
		::System::IntPtr m_TechnicalDetailsText; // 0x48
		::System::IntPtr m_DeveloperText; // 0x50
		::Epic::OnlineServices::Ecom::EcomItemType m_ItemType; // 0x58
		::System::Int64 m_EntitlementEndTimestamp; // 0x60

		::System::String* get_CatalogNamespace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_GET_CATALOGNAMESPACE_OFFSET))(this);
		}

		::System::Void set_CatalogNamespace(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_SET_CATALOGNAMESPACE_OFFSET))(this, value);
		}

		::System::String* get_Id()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_GET_ID_OFFSET))(this);
		}

		::System::Void set_Id(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_SET_ID_OFFSET))(this, value);
		}

		::System::String* get_EntitlementName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_GET_ENTITLEMENTNAME_OFFSET))(this);
		}

		::System::Void set_EntitlementName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_SET_ENTITLEMENTNAME_OFFSET))(this, value);
		}

		::System::String* get_TitleText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_GET_TITLETEXT_OFFSET))(this);
		}

		::System::Void set_TitleText(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_SET_TITLETEXT_OFFSET))(this, value);
		}

		::System::String* get_DescriptionText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_GET_DESCRIPTIONTEXT_OFFSET))(this);
		}

		::System::Void set_DescriptionText(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_SET_DESCRIPTIONTEXT_OFFSET))(this, value);
		}

		::System::String* get_LongDescriptionText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_GET_LONGDESCRIPTIONTEXT_OFFSET))(this);
		}

		::System::Void set_LongDescriptionText(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_SET_LONGDESCRIPTIONTEXT_OFFSET))(this, value);
		}

		::System::String* get_TechnicalDetailsText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_GET_TECHNICALDETAILSTEXT_OFFSET))(this);
		}

		::System::Void set_TechnicalDetailsText(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_SET_TECHNICALDETAILSTEXT_OFFSET))(this, value);
		}

		::System::String* get_DeveloperText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_GET_DEVELOPERTEXT_OFFSET))(this);
		}

		::System::Void set_DeveloperText(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_SET_DEVELOPERTEXT_OFFSET))(this, value);
		}

		::Epic::OnlineServices::Ecom::EcomItemType get_ItemType()
		{
			return ((::Epic::OnlineServices::Ecom::EcomItemType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_GET_ITEMTYPE_OFFSET))(this);
		}

		::System::Void set_ItemType(::Epic::OnlineServices::Ecom::EcomItemType value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::EcomItemType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_SET_ITEMTYPE_OFFSET))(this, value);
		}

		::System::Int64 get_EntitlementEndTimestamp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_GET_ENTITLEMENTENDTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_EntitlementEndTimestamp(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_SET_ENTITLEMENTENDTIMESTAMP_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Ecom::CatalogItem* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::CatalogItem*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
