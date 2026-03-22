#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NativeTypes/NativeRawPtr_1.h"
#include "unitysdk/NativeTypes/NativeReadonlyRawPtr_1.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionFrame.h"
#include "unitysdk/StateTreeCore/StateTreeInstanceData.h"
#include "unitysdk/System/ValueType.h"

#define STATETREECORE_STATETREEEXECUTIONCONTEXT_CURRENTLYPROCESSEDFRAMESCOPE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8EB990)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_CURRENTLYPROCESSEDFRAMESCOPE__CTOR_OFFSET UNITYSDK_OFFSET(0x8EB940)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeExecutionContext_CurrentlyProcessedFrameScope_TypeDefinitionIndex = 26925;

	struct alignas(8) StateTreeExecutionContext_CurrentlyProcessedFrameScope
	{
		::NativeTypes::NativeRawPtr_1<::StateTreeCore::StateTreeExecutionContext> _context; // 0x10
		::NativeTypes::NativeRawPtr_1<::StateTreeCore::StateTreeInstanceData> _savedSharedInstanceData; // 0x18
		::NativeTypes::NativeReadonlyRawPtr_1<::StateTreeCore::StateTreeExecutionFrame> _savedFrame; // 0x20
		::NativeTypes::NativeReadonlyRawPtr_1<::StateTreeCore::StateTreeExecutionFrame> _savedParentFrame; // 0x28

		::System::Void _ctor(::StateTreeCore::StateTreeExecutionContext& context, ::NativeTypes::NativeReadonlyRawPtr_1<::StateTreeCore::StateTreeExecutionFrame> currentParentFrame, ::StateTreeCore::StateTreeExecutionFrame& currentFrame)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeExecutionContext&, ::NativeTypes::NativeReadonlyRawPtr_1<::StateTreeCore::StateTreeExecutionFrame>, ::StateTreeCore::StateTreeExecutionFrame&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_CURRENTLYPROCESSEDFRAMESCOPE__CTOR_OFFSET))(this, context, currentParentFrame, currentFrame);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_CURRENTLYPROCESSEDFRAMESCOPE_DISPOSE_OFFSET))(this);
		}
	};
}
