#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MatPropertySetting.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueChannelEnumType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueMaskChannelType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueSecondaryEmissionBlendMode.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueVector.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole { class ConfigMaterialPropertySecondaryEmissionModifier; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x16BB8AB0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x16BB8AC0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x16BBA240)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16BBB020)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x16BBAFE0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertySecondaryEmissionModifier_ConfigMaterialPropertySecondaryEmissionModifier_UnityGeneratedFormatter_TypeDefinitionIndex = 42689;

	class ConfigMaterialPropertySecondaryEmissionModifier_ConfigMaterialPropertySecondaryEmissionModifier_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigMaterialPropertySecondaryEmissionModifier*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>** StaticGet_CachedSerializer7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySecondaryEmissionModifier_ConfigMaterialPropertySecondaryEmissionModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x38600);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueSecondaryEmissionBlendMode>** StaticGet_CachedSerializer14()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueSecondaryEmissionBlendMode>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySecondaryEmissionModifier_ConfigMaterialPropertySecondaryEmissionModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x38608);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueTexture>** StaticGet_CachedSerializer12()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueTexture>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySecondaryEmissionModifier_ConfigMaterialPropertySecondaryEmissionModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x38610);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySecondaryEmissionModifier_ConfigMaterialPropertySecondaryEmissionModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x38618);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueColor>** StaticGet_CachedSerializer9()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueColor>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySecondaryEmissionModifier_ConfigMaterialPropertySecondaryEmissionModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x38620);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMaskChannelType>** StaticGet_CachedSerializer11()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMaskChannelType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySecondaryEmissionModifier_ConfigMaterialPropertySecondaryEmissionModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x38628);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySecondaryEmissionModifier_ConfigMaterialPropertySecondaryEmissionModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x38630);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueChannelEnumType>** StaticGet_CachedSerializer10()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueChannelEnumType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySecondaryEmissionModifier_ConfigMaterialPropertySecondaryEmissionModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x38638);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySecondaryEmissionModifier_ConfigMaterialPropertySecondaryEmissionModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x38640);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Color>** StaticGet_CachedSerializer6()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySecondaryEmissionModifier_ConfigMaterialPropertySecondaryEmissionModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x38648);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySecondaryEmissionModifier_ConfigMaterialPropertySecondaryEmissionModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x38650);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueFloat>** StaticGet_CachedSerializer8()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueFloat>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySecondaryEmissionModifier_ConfigMaterialPropertySecondaryEmissionModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x38658);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySecondaryEmissionModifier_ConfigMaterialPropertySecondaryEmissionModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x38660);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueVector>** StaticGet_CachedSerializer13()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueVector>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySecondaryEmissionModifier_ConfigMaterialPropertySecondaryEmissionModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x38668);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySecondaryEmissionModifier_ConfigMaterialPropertySecondaryEmissionModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x38670);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigMaterialPropertySecondaryEmissionModifier*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigMaterialPropertySecondaryEmissionModifier*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::ConfigMaterialPropertySecondaryEmissionModifier*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigMaterialPropertySecondaryEmissionModifier*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
