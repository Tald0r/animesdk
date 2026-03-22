#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigTurnBasePreviewEffect.h"

#define MOLEMOLE_CONFIG_CONFIGTURNBASEPREVIEWEFFECT_LINE__CTOR_OFFSET UNITYSDK_OFFSET(0x8A0C9F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigTurnBasePreviewEffect_Line_TypeDefinitionIndex = 76498;

	class ConfigTurnBasePreviewEffect_Line : public ::MoleMole::Config::ConfigTurnBasePreviewEffect
	{
	public:
		::System::Single Length; // 0x18
		::System::Single Width; // 0x1C
		::System::Boolean DynamicLength; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTURNBASEPREVIEWEFFECT_LINE__CTOR_OFFSET))(this);
		}
	};
}
