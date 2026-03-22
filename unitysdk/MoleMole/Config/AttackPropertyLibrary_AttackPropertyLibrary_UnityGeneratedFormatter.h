#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AttackPropWrap; }
namespace MoleMole::Config { class AttackPropertyLibrary; }
namespace MoleMole::Config { class HitGroundWrap; }
namespace MoleMole::Config { class ShakeWrap; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_ATTACKPROPERTYLIBRARY_ATTACKPROPERTYLIBRARY_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xC33E440)
#define MOLEMOLE_CONFIG_ATTACKPROPERTYLIBRARY_ATTACKPROPERTYLIBRARY_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0xC33E450)
#define MOLEMOLE_CONFIG_ATTACKPROPERTYLIBRARY_ATTACKPROPERTYLIBRARY_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0xC33E710)
#define MOLEMOLE_CONFIG_ATTACKPROPERTYLIBRARY_ATTACKPROPERTYLIBRARY_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0xC33E920)
#define MOLEMOLE_CONFIG_ATTACKPROPERTYLIBRARY_ATTACKPROPERTYLIBRARY_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0xC33E8E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AttackPropertyLibrary_AttackPropertyLibrary_UnityGeneratedFormatter_TypeDefinitionIndex = 46177;

	class AttackPropertyLibrary_AttackPropertyLibrary_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::AttackPropertyLibrary*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::HitGroundWrap*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::HitGroundWrap*>*>**)Il2CppClass::FromTypeDefinitionIndex(AttackPropertyLibrary_AttackPropertyLibrary_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x422D0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::AttackPropWrap*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::AttackPropWrap*>*>**)Il2CppClass::FromTypeDefinitionIndex(AttackPropertyLibrary_AttackPropertyLibrary_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x422D8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ShakeWrap*>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ShakeWrap*>*>**)Il2CppClass::FromTypeDefinitionIndex(AttackPropertyLibrary_AttackPropertyLibrary_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x422E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTACKPROPERTYLIBRARY_ATTACKPROPERTYLIBRARY_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTACKPROPERTYLIBRARY_ATTACKPROPERTYLIBRARY_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTACKPROPERTYLIBRARY_ATTACKPROPERTYLIBRARY_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AttackPropertyLibrary*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AttackPropertyLibrary*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTACKPROPERTYLIBRARY_ATTACKPROPERTYLIBRARY_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::AttackPropertyLibrary*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AttackPropertyLibrary*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTACKPROPERTYLIBRARY_ATTACKPROPERTYLIBRARY_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
