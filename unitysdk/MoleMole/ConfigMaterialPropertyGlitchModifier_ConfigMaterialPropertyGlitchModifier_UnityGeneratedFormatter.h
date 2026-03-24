#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MatPropertySetting.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigMaterialPropertyGlitchModifier; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_CONFIGMATERIALPROPERTYGLITCHMODIFIER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xB0A8BD0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_CONFIGMATERIALPROPERTYGLITCHMODIFIER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0xB0A8BE0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_CONFIGMATERIALPROPERTYGLITCHMODIFIER_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0xB0A9CF0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_CONFIGMATERIALPROPERTYGLITCHMODIFIER_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0xB0AA710)
#define MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_CONFIGMATERIALPROPERTYGLITCHMODIFIER_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0xB0AA6D0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyGlitchModifier_ConfigMaterialPropertyGlitchModifier_UnityGeneratedFormatter_TypeDefinitionIndex = 61683;

	class ConfigMaterialPropertyGlitchModifier_ConfigMaterialPropertyGlitchModifier_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigMaterialPropertyGlitchModifier*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyGlitchModifier_ConfigMaterialPropertyGlitchModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x2DC50);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>** StaticGet_CachedSerializer6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyGlitchModifier_ConfigMaterialPropertyGlitchModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x2DC58);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueColor>** StaticGet_CachedSerializer8()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueColor>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyGlitchModifier_ConfigMaterialPropertyGlitchModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x2DC60);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyGlitchModifier_ConfigMaterialPropertyGlitchModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x2DC68);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyGlitchModifier_ConfigMaterialPropertyGlitchModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x2DC70);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyGlitchModifier_ConfigMaterialPropertyGlitchModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x2DC78);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyGlitchModifier_ConfigMaterialPropertyGlitchModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x2DC80);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyGlitchModifier_ConfigMaterialPropertyGlitchModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x2DC88);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueTexture>** StaticGet_CachedSerializer7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueTexture>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyGlitchModifier_ConfigMaterialPropertyGlitchModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x2DC90);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_CONFIGMATERIALPROPERTYGLITCHMODIFIER_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_CONFIGMATERIALPROPERTYGLITCHMODIFIER_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_CONFIGMATERIALPROPERTYGLITCHMODIFIER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigMaterialPropertyGlitchModifier*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyGlitchModifier*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_CONFIGMATERIALPROPERTYGLITCHMODIFIER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::ConfigMaterialPropertyGlitchModifier*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyGlitchModifier*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_CONFIGMATERIALPROPERTYGLITCHMODIFIER_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
