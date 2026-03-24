#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class Class_0_16E4307DCC419505_148;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RETARGETTOATTACHPOINT_EXECUTE_OFFSET UNITYSDK_OFFSET(0xF2D73A0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RETARGETTOATTACHPOINT_ISMATCH_OFFSET UNITYSDK_OFFSET(0xF2D8A50)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RETARGETTOATTACHPOINT_RELOAD_OFFSET UNITYSDK_OFFSET(0xF2D7080)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RETARGETTOATTACHPOINT_WALK_OFFSET UNITYSDK_OFFSET(0xF2D8B10)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RETARGETTOATTACHPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0xF2D8C50)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RETARGETTOATTACHPOINT___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0xF2D8C60)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RETARGETTOATTACHPOINT___BASE_WALK_OFFSET UNITYSDK_OFFSET(0xF2D8C70)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_RetargetToAttachPoint_TypeDefinitionIndex = 46775;

	class ConfigSoundAction_RetargetToAttachPoint : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::System::String* attachPointName; // 0x20
		::MoleMole::Config::ConfigSoundActionGeneral* action; // 0x28
		::System::Boolean preferOld; // 0x30
		::System::Boolean isStatic; // 0x31
		::System::Boolean useGlobal; // 0x32
		::System::UInt32 configHash; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RETARGETTOATTACHPOINT__CTOR_OFFSET))(this);
		}

		::System::Void Reload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RETARGETTOATTACHPOINT_RELOAD_OFFSET))(this);
		}

		::System::Void Execute(::Class_0_16E4307DCC419505_148* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_148*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RETARGETTOATTACHPOINT_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RETARGETTOATTACHPOINT_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Void Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RETARGETTOATTACHPOINT_WALK_OFFSET))(this, callback);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RETARGETTOATTACHPOINT___BASE_ISMATCH_OFFSET))(this, P0);
		}

		::System::Void __base_Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RETARGETTOATTACHPOINT___BASE_WALK_OFFSET))(this, P0);
		}
	};
}
