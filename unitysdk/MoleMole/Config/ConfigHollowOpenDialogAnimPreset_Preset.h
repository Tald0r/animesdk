#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWOPENDIALOGANIMPRESET_PRESET__CTOR_OFFSET UNITYSDK_OFFSET(0x13F95170)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowOpenDialogAnimPreset_Preset_TypeDefinitionIndex = 59332;

	class ConfigHollowOpenDialogAnimPreset_Preset : public ::System::Object
	{
	public:
		::System::String* StartAnim; // 0x10
		::System::String* EndAnim; // 0x18
		::System::String* LoopAnim; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWOPENDIALOGANIMPRESET_PRESET__CTOR_OFFSET))(this);
		}
	};
}
