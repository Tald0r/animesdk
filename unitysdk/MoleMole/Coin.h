#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessEntity.h"

#define MOLEMOLE_COIN__CTOR_OFFSET UNITYSDK_OFFSET(0xB082960)

namespace MoleMole
{
	inline static constexpr unsigned int Coin_TypeDefinitionIndex = 67188;

	class Coin : public ::MoleMole::ChessEntity
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COIN__CTOR_OFFSET))(this);
		}
	};
}
