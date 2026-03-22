#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NativeTypes/NativeReadonlyRawPtr_1.h"
#include "unitysdk/StateTreeCore/StateTree.h"
#include "unitysdk/StateTreeCore/StateTreeDataHandle.h"
#include "unitysdk/StateTreeCore/StateTreeStateHandle.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnrealTypes/FInstancedStruct.h"

#define STATETREECORE_STATETREETEMPORARYINSTANCEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8ED030)
#define STATETREECORE_STATETREETEMPORARYINSTANCEDATA_RESET_OFFSET UNITYSDK_OFFSET(0x8ED0B0)
#define STATETREECORE_STATETREETEMPORARYINSTANCEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8ECF30)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeTemporaryInstanceData_TypeDefinitionIndex = 26947;

	struct alignas(8) StateTreeTemporaryInstanceData
	{
		::NativeTypes::NativeReadonlyRawPtr_1<::StateTreeCore::StateTree> StateTree; // 0x10
		::StateTreeCore::StateTreeStateHandle RootState; // 0x18
		::StateTreeCore::StateTreeDataHandle DataHandle; // 0x1C
		::System::UInt16 OwnerNodeIndex; // 0x24
		::UnrealTypes::FInstancedStruct Instance; // 0x28

		::System::Void _ctor(::Unity::Collections::Allocator allocator)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETEMPORARYINSTANCEDATA__CTOR_OFFSET))(this, allocator);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETEMPORARYINSTANCEDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETEMPORARYINSTANCEDATA_RESET_OFFSET))(this);
		}
	};
}
