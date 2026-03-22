#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/SharedVariable_1.h"
#include "unitysdk/UnityEngine/LayerMask.h"

#define BEHAVIORDESIGNER_RUNTIME_SHAREDLAYERMASK_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1A62B780)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDLAYERMASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A62B820)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int SharedLayerMask_TypeDefinitionIndex = 30253;

	class SharedLayerMask : public ::BehaviorDesigner::Runtime::SharedVariable_1<::UnityEngine::LayerMask>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDLAYERMASK__CTOR_OFFSET))(this);
		}

		static ::BehaviorDesigner::Runtime::SharedLayerMask* op_Implicit(::UnityEngine::LayerMask value)
		{
			return ((::BehaviorDesigner::Runtime::SharedLayerMask*(*)(::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDLAYERMASK_OP_IMPLICIT_OFFSET))(value);
		}
	};
}
