#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CHESSBOARDGLITCHCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xC340850)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ChessboardGlitchConfig_TypeDefinitionIndex = 42914;

	class ChessboardGlitchConfig : public ::System::Object
	{
	public:
		::System::String* EffectPrefab; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHESSBOARDGLITCHCONFIG__CTOR_OFFSET))(this);
		}
	};
}
