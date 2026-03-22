#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace StateTreeGameplay { class StateTreeComponent; }

#define STATETREEGAMEPLAY_STATETREESYSTEM___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16C5B8D0)
#define STATETREEGAMEPLAY_STATETREESYSTEM___C__DISPLAYCLASS2_0__ONENTITYREMOVE_B__0_OFFSET UNITYSDK_OFFSET(0x16C5B8E0)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int StateTreeSystem___c__DisplayClass2_0_TypeDefinitionIndex = 62289;

	class StateTreeSystem___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::System::Int32 entityId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREESYSTEM___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnEntityRemove_b__0(::StateTreeGameplay::StateTreeComponent* c)
		{
			return ((::System::Boolean(*)(::PVOID, ::StateTreeGameplay::StateTreeComponent*))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREESYSTEM___C__DISPLAYCLASS2_0__ONENTITYREMOVE_B__0_OFFSET))(this, c);
		}
	};
}
