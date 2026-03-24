#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_BLACKMASKFADECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x9CF9080)

namespace MoleMole::Config
{
	inline static constexpr unsigned int BlackMaskFadeConfig_TypeDefinitionIndex = 56501;

	class BlackMaskFadeConfig : public ::System::Object
	{
	public:
		::System::String* fadeCurve; // 0x10
		::System::Single fadeTime; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BLACKMASKFADECONFIG__CTOR_OFFSET))(this);
		}
	};
}
