#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityAnimEventProtection.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class AnimatorBlendData; }
namespace MoleMole { class DitherConfig; }
namespace MoleMole { class QTECameraBaseInfo; }
namespace MoleMole { class QTECameraInfo; }
namespace MoleMole { class SkillCharacterScriptConfig; }
namespace MoleMole { class SkillCharacterScriptConfig_ListPatternPair; }
namespace MoleMole::Battle { class AnimatorButtonControl; }
namespace MoleMole::Config { class ConfigCounterstroke; }
namespace MoleMole::Config { class ConfigEntityAnimEvent; }
namespace MoleMole::Config { class ConfigEntityAnimEventGroup; }
namespace MoleMole::Config { class ConfigEntitySkill; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_SKILLCHARACTERSCRIPTCONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x7F255E0)
#define MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_SKILLCHARACTERSCRIPTCONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x7F255F0)
#define MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_SKILLCHARACTERSCRIPTCONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x7F26950)
#define MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_SKILLCHARACTERSCRIPTCONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x7F27460)
#define MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_SKILLCHARACTERSCRIPTCONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x7F27420)

namespace MoleMole
{
	inline static constexpr unsigned int SkillCharacterScriptConfig_SkillCharacterScriptConfig_UnityGeneratedFormatter_TypeDefinitionIndex = 61678;

	class SkillCharacterScriptConfig_SkillCharacterScriptConfig_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::SkillCharacterScriptConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCounterstroke*>*>** StaticGet_CachedSerializer7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCounterstroke*>*>**)Il2CppClass::FromTypeDefinitionIndex(SkillCharacterScriptConfig_SkillCharacterScriptConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41630);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*>** StaticGet_CachedSerializer12()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(SkillCharacterScriptConfig_SkillCharacterScriptConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41638);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::QTECameraBaseInfo*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::QTECameraBaseInfo*>**)Il2CppClass::FromTypeDefinitionIndex(SkillCharacterScriptConfig_SkillCharacterScriptConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41640);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAnimEvent*>*>** StaticGet_CachedSerializer13()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAnimEvent*>*>**)Il2CppClass::FromTypeDefinitionIndex(SkillCharacterScriptConfig_SkillCharacterScriptConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41648);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::SkillCharacterScriptConfig_ListPatternPair*>*>** StaticGet_CachedSerializer10()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::SkillCharacterScriptConfig_ListPatternPair*>*>**)Il2CppClass::FromTypeDefinitionIndex(SkillCharacterScriptConfig_SkillCharacterScriptConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41650);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigPosRot*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigPosRot*>**)Il2CppClass::FromTypeDefinitionIndex(SkillCharacterScriptConfig_SkillCharacterScriptConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41658);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigPosRot*>*>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigPosRot*>*>**)Il2CppClass::FromTypeDefinitionIndex(SkillCharacterScriptConfig_SkillCharacterScriptConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41660);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::DitherConfig*>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::DitherConfig*>**)Il2CppClass::FromTypeDefinitionIndex(SkillCharacterScriptConfig_SkillCharacterScriptConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41668);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*>** StaticGet_CachedSerializer11()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(SkillCharacterScriptConfig_SkillCharacterScriptConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41670);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityAnimEventProtection>*>** StaticGet_CachedSerializer15()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityAnimEventProtection>*>**)Il2CppClass::FromTypeDefinitionIndex(SkillCharacterScriptConfig_SkillCharacterScriptConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41678);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityAnimEventGroup*>*>** StaticGet_CachedSerializer14()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityAnimEventGroup*>*>**)Il2CppClass::FromTypeDefinitionIndex(SkillCharacterScriptConfig_SkillCharacterScriptConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41680);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Battle::AnimatorButtonControl*>*>** StaticGet_CachedSerializer9()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Battle::AnimatorButtonControl*>*>**)Il2CppClass::FromTypeDefinitionIndex(SkillCharacterScriptConfig_SkillCharacterScriptConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41688);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntitySkill*>*>** StaticGet_CachedSerializer8()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntitySkill*>*>**)Il2CppClass::FromTypeDefinitionIndex(SkillCharacterScriptConfig_SkillCharacterScriptConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41690);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::QTECameraInfo*>*>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::QTECameraInfo*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(SkillCharacterScriptConfig_SkillCharacterScriptConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41698);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::AnimatorBlendData*>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::AnimatorBlendData*>**)Il2CppClass::FromTypeDefinitionIndex(SkillCharacterScriptConfig_SkillCharacterScriptConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x416A0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::AnimatorBlendData*>*>** StaticGet_CachedSerializer6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::AnimatorBlendData*>*>**)Il2CppClass::FromTypeDefinitionIndex(SkillCharacterScriptConfig_SkillCharacterScriptConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x416A8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_SKILLCHARACTERSCRIPTCONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_SKILLCHARACTERSCRIPTCONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_SKILLCHARACTERSCRIPTCONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::SkillCharacterScriptConfig*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::SkillCharacterScriptConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_SKILLCHARACTERSCRIPTCONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::SkillCharacterScriptConfig*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::SkillCharacterScriptConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_SKILLCHARACTERSCRIPTCONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
