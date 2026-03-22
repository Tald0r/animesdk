#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeDataHandle.h"
#include "unitysdk/StateTreeCore/StateTreePropertyPath.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

#define STATETREECORE_STATETREEPROPERTYPATHBINDING_CLONE_OFFSET UNITYSDK_OFFSET(0x8EC950)
#define STATETREECORE_STATETREEPROPERTYPATHBINDING_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8EC910)
#define STATETREECORE_STATETREEPROPERTYPATHBINDING__CTOR_OFFSET UNITYSDK_OFFSET(0x8EC860)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreePropertyPathBinding_TypeDefinitionIndex = 26970;

	struct alignas(8) StateTreePropertyPathBinding
	{
		::StateTreeCore::StateTreePropertyPath SourcePropertyPath; // 0x10
		::StateTreeCore::StateTreePropertyPath TargetPropertyPath; // 0x28
		::StateTreeCore::StateTreeDataHandle SourceDataHandle; // 0x40

		::System::Void _ctor(::Unity::Collections::Allocator allocator)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATHBINDING__CTOR_OFFSET))(this, allocator);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATHBINDING_DISPOSE_OFFSET))(this);
		}

		::StateTreeCore::StateTreePropertyPathBinding Clone()
		{
			return ((::StateTreeCore::StateTreePropertyPathBinding(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYPATHBINDING_CLONE_OFFSET))(this);
		}
	};
}
