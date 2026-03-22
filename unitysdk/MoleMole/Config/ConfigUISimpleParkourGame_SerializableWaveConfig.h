#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B9D6E7E76075C6E2_1;
namespace MoleMole::Config { class ConfigUISimpleParkourGame_SerializableNodeConfig; }
namespace MoleMole::Config { class ConfigUISimpleParkourGame_SimpleParkourGlobalConfig; }
namespace MoleMole::Config { class ConfigUISimpleParkourGame_SimpleParkourLevelConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEWAVECONFIG_ADDDODGENODE_OFFSET UNITYSDK_OFFSET(0x139A4A20)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEWAVECONFIG_ADDHOLDNODE_OFFSET UNITYSDK_OFFSET(0x139A4AF0)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEWAVECONFIG_ADDTAPNODE_OFFSET UNITYSDK_OFFSET(0x139A4950)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEWAVECONFIG_ADDTOUCHNODE_OFFSET UNITYSDK_OFFSET(0x139A4BC0)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEWAVECONFIG_GETWAVEDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x139A4E40)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEWAVECONFIG_TOWAVECONFIG_OFFSET UNITYSDK_OFFSET(0x139A4C90)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEWAVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x139A5010)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUISimpleParkourGame_SerializableWaveConfig_TypeDefinitionIndex = 57776;

	class ConfigUISimpleParkourGame_SerializableWaveConfig : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigUISimpleParkourGame_SimpleParkourLevelConfig* parentLevelConfig; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigUISimpleParkourGame_SerializableNodeConfig*>* Nodes; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEWAVECONFIG__CTOR_OFFSET))(this);
		}

		::System::Void AddTapNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEWAVECONFIG_ADDTAPNODE_OFFSET))(this);
		}

		::System::Void AddDodgeNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEWAVECONFIG_ADDDODGENODE_OFFSET))(this);
		}

		::System::Void AddHoldNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEWAVECONFIG_ADDHOLDNODE_OFFSET))(this);
		}

		::System::Void AddTouchNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEWAVECONFIG_ADDTOUCHNODE_OFFSET))(this);
		}

		::Class_1_B9D6E7E76075C6E2_1* ToWaveConfig(::MoleMole::Config::ConfigUISimpleParkourGame_SimpleParkourGlobalConfig* globalConfig)
		{
			return ((::Class_1_B9D6E7E76075C6E2_1*(*)(::PVOID, ::MoleMole::Config::ConfigUISimpleParkourGame_SimpleParkourGlobalConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEWAVECONFIG_TOWAVECONFIG_OFFSET))(this, globalConfig);
		}

		::System::String* GetWaveDisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEWAVECONFIG_GETWAVEDISPLAYNAME_OFFSET))(this);
		}
	};
}
