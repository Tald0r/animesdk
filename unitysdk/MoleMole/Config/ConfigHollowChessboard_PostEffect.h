#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_ChessEffectBase.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_ChessEffectBase_DurationType.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_PostEffect_Config.h"

class Class_1_8CE3173023BA2453;
class Class_5_2169ABC757988FED;
namespace MoleMole::Config { class ConfigHollowChessboard_ChessEffectRunContextBase; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_POSTEFFECT_GETSUPPORTEDDURATIONTYPE_OFFSET UNITYSDK_OFFSET(0x15EB4270)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_POSTEFFECT_GET_TOTALDURATION_OFFSET UNITYSDK_OFFSET(0x15EB4260)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_POSTEFFECT_RUN_OFFSET UNITYSDK_OFFSET(0x15EB4090)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_POSTEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x15EB42E0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_POSTEFFECT___BASE_GETSUPPORTEDDURATIONTYPE_OFFSET UNITYSDK_OFFSET(0x15EB42F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_PostEffect_TypeDefinitionIndex = 59122;

	class ConfigHollowChessboard_PostEffect : public ::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase
	{
	public:
		::MoleMole::Config::ConfigHollowChessboard_PostEffect_Config config; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_POSTEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void Run(::Class_5_2169ABC757988FED* chessPiece, ::System::Action_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*>* endCallback, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectRunContextBase* context, ::Class_1_8CE3173023BA2453* timeScale)
		{
			return ((::System::Void(*)(::PVOID, ::Class_5_2169ABC757988FED*, ::System::Action_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*>*, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectRunContextBase*, ::Class_1_8CE3173023BA2453*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_POSTEFFECT_RUN_OFFSET))(this, chessPiece, endCallback, context, timeScale);
		}

		::System::Single get_totalDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_POSTEFFECT_GET_TOTALDURATION_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase_DurationType>* GetSupportedDurationType()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase_DurationType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_POSTEFFECT_GETSUPPORTEDDURATIONTYPE_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase_DurationType>* __base_GetSupportedDurationType()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase_DurationType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_POSTEFFECT___BASE_GETSUPPORTEDDURATIONTYPE_OFFSET))(this);
		}
	};
}
