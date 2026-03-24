#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MatPropertySetting.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueVector.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigMaterialPropertySpecialWeaponEmissionModifier; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIGMATERIALPROPERTYSPECIALWEAPONEMISSIONMODIFIER_CONFIGMATERIALPROPERTYSPECIALWEAPONEMISSIONMODIFIER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xD7D9280)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSPECIALWEAPONEMISSIONMODIFIER_CONFIGMATERIALPROPERTYSPECIALWEAPONEMISSIONMODIFIER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0xD7D9290)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSPECIALWEAPONEMISSIONMODIFIER_CONFIGMATERIALPROPERTYSPECIALWEAPONEMISSIONMODIFIER_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0xD7DA530)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSPECIALWEAPONEMISSIONMODIFIER_CONFIGMATERIALPROPERTYSPECIALWEAPONEMISSIONMODIFIER_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0xD7DB050)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSPECIALWEAPONEMISSIONMODIFIER_CONFIGMATERIALPROPERTYSPECIALWEAPONEMISSIONMODIFIER_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0xD7DB010)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertySpecialWeaponEmissionModifier_ConfigMaterialPropertySpecialWeaponEmissionModifier_UnityGeneratedFormatter_TypeDefinitionIndex = 77170;

	class ConfigMaterialPropertySpecialWeaponEmissionModifier_ConfigMaterialPropertySpecialWeaponEmissionModifier_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigMaterialPropertySpecialWeaponEmissionModifier*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>** StaticGet_CachedSerializer6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySpecialWeaponEmissionModifier_ConfigMaterialPropertySpecialWeaponEmissionModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x402B0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySpecialWeaponEmissionModifier_ConfigMaterialPropertySpecialWeaponEmissionModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x402B8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySpecialWeaponEmissionModifier_ConfigMaterialPropertySpecialWeaponEmissionModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x402C0);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySpecialWeaponEmissionModifier_ConfigMaterialPropertySpecialWeaponEmissionModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x402C8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySpecialWeaponEmissionModifier_ConfigMaterialPropertySpecialWeaponEmissionModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x402D0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueColor>** StaticGet_CachedSerializer8()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueColor>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySpecialWeaponEmissionModifier_ConfigMaterialPropertySpecialWeaponEmissionModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x402D8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueVector>** StaticGet_CachedSerializer9()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueVector>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySpecialWeaponEmissionModifier_ConfigMaterialPropertySpecialWeaponEmissionModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x402E0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueTexture>** StaticGet_CachedSerializer7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueTexture>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySpecialWeaponEmissionModifier_ConfigMaterialPropertySpecialWeaponEmissionModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x402E8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySpecialWeaponEmissionModifier_ConfigMaterialPropertySpecialWeaponEmissionModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x402F0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySpecialWeaponEmissionModifier_ConfigMaterialPropertySpecialWeaponEmissionModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x402F8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSPECIALWEAPONEMISSIONMODIFIER_CONFIGMATERIALPROPERTYSPECIALWEAPONEMISSIONMODIFIER_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSPECIALWEAPONEMISSIONMODIFIER_CONFIGMATERIALPROPERTYSPECIALWEAPONEMISSIONMODIFIER_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSPECIALWEAPONEMISSIONMODIFIER_CONFIGMATERIALPROPERTYSPECIALWEAPONEMISSIONMODIFIER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigMaterialPropertySpecialWeaponEmissionModifier*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigMaterialPropertySpecialWeaponEmissionModifier*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSPECIALWEAPONEMISSIONMODIFIER_CONFIGMATERIALPROPERTYSPECIALWEAPONEMISSIONMODIFIER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::ConfigMaterialPropertySpecialWeaponEmissionModifier*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigMaterialPropertySpecialWeaponEmissionModifier*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSPECIALWEAPONEMISSIONMODIFIER_CONFIGMATERIALPROPERTYSPECIALWEAPONEMISSIONMODIFIER_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
