#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::ObjectModel { template <typename T> class Collection_1; }
namespace System::Net { class IPAddress; }

#define SYSTEM_NET_NETWORKINFORMATION_IPADDRESSCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x191D5EF0)
#define SYSTEM_NET_NETWORKINFORMATION_IPADDRESSCOLLECTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x191D6130)
#define SYSTEM_NET_NETWORKINFORMATION_IPADDRESSCOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x191D5FB0)
#define SYSTEM_NET_NETWORKINFORMATION_IPADDRESSCOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x191D5E30)
#define SYSTEM_NET_NETWORKINFORMATION_IPADDRESSCOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x191D6020)
#define SYSTEM_NET_NETWORKINFORMATION_IPADDRESSCOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x191D5E90)
#define SYSTEM_NET_NETWORKINFORMATION_IPADDRESSCOLLECTION_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x191D5EE0)
#define SYSTEM_NET_NETWORKINFORMATION_IPADDRESSCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x191D6070)
#define SYSTEM_NET_NETWORKINFORMATION_IPADDRESSCOLLECTION_INTERNALADD_OFFSET UNITYSDK_OFFSET(0x191D5F50)
#define SYSTEM_NET_NETWORKINFORMATION_IPADDRESSCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x191D60D0)
#define SYSTEM_NET_NETWORKINFORMATION_IPADDRESSCOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x191D6010)
#define SYSTEM_NET_NETWORKINFORMATION_IPADDRESSCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x191D5DE0)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int IPAddressCollection_TypeDefinitionIndex = 3707;

	class IPAddressCollection : public ::System::Object
	{
	public:
		::System::Collections::ObjectModel::Collection_1<::System::Net::IPAddress*>* addresses; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_IPADDRESSCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Net::IPAddress*>* array, ::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Net::IPAddress*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_IPADDRESSCOLLECTION_COPYTO_OFFSET))(this, array, offset);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_IPADDRESSCOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_IPADDRESSCOLLECTION_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Void Add(::System::Net::IPAddress* address)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IPAddress*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_IPADDRESSCOLLECTION_ADD_OFFSET))(this, address);
		}

		::System::Void InternalAdd(::System::Net::IPAddress* address)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IPAddress*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_IPADDRESSCOLLECTION_INTERNALADD_OFFSET))(this, address);
		}

		::System::Boolean Contains(::System::Net::IPAddress* address)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::IPAddress*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_IPADDRESSCOLLECTION_CONTAINS_OFFSET))(this, address);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_IPADDRESSCOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Net::IPAddress*>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Net::IPAddress*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_IPADDRESSCOLLECTION_GETENUMERATOR_OFFSET))(this);
		}

		::System::Net::IPAddress* get_Item(::System::Int32 index)
		{
			return ((::System::Net::IPAddress*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_IPADDRESSCOLLECTION_GET_ITEM_OFFSET))(this, index);
		}

		::System::Boolean Remove(::System::Net::IPAddress* address)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::IPAddress*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_IPADDRESSCOLLECTION_REMOVE_OFFSET))(this, address);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_IPADDRESSCOLLECTION_CLEAR_OFFSET))(this);
		}
	};
}
