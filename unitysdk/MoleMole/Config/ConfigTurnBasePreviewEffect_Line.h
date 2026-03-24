#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigTurnBasePreviewEffect.h"

#define MOLEMOLE_CONFIG_CONFIGTURNBASEPREVIEWEFFECT_LINE__CTOR_OFFSET UNITYSDK_OFFSET(0x10AA56E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigTurnBasePreviewEffect_Line_TypeDefinitionIndex = 74037;

	class ConfigTurnBasePreviewEffect_Line : public ::MoleMole::Config::ConfigTurnBasePreviewEffect
	{
	public:
		::System::Single Width; // 0x18
		::System::Boolean DynamicLength; // 0x1C
		::System::Single Length; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTURNBASEPREVIEWEFFECT_LINE__CTOR_OFFSET))(this);
		}
	};
}
