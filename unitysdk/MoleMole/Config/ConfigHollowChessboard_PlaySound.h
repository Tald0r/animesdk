#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_ChessEffectBase.h"

class Class_1_8CE3173023BA2453;
class Class_5_0B648F1F8F6AC84A;
namespace MoleMole::Config { class ConfigHollowChessboard_ChessEffectRunContextBase; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_PLAYSOUND_GET_TOTALDURATION_OFFSET UNITYSDK_OFFSET(0xB099790)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_PLAYSOUND_RUN_OFFSET UNITYSDK_OFFSET(0xB099690)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_PLAYSOUND__CTOR_OFFSET UNITYSDK_OFFSET(0xB0997A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_PlaySound_TypeDefinitionIndex = 79824;

	class ConfigHollowChessboard_PlaySound : public ::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase
	{
	public:
		::System::Int32 key; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_PLAYSOUND__CTOR_OFFSET))(this);
		}

		::System::Void Run(::Class_5_0B648F1F8F6AC84A* chessPiece, ::System::Action_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*>* endCallback, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectRunContextBase* context, ::Class_1_8CE3173023BA2453* timeScale)
		{
			return ((::System::Void(*)(::PVOID, ::Class_5_0B648F1F8F6AC84A*, ::System::Action_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*>*, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectRunContextBase*, ::Class_1_8CE3173023BA2453*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_PLAYSOUND_RUN_OFFSET))(this, chessPiece, endCallback, context, timeScale);
		}

		::System::Single get_totalDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_PLAYSOUND_GET_TOTALDURATION_OFFSET))(this);
		}
	};
}
