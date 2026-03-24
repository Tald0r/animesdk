#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C219469667DBAA6A_Enum_3_554CAED038424452.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/Struct_2_433EAFD16930C7BA.h"

class Class_1_2C75E68C0ED89E97;
class Class_1_986F52381DF139E6;
class Class_2_C219469667DBAA6A_Class_1_0D917C9760BF007D;
class Class_2_C219469667DBAA6A_Class_1_E3BC8E116CD0C5B9;
class Class_3_DA02E6BABB5F027E;
namespace FlowCanvas { class FlowNode; }
namespace Foundation { class AssetPoolRunMode; }
namespace MoleMole { class InLevelAvatarDataItem; }
namespace MoleMole { class InLevelBuddyDataItem; }
namespace MoleMole { class PreloadGhostEffectConfig; }
namespace MoleMole { class PreloadLevelConfig; }
namespace MoleMole { class PreloadMonsterSummonConfig; }
namespace MoleMole { class PreloadSingleGroupConfig; }
namespace MoleMole { class PreloadSingleLevelConfig; }
namespace MoleMole { class PreloadSingleStreaminGameConfig; }
namespace MoleMole { class PreloadStreamingGameConfig; }
namespace MoleMole { class PreloadUIAssetsConfig; }
namespace MoleMole { class TeamDataItem; }
namespace NodeCanvas::Framework { class Graph; }
namespace NodeCanvas::Framework { class Node; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Diagnostics { class Stopwatch; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class ShaderVariantCollection; }

#define CLASS_2_C219469667DBAA6A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x64BD430)
#define CLASS_2_C219469667DBAA6A_METHOD_2_08AD2592D8954D44_OFFSET UNITYSDK_OFFSET(0x64CB800)
#define CLASS_2_C219469667DBAA6A_METHOD_2_09753BBB55A2BD9E_OFFSET UNITYSDK_OFFSET(0x64CCA00)
#define CLASS_2_C219469667DBAA6A_METHOD_2_0A4E825E46D7E52D_OFFSET UNITYSDK_OFFSET(0x64C5AE0)
#define CLASS_2_C219469667DBAA6A_METHOD_2_0E17D5162C02199F_OFFSET UNITYSDK_OFFSET(0x64BF9D0)
#define CLASS_2_C219469667DBAA6A_METHOD_2_0E46FFB93F6715F2_OFFSET UNITYSDK_OFFSET(0x64BF4B0)
#define CLASS_2_C219469667DBAA6A_METHOD_2_0FA8D2457860B677_OFFSET UNITYSDK_OFFSET(0x64BEA30)
#define CLASS_2_C219469667DBAA6A_METHOD_2_0FBCCD0ECB3E49FA_OFFSET UNITYSDK_OFFSET(0x64BF650)
#define CLASS_2_C219469667DBAA6A_METHOD_2_123100E0DCBCC837_OFFSET UNITYSDK_OFFSET(0x64C14F0)
#define CLASS_2_C219469667DBAA6A_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x64C9EF0)
#define CLASS_2_C219469667DBAA6A_METHOD_2_1B55A209492D8E0D_OFFSET UNITYSDK_OFFSET(0x64C4640)
#define CLASS_2_C219469667DBAA6A_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x64C7910)
#define CLASS_2_C219469667DBAA6A_METHOD_2_22C8B27D1773170D_OFFSET UNITYSDK_OFFSET(0x64C5130)
#define CLASS_2_C219469667DBAA6A_METHOD_2_2B8B70092FE5FFBC_OFFSET UNITYSDK_OFFSET(0x64C1760)
#define CLASS_2_C219469667DBAA6A_METHOD_2_30A8E3D87CAC149E_OFFSET UNITYSDK_OFFSET(0x64CDCA0)
#define CLASS_2_C219469667DBAA6A_METHOD_2_33D72A78C6299631_OFFSET UNITYSDK_OFFSET(0x64C7630)
#define CLASS_2_C219469667DBAA6A_METHOD_2_343E31FE40E38CEB_OFFSET UNITYSDK_OFFSET(0x64C3470)
#define CLASS_2_C219469667DBAA6A_METHOD_2_35FB6B1DA0F7018A_OFFSET UNITYSDK_OFFSET(0x64CCD20)
#define CLASS_2_C219469667DBAA6A_METHOD_2_362228ED47D27AF7_OFFSET UNITYSDK_OFFSET(0x64CD330)
#define CLASS_2_C219469667DBAA6A_METHOD_2_38C39C039C226527_OFFSET UNITYSDK_OFFSET(0x64BE520)
#define CLASS_2_C219469667DBAA6A_METHOD_2_3DA91C9B57824EE6_OFFSET UNITYSDK_OFFSET(0x64BDB00)
#define CLASS_2_C219469667DBAA6A_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x64C9070)
#define CLASS_2_C219469667DBAA6A_METHOD_2_4353FFAF6FBCA62C_OFFSET UNITYSDK_OFFSET(0x64CC8F0)
#define CLASS_2_C219469667DBAA6A_METHOD_2_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0x64CF130)
#define CLASS_2_C219469667DBAA6A_METHOD_2_44C6956149352354_OFFSET UNITYSDK_OFFSET(0x64C8FC0)
#define CLASS_2_C219469667DBAA6A_METHOD_2_4845AF7DDA878606_OFFSET UNITYSDK_OFFSET(0x64C6400)
#define CLASS_2_C219469667DBAA6A_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x64CF3B0)
#define CLASS_2_C219469667DBAA6A_METHOD_2_611142A6ECF0D805_OFFSET UNITYSDK_OFFSET(0x64CA130)
#define CLASS_2_C219469667DBAA6A_METHOD_2_614675CBA6131A20_OFFSET UNITYSDK_OFFSET(0x64C3630)
#define CLASS_2_C219469667DBAA6A_METHOD_2_637BE57AD17CE1C1_OFFSET UNITYSDK_OFFSET(0x64CD3E0)
#define CLASS_2_C219469667DBAA6A_METHOD_2_646527B81AA6F8B8_OFFSET UNITYSDK_OFFSET(0x64C8500)
#define CLASS_2_C219469667DBAA6A_METHOD_2_6590D7A40D9A82FB_OFFSET UNITYSDK_OFFSET(0x64C9B90)
#define CLASS_2_C219469667DBAA6A_METHOD_2_670F9011F4A497FF_OFFSET UNITYSDK_OFFSET(0x64CE850)
#define CLASS_2_C219469667DBAA6A_METHOD_2_6AD73B86F90810C1_OFFSET UNITYSDK_OFFSET(0x64C92A0)
#define CLASS_2_C219469667DBAA6A_METHOD_2_7435303307FA82B1_OFFSET UNITYSDK_OFFSET(0x64CA0C0)
#define CLASS_2_C219469667DBAA6A_METHOD_2_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x64BF340)
#define CLASS_2_C219469667DBAA6A_METHOD_2_7E692C4823C131A7_OFFSET UNITYSDK_OFFSET(0x64C9F80)
#define CLASS_2_C219469667DBAA6A_METHOD_2_7F4192D12853B595_OFFSET UNITYSDK_OFFSET(0x64C1300)
#define CLASS_2_C219469667DBAA6A_METHOD_2_80728EE45C1472F2_OFFSET UNITYSDK_OFFSET(0x64CF420)
#define CLASS_2_C219469667DBAA6A_METHOD_2_81FEFD1B22CE37A2_OFFSET UNITYSDK_OFFSET(0x64CA2C0)
#define CLASS_2_C219469667DBAA6A_METHOD_2_83DD9CDA25F37FB9_OFFSET UNITYSDK_OFFSET(0x64CDE70)
#define CLASS_2_C219469667DBAA6A_METHOD_2_8542E37E74FDE1B5_OFFSET UNITYSDK_OFFSET(0x64C7990)
#define CLASS_2_C219469667DBAA6A_METHOD_2_8A89067F0D435875_OFFSET UNITYSDK_OFFSET(0x64CD670)
#define CLASS_2_C219469667DBAA6A_METHOD_2_8C713B32B3B4180D_OFFSET UNITYSDK_OFFSET(0x64C6740)
#define CLASS_2_C219469667DBAA6A_METHOD_2_8E6B15734894FE2D_1_OFFSET UNITYSDK_OFFSET(0x64CF080)
#define CLASS_2_C219469667DBAA6A_METHOD_2_8E6B15734894FE2D_2_OFFSET UNITYSDK_OFFSET(0x64CFC30)
#define CLASS_2_C219469667DBAA6A_METHOD_2_8E6B15734894FE2D_OFFSET UNITYSDK_OFFSET(0x64CA200)
#define CLASS_2_C219469667DBAA6A_METHOD_2_9114FE74C723030B_OFFSET UNITYSDK_OFFSET(0x64CFE70)
#define CLASS_2_C219469667DBAA6A_METHOD_2_9219C2A9E5905AEF_OFFSET UNITYSDK_OFFSET(0x64CD740)
#define CLASS_2_C219469667DBAA6A_METHOD_2_9245243B9D11A872_OFFSET UNITYSDK_OFFSET(0x64C0660)
#define CLASS_2_C219469667DBAA6A_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x64C9FF0)
#define CLASS_2_C219469667DBAA6A_METHOD_2_9744843B2D15AB29_OFFSET UNITYSDK_OFFSET(0x64C0F70)
#define CLASS_2_C219469667DBAA6A_METHOD_2_97B44ED90A2DE2AB_OFFSET UNITYSDK_OFFSET(0x64C3AE0)
#define CLASS_2_C219469667DBAA6A_METHOD_2_9FEBDE4CF5D68407_OFFSET UNITYSDK_OFFSET(0x64CEFB0)
#define CLASS_2_C219469667DBAA6A_METHOD_2_A31A14B9B6EA8D2F_OFFSET UNITYSDK_OFFSET(0x64C0930)
#define CLASS_2_C219469667DBAA6A_METHOD_2_A4A7AC00FE1B8986_OFFSET UNITYSDK_OFFSET(0x64C6D00)
#define CLASS_2_C219469667DBAA6A_METHOD_2_AB4F9B00D764C4EA_OFFSET UNITYSDK_OFFSET(0x64C7860)
#define CLASS_2_C219469667DBAA6A_METHOD_2_ADD45F11BB7336A7_OFFSET UNITYSDK_OFFSET(0x64C3CF0)
#define CLASS_2_C219469667DBAA6A_METHOD_2_B136ACC0E5BCBBE9_OFFSET UNITYSDK_OFFSET(0x64C9D00)
#define CLASS_2_C219469667DBAA6A_METHOD_2_B9A9E959EC753CBA_OFFSET UNITYSDK_OFFSET(0x64CD0C0)
#define CLASS_2_C219469667DBAA6A_METHOD_2_BED35D89A6A10D7A_OFFSET UNITYSDK_OFFSET(0x64CFA70)
#define CLASS_2_C219469667DBAA6A_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x64BD510)
#define CLASS_2_C219469667DBAA6A_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x64BD3D0)
#define CLASS_2_C219469667DBAA6A_METHOD_2_CB613A5EF970C11B_OFFSET UNITYSDK_OFFSET(0x64CFB90)
#define CLASS_2_C219469667DBAA6A_METHOD_2_CBCE4A2497FEDA8F_OFFSET UNITYSDK_OFFSET(0x64CC2F0)
#define CLASS_2_C219469667DBAA6A_METHOD_2_CBDC22058B67F0FE_OFFSET UNITYSDK_OFFSET(0x64C6FD0)
#define CLASS_2_C219469667DBAA6A_METHOD_2_D20BF56E36607D54_1_OFFSET UNITYSDK_OFFSET(0x64C3A70)
#define CLASS_2_C219469667DBAA6A_METHOD_2_D20BF56E36607D54_OFFSET UNITYSDK_OFFSET(0x64C3A00)
#define CLASS_2_C219469667DBAA6A_METHOD_2_D56164292B7CC690_OFFSET UNITYSDK_OFFSET(0x64D04C0)
#define CLASS_2_C219469667DBAA6A_METHOD_2_D5CF1AB7D0BEFFA6_OFFSET UNITYSDK_OFFSET(0x64C48A0)
#define CLASS_2_C219469667DBAA6A_METHOD_2_D77CB51624C4298B_OFFSET UNITYSDK_OFFSET(0x64C2EA0)
#define CLASS_2_C219469667DBAA6A_METHOD_2_D9B8FBA9ED10B3DC_OFFSET UNITYSDK_OFFSET(0x64C6EF0)
#define CLASS_2_C219469667DBAA6A_METHOD_2_DC715239B8B98D9C_OFFSET UNITYSDK_OFFSET(0x64C3E20)
#define CLASS_2_C219469667DBAA6A_METHOD_2_DDFD5258CD3CC3DB_OFFSET UNITYSDK_OFFSET(0x64C8840)
#define CLASS_2_C219469667DBAA6A_METHOD_2_DF645F048FE4E4E3_OFFSET UNITYSDK_OFFSET(0x64CE220)
#define CLASS_2_C219469667DBAA6A_METHOD_2_E42B2031F3B58559_OFFSET UNITYSDK_OFFSET(0x64C0C80)
#define CLASS_2_C219469667DBAA6A_METHOD_2_E735982CB1F306D6_OFFSET UNITYSDK_OFFSET(0x64BFD30)
#define CLASS_2_C219469667DBAA6A_METHOD_2_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0x64C4A00)
#define CLASS_2_C219469667DBAA6A_METHOD_2_EB092EAC5D07B77E_OFFSET UNITYSDK_OFFSET(0x64CFD40)
#define CLASS_2_C219469667DBAA6A_METHOD_2_ED26635D0EB903C2_OFFSET UNITYSDK_OFFSET(0x64C90E0)
#define CLASS_2_C219469667DBAA6A_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x64CFCE0)
#define CLASS_2_C219469667DBAA6A_METHOD_2_F5203B25925DADA6_OFFSET UNITYSDK_OFFSET(0x64CD2C0)
#define CLASS_2_C219469667DBAA6A_METHOD_2_F7129A87C3FC8740_OFFSET UNITYSDK_OFFSET(0x64C46D0)
#define CLASS_2_C219469667DBAA6A_METHOD_2_F7F8016EAE618A49_OFFSET UNITYSDK_OFFSET(0x64CFDB0)
#define CLASS_2_C219469667DBAA6A_METHOD_2_FB116C60A246D0A5_OFFSET UNITYSDK_OFFSET(0x64CE360)
#define CLASS_2_C219469667DBAA6A_ONCREATE_OFFSET UNITYSDK_OFFSET(0x64BD4B0)
#define CLASS_2_C219469667DBAA6A__CCTOR_OFFSET UNITYSDK_OFFSET(0x64BDA70)
#define CLASS_2_C219469667DBAA6A__CTOR_OFFSET UNITYSDK_OFFSET(0x64BD570)

inline static constexpr unsigned int Class_2_C219469667DBAA6A_TypeDefinitionIndex = 39292;

class Class_2_C219469667DBAA6A : public ::Foundation::SingletonDisposable_1<::Class_2_C219469667DBAA6A*>
{
public:
	static ::Foundation::AssetRequestHandle* StaticGet_Field_2_60()
	{
		return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C219469667DBAA6A_TypeDefinitionIndex)->GetStaticField(0x2D1F0);
	}
	static ::MoleMole::PreloadUIAssetsConfig** StaticGet_Field_2_58()
	{
		return (::MoleMole::PreloadUIAssetsConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C219469667DBAA6A_TypeDefinitionIndex)->GetStaticField(0x2D210);
	}
	static ::System::Diagnostics::Stopwatch** StaticGet_Field_2_68()
	{
		return (::System::Diagnostics::Stopwatch**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C219469667DBAA6A_TypeDefinitionIndex)->GetStaticField(0x2D218);
	}
	static ::System::Boolean* StaticGet_Field_2_12()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C219469667DBAA6A_TypeDefinitionIndex)->GetStaticField(0xA3D0);
	}
	static ::System::Boolean* StaticGet_Field_2_43()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C219469667DBAA6A_TypeDefinitionIndex)->GetStaticField(0xA3D1);
	}
	static ::System::Boolean* StaticGet_Field_2_66()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C219469667DBAA6A_TypeDefinitionIndex)->GetStaticField(0xA3D2);
	}
	static ::System::Boolean* StaticGet_Field_2_10()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C219469667DBAA6A_TypeDefinitionIndex)->GetStaticField(0xA3D3);
	}
	static ::System::Boolean* StaticGet_Field_2_7()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C219469667DBAA6A_TypeDefinitionIndex)->GetStaticField(0xA3D4);
	}
	static ::System::Boolean* StaticGet_Field_2_6()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C219469667DBAA6A_TypeDefinitionIndex)->GetStaticField(0xA3D5);
	}
	static ::System::Boolean* StaticGet_Field_2_9()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C219469667DBAA6A_TypeDefinitionIndex)->GetStaticField(0xA3D6);
	}
	static ::System::Single* StaticGet_Field_2_69()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C219469667DBAA6A_TypeDefinitionIndex)->GetStaticField(0xA3D8);
	}
	static ::System::Boolean* StaticGet_Field_2_11()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C219469667DBAA6A_TypeDefinitionIndex)->GetStaticField(0xA3DC);
	}
	static ::System::Boolean* StaticGet_Field_2_8()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C219469667DBAA6A_TypeDefinitionIndex)->GetStaticField(0xA3DD);
	}
	static ::System::Boolean* StaticGet_Field_2_63()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C219469667DBAA6A_TypeDefinitionIndex)->GetStaticField(0xA3DE);
	}
	static ::System::Boolean* StaticGet_Field_2_5()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C219469667DBAA6A_TypeDefinitionIndex)->GetStaticField(0xA3DF);
	}
	static ::System::Single* StaticGet_Field_2_70()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C219469667DBAA6A_TypeDefinitionIndex)->GetStaticField(0xA3E0);
	}
	static ::System::Single* StaticGet_Field_2_67()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C219469667DBAA6A_TypeDefinitionIndex)->GetStaticField(0xA3E4);
	}
	static ::System::Boolean* StaticGet_Field_2_57()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C219469667DBAA6A_TypeDefinitionIndex)->GetStaticField(0xA3E8);
	}
	static ::System::Boolean* StaticGet_Field_2_13()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C219469667DBAA6A_TypeDefinitionIndex)->GetStaticField(0xA3E9);
	}
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	// static const ::System::String* Field_2_3; // 0x0
	// static const ::System::String* Field_2_4; // 0x0
	// static const ::System::String* Field_2_47; // 0x0
	// static const ::System::String* Field_2_48; // 0x0
	// static const ::System::String* Field_2_49; // 0x0
	// static const ::System::Int64 Field_2_52 = 0xB5400000; // 0x0
	// static const ::System::String* Field_2_59; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::PreloadSingleGroupConfig*>* Field_2_22; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::PreloadMonsterSummonConfig*>* Field_2_26; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::PreloadSingleGroupConfig*>* Field_2_23; // 0x20
	::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* Field_2_31; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_64; // 0x30
	::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* Field_2_54; // 0x38
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_65; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::PreloadSingleGroupConfig*>* Field_2_21; // 0x48
	::System::Collections::Generic::List_1<::System::String*>* Field_2_45; // 0x50
	::Il2CppArray<::System::UInt64>* Field_2_16; // 0x58
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_34; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::PreloadSingleStreaminGameConfig*>* Field_2_27; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::PreloadSingleGroupConfig*>* Field_2_24; // 0x70
	::System::String* Field_2_33; // 0x78
	::Il2CppArray<::System::UInt64>* Field_2_17; // 0x80
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::Class_1_2C75E68C0ED89E97*>* Field_2_32; // 0x88
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_36; // 0x90
	::MoleMole::PreloadLevelConfig* Field_2_14; // 0x98
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_28; // 0xA0
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_29; // 0xA8
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_C219469667DBAA6A_Class_1_0D917C9760BF007D*>* Field_2_62; // 0xB0
	::Foundation::AssetPoolRunMode* Field_2_41; // 0xB8
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_50; // 0xC0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::PreloadSingleLevelConfig*>* Field_2_20; // 0xC8
	::Il2CppArray<::Class_2_C219469667DBAA6A_Class_1_E3BC8E116CD0C5B9*>* Field_2_19; // 0xD0
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_42; // 0xD8
	::MoleMole::PreloadStreamingGameConfig* Field_2_15; // 0xE0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_C219469667DBAA6A_Class_1_0D917C9760BF007D*>* Field_2_61; // 0xE8
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_30; // 0xF0
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_35; // 0xF8
	::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* Field_2_55; // 0x100
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::PreloadGhostEffectConfig*>* Field_2_25; // 0x108
	::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* Field_2_0; // 0x110
	::Il2CppArray<::Class_2_C219469667DBAA6A_Class_1_E3BC8E116CD0C5B9*>* Field_2_18; // 0x118
	::System::Int32 Field_2_40; // 0x120
	::System::Boolean Field_2_51; // 0x124
	::System::Boolean Field_2_56; // 0x125
	::System::Boolean Field_2_44; // 0x126
	::System::Boolean Field_2_53; // 0x127
	::System::Boolean Field_2_46; // 0x128
	::System::Int32 Field_2_37; // 0x12C
	::System::Int32 Field_2_39; // 0x130
	::System::Int32 Field_2_38; // 0x134

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A__CCTOR_OFFSET))();
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_ONCREATE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_3DA91C9B57824EE6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_3DA91C9B57824EE6_OFFSET))(this);
	}

	::System::Void Method_2_79830F666EE579C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_79830F666EE579C0_OFFSET))(this);
	}

	::System::Void Method_2_0E46FFB93F6715F2(::NodeCanvas::Framework::Graph* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Graph*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_0E46FFB93F6715F2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0E17D5162C02199F(::Struct_2_433EAFD16930C7BA a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_433EAFD16930C7BA))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_0E17D5162C02199F_OFFSET))(this, a1);
	}

	::System::Void Method_2_E735982CB1F306D6(::System::Collections::Generic::IEnumerable_1<::System::Int32>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_E735982CB1F306D6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E42B2031F3B58559(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_E42B2031F3B58559_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7F4192D12853B595(::UnityEngine::Material* a1, ::UnityEngine::Material* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_7F4192D12853B595_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2B8B70092FE5FFBC(::Class_3_DA02E6BABB5F027E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_DA02E6BABB5F027E*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_2B8B70092FE5FFBC_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_D20BF56E36607D54(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_D20BF56E36607D54_OFFSET))(this, a1);
	}

	::Foundation::AssetRequestHandle Method_2_ADD45F11BB7336A7(::Foundation::AssetPath a1)
	{
		return ((::Foundation::AssetRequestHandle(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_ADD45F11BB7336A7_OFFSET))(this, a1);
	}

	::System::Void Method_2_DC715239B8B98D9C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_DC715239B8B98D9C_OFFSET))(this);
	}

	::System::Void Method_2_EAD10B3E55E2C4C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_EAD10B3E55E2C4C5_OFFSET))(this);
	}

	::System::Void Method_2_9245243B9D11A872(::MoleMole::PreloadSingleGroupConfig* a1, ::Class_2_C219469667DBAA6A_Enum_3_554CAED038424452 a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::PreloadSingleGroupConfig*, ::Class_2_C219469667DBAA6A_Enum_3_554CAED038424452, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_9245243B9D11A872_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_123100E0DCBCC837(::UnityEngine::Material* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_123100E0DCBCC837_OFFSET))(this, a1);
	}

	::System::Void Method_2_4845AF7DDA878606(::MoleMole::PreloadSingleStreaminGameConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::PreloadSingleStreaminGameConfig*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_4845AF7DDA878606_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1B55A209492D8E0D(::Class_2_C219469667DBAA6A_Class_1_E3BC8E116CD0C5B9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_C219469667DBAA6A_Class_1_E3BC8E116CD0C5B9*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_1B55A209492D8E0D_OFFSET))(this, a1);
	}

	::System::Void Method_2_8C713B32B3B4180D(::System::Collections::Generic::IEnumerable_1<::Class_1_986F52381DF139E6*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_986F52381DF139E6*>*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_8C713B32B3B4180D_OFFSET))(this, a1);
	}

	::System::Void Method_2_A4A7AC00FE1B8986(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_A4A7AC00FE1B8986_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::IEnumerator* Method_2_D9B8FBA9ED10B3DC(::System::String* a1, ::System::Int32 a2, ::System::Action_1<::System::Single>* a3, ::System::Single a4)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Action_1<::System::Single>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_D9B8FBA9ED10B3DC_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_CBDC22058B67F0FE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_CBDC22058B67F0FE_OFFSET))(this);
	}

	::System::Void Method_2_A31A14B9B6EA8D2F(::MoleMole::PreloadSingleGroupConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::PreloadSingleGroupConfig*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_A31A14B9B6EA8D2F_OFFSET))(this, a1);
	}

	::System::Void Method_2_33D72A78C6299631(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_33D72A78C6299631_OFFSET))(this, a1);
	}

	::System::Void Method_2_AB4F9B00D764C4EA(::Foundation::AssetPath a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_AB4F9B00D764C4EA_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_646527B81AA6F8B8(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_646527B81AA6F8B8_OFFSET))(this, a1);
	}

	static ::System::Collections::IEnumerator* Method_2_44C6956149352354(::System::Single a1, ::System::Action_1<::System::Single>* a2)
	{
		return ((::System::Collections::IEnumerator*(*)(::System::Single, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_44C6956149352354_OFFSET))(a1, a2);
	}

	::System::Void Method_2_DDFD5258CD3CC3DB(::MoleMole::PreloadSingleStreaminGameConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::PreloadSingleStreaminGameConfig*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_DDFD5258CD3CC3DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_343E31FE40E38CEB(::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_343E31FE40E38CEB_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_97B44ED90A2DE2AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_97B44ED90A2DE2AB_OFFSET))(this);
	}

	::System::Void Method_2_ED26635D0EB903C2(::System::Int32 a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_ED26635D0EB903C2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_8542E37E74FDE1B5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_8542E37E74FDE1B5_OFFSET))(this);
	}

	::System::Void Method_2_D5CF1AB7D0BEFFA6(::Foundation::AssetRequestHandle a1, ::Foundation::AssetPath a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetRequestHandle, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_D5CF1AB7D0BEFFA6_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::FlowCanvas::FlowNode*>* Method_2_6AD73B86F90810C1(::NodeCanvas::Framework::Graph* a1)
	{
		return ((::System::Collections::Generic::List_1<::FlowCanvas::FlowNode*>*(*)(::PVOID, ::NodeCanvas::Framework::Graph*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_6AD73B86F90810C1_OFFSET))(this, a1);
	}

	::UnityEngine::Material* Method_2_6590D7A40D9A82FB(::UnityEngine::Material* a1)
	{
		return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_6590D7A40D9A82FB_OFFSET))(this, a1);
	}

	::System::Void Method_2_B136ACC0E5BCBBE9(::NodeCanvas::Framework::Graph* a1)
	{
		return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Graph*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_B136ACC0E5BCBBE9_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_2_7E692C4823C131A7(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_7E692C4823C131A7_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_614675CBA6131A20(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_614675CBA6131A20_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_611142A6ECF0D805(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_611142A6ECF0D805_OFFSET))(this, a1);
	}

	::System::Collections::IEnumerator* Method_2_8E6B15734894FE2D(::System::String* a1, ::System::Action_1<::System::Single>* a2)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_8E6B15734894FE2D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_81FEFD1B22CE37A2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_81FEFD1B22CE37A2_OFFSET))(this);
	}

	::System::Void Method_2_08AD2592D8954D44(::NodeCanvas::Framework::Graph* a1)
	{
		return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Graph*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_08AD2592D8954D44_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::FlowCanvas::FlowNode*>* Method_2_0FBCCD0ECB3E49FA(::NodeCanvas::Framework::Graph* a1)
	{
		return ((::System::Collections::Generic::List_1<::FlowCanvas::FlowNode*>*(*)(::PVOID, ::NodeCanvas::Framework::Graph*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_0FBCCD0ECB3E49FA_OFFSET))(this, a1);
	}

	::System::Void Method_2_4353FFAF6FBCA62C(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Collections::Generic::List_1<::System::Int32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_4353FFAF6FBCA62C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_35FB6B1DA0F7018A(::MoleMole::TeamDataItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::TeamDataItem*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_35FB6B1DA0F7018A_OFFSET))(this, a1);
	}

	::System::Void Method_2_F7129A87C3FC8740(::Foundation::AssetRequestHandle a1, ::Foundation::AssetPath a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetRequestHandle, ::Foundation::AssetPath, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_F7129A87C3FC8740_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_D20BF56E36607D54_1(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_D20BF56E36607D54_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_B9A9E959EC753CBA(::UnityEngine::ShaderVariantCollection* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::ShaderVariantCollection*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_B9A9E959EC753CBA_OFFSET))(this, a1, a2);
	}

	::System::Collections::IEnumerator* Method_2_362228ED47D27AF7(::System::Action_1<::System::Single>* a1)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_362228ED47D27AF7_OFFSET))(this, a1);
	}

	::System::Void Method_2_38C39C039C226527(::Class_2_C219469667DBAA6A_Class_1_0D917C9760BF007D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_C219469667DBAA6A_Class_1_0D917C9760BF007D*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_38C39C039C226527_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_637BE57AD17CE1C1(::Struct_2_433EAFD16930C7BA a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_433EAFD16930C7BA))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_637BE57AD17CE1C1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F5203B25925DADA6(::UnityEngine::ShaderVariantCollection* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::ShaderVariantCollection*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_F5203B25925DADA6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_22C8B27D1773170D(::System::Int32 a1, ::Class_2_C219469667DBAA6A_Enum_3_554CAED038424452 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Boolean a5, ::System::Action_3<::Foundation::AssetPath, ::System::Int32, ::System::Int32>* a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_2_C219469667DBAA6A_Enum_3_554CAED038424452, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Action_3<::Foundation::AssetPath, ::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_22C8B27D1773170D_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_83DD9CDA25F37FB9(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Collections::Generic::HashSet_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_83DD9CDA25F37FB9_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_DF645F048FE4E4E3(::Foundation::AssetPath a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_DF645F048FE4E4E3_OFFSET))(this, a1);
	}

	::Struct_2_433EAFD16930C7BA Method_2_FB116C60A246D0A5(::System::Int32 a1, ::System::Action* a2)
	{
		return ((::Struct_2_433EAFD16930C7BA(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_FB116C60A246D0A5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_670F9011F4A497FF(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_670F9011F4A497FF_OFFSET))(this, a1);
	}

	::System::Collections::IEnumerator* Method_2_9FEBDE4CF5D68407(::System::String* a1, ::System::Action_1<::System::Single>* a2, ::System::Single a3)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::Action_1<::System::Single>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_9FEBDE4CF5D68407_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_0FA8D2457860B677(::Class_2_C219469667DBAA6A_Class_1_0D917C9760BF007D* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_C219469667DBAA6A_Class_1_0D917C9760BF007D*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_0FA8D2457860B677_OFFSET))(this, a1, a2);
	}

	::System::Collections::IEnumerator* Method_2_8E6B15734894FE2D_1(::System::String* a1, ::System::Action_1<::System::Single>* a2)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_8E6B15734894FE2D_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4389275F4099DE36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_4389275F4099DE36_OFFSET))(this);
	}

	::System::Void Method_2_0A4E825E46D7E52D(::System::Int32 a1, ::Class_2_C219469667DBAA6A_Enum_3_554CAED038424452 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Action_1<::System::Int32>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_2_C219469667DBAA6A_Enum_3_554CAED038424452, ::System::Int32, ::System::Int32, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_0A4E825E46D7E52D_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_D77CB51624C4298B(::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_D77CB51624C4298B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_80728EE45C1472F2(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Collections::Generic::List_1<::Struct_2_433EAFD16930C7BA>*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::Struct_2_433EAFD16930C7BA>*&))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_80728EE45C1472F2_OFFSET))(this, a1, a2);
	}

	::Foundation::AssetRequestHandle Method_2_30A8E3D87CAC149E(::Foundation::AssetPath a1)
	{
		return ((::Foundation::AssetRequestHandle(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_30A8E3D87CAC149E_OFFSET))(this, a1);
	}

	::System::Void Method_2_BED35D89A6A10D7A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_BED35D89A6A10D7A_OFFSET))(this, a1);
	}

	::System::Void Method_2_CB613A5EF970C11B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_CB613A5EF970C11B_OFFSET))(this, a1);
	}

	::System::Void Method_2_8A89067F0D435875(::System::Int32 a1, ::Class_2_C219469667DBAA6A_Enum_3_554CAED038424452 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_2_C219469667DBAA6A_Enum_3_554CAED038424452))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_8A89067F0D435875_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CBCE4A2497FEDA8F(::FlowCanvas::FlowNode* a1, ::System::Collections::Generic::List_1<::FlowCanvas::FlowNode*>* a2, ::System::Collections::Generic::HashSet_1<::NodeCanvas::Framework::Node*>* a3, ::System::Collections::Generic::HashSet_1<::NodeCanvas::Framework::Node*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowNode*, ::System::Collections::Generic::List_1<::FlowCanvas::FlowNode*>*, ::System::Collections::Generic::HashSet_1<::NodeCanvas::Framework::Node*>*, ::System::Collections::Generic::HashSet_1<::NodeCanvas::Framework::Node*>*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_CBCE4A2497FEDA8F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Collections::IEnumerator* Method_2_8E6B15734894FE2D_2(::System::String* a1, ::System::Action_1<::System::Single>* a2)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_8E6B15734894FE2D_2_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_2_EB092EAC5D07B77E(::System::Action* a1)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_EB092EAC5D07B77E_OFFSET))(a1);
	}

	::System::Void Method_2_7435303307FA82B1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_7435303307FA82B1_OFFSET))(this, a1);
	}

	::System::Void Method_2_09753BBB55A2BD9E(::MoleMole::PreloadSingleGroupConfig* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Collections::Generic::List_1<::System::Int32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::PreloadSingleGroupConfig*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_09753BBB55A2BD9E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_9219C2A9E5905AEF(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_9219C2A9E5905AEF_OFFSET))(this, a1);
	}

	::System::Collections::IEnumerator* Method_2_F7F8016EAE618A49(::System::Action_1<::System::Single>* a1, ::System::Single a2)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Action_1<::System::Single>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_F7F8016EAE618A49_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9114FE74C723030B(::System::Int32 a1, ::System::Collections::Generic::List_1<::Foundation::AssetPath>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::Foundation::AssetPath>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_9114FE74C723030B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_9744843B2D15AB29(::MoleMole::PreloadGhostEffectConfig* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::PreloadGhostEffectConfig*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_9744843B2D15AB29_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_5790A55946AA509D_OFFSET))();
	}

	::System::Void Method_2_D56164292B7CC690(::System::Collections::Generic::List_1<::Struct_2_433EAFD16930C7BA>*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_433EAFD16930C7BA>*&))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_D56164292B7CC690_OFFSET))(this, a1);
	}
};
