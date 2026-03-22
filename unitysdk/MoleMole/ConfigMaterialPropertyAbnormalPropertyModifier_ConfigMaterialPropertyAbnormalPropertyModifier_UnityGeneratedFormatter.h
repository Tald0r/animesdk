#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MatPropertySetting.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueAbnormalPropertyType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueMaskChannelType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueVector.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole { class ConfigMaterialPropertyAbnormalPropertyModifier; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x9716430)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x9716440)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x9718420)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x97196D0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x9719690)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyAbnormalPropertyModifier_ConfigMaterialPropertyAbnormalPropertyModifier_UnityGeneratedFormatter_TypeDefinitionIndex = 62572;

	class ConfigMaterialPropertyAbnormalPropertyModifier_ConfigMaterialPropertyAbnormalPropertyModifier_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigMaterialPropertyAbnormalPropertyModifier*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMaskChannelType>** StaticGet_CachedSerializer13()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMaskChannelType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyAbnormalPropertyModifier_ConfigMaterialPropertyAbnormalPropertyModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x2C510);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueColor>** StaticGet_CachedSerializer10()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueColor>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyAbnormalPropertyModifier_ConfigMaterialPropertyAbnormalPropertyModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x2C518);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyAbnormalPropertyModifier_ConfigMaterialPropertyAbnormalPropertyModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x2C520);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Color>** StaticGet_CachedSerializer6()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyAbnormalPropertyModifier_ConfigMaterialPropertyAbnormalPropertyModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x2C528);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyAbnormalPropertyModifier_ConfigMaterialPropertyAbnormalPropertyModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x2C530);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyAbnormalPropertyModifier_ConfigMaterialPropertyAbnormalPropertyModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x2C538);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyAbnormalPropertyModifier_ConfigMaterialPropertyAbnormalPropertyModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x2C540);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueAbnormalPropertyType>** StaticGet_CachedSerializer8()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueAbnormalPropertyType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyAbnormalPropertyModifier_ConfigMaterialPropertyAbnormalPropertyModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x2C548);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyAbnormalPropertyModifier_ConfigMaterialPropertyAbnormalPropertyModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x2C550);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueTexture>** StaticGet_CachedSerializer9()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueTexture>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyAbnormalPropertyModifier_ConfigMaterialPropertyAbnormalPropertyModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x2C558);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>** StaticGet_CachedSerializer7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyAbnormalPropertyModifier_ConfigMaterialPropertyAbnormalPropertyModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x2C560);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyAbnormalPropertyModifier_ConfigMaterialPropertyAbnormalPropertyModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x2C568);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueFloat>** StaticGet_CachedSerializer11()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueFloat>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyAbnormalPropertyModifier_ConfigMaterialPropertyAbnormalPropertyModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x2C570);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueVector>** StaticGet_CachedSerializer12()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueVector>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyAbnormalPropertyModifier_ConfigMaterialPropertyAbnormalPropertyModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x2C578);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigMaterialPropertyAbnormalPropertyModifier*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyAbnormalPropertyModifier*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::ConfigMaterialPropertyAbnormalPropertyModifier*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyAbnormalPropertyModifier*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
