#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/CollectionBase.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::CodeDom { class CodeTypeReference; }

#define SYSTEM_CODEDOM_CODETYPEREFERENCECOLLECTION_ADDRANGE_1_OFFSET UNITYSDK_OFFSET(0x19D722D0)
#define SYSTEM_CODEDOM_CODETYPEREFERENCECOLLECTION_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x19D72290)
#define SYSTEM_CODEDOM_CODETYPEREFERENCECOLLECTION_ADD_1_OFFSET UNITYSDK_OFFSET(0x19D72210)
#define SYSTEM_CODEDOM_CODETYPEREFERENCECOLLECTION_ADD_2_OFFSET UNITYSDK_OFFSET(0x19D72250)
#define SYSTEM_CODEDOM_CODETYPEREFERENCECOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x19D721D0)
#define SYSTEM_CODEDOM_CODETYPEREFERENCECOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x19D72310)
#define SYSTEM_CODEDOM_CODETYPEREFERENCECOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x19D72350)
#define SYSTEM_CODEDOM_CODETYPEREFERENCECOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x19D72150)
#define SYSTEM_CODEDOM_CODETYPEREFERENCECOLLECTION_INDEXOF_OFFSET UNITYSDK_OFFSET(0x19D72390)
#define SYSTEM_CODEDOM_CODETYPEREFERENCECOLLECTION_INSERT_OFFSET UNITYSDK_OFFSET(0x19D723D0)
#define SYSTEM_CODEDOM_CODETYPEREFERENCECOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x19D72410)
#define SYSTEM_CODEDOM_CODETYPEREFERENCECOLLECTION_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x19D72190)
#define SYSTEM_CODEDOM_CODETYPEREFERENCECOLLECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19D720D0)
#define SYSTEM_CODEDOM_CODETYPEREFERENCECOLLECTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x19D72110)
#define SYSTEM_CODEDOM_CODETYPEREFERENCECOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19D72090)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeTypeReferenceCollection_TypeDefinitionIndex = 4049;

	class CodeTypeReferenceCollection : public ::System::Collections::CollectionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEREFERENCECOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::CodeDom::CodeTypeReferenceCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeTypeReferenceCollection*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEREFERENCECOLLECTION__CTOR_1_OFFSET))(this, value);
		}

		::System::Void _ctor_2(::Il2CppArray<::System::CodeDom::CodeTypeReference*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::CodeDom::CodeTypeReference*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEREFERENCECOLLECTION__CTOR_2_OFFSET))(this, value);
		}

		::System::CodeDom::CodeTypeReference* get_Item(::System::Int32 index)
		{
			return ((::System::CodeDom::CodeTypeReference*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEREFERENCECOLLECTION_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::CodeDom::CodeTypeReference* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::CodeDom::CodeTypeReference*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEREFERENCECOLLECTION_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Int32 Add(::System::CodeDom::CodeTypeReference* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::CodeDom::CodeTypeReference*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEREFERENCECOLLECTION_ADD_OFFSET))(this, value);
		}

		::System::Void Add_1(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEREFERENCECOLLECTION_ADD_1_OFFSET))(this, value);
		}

		::System::Void Add_2(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEREFERENCECOLLECTION_ADD_2_OFFSET))(this, value);
		}

		::System::Void AddRange(::System::CodeDom::CodeTypeReferenceCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeTypeReferenceCollection*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEREFERENCECOLLECTION_ADDRANGE_OFFSET))(this, value);
		}

		::System::Void AddRange_1(::Il2CppArray<::System::CodeDom::CodeTypeReference*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::CodeDom::CodeTypeReference*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEREFERENCECOLLECTION_ADDRANGE_1_OFFSET))(this, value);
		}

		::System::Boolean Contains(::System::CodeDom::CodeTypeReference* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::CodeDom::CodeTypeReference*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEREFERENCECOLLECTION_CONTAINS_OFFSET))(this, value);
		}

		::System::Void CopyTo(::Il2CppArray<::System::CodeDom::CodeTypeReference*>* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::CodeDom::CodeTypeReference*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEREFERENCECOLLECTION_COPYTO_OFFSET))(this, array, index);
		}

		::System::Int32 IndexOf(::System::CodeDom::CodeTypeReference* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::CodeDom::CodeTypeReference*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEREFERENCECOLLECTION_INDEXOF_OFFSET))(this, value);
		}

		::System::Void Insert(::System::Int32 index, ::System::CodeDom::CodeTypeReference* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::CodeDom::CodeTypeReference*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEREFERENCECOLLECTION_INSERT_OFFSET))(this, index, value);
		}

		::System::Void Remove(::System::CodeDom::CodeTypeReference* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeTypeReference*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEREFERENCECOLLECTION_REMOVE_OFFSET))(this, value);
		}
	};
}
