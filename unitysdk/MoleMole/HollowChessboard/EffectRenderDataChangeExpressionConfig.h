#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_290;

#define MOLEMOLE_HOLLOWCHESSBOARD_EFFECTRENDERDATACHANGEEXPRESSIONCONFIG_CREATEEFFECTEXPRESSIONCONFIG_OFFSET UNITYSDK_OFFSET(0xA028A40)
#define MOLEMOLE_HOLLOWCHESSBOARD_EFFECTRENDERDATACHANGEEXPRESSIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xA028AD0)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int EffectRenderDataChangeExpressionConfig_TypeDefinitionIndex = 58763;

	class EffectRenderDataChangeExpressionConfig : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_EFFECTRENDERDATACHANGEEXPRESSIONCONFIG__CTOR_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_290* CreateEffectExpressionConfig()
		{
			return ((::Class_0_16E4307DCC419505_290*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_EFFECTRENDERDATACHANGEEXPRESSIONCONFIG_CREATEEFFECTEXPRESSIONCONFIG_OFFSET))(this);
		}
	};
}
