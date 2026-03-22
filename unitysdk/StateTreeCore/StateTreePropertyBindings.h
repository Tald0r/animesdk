#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NativeTypes/NativeList_1.h"
#include "unitysdk/StateTreeCore/StateTreeBindableStructDesc.h"
#include "unitysdk/StateTreeCore/StateTreePropertyCopy.h"
#include "unitysdk/StateTreeCore/StateTreePropertyCopyBatch.h"
#include "unitysdk/StateTreeCore/StateTreePropertyIndirection.h"
#include "unitysdk/StateTreeCore/StateTreePropertyPathBinding.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

#define STATETREECORE_STATETREEPROPERTYBINDINGS_COPYPROPERTY_OFFSET UNITYSDK_OFFSET(0x8EC5C0)
#define STATETREECORE_STATETREEPROPERTYBINDINGS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8EC6C0)
#define STATETREECORE_STATETREEPROPERTYBINDINGS_GETBATCHCOPIES_OFFSET UNITYSDK_OFFSET(0x8EC770)
#define STATETREECORE_STATETREEPROPERTYBINDINGS_GETSOURCEDESCBYHANDLE_OFFSET UNITYSDK_OFFSET(0x8EC750)
#define STATETREECORE_STATETREEPROPERTYBINDINGS_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x8EC5C0)
#define STATETREECORE_STATETREEPROPERTYBINDINGS_RESET_OFFSET UNITYSDK_OFFSET(0x8EC730)
#define STATETREECORE_STATETREEPROPERTYBINDINGS_RESOLVECOPYTYPE_OFFSET UNITYSDK_OFFSET(0x19BE9790)
#define STATETREECORE_STATETREEPROPERTYBINDINGS_RESOLVEPATHS_OFFSET UNITYSDK_OFFSET(0x8EC760)
#define STATETREECORE_STATETREEPROPERTYBINDINGS_RESOLVEPATH_1_OFFSET UNITYSDK_OFFSET(0x19BE97A0)
#define STATETREECORE_STATETREEPROPERTYBINDINGS_RESOLVEPATH_OFFSET UNITYSDK_OFFSET(0x31FDD0)
#define STATETREECORE_STATETREEPROPERTYBINDINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x8EC5D0)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreePropertyBindings_TypeDefinitionIndex = 26969;

	struct alignas(8) StateTreePropertyBindings
	{
		::NativeTypes::NativeList_1<::StateTreeCore::StateTreeBindableStructDesc> SourceStructs; // 0x10
		::NativeTypes::NativeList_1<::StateTreeCore::StateTreePropertyCopyBatch> CopyBatches; // 0x28
		::NativeTypes::NativeList_1<::StateTreeCore::StateTreePropertyPathBinding> PropertyPathBindings; // 0x40
		::NativeTypes::NativeList_1<::StateTreeCore::StateTreePropertyCopy> PropertyCopies; // 0x58
		::NativeTypes::NativeList_1<::StateTreeCore::StateTreePropertyIndirection> PropertyIndirections; // 0x70
		::System::Boolean _areBindingsResolved; // 0x88

		::System::Void _ctor(::Unity::Collections::Allocator allocator)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYBINDINGS__CTOR_OFFSET))(this, allocator);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYBINDINGS_GET_ISVALID_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYBINDINGS_DISPOSE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYBINDINGS_RESET_OFFSET))(this);
		}

		/*
		::NativeTypes::NativeRawPtr_1<::StateTreeCore::StateTreeBindableStructDesc> GetSourceDescByHandle(::StateTreeCore::StateTreeDataHandle sourceDataHandle)
		{
			return ((::NativeTypes::NativeRawPtr_1<::StateTreeCore::StateTreeBindableStructDesc>(*)(::PVOID, ::StateTreeCore::StateTreeDataHandle))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYBINDINGS_GETSOURCEDESCBYHANDLE_OFFSET))(this, sourceDataHandle);
		}
		*/

		::System::Boolean ResolvePaths()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYBINDINGS_RESOLVEPATHS_OFFSET))(this);
		}

		/*
		::System::Boolean ResolvePath(::UnrealTypes::FStructHandle scriptStruct, ::StateTreeCore::StateTreePropertyPath& path, ::StateTreeCore::StateTreePropertyIndirection& outFirstIndirection, ::StateTreeCore::StateTreePropertyPathIndirection& outLeafIndirection)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FStructHandle, ::StateTreeCore::StateTreePropertyPath&, ::StateTreeCore::StateTreePropertyIndirection&, ::StateTreeCore::StateTreePropertyPathIndirection&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYBINDINGS_RESOLVEPATH_OFFSET))(this, scriptStruct, path, outFirstIndirection, outLeafIndirection);
		}
		*/

		/*
		static ::System::Boolean ResolvePath_1(::UnrealTypes::FStructHandle scriptStruct, ::StateTreeCore::StateTreePropertyPath& path, ::NativeTypes::NativeList_1<::StateTreeCore::StateTreePropertyIndirection> outIndirections, ::StateTreeCore::StateTreePropertyIndirection& outFirstIndirection, ::StateTreeCore::StateTreePropertyPathIndirection& outLeafIndirection)
		{
			return ((::System::Boolean(*)(::UnrealTypes::FStructHandle, ::StateTreeCore::StateTreePropertyPath&, ::NativeTypes::NativeList_1<::StateTreeCore::StateTreePropertyIndirection>, ::StateTreeCore::StateTreePropertyIndirection&, ::StateTreeCore::StateTreePropertyPathIndirection&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYBINDINGS_RESOLVEPATH_1_OFFSET))(scriptStruct, path, outIndirections, outFirstIndirection, outLeafIndirection);
		}
		*/

		/*
		static ::System::Boolean ResolveCopyType(::StateTreeCore::StateTreePropertyPathIndirection& sourceIndirection, ::StateTreeCore::StateTreePropertyPathIndirection& targetIndirection, ::StateTreeCore::StateTreePropertyCopy& outCopy)
		{
			return ((::System::Boolean(*)(::StateTreeCore::StateTreePropertyPathIndirection&, ::StateTreeCore::StateTreePropertyPathIndirection&, ::StateTreeCore::StateTreePropertyCopy&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYBINDINGS_RESOLVECOPYTYPE_OFFSET))(sourceIndirection, targetIndirection, outCopy);
		}
		*/

		/*
		::NativeTypes::NativeListView_1<::StateTreeCore::StateTreePropertyCopy> GetBatchCopies(::StateTreeCore::StateTreePropertyCopyBatch& batch)
		{
			return ((::NativeTypes::NativeListView_1<::StateTreeCore::StateTreePropertyCopy>(*)(::PVOID, ::StateTreeCore::StateTreePropertyCopyBatch&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYBINDINGS_GETBATCHCOPIES_OFFSET))(this, batch);
		}
		*/

		/*
		::System::Boolean CopyProperty(::StateTreeCore::StateTreePropertyCopy& copy, ::StateTreeCore::StateTreeDataView sourceStructView, ::StateTreeCore::StateTreeDataView targetStructView)
		{
			return ((::System::Boolean(*)(::PVOID, ::StateTreeCore::StateTreePropertyCopy&, ::StateTreeCore::StateTreeDataView, ::StateTreeCore::StateTreeDataView))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYBINDINGS_COPYPROPERTY_OFFSET))(this, copy, sourceStructView, targetStructView);
		}
		*/
	};
}
