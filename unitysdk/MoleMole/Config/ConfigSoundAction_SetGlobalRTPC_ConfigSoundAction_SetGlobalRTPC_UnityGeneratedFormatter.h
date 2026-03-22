#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCurveInterpolation.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSoundAction_SetGlobalRTPC; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETGLOBALRTPC_CONFIGSOUNDACTION_SETGLOBALRTPC_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x139A2BC0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETGLOBALRTPC_CONFIGSOUNDACTION_SETGLOBALRTPC_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x139A2BD0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETGLOBALRTPC_CONFIGSOUNDACTION_SETGLOBALRTPC_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x139A30A0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETGLOBALRTPC_CONFIGSOUNDACTION_SETGLOBALRTPC_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x139A33C0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETGLOBALRTPC_CONFIGSOUNDACTION_SETGLOBALRTPC_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x139A3380)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_SetGlobalRTPC_ConfigSoundAction_SetGlobalRTPC_UnityGeneratedFormatter_TypeDefinitionIndex = 68109;

	class ConfigSoundAction_SetGlobalRTPC_ConfigSoundAction_SetGlobalRTPC_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigSoundAction_SetGlobalRTPC*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::AkCurveInterpolation>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::AkCurveInterpolation>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_SetGlobalRTPC_ConfigSoundAction_SetGlobalRTPC_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3A2D0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_SetGlobalRTPC_ConfigSoundAction_SetGlobalRTPC_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3A2D8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_SetGlobalRTPC_ConfigSoundAction_SetGlobalRTPC_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3A2E0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_SetGlobalRTPC_ConfigSoundAction_SetGlobalRTPC_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3A2E8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_SetGlobalRTPC_ConfigSoundAction_SetGlobalRTPC_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3A2F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETGLOBALRTPC_CONFIGSOUNDACTION_SETGLOBALRTPC_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETGLOBALRTPC_CONFIGSOUNDACTION_SETGLOBALRTPC_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETGLOBALRTPC_CONFIGSOUNDACTION_SETGLOBALRTPC_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSoundAction_SetGlobalRTPC*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_SetGlobalRTPC*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETGLOBALRTPC_CONFIGSOUNDACTION_SETGLOBALRTPC_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigSoundAction_SetGlobalRTPC*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_SetGlobalRTPC*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETGLOBALRTPC_CONFIGSOUNDACTION_SETGLOBALRTPC_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
