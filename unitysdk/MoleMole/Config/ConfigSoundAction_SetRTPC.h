#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCurveInterpolation.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class Class_0_16E4307DCC419505_168;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETRTPC_EXECUTE_OFFSET UNITYSDK_OFFSET(0xCD14A40)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETRTPC_ISMATCH_OFFSET UNITYSDK_OFFSET(0xCD14E40)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETRTPC__CTOR_OFFSET UNITYSDK_OFFSET(0xCD14EE0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETRTPC___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0xCD14F00)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_SetRTPC_TypeDefinitionIndex = 58387;

	class ConfigSoundAction_SetRTPC : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::System::String* rtpcName; // 0x20
		::System::Int32 valueChangeDuration; // 0x28
		::System::Boolean setDurationOrFadeCurve; // 0x2C
		::System::Single rtpcValue; // 0x30
		::AkCurveInterpolation fadeCurve; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETRTPC__CTOR_OFFSET))(this);
		}

		::System::Void Execute(::Class_0_16E4307DCC419505_168* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_168*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETRTPC_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETRTPC_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETRTPC___BASE_ISMATCH_OFFSET))(this, P0);
		}
	};
}
