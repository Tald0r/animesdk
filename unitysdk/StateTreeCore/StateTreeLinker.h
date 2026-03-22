#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NativeTypes/NativeList_1.h"
#include "unitysdk/NativeTypes/NativeReadonlyRawPtr_1.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataDesc.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataRequirement.h"
#include "unitysdk/StateTreeCore/StateTreeLinkerStatus.h"
#include "unitysdk/StateTreeCore/StateTreeSchema.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

#define STATETREECORE_STATETREELINKER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8EC3D0)
#define STATETREECORE_STATETREELINKER_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x2C6230)
#define STATETREECORE_STATETREELINKER_LINKEXTERNALDATA_OFFSET UNITYSDK_OFFSET(0x8EC400)
#define STATETREECORE_STATETREELINKER__CTOR_OFFSET UNITYSDK_OFFSET(0x8EC380)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeLinker_TypeDefinitionIndex = 26953;

	struct alignas(8) StateTreeLinker
	{
		::NativeTypes::NativeReadonlyRawPtr_1<::StateTreeCore::StateTreeSchema> Schema; // 0x10
		::StateTreeCore::StateTreeLinkerStatus _status; // 0x18
		::NativeTypes::NativeList_1<::StateTreeCore::StateTreeExternalDataDesc> ExternalDataDesc; // 0x20

		::System::Void _ctor(::Unity::Collections::Allocator allocator)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREELINKER__CTOR_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTreeLinkerStatus get_Status()
		{
			return ((::StateTreeCore::StateTreeLinkerStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREELINKER_GET_STATUS_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREELINKER_DISPOSE_OFFSET))(this);
		}

		/*
		::System::Void LinkExternalData(::StateTreeCore::StateTreeExternalDataHandle& handle, ::UnrealTypes::FStructHandle scriptStruct, ::StateTreeCore::StateTreeExternalDataRequirement requirement)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeExternalDataHandle&, ::UnrealTypes::FStructHandle, ::StateTreeCore::StateTreeExternalDataRequirement))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREELINKER_LINKEXTERNALDATA_OFFSET))(this, handle, scriptStruct, requirement);
		}
		*/
	};
}
