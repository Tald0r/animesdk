#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NativeTypes/NativeRawPtr_1.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeStateHandle.h"
#include "unitysdk/System/ValueType.h"

#define STATETREECORE_STATETREEEXECUTIONCONTEXT_CURRENTLYPROCESSEDSTATESCOPE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8EB9E0)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_CURRENTLYPROCESSEDSTATESCOPE__CTOR_OFFSET UNITYSDK_OFFSET(0x8EB9C0)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeExecutionContext_CurrentlyProcessedStateScope_TypeDefinitionIndex = 26926;

	struct alignas(8) StateTreeExecutionContext_CurrentlyProcessedStateScope
	{
		::NativeTypes::NativeRawPtr_1<::StateTreeCore::StateTreeExecutionContext> _context; // 0x10
		::StateTreeCore::StateTreeStateHandle _savedState; // 0x18

		::System::Void _ctor(::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeStateHandle state)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeStateHandle))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_CURRENTLYPROCESSEDSTATESCOPE__CTOR_OFFSET))(this, context, state);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_CURRENTLYPROCESSEDSTATESCOPE_DISPOSE_OFFSET))(this);
		}
	};
}
