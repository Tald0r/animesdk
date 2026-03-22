#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_BANGBOOGAMESUBSYSTEM___C__DISPLAYCLASS67_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8E945D0)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM___C__DISPLAYCLASS67_0__ONHOSTCHANGED_B__1_OFFSET UNITYSDK_OFFSET(0x8E945E0)

namespace MoleMole
{
	inline static constexpr unsigned int BangbooGameSubsystem___c__DisplayClass67_0_TypeDefinitionIndex = 42939;

	class BangbooGameSubsystem___c__DisplayClass67_0 : public ::System::Object
	{
	public:
		::System::Boolean hasBuddyCreated; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOGAMESUBSYSTEM___C__DISPLAYCLASS67_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnHostChanged_b__1(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOGAMESUBSYSTEM___C__DISPLAYCLASS67_0__ONHOSTCHANGED_B__1_OFFSET))(this, entity);
		}
	};
}
