#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionTriggerCondition_ObjectRTPC_RtpccompareOp.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSoundActionTriggerCondition_ObjectRTPC; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_OBJECTRTPC_CONFIGSOUNDACTIONTRIGGERCONDITION_OBJECTRTPC_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xACC9090)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_OBJECTRTPC_CONFIGSOUNDACTIONTRIGGERCONDITION_OBJECTRTPC_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0xACC90A0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_OBJECTRTPC_CONFIGSOUNDACTIONTRIGGERCONDITION_OBJECTRTPC_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0xACC9410)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_OBJECTRTPC_CONFIGSOUNDACTIONTRIGGERCONDITION_OBJECTRTPC_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0xACC9680)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_OBJECTRTPC_CONFIGSOUNDACTIONTRIGGERCONDITION_OBJECTRTPC_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0xACC9640)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundActionTriggerCondition_ObjectRTPC_ConfigSoundActionTriggerCondition_ObjectRTPC_UnityGeneratedFormatter_TypeDefinitionIndex = 41960;

	class ConfigSoundActionTriggerCondition_ObjectRTPC_ConfigSoundActionTriggerCondition_ObjectRTPC_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigSoundActionTriggerCondition_ObjectRTPC*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundActionTriggerCondition_ObjectRTPC_ConfigSoundActionTriggerCondition_ObjectRTPC_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x39080);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionTriggerCondition_ObjectRTPC_RtpccompareOp>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionTriggerCondition_ObjectRTPC_RtpccompareOp>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundActionTriggerCondition_ObjectRTPC_ConfigSoundActionTriggerCondition_ObjectRTPC_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x39088);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundActionTriggerCondition_ObjectRTPC_ConfigSoundActionTriggerCondition_ObjectRTPC_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x39090);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundActionTriggerCondition_ObjectRTPC_ConfigSoundActionTriggerCondition_ObjectRTPC_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x39098);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_OBJECTRTPC_CONFIGSOUNDACTIONTRIGGERCONDITION_OBJECTRTPC_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_OBJECTRTPC_CONFIGSOUNDACTIONTRIGGERCONDITION_OBJECTRTPC_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_OBJECTRTPC_CONFIGSOUNDACTIONTRIGGERCONDITION_OBJECTRTPC_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSoundActionTriggerCondition_ObjectRTPC*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSoundActionTriggerCondition_ObjectRTPC*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_OBJECTRTPC_CONFIGSOUNDACTIONTRIGGERCONDITION_OBJECTRTPC_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigSoundActionTriggerCondition_ObjectRTPC*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSoundActionTriggerCondition_ObjectRTPC*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_OBJECTRTPC_CONFIGSOUNDACTIONTRIGGERCONDITION_OBJECTRTPC_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
