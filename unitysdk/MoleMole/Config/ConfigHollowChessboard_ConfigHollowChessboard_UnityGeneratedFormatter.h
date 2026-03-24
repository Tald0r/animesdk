#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessboardPathLink.h"
#include "unitysdk/MoleMole/Config/ChessboardTimeLineConfig.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_BubbleReasonType.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_ConfigHollowChessPieceEdge.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_PieceChangeStructType.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_TVModelData.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_TvSwitchType.h"
#include "unitysdk/MoleMole/HollowChessPieceSizeType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigAnimationCurveGroup; }
namespace MoleMole::Config { class ChessboardCoinSoundConfig; }
namespace MoleMole::Config { class ChessboardEffectConfig; }
namespace MoleMole::Config { class ChessboardFrontViewConfig; }
namespace MoleMole::Config { class ChessboardJoystickConfig; }
namespace MoleMole::Config { class ChessboardPathConfig; }
namespace MoleMole::Config { class ChessboardScreenEffectConfigV2; }
namespace MoleMole::Config { class ChessboardSwitchEffect; }
namespace MoleMole::Config { class ConfigBlockedChessPiece; }
namespace MoleMole::Config { class ConfigChessSkin; }
namespace MoleMole::Config { class ConfigChessboardFilter; }
namespace MoleMole::Config { class ConfigFinishedChessPiece; }
namespace MoleMole::Config { class ConfigFrontVideoChessPiece; }
namespace MoleMole::Config { class ConfigHollowChessboard; }
namespace MoleMole::Config { class ConfigHollowChessboard_BubbleConfig; }
namespace MoleMole::Config { class ConfigHollowChessboard_ItemCollectConfigData; }
namespace MoleMole::Config { class ConfigHollowChessboard_PieceChangeStructConfigGroup; }
namespace MoleMole::Config { class ConfigHollowChessboard_RangeCurveItem; }
namespace MoleMole::Config { class ConfigHollowChessboard_TvMoveConfig; }
namespace MoleMole::Config { class ConfigHollowChessboard_TvSwitchConfig; }
namespace MoleMole::Config { class ConfigHollowChessboard_WeightedPerformingConfig; }
namespace MoleMole::Config { class HollowBigWorldConfig; }
namespace MoleMole::Config { class HollowEffectConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CONFIGHOLLOWCHESSBOARD_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x10A92340)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CONFIGHOLLOWCHESSBOARD_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x10A92350)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CONFIGHOLLOWCHESSBOARD_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x10A93D40)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CONFIGHOLLOWCHESSBOARD_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x10A94BD0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CONFIGHOLLOWCHESSBOARD_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x10A94B90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_ConfigHollowChessboard_UnityGeneratedFormatter_TypeDefinitionIndex = 79842;

	class ConfigHollowChessboard_ConfigHollowChessboard_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigHollowChessboard*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructType, ::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfigGroup*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructType, ::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfigGroup*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_ConfigHollowChessboard_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x46900);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigChessboardFilter*>*>** StaticGet_CachedSerializer25()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigChessboardFilter*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_ConfigHollowChessboard_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x46908);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ChessboardEffectConfig*>*>** StaticGet_CachedSerializer14()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ChessboardEffectConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_ConfigHollowChessboard_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x46910);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowChessboard_TvMoveConfig*>** StaticGet_CachedSerializer13()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowChessboard_TvMoveConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_ConfigHollowChessboard_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x46918);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ChessboardPathConfig*>*>** StaticGet_CachedSerializer11()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ChessboardPathConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_ConfigHollowChessboard_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x46920);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigAnimationCurveGroup*>*>** StaticGet_CachedSerializer22()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigAnimationCurveGroup*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_ConfigHollowChessboard_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x46928);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigChessSkin*>*>** StaticGet_CachedSerializer6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigChessSkin*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_ConfigHollowChessboard_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x46930);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigFinishedChessPiece*>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigFinishedChessPiece*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_ConfigHollowChessboard_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x46938);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowChessboard_BubbleConfig*>*>** StaticGet_CachedSerializer19()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowChessboard_BubbleConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_ConfigHollowChessboard_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x46940);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::HollowBigWorldConfig*>** StaticGet_CachedSerializer27()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::HollowBigWorldConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_ConfigHollowChessboard_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x46948);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::ChessboardPathLink, ::System::Int32>*>** StaticGet_CachedSerializer10()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::ChessboardPathLink, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_ConfigHollowChessboard_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x46950);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessPieceSizeType, ::System::String*>*>*>** StaticGet_CachedSerializer17()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessPieceSizeType, ::System::String*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_ConfigHollowChessboard_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x46958);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowChessboard_RangeCurveItem*>*>** StaticGet_CachedSerializer9()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowChessboard_RangeCurveItem*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_ConfigHollowChessboard_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x46960);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowChessboard_ItemCollectConfigData*>** StaticGet_CachedSerializer24()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowChessboard_ItemCollectConfigData*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_ConfigHollowChessboard_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x46968);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*>** StaticGet_CachedSerializer26()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_ConfigHollowChessboard_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x46970);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ChessboardFrontViewConfig*>** StaticGet_CachedSerializer7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ChessboardFrontViewConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_ConfigHollowChessboard_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x46978);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::ChessboardSwitchEffect*>*>*>** StaticGet_CachedSerializer8()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::ChessboardSwitchEffect*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_ConfigHollowChessboard_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x46980);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigHollowChessboard_WeightedPerformingConfig*>*>** StaticGet_CachedSerializer23()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigHollowChessboard_WeightedPerformingConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_ConfigHollowChessboard_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x46988);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::HollowEffectConfig*>*>** StaticGet_CachedSerializer28()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::HollowEffectConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_ConfigHollowChessboard_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x46990);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigBlockedChessPiece*>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigBlockedChessPiece*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_ConfigHollowChessboard_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x46998);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*>** StaticGet_CachedSerializer18()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_ConfigHollowChessboard_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x469A0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessPieceSizeType, ::MoleMole::Config::ConfigHollowChessboard_TVModelData>*>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessPieceSizeType, ::MoleMole::Config::ConfigHollowChessboard_TVModelData>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_ConfigHollowChessboard_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x469A8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ConfigHollowChessboard_BubbleReasonType, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowChessboard_BubbleConfig*>*>*>** StaticGet_CachedSerializer20()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ConfigHollowChessboard_BubbleReasonType, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowChessboard_BubbleConfig*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_ConfigHollowChessboard_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x469B0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ConfigHollowChessboard_TvSwitchType, ::MoleMole::Config::ConfigHollowChessboard_TvSwitchConfig*>*>** StaticGet_CachedSerializer12()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ConfigHollowChessboard_TvSwitchType, ::MoleMole::Config::ConfigHollowChessboard_TvSwitchConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_ConfigHollowChessboard_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x469B8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ChessboardCoinSoundConfig*>** StaticGet_CachedSerializer15()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ChessboardCoinSoundConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_ConfigHollowChessboard_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x469C0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigFrontVideoChessPiece*>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigFrontVideoChessPiece*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_ConfigHollowChessboard_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x469C8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ChessboardTimeLineConfig>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ChessboardTimeLineConfig>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_ConfigHollowChessboard_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x469D0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ChessboardScreenEffectConfigV2*>** StaticGet_CachedSerializer16()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ChessboardScreenEffectConfigV2*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_ConfigHollowChessboard_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x469D8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessPieceSizeType, ::MoleMole::Config::ConfigHollowChessboard_ConfigHollowChessPieceEdge>*>** StaticGet_CachedSerializer21()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessPieceSizeType, ::MoleMole::Config::ConfigHollowChessboard_ConfigHollowChessPieceEdge>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_ConfigHollowChessboard_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x469E0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ChessboardJoystickConfig*>** StaticGet_CachedSerializer29()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ChessboardJoystickConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_ConfigHollowChessboard_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x469E8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CONFIGHOLLOWCHESSBOARD_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CONFIGHOLLOWCHESSBOARD_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CONFIGHOLLOWCHESSBOARD_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigHollowChessboard*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CONFIGHOLLOWCHESSBOARD_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigHollowChessboard*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CONFIGHOLLOWCHESSBOARD_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
