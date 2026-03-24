#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/LevelPointType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigPosRotReferLevelPoint; }
namespace MoleMole::Config { class DynamicString; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_CONFIGPOSROTREFERLEVELPOINT_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xE3681D0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_CONFIGPOSROTREFERLEVELPOINT_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0xE3681E0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_CONFIGPOSROTREFERLEVELPOINT_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0xE368550)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_CONFIGPOSROTREFERLEVELPOINT_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0xE3687C0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_CONFIGPOSROTREFERLEVELPOINT_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0xE368780)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPosRotReferLevelPoint_ConfigPosRotReferLevelPoint_UnityGeneratedFormatter_TypeDefinitionIndex = 57103;

	class ConfigPosRotReferLevelPoint_ConfigPosRotReferLevelPoint_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigPosRotReferLevelPoint*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::DynamicString*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::DynamicString*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigPosRotReferLevelPoint_ConfigPosRotReferLevelPoint_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x31300);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::LevelPointType>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::LevelPointType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigPosRotReferLevelPoint_ConfigPosRotReferLevelPoint_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x31308);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_CONFIGPOSROTREFERLEVELPOINT_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_CONFIGPOSROTREFERLEVELPOINT_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_CONFIGPOSROTREFERLEVELPOINT_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigPosRotReferLevelPoint*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigPosRotReferLevelPoint*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_CONFIGPOSROTREFERLEVELPOINT_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigPosRotReferLevelPoint*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigPosRotReferLevelPoint*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_CONFIGPOSROTREFERLEVELPOINT_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
