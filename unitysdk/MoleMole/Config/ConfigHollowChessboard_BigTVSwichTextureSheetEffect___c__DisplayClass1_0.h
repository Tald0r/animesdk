#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_5_0B648F1F8F6AC84A;
namespace MoleMole::Config { class ConfigHollowChessboard_BigTVSwichTextureSheetEffect; }
namespace MoleMole::Config { class ConfigHollowChessboard_ChessEffectBase; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVSWICHTEXTURESHEETEFFECT___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0xEC41CB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_BigTVSwichTextureSheetEffect___c__DisplayClass1_0_TypeDefinitionIndex = 79806;

	class ConfigHollowChessboard_BigTVSwichTextureSheetEffect___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::Class_5_0B648F1F8F6AC84A* chessPiece; // 0x10
		::System::Action_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*>* endCallback; // 0x18
		::MoleMole::Config::ConfigHollowChessboard_BigTVSwichTextureSheetEffect* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVSWICHTEXTURESHEETEFFECT___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}
	};
}
