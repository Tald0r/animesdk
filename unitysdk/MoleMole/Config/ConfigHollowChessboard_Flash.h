#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_ChessEffectBase.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_ChessEffectBase_DurationType.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_8CE3173023BA2453;
class Class_5_2169ABC757988FED;
namespace MoleMole::Config { class ConfigHollowChessboard_ChessEffectRunContextBase; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_FLASH_GETSUPPORTEDDURATIONTYPE_OFFSET UNITYSDK_OFFSET(0xCC97B00)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_FLASH_GET_TOTALDURATION_OFFSET UNITYSDK_OFFSET(0xCC97AF0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_FLASH_RUN_OFFSET UNITYSDK_OFFSET(0xCC97910)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_FLASH__CTOR_OFFSET UNITYSDK_OFFSET(0xCC97B70)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_FLASH___BASE_GETSUPPORTEDDURATIONTYPE_OFFSET UNITYSDK_OFFSET(0xCC97C70)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_Flash_TypeDefinitionIndex = 59134;

	class ConfigHollowChessboard_Flash : public ::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase
	{
	public:
		::UnityEngine::AnimationCurve* flashCurve; // 0x20
		::UnityEngine::Vector2 startAndEnd; // 0x28
		::System::Single time; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_FLASH__CTOR_OFFSET))(this);
		}

		::System::Void Run(::Class_5_2169ABC757988FED* chessPiece, ::System::Action_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*>* endCallback, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectRunContextBase* context, ::Class_1_8CE3173023BA2453* timeScale)
		{
			return ((::System::Void(*)(::PVOID, ::Class_5_2169ABC757988FED*, ::System::Action_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*>*, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectRunContextBase*, ::Class_1_8CE3173023BA2453*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_FLASH_RUN_OFFSET))(this, chessPiece, endCallback, context, timeScale);
		}

		::System::Single get_totalDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_FLASH_GET_TOTALDURATION_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase_DurationType>* GetSupportedDurationType()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase_DurationType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_FLASH_GETSUPPORTEDDURATIONTYPE_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase_DurationType>* __base_GetSupportedDurationType()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase_DurationType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_FLASH___BASE_GETSUPPORTEDDURATIONTYPE_OFFSET))(this);
		}
	};
}
