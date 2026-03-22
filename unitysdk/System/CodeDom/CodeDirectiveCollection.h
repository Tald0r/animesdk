#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/CollectionBase.h"

namespace System::CodeDom { class CodeDirective; }

#define SYSTEM_CODEDOM_CODEDIRECTIVECOLLECTION_ADDRANGE_1_OFFSET UNITYSDK_OFFSET(0x182C0030)
#define SYSTEM_CODEDOM_CODEDIRECTIVECOLLECTION_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x182BFFF0)
#define SYSTEM_CODEDOM_CODEDIRECTIVECOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x182BFFB0)
#define SYSTEM_CODEDOM_CODEDIRECTIVECOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x182C0070)
#define SYSTEM_CODEDOM_CODEDIRECTIVECOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x182C00B0)
#define SYSTEM_CODEDOM_CODEDIRECTIVECOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x182BFF30)
#define SYSTEM_CODEDOM_CODEDIRECTIVECOLLECTION_INDEXOF_OFFSET UNITYSDK_OFFSET(0x182C00F0)
#define SYSTEM_CODEDOM_CODEDIRECTIVECOLLECTION_INSERT_OFFSET UNITYSDK_OFFSET(0x182C0130)
#define SYSTEM_CODEDOM_CODEDIRECTIVECOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x182C0170)
#define SYSTEM_CODEDOM_CODEDIRECTIVECOLLECTION_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x182BFF70)
#define SYSTEM_CODEDOM_CODEDIRECTIVECOLLECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x182BFEB0)
#define SYSTEM_CODEDOM_CODEDIRECTIVECOLLECTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x182BFEF0)
#define SYSTEM_CODEDOM_CODEDIRECTIVECOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x182BFE70)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeDirectiveCollection_TypeDefinitionIndex = 4040;

	class CodeDirectiveCollection : public ::System::Collections::CollectionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEDIRECTIVECOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::CodeDom::CodeDirectiveCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeDirectiveCollection*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEDIRECTIVECOLLECTION__CTOR_1_OFFSET))(this, value);
		}

		::System::Void _ctor_2(::Il2CppArray<::System::CodeDom::CodeDirective*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::CodeDom::CodeDirective*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEDIRECTIVECOLLECTION__CTOR_2_OFFSET))(this, value);
		}

		::System::CodeDom::CodeDirective* get_Item(::System::Int32 index)
		{
			return ((::System::CodeDom::CodeDirective*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEDIRECTIVECOLLECTION_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::CodeDom::CodeDirective* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::CodeDom::CodeDirective*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEDIRECTIVECOLLECTION_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Int32 Add(::System::CodeDom::CodeDirective* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::CodeDom::CodeDirective*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEDIRECTIVECOLLECTION_ADD_OFFSET))(this, value);
		}

		::System::Void AddRange(::System::CodeDom::CodeDirectiveCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeDirectiveCollection*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEDIRECTIVECOLLECTION_ADDRANGE_OFFSET))(this, value);
		}

		::System::Void AddRange_1(::Il2CppArray<::System::CodeDom::CodeDirective*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::CodeDom::CodeDirective*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEDIRECTIVECOLLECTION_ADDRANGE_1_OFFSET))(this, value);
		}

		::System::Boolean Contains(::System::CodeDom::CodeDirective* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::CodeDom::CodeDirective*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEDIRECTIVECOLLECTION_CONTAINS_OFFSET))(this, value);
		}

		::System::Void CopyTo(::Il2CppArray<::System::CodeDom::CodeDirective*>* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::CodeDom::CodeDirective*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEDIRECTIVECOLLECTION_COPYTO_OFFSET))(this, array, index);
		}

		::System::Int32 IndexOf(::System::CodeDom::CodeDirective* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::CodeDom::CodeDirective*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEDIRECTIVECOLLECTION_INDEXOF_OFFSET))(this, value);
		}

		::System::Void Insert(::System::Int32 index, ::System::CodeDom::CodeDirective* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::CodeDom::CodeDirective*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEDIRECTIVECOLLECTION_INSERT_OFFSET))(this, index, value);
		}

		::System::Void Remove(::System::CodeDom::CodeDirective* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeDirective*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEDIRECTIVECOLLECTION_REMOVE_OFFSET))(this, value);
		}
	};
}
