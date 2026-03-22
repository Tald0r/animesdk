#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_166;

#define MOLEMOLE_HOLLOWCHESSBOARD_EFFECTFINDTEXTURETAGSDATAEXPRESSIONCONFIG_CREATEEFFECTEXPRESSIONCONFIG_OFFSET UNITYSDK_OFFSET(0xC224D70)
#define MOLEMOLE_HOLLOWCHESSBOARD_EFFECTFINDTEXTURETAGSDATAEXPRESSIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xC224E00)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int EffectFindTextureTagsDataExpressionConfig_TypeDefinitionIndex = 77707;

	class EffectFindTextureTagsDataExpressionConfig : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_EFFECTFINDTEXTURETAGSDATAEXPRESSIONCONFIG__CTOR_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_166* CreateEffectExpressionConfig()
		{
			return ((::Class_0_16E4307DCC419505_166*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_EFFECTFINDTEXTURETAGSDATAEXPRESSIONCONFIG_CREATEEFFECTEXPRESSIONCONFIG_OFFSET))(this);
		}
	};
}
