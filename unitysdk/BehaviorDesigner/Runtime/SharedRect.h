#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/SharedVariable_1.h"
#include "unitysdk/UnityEngine/Rect.h"

#define BEHAVIORDESIGNER_RUNTIME_SHAREDRECT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1B445FD0)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDRECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B446080)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int SharedRect_TypeDefinitionIndex = 31212;

	class SharedRect : public ::BehaviorDesigner::Runtime::SharedVariable_1<::UnityEngine::Rect>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDRECT__CTOR_OFFSET))(this);
		}

		static ::BehaviorDesigner::Runtime::SharedRect* op_Implicit(::UnityEngine::Rect value)
		{
			return ((::BehaviorDesigner::Runtime::SharedRect*(*)(::UnityEngine::Rect))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDRECT_OP_IMPLICIT_OFFSET))(value);
		}
	};
}
