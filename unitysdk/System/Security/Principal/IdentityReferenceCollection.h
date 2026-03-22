#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class ArrayList; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Security::Principal { class IdentityReference; }

#define SYSTEM_SECURITY_PRINCIPAL_IDENTITYREFERENCECOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x19448090)
#define SYSTEM_SECURITY_PRINCIPAL_IDENTITYREFERENCECOLLECTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x194480C0)
#define SYSTEM_SECURITY_PRINCIPAL_IDENTITYREFERENCECOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x194480F0)
#define SYSTEM_SECURITY_PRINCIPAL_IDENTITYREFERENCECOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x19448460)
#define SYSTEM_SECURITY_PRINCIPAL_IDENTITYREFERENCECOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x194484B0)
#define SYSTEM_SECURITY_PRINCIPAL_IDENTITYREFERENCECOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x19448050)
#define SYSTEM_SECURITY_PRINCIPAL_IDENTITYREFERENCECOLLECTION_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x19448080)
#define SYSTEM_SECURITY_PRINCIPAL_IDENTITYREFERENCECOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x19448550)
#define SYSTEM_SECURITY_PRINCIPAL_IDENTITYREFERENCECOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19448500)
#define SYSTEM_SECURITY_PRINCIPAL_IDENTITYREFERENCECOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19448000)

namespace System::Security::Principal
{
	inline static constexpr unsigned int IdentityReferenceCollection_TypeDefinitionIndex = 1021;

	class IdentityReferenceCollection : public ::System::Object
	{
	public:
		::System::Collections::ArrayList* _list; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_IDENTITYREFERENCECOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_IDENTITYREFERENCECOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_IDENTITYREFERENCECOLLECTION_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Void Add(::System::Security::Principal::IdentityReference* identity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Principal::IdentityReference*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_IDENTITYREFERENCECOLLECTION_ADD_OFFSET))(this, identity);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_IDENTITYREFERENCECOLLECTION_CLEAR_OFFSET))(this);
		}

		::System::Boolean Contains(::System::Security::Principal::IdentityReference* identity)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::Principal::IdentityReference*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_IDENTITYREFERENCECOLLECTION_CONTAINS_OFFSET))(this, identity);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Security::Principal::IdentityReference*>* array, ::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Security::Principal::IdentityReference*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_IDENTITYREFERENCECOLLECTION_COPYTO_OFFSET))(this, array, offset);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Security::Principal::IdentityReference*>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Security::Principal::IdentityReference*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_IDENTITYREFERENCECOLLECTION_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_IDENTITYREFERENCECOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Boolean Remove(::System::Security::Principal::IdentityReference* identity)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::Principal::IdentityReference*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_IDENTITYREFERENCECOLLECTION_REMOVE_OFFSET))(this, identity);
		}
	};
}
