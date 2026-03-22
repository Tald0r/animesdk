#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace StateTreeGameplay { class StateTreeComponent; }

#define STATETREEGAMEPLAY_STATETREESYSTEM___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16C5B900)
#define STATETREEGAMEPLAY_STATETREESYSTEM___C__DISPLAYCLASS5_0__REMOVEINSTANCE_B__0_OFFSET UNITYSDK_OFFSET(0x16C5B910)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int StateTreeSystem___c__DisplayClass5_0_TypeDefinitionIndex = 62288;

	class StateTreeSystem___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::Int32 id; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREESYSTEM___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RemoveInstance_b__0(::StateTreeGameplay::StateTreeComponent* comp)
		{
			return ((::System::Boolean(*)(::PVOID, ::StateTreeGameplay::StateTreeComponent*))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREESYSTEM___C__DISPLAYCLASS5_0__REMOVEINSTANCE_B__0_OFFSET))(this, comp);
		}
	};
}
