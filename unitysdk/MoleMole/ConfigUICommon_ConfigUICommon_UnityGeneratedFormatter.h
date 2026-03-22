#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BubbleProgressColorType.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/Config/SpecialDamageTextType.h"
#include "unitysdk/MoleMole/ConfigSpecialDamageText.h"
#include "unitysdk/MoleMole/EUILayoutPlatform.h"
#include "unitysdk/MoleMole/I18nImageCollection.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/LanguageType.h"
#include "unitysdk/ProtoScript/HollowShopCurrencyType.h"
#include "unitysdk/ProtoScript/HollowShopType.h"
#include "unitysdk/Share/EHollowQuestType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

class BubbleProgressColor;
namespace MoleMole { class BattleEvaluteConfigs; }
namespace MoleMole { class BuddyCameraConfig; }
namespace MoleMole { class BuddyChangeDepthConfig; }
namespace MoleMole { class CardOptionConfigs; }
namespace MoleMole { class CardOptionRarityConfigs; }
namespace MoleMole { class ConfigCurveDataInfo; }
namespace MoleMole { class ConfigGeneralIconBadgeColor; }
namespace MoleMole { class ConfigUICommon; }
namespace MoleMole { class DepositoryPageTabConfigs; }
namespace MoleMole { class FeverV3MaterialParam; }
namespace MoleMole { class HollowCardCombineAnimationConfigs; }
namespace MoleMole { class HollowCardCombineConfig; }
namespace MoleMole { class InterknotPostHeightDic; }
namespace MoleMole { class ItemIconTweenConfig; }
namespace MoleMole { class ItemRarityConfigs; }
namespace MoleMole { class PropBgLevel; }
namespace MoleMole { class RoleRarityIconConfigs; }
namespace MoleMole { class UIVirtualCameraConfigs; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGUICOMMON_CONFIGUICOMMON_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x6E00E50)
#define MOLEMOLE_CONFIGUICOMMON_CONFIGUICOMMON_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x6E00E60)
#define MOLEMOLE_CONFIGUICOMMON_CONFIGUICOMMON_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x6E02C50)
#define MOLEMOLE_CONFIGUICOMMON_CONFIGUICOMMON_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x6E03D00)
#define MOLEMOLE_CONFIGUICOMMON_CONFIGUICOMMON_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x6E03CC0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICommon_ConfigUICommon_UnityGeneratedFormatter_TypeDefinitionIndex = 54997;

	class ConfigUICommon_ConfigUICommon_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigUICommon*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::ProtoScript::HollowShopType, ::Foundation::AssetPath>*>** StaticGet_CachedSerializer26()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::ProtoScript::HollowShopType, ::Foundation::AssetPath>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_ConfigUICommon_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44900);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::SpecialDamageTextType, ::System::Single>*>** StaticGet_CachedSerializer19()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::SpecialDamageTextType, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_ConfigUICommon_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44908);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::I18nImageCollection>*>** StaticGet_CachedSerializer34()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::I18nImageCollection>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_ConfigUICommon_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44910);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::CardOptionRarityConfigs*>** StaticGet_CachedSerializer7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::CardOptionRarityConfigs*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_ConfigUICommon_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44918);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ConfigGeneralIconBadgeColor*>*>** StaticGet_CachedSerializer14()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ConfigGeneralIconBadgeColor*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_ConfigUICommon_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44920);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::CardOptionConfigs*>** StaticGet_CachedSerializer6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::CardOptionConfigs*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_ConfigUICommon_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44928);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::HollowCardCombineAnimationConfigs*>** StaticGet_CachedSerializer30()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::HollowCardCombineAnimationConfigs*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_ConfigUICommon_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44930);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>** StaticGet_CachedSerializer15()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_ConfigUICommon_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44938);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::EUILayoutPlatform, ::System::Single>*>** StaticGet_CachedSerializer28()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::EUILayoutPlatform, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_ConfigUICommon_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44940);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::BattleEvaluteConfigs*>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::BattleEvaluteConfigs*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_ConfigUICommon_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44948);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::PropBgLevel*>** StaticGet_CachedSerializer10()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::PropBgLevel*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_ConfigUICommon_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44950);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::SpecialDamageTextType, ::Foundation::AssetPath>*>** StaticGet_CachedSerializer18()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::SpecialDamageTextType, ::Foundation::AssetPath>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_ConfigUICommon_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44958);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Color>*>** StaticGet_CachedSerializer8()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Color>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_ConfigUICommon_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44960);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::InterknotPostHeightDic*>** StaticGet_CachedSerializer31()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::InterknotPostHeightDic*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_ConfigUICommon_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44968);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::Foundation::AssetPath>*>** StaticGet_CachedSerializer11()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::Foundation::AssetPath>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_ConfigUICommon_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44970);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::DamageElementType, ::System::String*>*>** StaticGet_CachedSerializer17()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::DamageElementType, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_ConfigUICommon_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44978);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::UIVirtualCameraConfigs*>*>** StaticGet_CachedSerializer13()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::UIVirtualCameraConfigs*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_ConfigUICommon_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44980);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::BuddyCameraConfig*>** StaticGet_CachedSerializer22()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::BuddyCameraConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_ConfigUICommon_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44988);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::DepositoryPageTabConfigs*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::DepositoryPageTabConfigs*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_ConfigUICommon_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44990);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::HollowCardCombineConfig*>** StaticGet_CachedSerializer29()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::HollowCardCombineConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_ConfigUICommon_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44998);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::RoleRarityIconConfigs*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::RoleRarityIconConfigs*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_ConfigUICommon_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x449A0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigCurveDataInfo*>*>** StaticGet_CachedSerializer25()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigCurveDataInfo*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_ConfigUICommon_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x449A8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::MoleMole::LanguageType>*>** StaticGet_CachedSerializer33()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::MoleMole::LanguageType>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_ConfigUICommon_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x449B0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*>** StaticGet_CachedSerializer12()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_ConfigUICommon_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x449B8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::InputLogicEventType, ::System::Int32>*>** StaticGet_CachedSerializer16()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::InputLogicEventType, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_ConfigUICommon_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x449C0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::Share::EHollowQuestType, ::UnityEngine::Color>*>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::Share::EHollowQuestType, ::UnityEngine::Color>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_ConfigUICommon_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x449C8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::SpecialDamageTextType, ::MoleMole::ConfigSpecialDamageText>*>** StaticGet_CachedSerializer20()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::SpecialDamageTextType, ::MoleMole::ConfigSpecialDamageText>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_ConfigUICommon_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x449D0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::ItemRarityConfigs*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::ItemRarityConfigs*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_ConfigUICommon_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x449D8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Vector2>*>** StaticGet_CachedSerializer9()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Vector2>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_ConfigUICommon_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x449E0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::BubbleProgressColorType, ::BubbleProgressColor*>*>** StaticGet_CachedSerializer21()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::BubbleProgressColorType, ::BubbleProgressColor*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_ConfigUICommon_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x449E8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::ProtoScript::HollowShopCurrencyType, ::UnityEngine::Color>*>** StaticGet_CachedSerializer27()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::ProtoScript::HollowShopCurrencyType, ::UnityEngine::Color>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_ConfigUICommon_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x449F0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::BuddyChangeDepthConfig*>** StaticGet_CachedSerializer23()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::BuddyChangeDepthConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_ConfigUICommon_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x449F8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::FeverV3MaterialParam*>*>** StaticGet_CachedSerializer24()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::FeverV3MaterialParam*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_ConfigUICommon_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44A00);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::ItemIconTweenConfig*>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::ItemIconTweenConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_ConfigUICommon_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44A08);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>*>** StaticGet_CachedSerializer32()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_ConfigUICommon_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44A10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_CONFIGUICOMMON_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_CONFIGUICOMMON_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_CONFIGUICOMMON_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigUICommon*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigUICommon*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_CONFIGUICOMMON_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::ConfigUICommon*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUICommon*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_CONFIGUICOMMON_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
