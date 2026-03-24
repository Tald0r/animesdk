#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class LightOverrideShowSetting; }

#define MOLEMOLE_SKINOVERRIDESHOWSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0xC32D4D0)

namespace MoleMole
{
	inline static constexpr unsigned int SkinOverrideShowSetting_TypeDefinitionIndex = 55450;

	class SkinOverrideShowSetting : public ::System::Object
	{
	public:
		::MoleMole::LightOverrideShowSetting* LightOverrideShowSetting; // 0x10
		::System::UInt32 SkinID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SKINOVERRIDESHOWSETTING__CTOR_OFFSET))(this);
		}
	};
}
