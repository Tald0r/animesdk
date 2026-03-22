#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NativeTypes/NativeUniquePtr_1.h"
#include "unitysdk/StateTreeCore/StateTree.h"
#include "unitysdk/StateTreeCore/StateTreeInstanceData.h"
#include "unitysdk/System/Object.h"

#define STATETREEGAMEPLAY_STATETREECOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0x19C22380)
#define STATETREEGAMEPLAY_STATETREECOMPONENT_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x19C22420)
#define STATETREEGAMEPLAY_STATETREECOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x19C224B0)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int StateTreeComponent_TypeDefinitionIndex = 53850;

	class StateTreeComponent : public ::System::Object
	{
	public:
		::System::Int32 RuntimeId; // 0x10
		::NativeTypes::NativeUniquePtr_1<::StateTreeCore::StateTreeInstanceData> InstanceData; // 0x18
		::NativeTypes::NativeUniquePtr_1<::StateTreeCore::StateTree> StateTree; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREECOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void InitComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREECOMPONENT_INITCOMPONENT_OFFSET))(this);
		}

		::System::Void OnClean()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREECOMPONENT_ONCLEAN_OFFSET))(this);
		}
	};
}
