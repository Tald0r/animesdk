#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_340DE32BA097F66C.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatShowUIConfig.h"

class Class_2_1737D2629B3D075C;
namespace MoleMole::GalGame { class MainCityChatShowUIConfig_OnCloseWithIndex; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWRANKLISTCONFIG_GET_UICTRL_OFFSET UNITYSDK_OFFSET(0xA392720)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWRANKLISTCONFIG_ONOPEN_OFFSET UNITYSDK_OFFSET(0xA392730)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWRANKLISTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xA3929A0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatShowRankListConfig_TypeDefinitionIndex = 57278;

	class MainCityChatShowRankListConfig : public ::MoleMole::GalGame::MainCityChatShowUIConfig
	{
	public:
		::System::Int32 ConfigId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWRANKLISTCONFIG__CTOR_OFFSET))(this);
		}

		::Enum_3_340DE32BA097F66C get_UICtrl()
		{
			return ((::Enum_3_340DE32BA097F66C(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWRANKLISTCONFIG_GET_UICTRL_OFFSET))(this);
		}

		::System::Void OnOpen(::Class_2_1737D2629B3D075C* node, ::MoleMole::GalGame::MainCityChatShowUIConfig_OnCloseWithIndex* onClose)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_1737D2629B3D075C*, ::MoleMole::GalGame::MainCityChatShowUIConfig_OnCloseWithIndex*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWRANKLISTCONFIG_ONOPEN_OFFSET))(this, node, onClose);
		}
	};
}
