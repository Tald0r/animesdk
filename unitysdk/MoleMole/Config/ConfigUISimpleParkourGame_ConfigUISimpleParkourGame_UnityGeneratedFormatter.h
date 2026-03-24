#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigUISimpleParkourGame; }
namespace MoleMole::Config { class ConfigUISimpleParkourGame_SimpleParkourGlobalConfig; }
namespace MoleMole::Config { class ConfigUISimpleParkourGame_SimpleParkourLevelConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_CONFIGUISIMPLEPARKOURGAME_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xACCFB20)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_CONFIGUISIMPLEPARKOURGAME_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0xACCFB30)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_CONFIGUISIMPLEPARKOURGAME_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0xACCFDF0)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_CONFIGUISIMPLEPARKOURGAME_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0xACD0000)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_CONFIGUISIMPLEPARKOURGAME_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0xACCFFC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUISimpleParkourGame_ConfigUISimpleParkourGame_UnityGeneratedFormatter_TypeDefinitionIndex = 58209;

	class ConfigUISimpleParkourGame_ConfigUISimpleParkourGame_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigUISimpleParkourGame*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigUISimpleParkourGame_SimpleParkourGlobalConfig*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigUISimpleParkourGame_SimpleParkourGlobalConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUISimpleParkourGame_ConfigUISimpleParkourGame_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x390D0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigUISimpleParkourGame_SimpleParkourLevelConfig*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigUISimpleParkourGame_SimpleParkourLevelConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUISimpleParkourGame_ConfigUISimpleParkourGame_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x390D8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUISimpleParkourGame_ConfigUISimpleParkourGame_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x390E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_CONFIGUISIMPLEPARKOURGAME_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_CONFIGUISIMPLEPARKOURGAME_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_CONFIGUISIMPLEPARKOURGAME_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigUISimpleParkourGame*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigUISimpleParkourGame*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_CONFIGUISIMPLEPARKOURGAME_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigUISimpleParkourGame*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUISimpleParkourGame*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_CONFIGUISIMPLEPARKOURGAME_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
