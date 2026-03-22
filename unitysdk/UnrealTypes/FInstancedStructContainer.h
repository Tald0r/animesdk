#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_APPEND_1_OFFSET UNITYSDK_OFFSET(0x9732D0)
#define UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_APPEND_OFFSET UNITYSDK_OFFSET(0x9732A0)
#define UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_ASSIGN_OFFSET UNITYSDK_OFFSET(0x9732E0)
#define UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x973230)
#define UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_EMPTY_OFFSET UNITYSDK_OFFSET(0x9733C0)
#define UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x973400)
#define UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_GETITEMSTRIDE_OFFSET UNITYSDK_OFFSET(0x1AFC5050)
#define UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_GETITEM_OFFSET UNITYSDK_OFFSET(0x973370)
#define UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x2C50B0)
#define UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x973380)
#define UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_INSERTAT_OFFSET UNITYSDK_OFFSET(0x973270)
#define UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_ISVALIDINDEX_OFFSET UNITYSDK_OFFSET(0x973210)
#define UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_RESERVEBYTES_OFFSET UNITYSDK_OFFSET(0x9732F0)
#define UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_RESET_OFFSET UNITYSDK_OFFSET(0x94D580)
#define UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_SETNUM_OFFSET UNITYSDK_OFFSET(0x973300)
#define UNREALTYPES_FINSTANCEDSTRUCTCONTAINER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AFC50A0)
#define UNREALTYPES_FINSTANCEDSTRUCTCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x973220)

namespace UnrealTypes
{
	inline static constexpr unsigned int FInstancedStructContainer_TypeDefinitionIndex = 23988;

	struct alignas(8) FInstancedStructContainer
	{
		static ::System::Int32* StaticGet_DefaultMinAlignment()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FInstancedStructContainer_TypeDefinitionIndex)->GetStaticField(0x4760);
		}
		static ::System::Int32* StaticGet_ItemAlignment()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FInstancedStructContainer_TypeDefinitionIndex)->GetStaticField(0x4764);
		}
		static ::System::Int32* StaticGet_ItemStride()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FInstancedStructContainer_TypeDefinitionIndex)->GetStaticField(0x4768);
		}
		::System::Void* _memory; // 0x10
		::System::Int32 _allocatedSize; // 0x18
		::System::Int32 _numItems; // 0x1C
		::Unity::Collections::Allocator _allocator; // 0x20

		::System::Void _ctor(::Unity::Collections::Allocator allocator)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCTCONTAINER__CTOR_OFFSET))(this, allocator);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCTCONTAINER__CCTOR_OFFSET))();
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean IsValidIndex(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_ISVALIDINDEX_OFFSET))(this, index);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_DISPOSE_OFFSET))(this);
		}

		/*
		::System::Void InsertAt(::System::Int32 insertAtIndex, ::NativeTypes::NativeListView_1<::UnrealTypes::FReadonlyStructView> valuesToInsert)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::NativeTypes::NativeListView_1<::UnrealTypes::FReadonlyStructView>))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_INSERTAT_OFFSET))(this, insertAtIndex, valuesToInsert);
		}
		*/

		/*
		::System::Void Append(::NativeTypes::NativeListView_1<::UnrealTypes::FReadonlyStructView> newItemValues)
		{
			return ((::System::Void(*)(::PVOID, ::NativeTypes::NativeListView_1<::UnrealTypes::FReadonlyStructView>))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_APPEND_OFFSET))(this, newItemValues);
		}
		*/

		/*
		::System::Void Append_1(::System::Collections::Generic::List_1<::UnrealTypes::FInstancedStruct>* newItemValues)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnrealTypes::FInstancedStruct>*))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_APPEND_1_OFFSET))(this, newItemValues);
		}
		*/

		/*
		::System::Void Assign(::System::Collections::Generic::List_1<::UnrealTypes::FInstancedStruct>* newItemValues)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnrealTypes::FInstancedStruct>*))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_ASSIGN_OFFSET))(this, newItemValues);
		}
		*/

		::System::Void ReserveBytes(::System::Int32 numBytes, ::System::Int32 minAlignment)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_RESERVEBYTES_OFFSET))(this, numBytes, minAlignment);
		}

		::System::Void SetNum(::System::Int32 newNum)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_SETNUM_OFFSET))(this, newNum);
		}

		/*
		::UnrealTypes::FInstancedStructContainer_FItem& GetItem(::System::Int32 index)
		{
			return ((::UnrealTypes::FInstancedStructContainer_FItem&(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_GETITEM_OFFSET))(this, index);
		}
		*/

		/*
		::UnrealTypes::FStructView get_Item(::System::Int32 index)
		{
			return ((::UnrealTypes::FStructView(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_GET_ITEM_OFFSET))(this, index);
		}
		*/

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_RESET_OFFSET))(this);
		}

		::System::Void Empty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_EMPTY_OFFSET))(this);
		}

		static ::System::Int32 GetItemStride()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_GETITEMSTRIDE_OFFSET))();
		}

		/*
		::UnrealTypes::FInstancedStructContainer_Enumerator GetEnumerator()
		{
			return ((::UnrealTypes::FInstancedStructContainer_Enumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_GETENUMERATOR_OFFSET))(this);
		}
		*/
	};
}
