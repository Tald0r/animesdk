#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class Class_0_16E4307DCC419505_168;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_REMOVEGLOBALATTACHPOINT_EXECUTE_OFFSET UNITYSDK_OFFSET(0xE4354B0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_REMOVEGLOBALATTACHPOINT_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0xE435440)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_REMOVEGLOBALATTACHPOINT_ISMATCH_OFFSET UNITYSDK_OFFSET(0xE435AA0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_REMOVEGLOBALATTACHPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0xE435B40)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_REMOVEGLOBALATTACHPOINT___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0xE435B50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_RemoveGlobalAttachPoint_TypeDefinitionIndex = 67241;

	class ConfigSoundAction_RemoveGlobalAttachPoint : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::System::String* attachPointName; // 0x20
		::System::Boolean removeAll; // 0x28
		::System::Boolean onlyRemoveSelf; // 0x29
		::System::Boolean preferOld; // 0x2A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_REMOVEGLOBALATTACHPOINT__CTOR_OFFSET))(this);
		}

		::System::String* get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_REMOVEGLOBALATTACHPOINT_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Void Execute(::Class_0_16E4307DCC419505_168* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_168*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_REMOVEGLOBALATTACHPOINT_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_REMOVEGLOBALATTACHPOINT_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_REMOVEGLOBALATTACHPOINT___BASE_ISMATCH_OFFSET))(this, P0);
		}
	};
}
