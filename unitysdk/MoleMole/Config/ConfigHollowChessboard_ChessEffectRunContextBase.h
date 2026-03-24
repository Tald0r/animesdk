#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CHESSEFFECTRUNCONTEXTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xBAFC8F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_ChessEffectRunContextBase_TypeDefinitionIndex = 79843;

	class ConfigHollowChessboard_ChessEffectRunContextBase : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CHESSEFFECTRUNCONTEXTBASE__CTOR_OFFSET))(this);
		}
	};
}
