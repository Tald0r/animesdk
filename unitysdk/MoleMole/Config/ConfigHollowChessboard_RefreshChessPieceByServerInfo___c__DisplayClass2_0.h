#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_5_2169ABC757988FED;
namespace MoleMole::Config { class ConfigHollowChessboard_ChessEffectBase; }
namespace MoleMole::Config { class ConfigHollowChessboard_ChessEffectBigTVMoveRunContext; }
namespace MoleMole::Config { class ConfigHollowChessboard_RefreshChessPieceByServerInfo; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_REFRESHCHESSPIECEBYSERVERINFO___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x624E470)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_REFRESHCHESSPIECEBYSERVERINFO___C__DISPLAYCLASS2_0__RUN_B__0_OFFSET UNITYSDK_OFFSET(0x624E490)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_RefreshChessPieceByServerInfo___c__DisplayClass2_0_TypeDefinitionIndex = 59162;

	class ConfigHollowChessboard_RefreshChessPieceByServerInfo___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigHollowChessboard_RefreshChessPieceByServerInfo* __4__this; // 0x10
		::MoleMole::Config::ConfigHollowChessboard_ChessEffectBigTVMoveRunContext* TVMovecontext; // 0x18
		::Class_5_2169ABC757988FED* chessPiece; // 0x20
		::System::Action_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*>* endCallback; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_REFRESHCHESSPIECEBYSERVERINFO___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Void _Run_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_REFRESHCHESSPIECEBYSERVERINFO___C__DISPLAYCLASS2_0__RUN_B__0_OFFSET))(this);
		}
	};
}
