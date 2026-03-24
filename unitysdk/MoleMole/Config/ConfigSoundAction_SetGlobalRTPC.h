#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCurveInterpolation.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class Class_0_16E4307DCC419505_148;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETGLOBALRTPC_EXECUTE_OFFSET UNITYSDK_OFFSET(0xE2CFAC0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETGLOBALRTPC_ISMATCH_OFFSET UNITYSDK_OFFSET(0xE2CFE50)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETGLOBALRTPC__CTOR_OFFSET UNITYSDK_OFFSET(0xE2CFF20)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETGLOBALRTPC___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0xE2CFF40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_SetGlobalRTPC_TypeDefinitionIndex = 51701;

	class ConfigSoundAction_SetGlobalRTPC : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::System::String* rtpcName; // 0x20
		::System::Boolean setDurationOrFadeCurve; // 0x28
		::System::Single rtpcValue; // 0x2C
		::System::Int32 valueChangeDuration; // 0x30
		::AkCurveInterpolation fadeCurve; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETGLOBALRTPC__CTOR_OFFSET))(this);
		}

		::System::Void Execute(::Class_0_16E4307DCC419505_148* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_148*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETGLOBALRTPC_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETGLOBALRTPC_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETGLOBALRTPC___BASE_ISMATCH_OFFSET))(this, P0);
		}
	};
}
