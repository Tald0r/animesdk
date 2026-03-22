#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B90C1A15EA6E3C2B.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatShowUIConfig.h"

class Class_2_1737D2629B3D075C;
namespace MoleMole::GalGame { class MainCityChatShowUIConfig_OnCloseWithIndex; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWTRIDICEMISSIONCONFIG_GET_UICTRL_OFFSET UNITYSDK_OFFSET(0xE1073B0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWTRIDICEMISSIONCONFIG_ONOPEN_OFFSET UNITYSDK_OFFSET(0xE1073C0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWTRIDICEMISSIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xE107570)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatShowTriDiceMissionConfig_TypeDefinitionIndex = 53972;

	class MainCityChatShowTriDiceMissionConfig : public ::MoleMole::GalGame::MainCityChatShowUIConfig
	{
	public:
		::System::Int32 startNodeID; // 0x10
		::System::Int32 endNodeID; // 0x14
		::System::Int32 questID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWTRIDICEMISSIONCONFIG__CTOR_OFFSET))(this);
		}

		::Enum_3_B90C1A15EA6E3C2B get_UICtrl()
		{
			return ((::Enum_3_B90C1A15EA6E3C2B(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWTRIDICEMISSIONCONFIG_GET_UICTRL_OFFSET))(this);
		}

		::System::Void OnOpen(::Class_2_1737D2629B3D075C* node, ::MoleMole::GalGame::MainCityChatShowUIConfig_OnCloseWithIndex* onClose)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_1737D2629B3D075C*, ::MoleMole::GalGame::MainCityChatShowUIConfig_OnCloseWithIndex*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWTRIDICEMISSIONCONFIG_ONOPEN_OFFSET))(this, node, onClose);
		}
	};
}
