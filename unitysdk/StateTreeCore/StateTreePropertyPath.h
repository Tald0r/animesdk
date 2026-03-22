#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NativeTypes/NativeList_1.h"
#include "unitysdk/StateTreeCore/StateTreePropertyPathSegment.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STATETREECORE_STATETREEPROPERTYPATH_CLONE_OFFSET UNITYSDK_OFFSET(0x5702F0)
#define STATETREECORE_STATETREEPROPERTYPATH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x474440)
#define STATETREECORE_STATETREEPROPERTYPATH_RESOLVEINDIRECTIONSWITHVALUE_OFFSET UNITYSDK_OFFSET(0x31FDD0)
#define STATETREECORE_STATETREEPROPERTYPATH_RESOLVEINDIRECTIONS_OFFSET UNITYSDK_OFFSET(0x31FDD0)
#define STATETREECORE_STATETREEPROPERTYPATH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x38AAD0)
#define STATETREECORE_STATETREEPROPERTYPATH_UPDATESEGMENTSFROMVALUE_OFFSET UNITYSDK_OFFSET(0x31FDD0)
#define STATETREECORE_STATETREEPROPERTYPATH__CTOR_OFFSET UNITYSDK_OFFSET(0x8EC820)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreePropertyPath_TypeDefinitionIndex = 26962;

	struct alignas(8) StateTreePropertyPath
	{
		::NativeTypes::NativeList_1<::StateTreeCore::StateTreePropertyPathSegment> Segments; // 0x10

		::System::Void _ctor(::Unity::Collections::Allocator allocator)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATH__CTOR_OFFSET))(this, allocator);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATH_DISPOSE_OFFSET))(this);
		}

		::StateTreeCore::StateTreePropertyPath Clone()
		{
			return ((::StateTreeCore::StateTreePropertyPath(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATH_CLONE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATH_TOSTRING_OFFSET))(this);
		}

		/*
		::System::Boolean ResolveIndirections(::UnrealTypes::FStructHandle baseStruct, ::System::Collections::Generic::List_1<::StateTreeCore::StateTreePropertyPathIndirection>* outIndirections)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FStructHandle, ::System::Collections::Generic::List_1<::StateTreeCore::StateTreePropertyPathIndirection>*))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATH_RESOLVEINDIRECTIONS_OFFSET))(this, baseStruct, outIndirections);
		}
		*/

		/*
		::System::Boolean ResolveIndirectionsWithValue(::StateTreeCore::StateTreeDataView baseValueView, ::System::Collections::Generic::List_1<::StateTreeCore::StateTreePropertyPathIndirection>* outIndirections)
		{
			return ((::System::Boolean(*)(::PVOID, ::StateTreeCore::StateTreeDataView, ::System::Collections::Generic::List_1<::StateTreeCore::StateTreePropertyPathIndirection>*))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATH_RESOLVEINDIRECTIONSWITHVALUE_OFFSET))(this, baseValueView, outIndirections);
		}
		*/

		/*
		::System::Boolean UpdateSegmentsFromValue(::StateTreeCore::StateTreeDataView baseValueView)
		{
			return ((::System::Boolean(*)(::PVOID, ::StateTreeCore::StateTreeDataView))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATH_UPDATESEGMENTSFROMVALUE_OFFSET))(this, baseValueView);
		}
		*/
	};
}
