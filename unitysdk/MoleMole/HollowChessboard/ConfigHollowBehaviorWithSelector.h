#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::HollowChessboard { class IConfigHollowChessboardBehavior; }
namespace MoleMole::HollowChessboard { class IConfigHollowEntityBehaviorSelection; }

#define MOLEMOLE_HOLLOWCHESSBOARD_CONFIGHOLLOWBEHAVIORWITHSELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0xD80E840)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int ConfigHollowBehaviorWithSelector_TypeDefinitionIndex = 58697;

	class ConfigHollowBehaviorWithSelector : public ::System::Object
	{
	public:
		::MoleMole::HollowChessboard::IConfigHollowChessboardBehavior* ConfigBehavior; // 0x10
		::MoleMole::HollowChessboard::IConfigHollowEntityBehaviorSelection* ConfigSelection; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CONFIGHOLLOWBEHAVIORWITHSELECTOR__CTOR_OFFSET))(this);
		}
	};
}
