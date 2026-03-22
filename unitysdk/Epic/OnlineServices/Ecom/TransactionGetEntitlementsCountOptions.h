#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_ECOM_TRANSACTIONGETENTITLEMENTSCOUNTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x18E0F010)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int TransactionGetEntitlementsCountOptions_TypeDefinitionIndex = 32959;

	class TransactionGetEntitlementsCountOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_TRANSACTIONGETENTITLEMENTSCOUNTOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
