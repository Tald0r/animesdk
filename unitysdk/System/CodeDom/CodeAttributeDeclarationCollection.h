#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/CollectionBase.h"

namespace System::CodeDom { class CodeAttributeDeclaration; }

#define SYSTEM_CODEDOM_CODEATTRIBUTEDECLARATIONCOLLECTION_ADDRANGE_1_OFFSET UNITYSDK_OFFSET(0x19049FF0)
#define SYSTEM_CODEDOM_CODEATTRIBUTEDECLARATIONCOLLECTION_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x19049FB0)
#define SYSTEM_CODEDOM_CODEATTRIBUTEDECLARATIONCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x19049F70)
#define SYSTEM_CODEDOM_CODEATTRIBUTEDECLARATIONCOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1904A030)
#define SYSTEM_CODEDOM_CODEATTRIBUTEDECLARATIONCOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1904A070)
#define SYSTEM_CODEDOM_CODEATTRIBUTEDECLARATIONCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x19049EF0)
#define SYSTEM_CODEDOM_CODEATTRIBUTEDECLARATIONCOLLECTION_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1904A0B0)
#define SYSTEM_CODEDOM_CODEATTRIBUTEDECLARATIONCOLLECTION_INSERT_OFFSET UNITYSDK_OFFSET(0x1904A0F0)
#define SYSTEM_CODEDOM_CODEATTRIBUTEDECLARATIONCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x1904A130)
#define SYSTEM_CODEDOM_CODEATTRIBUTEDECLARATIONCOLLECTION_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x19049F30)
#define SYSTEM_CODEDOM_CODEATTRIBUTEDECLARATIONCOLLECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19049E70)
#define SYSTEM_CODEDOM_CODEATTRIBUTEDECLARATIONCOLLECTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x19049EB0)
#define SYSTEM_CODEDOM_CODEATTRIBUTEDECLARATIONCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19049E30)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeAttributeDeclarationCollection_TypeDefinitionIndex = 4050;

	class CodeAttributeDeclarationCollection : public ::System::Collections::CollectionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEATTRIBUTEDECLARATIONCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::CodeDom::CodeAttributeDeclarationCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeAttributeDeclarationCollection*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEATTRIBUTEDECLARATIONCOLLECTION__CTOR_1_OFFSET))(this, value);
		}

		::System::Void _ctor_2(::Il2CppArray<::System::CodeDom::CodeAttributeDeclaration*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::CodeDom::CodeAttributeDeclaration*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEATTRIBUTEDECLARATIONCOLLECTION__CTOR_2_OFFSET))(this, value);
		}

		::System::CodeDom::CodeAttributeDeclaration* get_Item(::System::Int32 index)
		{
			return ((::System::CodeDom::CodeAttributeDeclaration*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEATTRIBUTEDECLARATIONCOLLECTION_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::CodeDom::CodeAttributeDeclaration* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::CodeDom::CodeAttributeDeclaration*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEATTRIBUTEDECLARATIONCOLLECTION_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Int32 Add(::System::CodeDom::CodeAttributeDeclaration* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::CodeDom::CodeAttributeDeclaration*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEATTRIBUTEDECLARATIONCOLLECTION_ADD_OFFSET))(this, value);
		}

		::System::Void AddRange(::System::CodeDom::CodeAttributeDeclarationCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeAttributeDeclarationCollection*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEATTRIBUTEDECLARATIONCOLLECTION_ADDRANGE_OFFSET))(this, value);
		}

		::System::Void AddRange_1(::Il2CppArray<::System::CodeDom::CodeAttributeDeclaration*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::CodeDom::CodeAttributeDeclaration*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEATTRIBUTEDECLARATIONCOLLECTION_ADDRANGE_1_OFFSET))(this, value);
		}

		::System::Boolean Contains(::System::CodeDom::CodeAttributeDeclaration* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::CodeDom::CodeAttributeDeclaration*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEATTRIBUTEDECLARATIONCOLLECTION_CONTAINS_OFFSET))(this, value);
		}

		::System::Void CopyTo(::Il2CppArray<::System::CodeDom::CodeAttributeDeclaration*>* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::CodeDom::CodeAttributeDeclaration*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEATTRIBUTEDECLARATIONCOLLECTION_COPYTO_OFFSET))(this, array, index);
		}

		::System::Int32 IndexOf(::System::CodeDom::CodeAttributeDeclaration* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::CodeDom::CodeAttributeDeclaration*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEATTRIBUTEDECLARATIONCOLLECTION_INDEXOF_OFFSET))(this, value);
		}

		::System::Void Insert(::System::Int32 index, ::System::CodeDom::CodeAttributeDeclaration* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::CodeDom::CodeAttributeDeclaration*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEATTRIBUTEDECLARATIONCOLLECTION_INSERT_OFFSET))(this, index, value);
		}

		::System::Void Remove(::System::CodeDom::CodeAttributeDeclaration* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeAttributeDeclaration*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEATTRIBUTEDECLARATIONCOLLECTION_REMOVE_OFFSET))(this, value);
		}
	};
}
