#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigStairVelocityModifier; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_CONFIGSTAIRVELOCITYMODIFIER_CONFIGSTAIRVELOCITYMODIFIER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xE82E280)
#define MOLEMOLE_CONFIGSTAIRVELOCITYMODIFIER_CONFIGSTAIRVELOCITYMODIFIER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0xE82E290)
#define MOLEMOLE_CONFIGSTAIRVELOCITYMODIFIER_CONFIGSTAIRVELOCITYMODIFIER_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0xE82E3E0)
#define MOLEMOLE_CONFIGSTAIRVELOCITYMODIFIER_CONFIGSTAIRVELOCITYMODIFIER_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0xE82E540)
#define MOLEMOLE_CONFIGSTAIRVELOCITYMODIFIER_CONFIGSTAIRVELOCITYMODIFIER_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0xE82E500)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigStairVelocityModifier_ConfigStairVelocityModifier_UnityGeneratedFormatter_TypeDefinitionIndex = 61443;

	class ConfigStairVelocityModifier_ConfigStairVelocityModifier_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigStairVelocityModifier*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigStairVelocityModifier_ConfigStairVelocityModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x414A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGSTAIRVELOCITYMODIFIER_CONFIGSTAIRVELOCITYMODIFIER_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGSTAIRVELOCITYMODIFIER_CONFIGSTAIRVELOCITYMODIFIER_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGSTAIRVELOCITYMODIFIER_CONFIGSTAIRVELOCITYMODIFIER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigStairVelocityModifier*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigStairVelocityModifier*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGSTAIRVELOCITYMODIFIER_CONFIGSTAIRVELOCITYMODIFIER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::ConfigStairVelocityModifier*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigStairVelocityModifier*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGSTAIRVELOCITYMODIFIER_CONFIGSTAIRVELOCITYMODIFIER_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
