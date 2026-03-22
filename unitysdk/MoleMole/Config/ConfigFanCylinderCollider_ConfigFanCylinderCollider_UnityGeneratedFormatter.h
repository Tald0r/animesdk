#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigFanCylinderCollider; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_CONFIG_CONFIGFANCYLINDERCOLLIDER_CONFIGFANCYLINDERCOLLIDER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x6550CF0)
#define MOLEMOLE_CONFIG_CONFIGFANCYLINDERCOLLIDER_CONFIGFANCYLINDERCOLLIDER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x6550D00)
#define MOLEMOLE_CONFIG_CONFIGFANCYLINDERCOLLIDER_CONFIGFANCYLINDERCOLLIDER_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x6551270)
#define MOLEMOLE_CONFIG_CONFIGFANCYLINDERCOLLIDER_CONFIGFANCYLINDERCOLLIDER_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x65515F0)
#define MOLEMOLE_CONFIG_CONFIGFANCYLINDERCOLLIDER_CONFIGFANCYLINDERCOLLIDER_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x65515B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigFanCylinderCollider_ConfigFanCylinderCollider_UnityGeneratedFormatter_TypeDefinitionIndex = 57862;

	class ConfigFanCylinderCollider_ConfigFanCylinderCollider_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigFanCylinderCollider*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConfigFanCylinderCollider_ConfigFanCylinderCollider_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x43D90);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigFanCylinderCollider_ConfigFanCylinderCollider_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x43D98);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFANCYLINDERCOLLIDER_CONFIGFANCYLINDERCOLLIDER_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFANCYLINDERCOLLIDER_CONFIGFANCYLINDERCOLLIDER_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFANCYLINDERCOLLIDER_CONFIGFANCYLINDERCOLLIDER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigFanCylinderCollider*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigFanCylinderCollider*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFANCYLINDERCOLLIDER_CONFIGFANCYLINDERCOLLIDER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigFanCylinderCollider*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigFanCylinderCollider*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFANCYLINDERCOLLIDER_CONFIGFANCYLINDERCOLLIDER_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
