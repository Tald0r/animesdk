#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_ChessEffectBase.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_ChessEffectBase_DurationType.h"
#include "unitysdk/MoleMole/UIHollowChessPieceParticle_AttachPointType.h"

class Class_1_8CE3173023BA2453;
class Class_5_0B648F1F8F6AC84A;
namespace MoleMole::Config { class ConfigHollowChessboard_ChessEffectRunContextBase; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CHESSPIECEEFFECT_GETSUPPORTEDDURATIONTYPE_OFFSET UNITYSDK_OFFSET(0xEC41EF0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CHESSPIECEEFFECT_GET_TOTALDURATION_OFFSET UNITYSDK_OFFSET(0xEC41EE0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CHESSPIECEEFFECT_RUN_OFFSET UNITYSDK_OFFSET(0xEC41D10)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CHESSPIECEEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xEC41F60)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CHESSPIECEEFFECT___BASE_GETSUPPORTEDDURATIONTYPE_OFFSET UNITYSDK_OFFSET(0xEC41F70)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_ChessPieceEffect_TypeDefinitionIndex = 79825;

	class ConfigHollowChessboard_ChessPieceEffect : public ::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase
	{
	public:
		::System::String* effectPath; // 0x20
		::System::String* fadeInAnimName; // 0x28
		::System::String* fadeOutAnimName; // 0x30
		::MoleMole::UIHollowChessPieceParticle_AttachPointType attachPointType; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CHESSPIECEEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void Run(::Class_5_0B648F1F8F6AC84A* chessPiece, ::System::Action_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*>* endCallback, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectRunContextBase* context, ::Class_1_8CE3173023BA2453* timeScale)
		{
			return ((::System::Void(*)(::PVOID, ::Class_5_0B648F1F8F6AC84A*, ::System::Action_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*>*, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectRunContextBase*, ::Class_1_8CE3173023BA2453*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CHESSPIECEEFFECT_RUN_OFFSET))(this, chessPiece, endCallback, context, timeScale);
		}

		::System::Single get_totalDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CHESSPIECEEFFECT_GET_TOTALDURATION_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase_DurationType>* GetSupportedDurationType()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase_DurationType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CHESSPIECEEFFECT_GETSUPPORTEDDURATIONTYPE_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase_DurationType>* __base_GetSupportedDurationType()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase_DurationType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CHESSPIECEEFFECT___BASE_GETSUPPORTEDDURATIONTYPE_OFFSET))(this);
		}
	};
}
