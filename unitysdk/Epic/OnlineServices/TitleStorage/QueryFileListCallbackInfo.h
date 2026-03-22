#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/Epic/OnlineServices/TitleStorage/QueryFileListCallbackInfoInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x19A755B0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x19A75550)
#define EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTCALLBACKINFO_GET_FILECOUNT_OFFSET UNITYSDK_OFFSET(0x19A75590)
#define EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x19A75570)
#define EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x19A75530)
#define EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x19A757D0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x19A75560)
#define EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTCALLBACKINFO_SET_FILECOUNT_OFFSET UNITYSDK_OFFSET(0x19A755A0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x19A75580)
#define EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x19A755D0)
#define EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x19A75540)
#define EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x19A75910)

namespace Epic::OnlineServices::TitleStorage
{
	inline static constexpr unsigned int QueryFileListCallbackInfo_TypeDefinitionIndex = 31917;

	class QueryFileListCallbackInfo : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10
		::System::Object* _ClientData_k__BackingField; // 0x18
		::System::UInt32 _FileCount_k__BackingField; // 0x20
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTCALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, value);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::UInt32 get_FileCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTCALLBACKINFO_GET_FILECOUNT_OFFSET))(this);
		}

		::System::Void set_FileCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTCALLBACKINFO_SET_FILECOUNT_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::TitleStorage::QueryFileListCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::TitleStorage::QueryFileListCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_TITLESTORAGE_QUERYFILELISTCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
