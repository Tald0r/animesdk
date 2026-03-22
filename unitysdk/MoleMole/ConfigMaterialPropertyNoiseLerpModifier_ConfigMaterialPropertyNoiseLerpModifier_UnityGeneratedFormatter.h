#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MatPropertySetting.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigMaterialPropertyNoiseLerpModifier; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xCD28E60)
#define MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0xCD28E70)
#define MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0xCD2A010)
#define MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0xCD2AA70)
#define MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0xCD2AA30)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyNoiseLerpModifier_ConfigMaterialPropertyNoiseLerpModifier_UnityGeneratedFormatter_TypeDefinitionIndex = 64532;

	class ConfigMaterialPropertyNoiseLerpModifier_ConfigMaterialPropertyNoiseLerpModifier_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigMaterialPropertyNoiseLerpModifier*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueColor>** StaticGet_CachedSerializer8()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueColor>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyNoiseLerpModifier_ConfigMaterialPropertyNoiseLerpModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x2F930);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyNoiseLerpModifier_ConfigMaterialPropertyNoiseLerpModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x2F938);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueFloat>** StaticGet_CachedSerializer9()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueFloat>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyNoiseLerpModifier_ConfigMaterialPropertyNoiseLerpModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x2F940);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyNoiseLerpModifier_ConfigMaterialPropertyNoiseLerpModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x2F948);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyNoiseLerpModifier_ConfigMaterialPropertyNoiseLerpModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x2F950);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyNoiseLerpModifier_ConfigMaterialPropertyNoiseLerpModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x2F958);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>** StaticGet_CachedSerializer6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyNoiseLerpModifier_ConfigMaterialPropertyNoiseLerpModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x2F960);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyNoiseLerpModifier_ConfigMaterialPropertyNoiseLerpModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x2F968);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueTexture>** StaticGet_CachedSerializer7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueTexture>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyNoiseLerpModifier_ConfigMaterialPropertyNoiseLerpModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x2F970);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyNoiseLerpModifier_ConfigMaterialPropertyNoiseLerpModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x2F978);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigMaterialPropertyNoiseLerpModifier*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyNoiseLerpModifier*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::ConfigMaterialPropertyNoiseLerpModifier*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyNoiseLerpModifier*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
