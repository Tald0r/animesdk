#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/Config/SpecialDamageTextType.h"
#include "unitysdk/MoleMole/ConfigSpecialDamageText.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigUICommon_DamageText; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIGUICOMMON_DAMAGETEXT_CONFIGUICOMMON_DAMAGETEXT_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xCCB0AB0)
#define MOLEMOLE_CONFIGUICOMMON_DAMAGETEXT_CONFIGUICOMMON_DAMAGETEXT_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0xCCB0AC0)
#define MOLEMOLE_CONFIGUICOMMON_DAMAGETEXT_CONFIGUICOMMON_DAMAGETEXT_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0xCCB1240)
#define MOLEMOLE_CONFIGUICOMMON_DAMAGETEXT_CONFIGUICOMMON_DAMAGETEXT_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0xCCB16E0)
#define MOLEMOLE_CONFIGUICOMMON_DAMAGETEXT_CONFIGUICOMMON_DAMAGETEXT_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0xCCB16A0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICommon_DamageText_ConfigUICommon_DamageText_UnityGeneratedFormatter_TypeDefinitionIndex = 61698;

	class ConfigUICommon_DamageText_ConfigUICommon_DamageText_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigUICommon_DamageText*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::SpecialDamageTextType, ::MoleMole::ConfigSpecialDamageText>*>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::SpecialDamageTextType, ::MoleMole::ConfigSpecialDamageText>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_DamageText_ConfigUICommon_DamageText_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x36520);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::SpecialDamageTextType, ::Foundation::AssetPath>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::SpecialDamageTextType, ::Foundation::AssetPath>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_DamageText_ConfigUICommon_DamageText_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x36528);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::SpecialDamageTextType, ::System::String*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::SpecialDamageTextType, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_DamageText_ConfigUICommon_DamageText_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x36530);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::DamageElementType, ::System::String*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::DamageElementType, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_DamageText_ConfigUICommon_DamageText_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x36538);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::SpecialDamageTextType, ::System::Single>*>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::SpecialDamageTextType, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_DamageText_ConfigUICommon_DamageText_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x36540);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_DAMAGETEXT_CONFIGUICOMMON_DAMAGETEXT_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_DAMAGETEXT_CONFIGUICOMMON_DAMAGETEXT_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_DAMAGETEXT_CONFIGUICOMMON_DAMAGETEXT_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigUICommon_DamageText*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigUICommon_DamageText*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_DAMAGETEXT_CONFIGUICOMMON_DAMAGETEXT_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::ConfigUICommon_DamageText*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUICommon_DamageText*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_DAMAGETEXT_CONFIGUICOMMON_DAMAGETEXT_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
