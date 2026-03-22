#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B90C1A15EA6E3C2B.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSYNCSERVERDATACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xE483560)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatSyncServerDataConfig_TypeDefinitionIndex = 73102;

	class MainCityChatSyncServerDataConfig : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSYNCSERVERDATACONFIG__CTOR_OFFSET))(this);
		}
	};
}
