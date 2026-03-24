#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/DebugColor.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneHitWallEffect_NormalMethod.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneHitWallEffect_RayAxis.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneHitWallEffect_RayMethod.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneHitWallEffect_ScratchPreferMethod.h"
#include "unitysdk/MoleMole/Config/Vector3Range.h"
#include "unitysdk/MoleMole/WeaponDamageDecalType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class ScratchConfigObject; }
namespace MoleMole::Config { class EffectTimeSegmentConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT_SCRATCHCONFIGOBJECT_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x84E7DF0)
#define MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT_SCRATCHCONFIGOBJECT_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x84E7E00)
#define MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT_SCRATCHCONFIGOBJECT_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x84E8D10)
#define MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT_SCRATCHCONFIGOBJECT_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x84E9610)
#define MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT_SCRATCHCONFIGOBJECT_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x84E95D0)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int ScratchConfigObject_ScratchConfigObject_UnityGeneratedFormatter_TypeDefinitionIndex = 47912;

	class ScratchConfigObject_ScratchConfigObject_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Battle::ScratchConfigObject*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorZoneHitWallEffect_RayAxis>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorZoneHitWallEffect_RayAxis>**)Il2CppClass::FromTypeDefinitionIndex(ScratchConfigObject_ScratchConfigObject_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x43CB0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::WeaponDamageDecalType>** StaticGet_CachedSerializer10()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::WeaponDamageDecalType>**)Il2CppClass::FromTypeDefinitionIndex(ScratchConfigObject_ScratchConfigObject_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x43CB8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::String*>*>** StaticGet_CachedSerializer11()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ScratchConfigObject_ScratchConfigObject_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x43CC0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer9()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ScratchConfigObject_ScratchConfigObject_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x43CC8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::EffectTimeSegmentConfig*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::EffectTimeSegmentConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ScratchConfigObject_ScratchConfigObject_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x43CD0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorZoneHitWallEffect_RayMethod>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorZoneHitWallEffect_RayMethod>**)Il2CppClass::FromTypeDefinitionIndex(ScratchConfigObject_ScratchConfigObject_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x43CD8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer8()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ScratchConfigObject_ScratchConfigObject_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x43CE0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::Vector3Range>** StaticGet_CachedSerializer12()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::Vector3Range>**)Il2CppClass::FromTypeDefinitionIndex(ScratchConfigObject_ScratchConfigObject_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x43CE8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::DebugColor>** StaticGet_CachedSerializer13()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::DebugColor>**)Il2CppClass::FromTypeDefinitionIndex(ScratchConfigObject_ScratchConfigObject_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x43CF0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorZoneHitWallEffect_ScratchPreferMethod>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorZoneHitWallEffect_ScratchPreferMethod>**)Il2CppClass::FromTypeDefinitionIndex(ScratchConfigObject_ScratchConfigObject_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x43CF8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ScratchConfigObject_ScratchConfigObject_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x43D00);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorZoneHitWallEffect_NormalMethod>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorZoneHitWallEffect_NormalMethod>**)Il2CppClass::FromTypeDefinitionIndex(ScratchConfigObject_ScratchConfigObject_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x43D08);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector3>** StaticGet_CachedSerializer6()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(ScratchConfigObject_ScratchConfigObject_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x43D10);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ScratchConfigObject_ScratchConfigObject_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x43D18);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT_SCRATCHCONFIGOBJECT_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT_SCRATCHCONFIGOBJECT_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT_SCRATCHCONFIGOBJECT_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Battle::ScratchConfigObject*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::ScratchConfigObject*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT_SCRATCHCONFIGOBJECT_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Battle::ScratchConfigObject*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::ScratchConfigObject*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT_SCRATCHCONFIGOBJECT_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
