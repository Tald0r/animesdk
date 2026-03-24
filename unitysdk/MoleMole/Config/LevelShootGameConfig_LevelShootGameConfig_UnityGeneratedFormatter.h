#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class LevelShootGameConfig; }
namespace MoleMole::Config { class LevelShootGameConfig_MonsterWave; }
namespace MoleMole::Config { class LevelShootGameConfig_MonsterWaveGroup; }
namespace MoleMole::Config { class LevelShootGameConfig_WaveParam; }
namespace MoleMole::Config { class LevelShootGameConfig_WayPathConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_LEVELSHOOTGAMECONFIG_LEVELSHOOTGAMECONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xB0A2AF0)
#define MOLEMOLE_CONFIG_LEVELSHOOTGAMECONFIG_LEVELSHOOTGAMECONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0xB0A2B00)
#define MOLEMOLE_CONFIG_LEVELSHOOTGAMECONFIG_LEVELSHOOTGAMECONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0xB0A2F20)
#define MOLEMOLE_CONFIG_LEVELSHOOTGAMECONFIG_LEVELSHOOTGAMECONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0xB0A31E0)
#define MOLEMOLE_CONFIG_LEVELSHOOTGAMECONFIG_LEVELSHOOTGAMECONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0xB0A31A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int LevelShootGameConfig_LevelShootGameConfig_UnityGeneratedFormatter_TypeDefinitionIndex = 51425;

	class LevelShootGameConfig_LevelShootGameConfig_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::LevelShootGameConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::LevelShootGameConfig_WayPathConfig*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::LevelShootGameConfig_WayPathConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelShootGameConfig_LevelShootGameConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x2DB70);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelShootGameConfig_LevelShootGameConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x2DB78);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::LevelShootGameConfig_MonsterWaveGroup*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::LevelShootGameConfig_MonsterWaveGroup*>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelShootGameConfig_LevelShootGameConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x2DB80);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Config::LevelShootGameConfig_WaveParam*>*>*>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Config::LevelShootGameConfig_WaveParam*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelShootGameConfig_LevelShootGameConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x2DB88);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::LevelShootGameConfig_MonsterWave*>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::LevelShootGameConfig_MonsterWave*>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelShootGameConfig_LevelShootGameConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x2DB90);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LEVELSHOOTGAMECONFIG_LEVELSHOOTGAMECONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LEVELSHOOTGAMECONFIG_LEVELSHOOTGAMECONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LEVELSHOOTGAMECONFIG_LEVELSHOOTGAMECONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::LevelShootGameConfig*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::LevelShootGameConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LEVELSHOOTGAMECONFIG_LEVELSHOOTGAMECONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::LevelShootGameConfig*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::LevelShootGameConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LEVELSHOOTGAMECONFIG_LEVELSHOOTGAMECONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
