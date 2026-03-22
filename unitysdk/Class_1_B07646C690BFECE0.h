#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9166BD0F741825C9_Enum_3_E8EEFC25995A90B4.h"
#include "unitysdk/Class_1_B07646C690BFECE0_Struct_2_2DF6746A6B25134E.h"
#include "unitysdk/Class_1_B07646C690BFECE0_Struct_2_83143841FFE32BF9.h"
#include "unitysdk/Class_1_B07646C690BFECE0_Struct_2_FF35D64B04BF12C3.h"
#include "unitysdk/MoleMole/UIInLevelMonsterHudWidgetChildWindowController_HudFlag.h"
#include "unitysdk/Struct_2_2CC23FE9C9AEC1B7.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Jobs/TransformAccessArray.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2BEAA93324417DF4;
class Class_2_05BFAB15000D9DD3;
class Class_2_4E92AFC82E302868;
class Class_2_C2DE7756E351C461;
namespace MoleMole { class UIInLevelLocalRoleShieldChildWindowController; }
namespace MoleMole { class UIInLevelMPTeammateInfoChildWindowController; }
namespace MoleMole { class UIInLevelMonsterHudLevelChildWindowController; }
namespace MoleMole { class UIInLevelMonsterHudTagChildWindowController; }
namespace MoleMole { class UIInLevelMonsterHudWidgetChildWindowController; }
namespace MoleMole { class UIInLevelMonsterPortableHudBaseChildWindowController; }
namespace MoleMole { class UIInLevelNPCNameWidgetController; }
namespace MoleMole { class UIInLevelUpToolBarBossWidgetController; }
namespace MoleMole { class UIWindowController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
template <typename T> class Class_1_B07646C690BFECE0_Class_1_C6A1A18609A0DFB8;

#define CLASS_1_B07646C690BFECE0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8E6A530)
#define CLASS_1_B07646C690BFECE0_METHOD_1_0015A5327ACCB384_OFFSET UNITYSDK_OFFSET(0x8E74DC0)
#define CLASS_1_B07646C690BFECE0_METHOD_1_07C3209B63522BDA_OFFSET UNITYSDK_OFFSET(0x8E756E0)
#define CLASS_1_B07646C690BFECE0_METHOD_1_087A8B29E39CE077_OFFSET UNITYSDK_OFFSET(0x8E70E40)
#define CLASS_1_B07646C690BFECE0_METHOD_1_09C4428BEAB114EA_OFFSET UNITYSDK_OFFSET(0x8E76500)
#define CLASS_1_B07646C690BFECE0_METHOD_1_0BFB2A3110E77938_1_OFFSET UNITYSDK_OFFSET(0x8E77EB0)
#define CLASS_1_B07646C690BFECE0_METHOD_1_0BFB2A3110E77938_OFFSET UNITYSDK_OFFSET(0x8E744B0)
#define CLASS_1_B07646C690BFECE0_METHOD_1_0FAF75628D196C2E_OFFSET UNITYSDK_OFFSET(0x8E78AE0)
#define CLASS_1_B07646C690BFECE0_METHOD_1_102BA849186931FD_OFFSET UNITYSDK_OFFSET(0x8E6CE70)
#define CLASS_1_B07646C690BFECE0_METHOD_1_10382836015EA7BB_OFFSET UNITYSDK_OFFSET(0x8E71A00)
#define CLASS_1_B07646C690BFECE0_METHOD_1_1456E99155FB9C6A_OFFSET UNITYSDK_OFFSET(0x8E6D820)
#define CLASS_1_B07646C690BFECE0_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x8E7A0D0)
#define CLASS_1_B07646C690BFECE0_METHOD_1_19237BF43C255E2A_OFFSET UNITYSDK_OFFSET(0x8E6FD00)
#define CLASS_1_B07646C690BFECE0_METHOD_1_19FB5FBEA9EA66CD_OFFSET UNITYSDK_OFFSET(0x8E6DB50)
#define CLASS_1_B07646C690BFECE0_METHOD_1_1B51EDF8FE2AAC4F_OFFSET UNITYSDK_OFFSET(0x8E6F1F0)
#define CLASS_1_B07646C690BFECE0_METHOD_1_2483ADBE483CF401_OFFSET UNITYSDK_OFFSET(0x8E6AAD0)
#define CLASS_1_B07646C690BFECE0_METHOD_1_24ED6289627D7BE7_1_OFFSET UNITYSDK_OFFSET(0x8E71390)
#define CLASS_1_B07646C690BFECE0_METHOD_1_24ED6289627D7BE7_2_OFFSET UNITYSDK_OFFSET(0x8E71240)
#define CLASS_1_B07646C690BFECE0_METHOD_1_24ED6289627D7BE7_OFFSET UNITYSDK_OFFSET(0x8E72A20)
#define CLASS_1_B07646C690BFECE0_METHOD_1_352F9E911E9DC66E_OFFSET UNITYSDK_OFFSET(0x8E70620)
#define CLASS_1_B07646C690BFECE0_METHOD_1_3AB89638B2A1DC59_OFFSET UNITYSDK_OFFSET(0x8E76DB0)
#define CLASS_1_B07646C690BFECE0_METHOD_1_3AE8E28E92DB3043_1_OFFSET UNITYSDK_OFFSET(0x8E799B0)
#define CLASS_1_B07646C690BFECE0_METHOD_1_3AE8E28E92DB3043_OFFSET UNITYSDK_OFFSET(0x8E779C0)
#define CLASS_1_B07646C690BFECE0_METHOD_1_3CF63A4C2686B9BD_OFFSET UNITYSDK_OFFSET(0x8E71BD0)
#define CLASS_1_B07646C690BFECE0_METHOD_1_40658F47E42D2173_OFFSET UNITYSDK_OFFSET(0x8E77200)
#define CLASS_1_B07646C690BFECE0_METHOD_1_428BD246F5FAAA99_1_OFFSET UNITYSDK_OFFSET(0x8E78BE0)
#define CLASS_1_B07646C690BFECE0_METHOD_1_428BD246F5FAAA99_OFFSET UNITYSDK_OFFSET(0x8E775D0)
#define CLASS_1_B07646C690BFECE0_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x8E72100)
#define CLASS_1_B07646C690BFECE0_METHOD_1_4857357D5C1BFCE8_OFFSET UNITYSDK_OFFSET(0x8E6AFC0)
#define CLASS_1_B07646C690BFECE0_METHOD_1_497833CF065C1894_OFFSET UNITYSDK_OFFSET(0x8E6A770)
#define CLASS_1_B07646C690BFECE0_METHOD_1_4B8EC39B738903FA_1_OFFSET UNITYSDK_OFFSET(0x8E75AC0)
#define CLASS_1_B07646C690BFECE0_METHOD_1_4B8EC39B738903FA_OFFSET UNITYSDK_OFFSET(0x8E75BB0)
#define CLASS_1_B07646C690BFECE0_METHOD_1_4D9E1AC61B60D577_1_OFFSET UNITYSDK_OFFSET(0x8E709E0)
#define CLASS_1_B07646C690BFECE0_METHOD_1_4D9E1AC61B60D577_OFFSET UNITYSDK_OFFSET(0x8E707B0)
#define CLASS_1_B07646C690BFECE0_METHOD_1_4F63BCCDEC4D4BDE_OFFSET UNITYSDK_OFFSET(0x8E6C970)
#define CLASS_1_B07646C690BFECE0_METHOD_1_5165A8C8C56BF5C2_1_OFFSET UNITYSDK_OFFSET(0x8E722E0)
#define CLASS_1_B07646C690BFECE0_METHOD_1_5165A8C8C56BF5C2_2_OFFSET UNITYSDK_OFFSET(0x8E7A240)
#define CLASS_1_B07646C690BFECE0_METHOD_1_5165A8C8C56BF5C2_OFFSET UNITYSDK_OFFSET(0x8E70CC0)
#define CLASS_1_B07646C690BFECE0_METHOD_1_51C64716021AE184_OFFSET UNITYSDK_OFFSET(0x8E75470)
#define CLASS_1_B07646C690BFECE0_METHOD_1_5276BB923D9D229E_OFFSET UNITYSDK_OFFSET(0x8E78D10)
#define CLASS_1_B07646C690BFECE0_METHOD_1_52CFD3732DF3E71B_OFFSET UNITYSDK_OFFSET(0x8E781F0)
#define CLASS_1_B07646C690BFECE0_METHOD_1_56AAF22972BD1A66_OFFSET UNITYSDK_OFFSET(0x8E76650)
#define CLASS_1_B07646C690BFECE0_METHOD_1_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0x8E78F20)
#define CLASS_1_B07646C690BFECE0_METHOD_1_5BB5165A623CB0CD_OFFSET UNITYSDK_OFFSET(0x8E714E0)
#define CLASS_1_B07646C690BFECE0_METHOD_1_681A6CAF30BD6559_OFFSET UNITYSDK_OFFSET(0x8E747F0)
#define CLASS_1_B07646C690BFECE0_METHOD_1_6D72DD02566A0D08_OFFSET UNITYSDK_OFFSET(0x8E6C8F0)
#define CLASS_1_B07646C690BFECE0_METHOD_1_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0x8E75940)
#define CLASS_1_B07646C690BFECE0_METHOD_1_714F90EB60FB2968_OFFSET UNITYSDK_OFFSET(0x8E74D40)
#define CLASS_1_B07646C690BFECE0_METHOD_1_72559A09E773FFE7_OFFSET UNITYSDK_OFFSET(0x8E741A0)
#define CLASS_1_B07646C690BFECE0_METHOD_1_7D41A1A7E79589E1_OFFSET UNITYSDK_OFFSET(0x8E6DA60)
#define CLASS_1_B07646C690BFECE0_METHOD_1_7DCDFCEF5043DAD6_OFFSET UNITYSDK_OFFSET(0x8E79E20)
#define CLASS_1_B07646C690BFECE0_METHOD_1_7E385430C9550361_OFFSET UNITYSDK_OFFSET(0x8E7A060)
#define CLASS_1_B07646C690BFECE0_METHOD_1_80977DE71777CE72_OFFSET UNITYSDK_OFFSET(0x8E6FC60)
#define CLASS_1_B07646C690BFECE0_METHOD_1_82076D287B8D69AA_OFFSET UNITYSDK_OFFSET(0x8E71E90)
#define CLASS_1_B07646C690BFECE0_METHOD_1_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0x8E72C00)
#define CLASS_1_B07646C690BFECE0_METHOD_1_86953C79667FC2E6_1_OFFSET UNITYSDK_OFFSET(0x8E77700)
#define CLASS_1_B07646C690BFECE0_METHOD_1_86953C79667FC2E6_2_OFFSET UNITYSDK_OFFSET(0x8E70D40)
#define CLASS_1_B07646C690BFECE0_METHOD_1_86953C79667FC2E6_OFFSET UNITYSDK_OFFSET(0x8E6AD30)
#define CLASS_1_B07646C690BFECE0_METHOD_1_87318FF00D6BC7EB_OFFSET UNITYSDK_OFFSET(0x8E7A2C0)
#define CLASS_1_B07646C690BFECE0_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x8E78210)
#define CLASS_1_B07646C690BFECE0_METHOD_1_8F1CCCF3284F31D5_OFFSET UNITYSDK_OFFSET(0x8E77180)
#define CLASS_1_B07646C690BFECE0_METHOD_1_8F537CE539CF0103_OFFSET UNITYSDK_OFFSET(0x8E78E30)
#define CLASS_1_B07646C690BFECE0_METHOD_1_90C45C7D3965D858_OFFSET UNITYSDK_OFFSET(0x8E76040)
#define CLASS_1_B07646C690BFECE0_METHOD_1_9122FC030BA948E4_1_OFFSET UNITYSDK_OFFSET(0x8E72180)
#define CLASS_1_B07646C690BFECE0_METHOD_1_9122FC030BA948E4_2_OFFSET UNITYSDK_OFFSET(0x8E763F0)
#define CLASS_1_B07646C690BFECE0_METHOD_1_9122FC030BA948E4_OFFSET UNITYSDK_OFFSET(0x8E71B40)
#define CLASS_1_B07646C690BFECE0_METHOD_1_92F2FCA8316DB56D_OFFSET UNITYSDK_OFFSET(0x8E71930)
#define CLASS_1_B07646C690BFECE0_METHOD_1_932E0718231FB60C_OFFSET UNITYSDK_OFFSET(0x8E78A60)
#define CLASS_1_B07646C690BFECE0_METHOD_1_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x8E78310)
#define CLASS_1_B07646C690BFECE0_METHOD_1_978E4B25C2114F7E_OFFSET UNITYSDK_OFFSET(0x8E6AE30)
#define CLASS_1_B07646C690BFECE0_METHOD_1_AA0BDA36C0B04FEC_OFFSET UNITYSDK_OFFSET(0x8E704C0)
#define CLASS_1_B07646C690BFECE0_METHOD_1_AAEF7469B2BD8AAC_1_OFFSET UNITYSDK_OFFSET(0x8E6C040)
#define CLASS_1_B07646C690BFECE0_METHOD_1_AAEF7469B2BD8AAC_OFFSET UNITYSDK_OFFSET(0x8E6C190)
#define CLASS_1_B07646C690BFECE0_METHOD_1_AB3E6DB18402A3FE_OFFSET UNITYSDK_OFFSET(0x8E6BDD0)
#define CLASS_1_B07646C690BFECE0_METHOD_1_AD9F071724804EBE_OFFSET UNITYSDK_OFFSET(0x8E6D790)
#define CLASS_1_B07646C690BFECE0_METHOD_1_AFC4242440B0B88F_OFFSET UNITYSDK_OFFSET(0x8E77900)
#define CLASS_1_B07646C690BFECE0_METHOD_1_B184336BB2F50398_OFFSET UNITYSDK_OFFSET(0x8E79FC0)
#define CLASS_1_B07646C690BFECE0_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x8E6AC30)
#define CLASS_1_B07646C690BFECE0_METHOD_1_B1B466AFE3B0CC1E_OFFSET UNITYSDK_OFFSET(0x8E75F30)
#define CLASS_1_B07646C690BFECE0_METHOD_1_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0x8E72360)
#define CLASS_1_B07646C690BFECE0_METHOD_1_B5C7B44C609556DB_1_OFFSET UNITYSDK_OFFSET(0x8E78990)
#define CLASS_1_B07646C690BFECE0_METHOD_1_B5C7B44C609556DB_OFFSET UNITYSDK_OFFSET(0x8E788C0)
#define CLASS_1_B07646C690BFECE0_METHOD_1_BB47E6F02E790669_OFFSET UNITYSDK_OFFSET(0x8E6F880)
#define CLASS_1_B07646C690BFECE0_METHOD_1_BF7DAF459E1571C5_OFFSET UNITYSDK_OFFSET(0x8E71180)
#define CLASS_1_B07646C690BFECE0_METHOD_1_C1A38AFAAFDB336D_1_OFFSET UNITYSDK_OFFSET(0x8E6C2E0)
#define CLASS_1_B07646C690BFECE0_METHOD_1_C1A38AFAAFDB336D_OFFSET UNITYSDK_OFFSET(0x8E6C5B0)
#define CLASS_1_B07646C690BFECE0_METHOD_1_C227EDCF0707C572_OFFSET UNITYSDK_OFFSET(0x8E6D0E0)
#define CLASS_1_B07646C690BFECE0_METHOD_1_C5A70D5838D29031_1_OFFSET UNITYSDK_OFFSET(0x8E77800)
#define CLASS_1_B07646C690BFECE0_METHOD_1_C5A70D5838D29031_2_OFFSET UNITYSDK_OFFSET(0x8E77880)
#define CLASS_1_B07646C690BFECE0_METHOD_1_C5A70D5838D29031_OFFSET UNITYSDK_OFFSET(0x8E77430)
#define CLASS_1_B07646C690BFECE0_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x8E77420)
#define CLASS_1_B07646C690BFECE0_METHOD_1_CF4636D83AC931F3_OFFSET UNITYSDK_OFFSET(0x8E759B0)
#define CLASS_1_B07646C690BFECE0_METHOD_1_D0CD9A971CA3B1CF_OFFSET UNITYSDK_OFFSET(0x8E70C20)
#define CLASS_1_B07646C690BFECE0_METHOD_1_D1EC521D3635C6B8_OFFSET UNITYSDK_OFFSET(0x8E723D0)
#define CLASS_1_B07646C690BFECE0_METHOD_1_D20BF56E36607D54_OFFSET UNITYSDK_OFFSET(0x8E6C880)
#define CLASS_1_B07646C690BFECE0_METHOD_1_D27A209C0B63A47C_OFFSET UNITYSDK_OFFSET(0x8E6F130)
#define CLASS_1_B07646C690BFECE0_METHOD_1_D69118B7E9BC7C71_OFFSET UNITYSDK_OFFSET(0x8E6BB90)
#define CLASS_1_B07646C690BFECE0_METHOD_1_D711DD3A7896DC17_OFFSET UNITYSDK_OFFSET(0x8E6D990)
#define CLASS_1_B07646C690BFECE0_METHOD_1_D718F87D4C3B5CE0_OFFSET UNITYSDK_OFFSET(0x8E6FA90)
#define CLASS_1_B07646C690BFECE0_METHOD_1_DBF2F2B82D1BC6B8_OFFSET UNITYSDK_OFFSET(0x8E6CA80)
#define CLASS_1_B07646C690BFECE0_METHOD_1_DDE5C3833280C5F2_OFFSET UNITYSDK_OFFSET(0x8E74C10)
#define CLASS_1_B07646C690BFECE0_METHOD_1_E70AC8768DC44475_OFFSET UNITYSDK_OFFSET(0x8E77E30)
#define CLASS_1_B07646C690BFECE0_METHOD_1_E7750501E12EF06B_OFFSET UNITYSDK_OFFSET(0x8E6CCD0)
#define CLASS_1_B07646C690BFECE0_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x8E71920)
#define CLASS_1_B07646C690BFECE0_METHOD_1_F0333AA84E1A7A8B_OFFSET UNITYSDK_OFFSET(0x8E6F3D0)
#define CLASS_1_B07646C690BFECE0_METHOD_1_F3F5646B56EED509_OFFSET UNITYSDK_OFFSET(0x8E702A0)
#define CLASS_1_B07646C690BFECE0_METHOD_1_F515BE3458EF02E5_OFFSET UNITYSDK_OFFSET(0x8E774B0)
#define CLASS_1_B07646C690BFECE0_METHOD_1_FA70A0DEECDE57B3_1_OFFSET UNITYSDK_OFFSET(0x8E75CA0)
#define CLASS_1_B07646C690BFECE0_METHOD_1_FA70A0DEECDE57B3_OFFSET UNITYSDK_OFFSET(0x8E71BF0)
#define CLASS_1_B07646C690BFECE0_METHOD_1_FC00DEDBBA234243_OFFSET UNITYSDK_OFFSET(0x8E72A10)
#define CLASS_1_B07646C690BFECE0__CCTOR_OFFSET UNITYSDK_OFFSET(0x8E6AA80)
#define CLASS_1_B07646C690BFECE0__CTOR_1_OFFSET UNITYSDK_OFFSET(0x8E699D0)
#define CLASS_1_B07646C690BFECE0__CTOR_OFFSET UNITYSDK_OFFSET(0x8E69930)

inline static constexpr unsigned int Class_1_B07646C690BFECE0_TypeDefinitionIndex = 54725;

class Class_1_B07646C690BFECE0 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_33()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B07646C690BFECE0_TypeDefinitionIndex)->GetStaticField(0xB7A0);
	}
	static ::System::Boolean* StaticGet_Field_1_36()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B07646C690BFECE0_TypeDefinitionIndex)->GetStaticField(0xB7A1);
	}
	static ::System::Int32* StaticGet_Field_1_38()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B07646C690BFECE0_TypeDefinitionIndex)->GetStaticField(0xB7A4);
	}
	static ::System::Boolean* StaticGet_Field_1_34()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B07646C690BFECE0_TypeDefinitionIndex)->GetStaticField(0xB7A8);
	}
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B07646C690BFECE0_TypeDefinitionIndex)->GetStaticField(0xB7A9);
	}
	static ::System::Boolean* StaticGet_Field_1_49()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B07646C690BFECE0_TypeDefinitionIndex)->GetStaticField(0xB7AA);
	}
	static ::System::Boolean* StaticGet_Field_1_35()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B07646C690BFECE0_TypeDefinitionIndex)->GetStaticField(0xB7AB);
	}
	static ::System::Int32* StaticGet_Field_1_39()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B07646C690BFECE0_TypeDefinitionIndex)->GetStaticField(0xB7AC);
	}
	static ::System::Int32* StaticGet_Field_1_37()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B07646C690BFECE0_TypeDefinitionIndex)->GetStaticField(0xB7B0);
	}
	// static const ::System::Single Field_1_28; // 0x0
	// static const ::System::Single Field_1_29; // 0x0
	// static const ::System::Single Field_1_30; // 0x0
	// static const ::System::Single Field_1_31; // 0x0
	// static const ::System::Int32 Field_1_40 = 0x8; // 0x0
	// static const ::System::Boolean Field_1_41; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::UIInLevelMPTeammateInfoChildWindowController*>* Field_1_25; // 0x10
	::System::Action_1<::MoleMole::UIInLevelMonsterHudLevelChildWindowController*>* Field_1_13; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*>* Field_1_7; // 0x20
	::System::Collections::Generic::HashSet_1<::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*>* Field_1_54; // 0x28
	::System::Action* Field_1_2; // 0x30
	::Class_1_B07646C690BFECE0_Class_1_C6A1A18609A0DFB8<::Class_1_B07646C690BFECE0_Struct_2_2DF6746A6B25134E>* Field_1_32; // 0x38
	::MoleMole::UIInLevelUpToolBarBossWidgetController* Field_1_17; // 0x40
	::System::Func_1<::MoleMole::UIInLevelMonsterHudLevelChildWindowController*>* Field_1_11; // 0x48
	::System::Func_2<::System::Boolean, ::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*>* Field_1_5; // 0x50
	::System::Func_2<::System::UInt32, ::MoleMole::UIInLevelNPCNameWidgetController*>* Field_1_19; // 0x58
	::System::Collections::Generic::List_1<::MoleMole::UIInLevelNPCNameWidgetController*>* Field_1_20; // 0x60
	::System::Collections::Generic::List_1<::MoleMole::UIInLevelMonsterHudTagChildWindowController*>* Field_1_8; // 0x68
	::MoleMole::UIInLevelLocalRoleShieldChildWindowController* Field_1_23; // 0x70
	::System::Collections::Generic::List_1<::MoleMole::UIInLevelMonsterHudTagChildWindowController*>* Field_1_14; // 0x78
	::Class_1_2BEAA93324417DF4* Field_1_1; // 0x80
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::MoleMole::UIWindowController*, ::System::Single>>* Field_1_22; // 0x88
	::System::Collections::Generic::List_1<::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*>* Field_1_52; // 0x90
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::UIInLevelNPCNameWidgetController*>* Field_1_21; // 0x98
	::System::Action* Field_1_3; // 0xA0
	::System::Action_1<::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*>* Field_1_6; // 0xA8
	::System::Func_2<::System::UInt32, ::MoleMole::UIInLevelMPTeammateInfoChildWindowController*>* Field_1_26; // 0xB0
	::System::Func_1<::MoleMole::UIInLevelLocalRoleShieldChildWindowController*>* Field_1_24; // 0xB8
	::System::Collections::Generic::List_1<::MoleMole::UIInLevelMonsterHudLevelChildWindowController*>* Field_1_9; // 0xC0
	::System::Func_1<::MoleMole::UIInLevelUpToolBarBossWidgetController*>* Field_1_16; // 0xC8
	::System::Collections::Generic::List_1<::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*>* Field_1_53; // 0xD0
	::System::Func_1<::MoleMole::UIInLevelMonsterHudTagChildWindowController*>* Field_1_10; // 0xD8
	::System::Func_2<::System::UInt32, ::MoleMole::UIInLevelNPCNameWidgetController*>* Field_1_18; // 0xE0
	::System::Action_1<::MoleMole::UIInLevelMonsterHudTagChildWindowController*>* Field_1_12; // 0xE8
	::System::Collections::Generic::List_1<::MoleMole::UIInLevelMonsterHudLevelChildWindowController*>* Field_1_15; // 0xF0
	::System::Collections::Generic::Dictionary_2<::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*, ::System::Int32>* Field_1_51; // 0xF8
	::UnityEngine::Jobs::TransformAccessArray Field_1_42; // 0x100
	::System::Boolean Field_1_4; // 0x108
	::System::Boolean Field_1_27; // 0x109
	::UnityEngine::Jobs::TransformAccessArray Field_1_43; // 0x110
	::Unity::Jobs::JobHandle Field_1_50; // 0x118
	::Unity::Collections::NativeArray_1<::Class_1_B07646C690BFECE0_Struct_2_83143841FFE32BF9> Field_1_48; // 0x128
	::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> Field_1_44; // 0x138
	::Unity::Collections::NativeList_1<::Class_1_B07646C690BFECE0_Struct_2_FF35D64B04BF12C3> Field_1_47; // 0x148
	::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> Field_1_46; // 0x158
	::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> Field_1_45; // 0x168

	::System::Void _ctor(::System::Func_2<::System::Boolean, ::MoleMole::UIInLevelMonsterHudWidgetChildWindowController*>* a1, ::System::Action_1<::MoleMole::UIInLevelMonsterHudWidgetChildWindowController*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::Boolean, ::MoleMole::UIInLevelMonsterHudWidgetChildWindowController*>*, ::System::Action_1<::MoleMole::UIInLevelMonsterHudWidgetChildWindowController*>*))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::System::Func_2<::System::Boolean, ::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*>* a1, ::System::Action_1<::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::Boolean, ::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*>*, ::System::Action_1<::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*>*))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0__CTOR_1_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_2483ADBE483CF401(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_2483ADBE483CF401_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Boolean Method_1_86953C79667FC2E6(::Class_2_05BFAB15000D9DD3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_05BFAB15000D9DD3*))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_86953C79667FC2E6_OFFSET))(this, a1);
	}

	::System::Void Method_1_4857357D5C1BFCE8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_4857357D5C1BFCE8_OFFSET))(this);
	}

	static ::System::Single Method_1_AAEF7469B2BD8AAC(::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController* a1)
	{
		return ((::System::Single(*)(::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_AAEF7469B2BD8AAC_OFFSET))(a1);
	}

	::System::Boolean Method_1_D20BF56E36607D54(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_D20BF56E36607D54_OFFSET))(this, a1);
	}

	::System::Void Method_1_6D72DD02566A0D08(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_6D72DD02566A0D08_OFFSET))(this, a1);
	}

	::System::Void Method_1_DBF2F2B82D1BC6B8(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_DBF2F2B82D1BC6B8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_102BA849186931FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_102BA849186931FD_OFFSET))(this);
	}

	::System::Void Method_1_C227EDCF0707C572(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_C227EDCF0707C572_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_1456E99155FB9C6A(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_1456E99155FB9C6A_OFFSET))(this, a1);
	}

	::System::Void Method_1_497833CF065C1894()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_497833CF065C1894_OFFSET))(this);
	}

	::System::Boolean Method_1_D711DD3A7896DC17(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_D711DD3A7896DC17_OFFSET))(this, a1);
	}

	::System::Void Method_1_19FB5FBEA9EA66CD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_19FB5FBEA9EA66CD_OFFSET))(this);
	}

	static ::System::Single Method_1_AB3E6DB18402A3FE(::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController* a1)
	{
		return ((::System::Single(*)(::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_AB3E6DB18402A3FE_OFFSET))(a1);
	}

	::System::Void Method_1_1B51EDF8FE2AAC4F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_1B51EDF8FE2AAC4F_OFFSET))(this, a1);
	}

	::System::Void Method_1_F0333AA84E1A7A8B(::System::UInt32 a1, ::UnityEngine::GameObject* a2, ::System::Single a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::GameObject*, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_F0333AA84E1A7A8B_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_19237BF43C255E2A(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_19237BF43C255E2A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F3F5646B56EED509(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_F3F5646B56EED509_OFFSET))(this, a1);
	}

	::System::Void Method_1_AA0BDA36C0B04FEC(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_AA0BDA36C0B04FEC_OFFSET))(this, a1, a2);
	}

	::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController* Method_1_BB47E6F02E790669(::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag a1, ::System::UInt32 a2)
	{
		return ((::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*(*)(::PVOID, ::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_BB47E6F02E790669_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5165A8C8C56BF5C2(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_5165A8C8C56BF5C2_OFFSET))(this, a1);
	}

	::MoleMole::UIInLevelMPTeammateInfoChildWindowController* Method_1_087A8B29E39CE077(::System::UInt32 a1)
	{
		return ((::MoleMole::UIInLevelMPTeammateInfoChildWindowController*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_087A8B29E39CE077_OFFSET))(this, a1);
	}

	::System::Void Method_1_4D9E1AC61B60D577()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_4D9E1AC61B60D577_OFFSET))(this);
	}

	::System::Boolean Method_1_BF7DAF459E1571C5(::Class_1_9166BD0F741825C9_Enum_3_E8EEFC25995A90B4 a1, ::System::Object* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9166BD0F741825C9_Enum_3_E8EEFC25995A90B4, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_BF7DAF459E1571C5_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_92F2FCA8316DB56D(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_92F2FCA8316DB56D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_10382836015EA7BB(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_10382836015EA7BB_OFFSET))(this, a1);
	}

	::System::Void Method_1_9122FC030BA948E4(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_9122FC030BA948E4_OFFSET))(this, a1);
	}

	::System::Void Method_1_3CF63A4C2686B9BD(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_3CF63A4C2686B9BD_OFFSET))(this, a1);
	}

	static ::System::Single Method_1_AD9F071724804EBE(::UnityEngine::Vector3 a1)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_AD9F071724804EBE_OFFSET))(a1);
	}

	::System::Void Method_1_FA70A0DEECDE57B3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_FA70A0DEECDE57B3_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Boolean Method_1_5BB5165A623CB0CD(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_5BB5165A623CB0CD_OFFSET))(this, a1);
	}

	::System::Void Method_1_9122FC030BA948E4_1(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_9122FC030BA948E4_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_5165A8C8C56BF5C2_1(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_5165A8C8C56BF5C2_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_B43C848B078B3C34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_B43C848B078B3C34_OFFSET))(this);
	}

	::System::Void Method_1_FC00DEDBBA234243(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_FC00DEDBBA234243_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_24ED6289627D7BE7(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_24ED6289627D7BE7_OFFSET))(this, a1);
	}

	::System::Void Method_1_85377D41FEE05B66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_85377D41FEE05B66_OFFSET))(this);
	}

	::System::Void Method_1_72559A09E773FFE7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_72559A09E773FFE7_OFFSET))(this, a1);
	}

	::System::Void Method_1_E7750501E12EF06B(::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_E7750501E12EF06B_OFFSET))(this, a1);
	}

	::System::Void Method_1_0BFB2A3110E77938(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_0BFB2A3110E77938_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_24ED6289627D7BE7_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_24ED6289627D7BE7_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_DDE5C3833280C5F2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_DDE5C3833280C5F2_OFFSET))(this);
	}

	::System::Boolean Method_1_4F63BCCDEC4D4BDE(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_4F63BCCDEC4D4BDE_OFFSET))(this, a1);
	}

	::System::Void Method_1_714F90EB60FB2968(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_714F90EB60FB2968_OFFSET))(this, a1);
	}

	::System::Void Method_1_0015A5327ACCB384(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_0015A5327ACCB384_OFFSET))(this, a1, a2);
	}

	::MoleMole::UIInLevelMonsterHudTagChildWindowController* Method_1_51C64716021AE184(::System::UInt32 a1)
	{
		return ((::MoleMole::UIInLevelMonsterHudTagChildWindowController*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_51C64716021AE184_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_07C3209B63522BDA(::Struct_2_2CC23FE9C9AEC1B7 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_2CC23FE9C9AEC1B7))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_07C3209B63522BDA_OFFSET))(this, a1);
	}

	::MoleMole::UIInLevelNPCNameWidgetController* Method_1_90C45C7D3965D858(::System::UInt32 a1)
	{
		return ((::MoleMole::UIInLevelNPCNameWidgetController*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_90C45C7D3965D858_OFFSET))(this, a1);
	}

	::System::Void Method_1_D0CD9A971CA3B1CF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_D0CD9A971CA3B1CF_OFFSET))(this);
	}

	::System::Void Method_1_CF4636D83AC931F3(::System::UInt32 a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_CF4636D83AC931F3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_9122FC030BA948E4_2(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_9122FC030BA948E4_2_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_80977DE71777CE72(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_80977DE71777CE72_OFFSET))(a1);
	}

	::System::Void Method_1_09C4428BEAB114EA(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_09C4428BEAB114EA_OFFSET))(this, a1);
	}

	::System::Void Method_1_56AAF22972BD1A66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_56AAF22972BD1A66_OFFSET))(this);
	}

	::System::Void Method_1_3AB89638B2A1DC59(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_3AB89638B2A1DC59_OFFSET))(this, a1);
	}

	::System::Void Method_1_8F1CCCF3284F31D5(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_8F1CCCF3284F31D5_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_24ED6289627D7BE7_2(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_24ED6289627D7BE7_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_1_FA70A0DEECDE57B3_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_FA70A0DEECDE57B3_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_C5A70D5838D29031(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_C5A70D5838D29031_OFFSET))(this, a1);
	}

	::System::Void Method_1_4B8EC39B738903FA(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_4B8EC39B738903FA_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_D1EC521D3635C6B8()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_D1EC521D3635C6B8_OFFSET))(this);
	}

	::System::Void Method_1_D69118B7E9BC7C71(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_D69118B7E9BC7C71_OFFSET))(this, a1);
	}

	::System::Void Method_1_F515BE3458EF02E5(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_F515BE3458EF02E5_OFFSET))(this, a1);
	}

	::System::Void Method_1_428BD246F5FAAA99()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_428BD246F5FAAA99_OFFSET))(this);
	}

	::System::Boolean Method_1_86953C79667FC2E6_1(::Class_2_C2DE7756E351C461* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_C2DE7756E351C461*))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_86953C79667FC2E6_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_C5A70D5838D29031_1(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_C5A70D5838D29031_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_C5A70D5838D29031_2(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_C5A70D5838D29031_2_OFFSET))(this, a1);
	}

	static ::System::Single Method_1_AFC4242440B0B88F(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_AFC4242440B0B88F_OFFSET))(a1, a2);
	}

	::System::Void Method_1_3AE8E28E92DB3043(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_3AE8E28E92DB3043_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E70AC8768DC44475(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_E70AC8768DC44475_OFFSET))(this, a1);
	}

	::System::Void Method_1_0BFB2A3110E77938_1(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_0BFB2A3110E77938_1_OFFSET))(this, a1);
	}

	::MoleMole::UIInLevelMonsterHudLevelChildWindowController* Method_1_82076D287B8D69AA(::System::UInt32 a1)
	{
		return ((::MoleMole::UIInLevelMonsterHudLevelChildWindowController*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_82076D287B8D69AA_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_7D41A1A7E79589E1(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_7D41A1A7E79589E1_OFFSET))(this, a1);
	}

	::System::Void Method_1_52CFD3732DF3E71B(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_52CFD3732DF3E71B_OFFSET))(this, a1);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_D718F87D4C3B5CE0(::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_D718F87D4C3B5CE0_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1B466AFE3B0CC1E(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_B1B466AFE3B0CC1E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_937F8473216A3162()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_937F8473216A3162_OFFSET))(this);
	}

	::System::Void Method_1_B5C7B44C609556DB(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_B5C7B44C609556DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_B5C7B44C609556DB_1(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_B5C7B44C609556DB_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_40658F47E42D2173(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_40658F47E42D2173_OFFSET))(this, a1);
	}

	::System::Void Method_1_932E0718231FB60C(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_932E0718231FB60C_OFFSET))(this, a1);
	}

	::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController* Method_1_978E4B25C2114F7E(::System::UInt32 a1)
	{
		return ((::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_978E4B25C2114F7E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0FAF75628D196C2E(::Class_1_9166BD0F741825C9_Enum_3_E8EEFC25995A90B4 a1, ::System::Object* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9166BD0F741825C9_Enum_3_E8EEFC25995A90B4, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_0FAF75628D196C2E_OFFSET))(this, a1, a2);
	}

	static ::System::Single Method_1_AAEF7469B2BD8AAC_1(::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController* a1)
	{
		return ((::System::Single(*)(::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_AAEF7469B2BD8AAC_1_OFFSET))(a1);
	}

	static ::System::Single Method_1_C1A38AFAAFDB336D(::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController* a1)
	{
		return ((::System::Single(*)(::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_C1A38AFAAFDB336D_OFFSET))(a1);
	}

	::System::Void Method_1_4B8EC39B738903FA_1(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_4B8EC39B738903FA_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4D9E1AC61B60D577_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_4D9E1AC61B60D577_1_OFFSET))(this);
	}

	::System::Void Method_1_428BD246F5FAAA99_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_428BD246F5FAAA99_1_OFFSET))(this);
	}

	::System::Void Method_1_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_6E57D3559C10FFA9_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_D27A209C0B63A47C(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_D27A209C0B63A47C_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_5276BB923D9D229E(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_5276BB923D9D229E_OFFSET))(this, a1);
	}

	::System::Void Method_1_8F537CE539CF0103()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_8F537CE539CF0103_OFFSET))(this);
	}

	::System::Void Method_1_5A124CAF1E48B74F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_5A124CAF1E48B74F_OFFSET))(this);
	}

	::System::Void Method_1_7DCDFCEF5043DAD6(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_7DCDFCEF5043DAD6_OFFSET))(this, a1);
	}

	::System::Void Method_1_B184336BB2F50398(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_B184336BB2F50398_OFFSET))(this, a1);
	}

	::System::Void Method_1_7E385430C9550361(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_7E385430C9550361_OFFSET))(this, a1);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_5165A8C8C56BF5C2_2(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_5165A8C8C56BF5C2_2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_86953C79667FC2E6_2(::Class_2_4E92AFC82E302868* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_4E92AFC82E302868*))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_86953C79667FC2E6_2_OFFSET))(this, a1);
	}

	::MoleMole::UIInLevelNPCNameWidgetController* Method_1_681A6CAF30BD6559(::System::UInt32 a1)
	{
		return ((::MoleMole::UIInLevelNPCNameWidgetController*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_681A6CAF30BD6559_OFFSET))(this, a1);
	}

	::System::Void Method_1_352F9E911E9DC66E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_352F9E911E9DC66E_OFFSET))(this, a1);
	}

	::System::Void Method_1_3AE8E28E92DB3043_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_3AE8E28E92DB3043_1_OFFSET))(this, a1, a2);
	}

	static ::System::Single Method_1_C1A38AFAAFDB336D_1(::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController* a1)
	{
		return ((::System::Single(*)(::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_C1A38AFAAFDB336D_1_OFFSET))(a1);
	}

	::System::Void Method_1_87318FF00D6BC7EB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_METHOD_1_87318FF00D6BC7EB_OFFSET))(this);
	}
};
