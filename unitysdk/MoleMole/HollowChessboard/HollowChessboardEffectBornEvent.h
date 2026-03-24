#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardEffectEventBase.h"

#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDEFFECTBORNEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xD0E5A40)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int HollowChessboardEffectBornEvent_TypeDefinitionIndex = 60526;

	class HollowChessboardEffectBornEvent : public ::MoleMole::HollowChessboard::HollowChessboardEffectEventBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDEFFECTBORNEVENT__CTOR_OFFSET))(this);
		}
	};
}
