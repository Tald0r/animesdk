#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/CollectionBase.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::CodeDom { class CodeTypeReference; }

#define SYSTEM_CODEDOM_CODETYPEREFERENCECOLLECTION_ADDRANGE_1_OFFSET UNITYSDK_OFFSET(0x1A330790)
#define SYSTEM_CODEDOM_CODETYPEREFERENCECOLLECTION_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x1A330750)
#define SYSTEM_CODEDOM_CODETYPEREFERENCECOLLECTION_ADD_1_OFFSET UNITYSDK_OFFSET(0x1A3306D0)
#define SYSTEM_CODEDOM_CODETYPEREFERENCECOLLECTION_ADD_2_OFFSET UNITYSDK_OFFSET(0x1A330710)
#define SYSTEM_CODEDOM_CODETYPEREFERENCECOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1A330690)
#define SYSTEM_CODEDOM_CODETYPEREFERENCECOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1A3307D0)
#define SYSTEM_CODEDOM_CODETYPEREFERENCECOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1A330810)
#define SYSTEM_CODEDOM_CODETYPEREFERENCECOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1A330610)
#define SYSTEM_CODEDOM_CODETYPEREFERENCECOLLECTION_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1A330850)
#define SYSTEM_CODEDOM_CODETYPEREFERENCECOLLECTION_INSERT_OFFSET UNITYSDK_OFFSET(0x1A330890)
#define SYSTEM_CODEDOM_CODETYPEREFERENCECOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x1A3308D0)
#define SYSTEM_CODEDOM_CODETYPEREFERENCECOLLECTION_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1A330650)
#define SYSTEM_CODEDOM_CODETYPEREFERENCECOLLECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A330590)
#define SYSTEM_CODEDOM_CODETYPEREFERENCECOLLECTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A3305D0)
#define SYSTEM_CODEDOM_CODETYPEREFERENCECOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A330550)

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
