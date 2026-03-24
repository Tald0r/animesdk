#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_26A921B88D565FDB.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/Struct_2_72D718364F0A8071.h"

class Class_2_F51BBF303F6FB2C0;

#define MOLEMOLE_LEVELUPDETAILCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xA51B150)

namespace MoleMole
{
	inline static constexpr unsigned int LevelUpDetailContext_TypeDefinitionIndex = 52377;

	class LevelUpDetailContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Struct_2_72D718364F0A8071 skillViewMode; // 0x28
		::Class_2_F51BBF303F6FB2C0* battleBuddyData; // 0x38
		::Enum_3_26A921B88D565FDB levelUpType; // 0x40
		::System::UInt32 weaponUid; // 0x44
		::System::Int32 avatarId; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELUPDETAILCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
