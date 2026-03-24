#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_BigTVSwitchReason.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_ChessEffectRunContextBase.h"

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CHESSEFFECTBIGTVSWITCHRUNCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xB91A270)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_ChessEffectBigTVSwitchRunContext_TypeDefinitionIndex = 79818;

	class ConfigHollowChessboard_ChessEffectBigTVSwitchRunContext : public ::MoleMole::Config::ConfigHollowChessboard_ChessEffectRunContextBase
	{
	public:
		::MoleMole::Config::ConfigHollowChessboard_BigTVSwitchReason SwitchReason; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CHESSEFFECTBIGTVSWITCHRUNCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
