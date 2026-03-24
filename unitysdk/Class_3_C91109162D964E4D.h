#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"
#include "unitysdk/Class_3_C91109162D964E4D_Enum_3_0BC90814B5E31B96.h"
#include "unitysdk/Class_3_C91109162D964E4D_Enum_3_56325BAC39D5E463.h"
#include "unitysdk/Class_3_C91109162D964E4D_Enum_3_8592CC02CC4A1D4E.h"
#include "unitysdk/Class_3_C91109162D964E4D_Struct_2_05E939B2CEBE19D9.h"
#include "unitysdk/Class_3_C91109162D964E4D_Struct_2_876867655EE47E8B.h"
#include "unitysdk/Class_3_C91109162D964E4D_Struct_2_A4959519EA9800E2.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Struct_2_7A8A61AEC1AE9724.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_B1BEE66E5F9EF706;
class Class_1_D366ED82D8A1F916;
class Class_1_F61BB49F70F7407A;
class Class_2_208CC9941471731A_214;
class Class_2_208CC9941471731A_472;
class Class_2_293B23618CFCC726;
class Class_2_293B23618CFCC726_Class_1_04A718CFB2B0DB18_11;
class Class_2_52E46C711C8C873D;
class Class_2_BA2B2B0A0E98E063;
class Class_2_C806D582A5D61934;
class Class_3_C9173DEF57C38F23;
class Class_3_F61F3C9E55A83BDE;
namespace MoleMole { class UIActivityHotpotEffectBuffedWidgetController; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Battle { class HotpotPhysicsInfo; }
namespace MoleMole::Battle { class HotpotRenderInfo; }
namespace MoleMole::Config { class ConfigHotPotFoodAssets; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class EventArgs; }
namespace System { class Random; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class BoxCollider2D; }
namespace UnityEngine { class CapsuleCollider2D; }
namespace UnityEngine { class CircleCollider2D; }
namespace UnityEngine { class Collider2D; }
namespace UnityEngine { class Transform; }
template <typename T> class Class_1_4109B64C3CE1B638;

#define CLASS_3_C91109162D964E4D_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xB1701D0)
#define CLASS_3_C91109162D964E4D_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xB171840)
#define CLASS_3_C91109162D964E4D_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xB171710)
#define CLASS_3_C91109162D964E4D_METHOD_3_00170A5488D70665_OFFSET UNITYSDK_OFFSET(0xB17AD80)
#define CLASS_3_C91109162D964E4D_METHOD_3_00ECB1907189577E_OFFSET UNITYSDK_OFFSET(0xB17A510)
#define CLASS_3_C91109162D964E4D_METHOD_3_0A4C6FE8D8F138A3_OFFSET UNITYSDK_OFFSET(0x801D1B0)
#define CLASS_3_C91109162D964E4D_METHOD_3_0B6F8EDBF10BF5E4_OFFSET UNITYSDK_OFFSET(0xB174010)
#define CLASS_3_C91109162D964E4D_METHOD_3_0B7E3489D2C0938B_OFFSET UNITYSDK_OFFSET(0xB179FC0)
#define CLASS_3_C91109162D964E4D_METHOD_3_0D8CEA5B4A10354C_OFFSET UNITYSDK_OFFSET(0xB17A760)
#define CLASS_3_C91109162D964E4D_METHOD_3_0F307E58E13616B5_OFFSET UNITYSDK_OFFSET(0x801B9D0)
#define CLASS_3_C91109162D964E4D_METHOD_3_124744AAD96DE3BC_OFFSET UNITYSDK_OFFSET(0xB171F20)
#define CLASS_3_C91109162D964E4D_METHOD_3_132A2FBBBB8FD3A3_OFFSET UNITYSDK_OFFSET(0x801DDA0)
#define CLASS_3_C91109162D964E4D_METHOD_3_1619908D06CDEE3B_OFFSET UNITYSDK_OFFSET(0xB177630)
#define CLASS_3_C91109162D964E4D_METHOD_3_17FC3F8666F0B632_OFFSET UNITYSDK_OFFSET(0xB17CC50)
#define CLASS_3_C91109162D964E4D_METHOD_3_1EEEF19FFE826B2C_OFFSET UNITYSDK_OFFSET(0x801C900)
#define CLASS_3_C91109162D964E4D_METHOD_3_2839AE123F8ECAA7_OFFSET UNITYSDK_OFFSET(0xB17BDE0)
#define CLASS_3_C91109162D964E4D_METHOD_3_3056E83B97B8BEA6_OFFSET UNITYSDK_OFFSET(0x8018FF0)
#define CLASS_3_C91109162D964E4D_METHOD_3_30AE4AE4C92E5C1E_OFFSET UNITYSDK_OFFSET(0x8017FE0)
#define CLASS_3_C91109162D964E4D_METHOD_3_3462F23611337342_OFFSET UNITYSDK_OFFSET(0xB179690)
#define CLASS_3_C91109162D964E4D_METHOD_3_38B41890D067FE00_OFFSET UNITYSDK_OFFSET(0xB173470)
#define CLASS_3_C91109162D964E4D_METHOD_3_3F7D432C99ECDDFB_OFFSET UNITYSDK_OFFSET(0x801A910)
#define CLASS_3_C91109162D964E4D_METHOD_3_47B83CD3792867F5_OFFSET UNITYSDK_OFFSET(0xB17BB30)
#define CLASS_3_C91109162D964E4D_METHOD_3_4DC03FD0B9BE6839_OFFSET UNITYSDK_OFFSET(0x801D0D0)
#define CLASS_3_C91109162D964E4D_METHOD_3_4E1F0EEE7E069A3D_OFFSET UNITYSDK_OFFSET(0xB1759A0)
#define CLASS_3_C91109162D964E4D_METHOD_3_4E622703F04DD6C1_OFFSET UNITYSDK_OFFSET(0x8017CE0)
#define CLASS_3_C91109162D964E4D_METHOD_3_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0xB178560)
#define CLASS_3_C91109162D964E4D_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xB174D80)
#define CLASS_3_C91109162D964E4D_METHOD_3_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0xB17A210)
#define CLASS_3_C91109162D964E4D_METHOD_3_5C95969136A61381_OFFSET UNITYSDK_OFFSET(0x801A970)
#define CLASS_3_C91109162D964E4D_METHOD_3_5D81100E617C9D69_OFFSET UNITYSDK_OFFSET(0xB177D20)
#define CLASS_3_C91109162D964E4D_METHOD_3_61B50550343DF8FF_OFFSET UNITYSDK_OFFSET(0xB17A810)
#define CLASS_3_C91109162D964E4D_METHOD_3_61E2D72C594FD207_OFFSET UNITYSDK_OFFSET(0xB1792E0)
#define CLASS_3_C91109162D964E4D_METHOD_3_64752E993AF7A109_OFFSET UNITYSDK_OFFSET(0xB171E30)
#define CLASS_3_C91109162D964E4D_METHOD_3_64F0C85A431FBD69_1_OFFSET UNITYSDK_OFFSET(0xB170D20)
#define CLASS_3_C91109162D964E4D_METHOD_3_64F0C85A431FBD69_2_OFFSET UNITYSDK_OFFSET(0xB171610)
#define CLASS_3_C91109162D964E4D_METHOD_3_64F0C85A431FBD69_OFFSET UNITYSDK_OFFSET(0xB173550)
#define CLASS_3_C91109162D964E4D_METHOD_3_652F3820D8B242FF_OFFSET UNITYSDK_OFFSET(0x8018990)
#define CLASS_3_C91109162D964E4D_METHOD_3_65FDB28F0A512411_OFFSET UNITYSDK_OFFSET(0xB176BC0)
#define CLASS_3_C91109162D964E4D_METHOD_3_6632971549249DA6_OFFSET UNITYSDK_OFFSET(0xB172C40)
#define CLASS_3_C91109162D964E4D_METHOD_3_683DBC22C8BA1727_OFFSET UNITYSDK_OFFSET(0x801CF00)
#define CLASS_3_C91109162D964E4D_METHOD_3_6B1EC46BEB65F7EE_OFFSET UNITYSDK_OFFSET(0xB17AB00)
#define CLASS_3_C91109162D964E4D_METHOD_3_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0xB174A50)
#define CLASS_3_C91109162D964E4D_METHOD_3_6FAAD22742869553_OFFSET UNITYSDK_OFFSET(0x801D840)
#define CLASS_3_C91109162D964E4D_METHOD_3_702CDECA197C07BB_OFFSET UNITYSDK_OFFSET(0x801E530)
#define CLASS_3_C91109162D964E4D_METHOD_3_70F996834AEFED46_OFFSET UNITYSDK_OFFSET(0xB170E80)
#define CLASS_3_C91109162D964E4D_METHOD_3_724025AF880C2293_OFFSET UNITYSDK_OFFSET(0x801AA80)
#define CLASS_3_C91109162D964E4D_METHOD_3_725111AB239C4EE9_OFFSET UNITYSDK_OFFSET(0xB174DE0)
#define CLASS_3_C91109162D964E4D_METHOD_3_74D7875D35ECD2DC_1_OFFSET UNITYSDK_OFFSET(0x8017540)
#define CLASS_3_C91109162D964E4D_METHOD_3_74D7875D35ECD2DC_OFFSET UNITYSDK_OFFSET(0xB177C60)
#define CLASS_3_C91109162D964E4D_METHOD_3_74FCF152F386E2A4_OFFSET UNITYSDK_OFFSET(0xB175C00)
#define CLASS_3_C91109162D964E4D_METHOD_3_777C630B90A28EF1_1_OFFSET UNITYSDK_OFFSET(0x80190B0)
#define CLASS_3_C91109162D964E4D_METHOD_3_777C630B90A28EF1_OFFSET UNITYSDK_OFFSET(0xB179440)
#define CLASS_3_C91109162D964E4D_METHOD_3_7BD1B56F7314884B_OFFSET UNITYSDK_OFFSET(0xB177E40)
#define CLASS_3_C91109162D964E4D_METHOD_3_7BFF9286B1E75F04_OFFSET UNITYSDK_OFFSET(0x8016E20)
#define CLASS_3_C91109162D964E4D_METHOD_3_7E1BADD1D133FA1C_OFFSET UNITYSDK_OFFSET(0x80177D0)
#define CLASS_3_C91109162D964E4D_METHOD_3_7EAA8879197594BA_OFFSET UNITYSDK_OFFSET(0xB178740)
#define CLASS_3_C91109162D964E4D_METHOD_3_817ADB949107EF96_OFFSET UNITYSDK_OFFSET(0x801A6B0)
#define CLASS_3_C91109162D964E4D_METHOD_3_826B0C06409A827D_OFFSET UNITYSDK_OFFSET(0x801A200)
#define CLASS_3_C91109162D964E4D_METHOD_3_83E91A5059B511D9_OFFSET UNITYSDK_OFFSET(0x801CDA0)
#define CLASS_3_C91109162D964E4D_METHOD_3_879E2012C93F1917_OFFSET UNITYSDK_OFFSET(0x801D920)
#define CLASS_3_C91109162D964E4D_METHOD_3_8C70B114AEDBC85C_OFFSET UNITYSDK_OFFSET(0xB174AC0)
#define CLASS_3_C91109162D964E4D_METHOD_3_8E447DD3187FF293_OFFSET UNITYSDK_OFFSET(0x801C670)
#define CLASS_3_C91109162D964E4D_METHOD_3_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0xB17C8F0)
#define CLASS_3_C91109162D964E4D_METHOD_3_9341AA7EA7999C47_OFFSET UNITYSDK_OFFSET(0x8017220)
#define CLASS_3_C91109162D964E4D_METHOD_3_941C404C800CB723_OFFSET UNITYSDK_OFFSET(0xB173650)
#define CLASS_3_C91109162D964E4D_METHOD_3_964275CC6EF48707_OFFSET UNITYSDK_OFFSET(0xB172FC0)
#define CLASS_3_C91109162D964E4D_METHOD_3_96A53A17AC5D0E93_OFFSET UNITYSDK_OFFSET(0xB175070)
#define CLASS_3_C91109162D964E4D_METHOD_3_98649EB90A9F09D6_OFFSET UNITYSDK_OFFSET(0x801C840)
#define CLASS_3_C91109162D964E4D_METHOD_3_987B592D446BA52D_OFFSET UNITYSDK_OFFSET(0x80175F0)
#define CLASS_3_C91109162D964E4D_METHOD_3_9AC2EB92C1176AF6_OFFSET UNITYSDK_OFFSET(0x8017340)
#define CLASS_3_C91109162D964E4D_METHOD_3_9CC9F3E0C642B5C8_OFFSET UNITYSDK_OFFSET(0xB175A00)
#define CLASS_3_C91109162D964E4D_METHOD_3_9EF64292D3DA5796_OFFSET UNITYSDK_OFFSET(0x801A440)
#define CLASS_3_C91109162D964E4D_METHOD_3_A11144519902A27F_1_OFFSET UNITYSDK_OFFSET(0xB17CBE0)
#define CLASS_3_C91109162D964E4D_METHOD_3_A11144519902A27F_OFFSET UNITYSDK_OFFSET(0xB175930)
#define CLASS_3_C91109162D964E4D_METHOD_3_A23D212841FC2425_OFFSET UNITYSDK_OFFSET(0x8019C50)
#define CLASS_3_C91109162D964E4D_METHOD_3_A249F809E1A7288A_OFFSET UNITYSDK_OFFSET(0xB17B3D0)
#define CLASS_3_C91109162D964E4D_METHOD_3_A3B6A1DDAA93E05E_OFFSET UNITYSDK_OFFSET(0xB174890)
#define CLASS_3_C91109162D964E4D_METHOD_3_A61E7297CCF8BA13_OFFSET UNITYSDK_OFFSET(0xB174250)
#define CLASS_3_C91109162D964E4D_METHOD_3_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x8016A10)
#define CLASS_3_C91109162D964E4D_METHOD_3_AC22C945535424C1_OFFSET UNITYSDK_OFFSET(0xB176920)
#define CLASS_3_C91109162D964E4D_METHOD_3_AC30ECD2A25FCA9B_OFFSET UNITYSDK_OFFSET(0xB172D00)
#define CLASS_3_C91109162D964E4D_METHOD_3_AC66933F678486A9_OFFSET UNITYSDK_OFFSET(0xB175710)
#define CLASS_3_C91109162D964E4D_METHOD_3_AE43D8497D68FDD5_OFFSET UNITYSDK_OFFSET(0x8018CC0)
#define CLASS_3_C91109162D964E4D_METHOD_3_AEE4AA7933DF37CD_OFFSET UNITYSDK_OFFSET(0x801E5C0)
#define CLASS_3_C91109162D964E4D_METHOD_3_B247C6D88E785B91_OFFSET UNITYSDK_OFFSET(0xB178B70)
#define CLASS_3_C91109162D964E4D_METHOD_3_B2D76D5F1EC1D96A_OFFSET UNITYSDK_OFFSET(0xB17CEB0)
#define CLASS_3_C91109162D964E4D_METHOD_3_B5C1C87629BA3DD3_OFFSET UNITYSDK_OFFSET(0x80178F0)
#define CLASS_3_C91109162D964E4D_METHOD_3_B63471E4A401E3B7_OFFSET UNITYSDK_OFFSET(0xB17AA40)
#define CLASS_3_C91109162D964E4D_METHOD_3_B94BF5E8516663DD_OFFSET UNITYSDK_OFFSET(0xB1752B0)
#define CLASS_3_C91109162D964E4D_METHOD_3_BAD4BD6FCA2B0877_OFFSET UNITYSDK_OFFSET(0xB17B5B0)
#define CLASS_3_C91109162D964E4D_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x801CA90)
#define CLASS_3_C91109162D964E4D_METHOD_3_BFC993DCA65EFAE8_OFFSET UNITYSDK_OFFSET(0xB178EF0)
#define CLASS_3_C91109162D964E4D_METHOD_3_C4FF64FE80C6B13F_OFFSET UNITYSDK_OFFSET(0xB175F10)
#define CLASS_3_C91109162D964E4D_METHOD_3_C97F1DF1BCE94A44_1_OFFSET UNITYSDK_OFFSET(0x801A770)
#define CLASS_3_C91109162D964E4D_METHOD_3_C97F1DF1BCE94A44_OFFSET UNITYSDK_OFFSET(0xB172E20)
#define CLASS_3_C91109162D964E4D_METHOD_3_C9A3013DD208C696_OFFSET UNITYSDK_OFFSET(0x80170A0)
#define CLASS_3_C91109162D964E4D_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xB172DC0)
#define CLASS_3_C91109162D964E4D_METHOD_3_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xB177DE0)
#define CLASS_3_C91109162D964E4D_METHOD_3_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0xB17A700)
#define CLASS_3_C91109162D964E4D_METHOD_3_CA373AA1C7054598_4_OFFSET UNITYSDK_OFFSET(0x801AA20)
#define CLASS_3_C91109162D964E4D_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB171BD0)
#define CLASS_3_C91109162D964E4D_METHOD_3_CD9F3CEFB366C27A_OFFSET UNITYSDK_OFFSET(0xB1797F0)
#define CLASS_3_C91109162D964E4D_METHOD_3_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0xB170E20)
#define CLASS_3_C91109162D964E4D_METHOD_3_CFC954823788397E_OFFSET UNITYSDK_OFFSET(0xB175360)
#define CLASS_3_C91109162D964E4D_METHOD_3_D2121F48ED54ABB6_OFFSET UNITYSDK_OFFSET(0x8016BD0)
#define CLASS_3_C91109162D964E4D_METHOD_3_D2DF0053C495B738_OFFSET UNITYSDK_OFFSET(0xB1775A0)
#define CLASS_3_C91109162D964E4D_METHOD_3_D339EFAB24ED44B0_OFFSET UNITYSDK_OFFSET(0x8017680)
#define CLASS_3_C91109162D964E4D_METHOD_3_D6D92909C8F827F0_OFFSET UNITYSDK_OFFSET(0x801A600)
#define CLASS_3_C91109162D964E4D_METHOD_3_D737CD2779D51A4E_OFFSET UNITYSDK_OFFSET(0x80187D0)
#define CLASS_3_C91109162D964E4D_METHOD_3_DA8ACD7B7323FEB7_OFFSET UNITYSDK_OFFSET(0xB173740)
#define CLASS_3_C91109162D964E4D_METHOD_3_DB7BD8EACD2D166A_OFFSET UNITYSDK_OFFSET(0xB174610)
#define CLASS_3_C91109162D964E4D_METHOD_3_DC2E80477583A303_OFFSET UNITYSDK_OFFSET(0xB17BA40)
#define CLASS_3_C91109162D964E4D_METHOD_3_DDFCBBB54CA12CE0_OFFSET UNITYSDK_OFFSET(0x8019460)
#define CLASS_3_C91109162D964E4D_METHOD_3_DEC92D06880D5E09_OFFSET UNITYSDK_OFFSET(0x8018B50)
#define CLASS_3_C91109162D964E4D_METHOD_3_DFDC8B0EF9883FD8_OFFSET UNITYSDK_OFFSET(0xB17B320)
#define CLASS_3_C91109162D964E4D_METHOD_3_E092AC7ED11C0DBF_OFFSET UNITYSDK_OFFSET(0xB179E10)
#define CLASS_3_C91109162D964E4D_METHOD_3_E1B55979C5E1BF33_OFFSET UNITYSDK_OFFSET(0xB1783E0)
#define CLASS_3_C91109162D964E4D_METHOD_3_E4EA5D095E8D26A9_OFFSET UNITYSDK_OFFSET(0xB176B00)
#define CLASS_3_C91109162D964E4D_METHOD_3_E97AC7B8F06B8C3E_OFFSET UNITYSDK_OFFSET(0x801B2B0)
#define CLASS_3_C91109162D964E4D_METHOD_3_EA43F6819D80AF48_OFFSET UNITYSDK_OFFSET(0xB171C30)
#define CLASS_3_C91109162D964E4D_METHOD_3_EA4A1D68431875A1_OFFSET UNITYSDK_OFFSET(0xB17B1C0)
#define CLASS_3_C91109162D964E4D_METHOD_3_EA52B45B191A9DEC_OFFSET UNITYSDK_OFFSET(0xB174790)
#define CLASS_3_C91109162D964E4D_METHOD_3_EDCFFB2BBC7E8517_OFFSET UNITYSDK_OFFSET(0xB17C640)
#define CLASS_3_C91109162D964E4D_METHOD_3_F10284D62B4E7B0F_OFFSET UNITYSDK_OFFSET(0x801B370)
#define CLASS_3_C91109162D964E4D_METHOD_3_F3B09FE33AF4636A_OFFSET UNITYSDK_OFFSET(0xB176440)
#define CLASS_3_C91109162D964E4D_METHOD_3_F4DD08A31BA3F883_OFFSET UNITYSDK_OFFSET(0xB176FE0)
#define CLASS_3_C91109162D964E4D_METHOD_3_F54DE4640CE99063_OFFSET UNITYSDK_OFFSET(0xB176A70)
#define CLASS_3_C91109162D964E4D_METHOD_3_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0xB1756A0)
#define CLASS_3_C91109162D964E4D_METHOD_3_F6EBFF91130D3379_OFFSET UNITYSDK_OFFSET(0x8017990)
#define CLASS_3_C91109162D964E4D_METHOD_3_F7D4F0C8269A0DEF_OFFSET UNITYSDK_OFFSET(0x801CB00)
#define CLASS_3_C91109162D964E4D_METHOD_3_F9793AC0D3DC7FB0_OFFSET UNITYSDK_OFFSET(0xB1777E0)
#define CLASS_3_C91109162D964E4D_METHOD_3_FA9DA6297AFC8DEF_OFFSET UNITYSDK_OFFSET(0xB175D90)
#define CLASS_3_C91109162D964E4D_METHOD_3_FE4FFF99CBDC5C59_1_OFFSET UNITYSDK_OFFSET(0x8016D70)
#define CLASS_3_C91109162D964E4D_METHOD_3_FE4FFF99CBDC5C59_OFFSET UNITYSDK_OFFSET(0x8018AA0)
#define CLASS_3_C91109162D964E4D_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB16FFB0)
#define CLASS_3_C91109162D964E4D_START_OFFSET UNITYSDK_OFFSET(0xB16FD80)
#define CLASS_3_C91109162D964E4D_UPDATE_OFFSET UNITYSDK_OFFSET(0xB170550)
#define CLASS_3_C91109162D964E4D__CCTOR_OFFSET UNITYSDK_OFFSET(0xB171A90)
#define CLASS_3_C91109162D964E4D__CTOR_OFFSET UNITYSDK_OFFSET(0xB171A70)

inline static constexpr unsigned int Class_3_C91109162D964E4D_TypeDefinitionIndex = 50792;

class Class_3_C91109162D964E4D : public ::Class_2_F33340E023067DAF
{
public:
	static ::System::Collections::Generic::Dictionary_2<::Class_3_F61F3C9E55A83BDE*, ::System::Boolean>** StaticGet_Field_3_8()
	{
		return (::System::Collections::Generic::Dictionary_2<::Class_3_F61F3C9E55A83BDE*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_C91109162D964E4D_TypeDefinitionIndex)->GetStaticField(0x2BD00);
	}
	static ::MoleMole::Battle::Entity** StaticGet_Field_3_2()
	{
		return (::MoleMole::Battle::Entity**)Il2CppClass::FromTypeDefinitionIndex(Class_3_C91109162D964E4D_TypeDefinitionIndex)->GetStaticField(0x2BD08);
	}
	static ::System::String** StaticGet_Field_3_16()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_3_C91109162D964E4D_TypeDefinitionIndex)->GetStaticField(0x2BD10);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::Vector2>** StaticGet_Field_3_11()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_C91109162D964E4D_TypeDefinitionIndex)->GetStaticField(0x2BD18);
	}
	static ::System::Collections::Generic::Dictionary_2<::Class_3_F61F3C9E55A83BDE*, ::System::Boolean>** StaticGet_Field_3_9()
	{
		return (::System::Collections::Generic::Dictionary_2<::Class_3_F61F3C9E55A83BDE*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_C91109162D964E4D_TypeDefinitionIndex)->GetStaticField(0x2BD20);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::Vector2>** StaticGet_Field_3_22()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_C91109162D964E4D_TypeDefinitionIndex)->GetStaticField(0x2BD28);
	}
	static ::System::Collections::Generic::List_1<::Class_3_C91109162D964E4D_Struct_2_A4959519EA9800E2>** StaticGet_Field_3_15()
	{
		return (::System::Collections::Generic::List_1<::Class_3_C91109162D964E4D_Struct_2_A4959519EA9800E2>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_C91109162D964E4D_TypeDefinitionIndex)->GetStaticField(0x2BD30);
	}
	static ::System::Single* StaticGet_Field_3_3()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_C91109162D964E4D_TypeDefinitionIndex)->GetStaticField(0x9A10);
	}
	static ::System::Int32* StaticGet_Field_3_13()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_C91109162D964E4D_TypeDefinitionIndex)->GetStaticField(0x9A14);
	}
	static ::System::Boolean* StaticGet_Field_3_5()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_C91109162D964E4D_TypeDefinitionIndex)->GetStaticField(0x9A18);
	}
	static ::System::Boolean* StaticGet_Field_3_7()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_C91109162D964E4D_TypeDefinitionIndex)->GetStaticField(0x9A19);
	}
	static ::System::Single* StaticGet_Field_3_4()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_C91109162D964E4D_TypeDefinitionIndex)->GetStaticField(0x9A1C);
	}
	static ::System::Single* StaticGet_Field_3_6()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_C91109162D964E4D_TypeDefinitionIndex)->GetStaticField(0x9A20);
	}
	static ::System::Int32* StaticGet_Field_3_14()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_C91109162D964E4D_TypeDefinitionIndex)->GetStaticField(0x9A24);
	}
	// static const ::System::Int32 Field_3_0 = 0x3; // 0x0
	// static const ::Class_3_C91109162D964E4D_Enum_3_0BC90814B5E31B96 Field_3_10; // 0x0
	// static const ::System::Int32 Field_3_12 = 0xC8; // 0x0
	// static const ::System::Single Field_3_17; // 0x0
	// static const ::System::Single Field_3_18; // 0x0
	// static const ::System::Single Field_3_19; // 0x0
	// static const ::System::Single Field_3_20; // 0x0
	// static const ::System::Int32 Field_3_21 = 0x7FFFFFFF; // 0x0
	// static const ::System::String* Field_3_23; // 0x0
	// static const ::System::String* Field_3_24; // 0x0
	// static const ::System::String* Field_3_25; // 0x0
	// static const ::System::String* Field_3_26; // 0x0
	// static const ::System::String* Field_3_27; // 0x0
	// static const ::System::String* Field_3_28; // 0x0
	// static const ::System::String* Field_3_29; // 0x0
	// static const ::System::String* Field_3_30; // 0x0
	::Nap::NapECS::EcsFilter* Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D__CCTOR_OFFSET))();
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_START_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_ONDESTROY_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_UPDATE_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_LATEUPDATE_OFFSET))(this);
	}

	::System::Void FixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_FIXEDUPDATE_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Boolean Method_3_EA43F6819D80AF48()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_EA43F6819D80AF48_OFFSET))();
	}

	static ::MoleMole::Battle::Entity* Method_3_124744AAD96DE3BC(::Class_3_C91109162D964E4D_Struct_2_876867655EE47E8B a1)
	{
		return ((::MoleMole::Battle::Entity*(*)(::Class_3_C91109162D964E4D_Struct_2_876867655EE47E8B))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_124744AAD96DE3BC_OFFSET))(a1);
	}

	static ::System::Void Method_3_AC30ECD2A25FCA9B(::System::Action_1<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_AC30ECD2A25FCA9B_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	static ::System::Void Method_3_C97F1DF1BCE94A44(::Class_2_BA2B2B0A0E98E063* a1)
	{
		return ((::System::Void(*)(::Class_2_BA2B2B0A0E98E063*))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_C97F1DF1BCE94A44_OFFSET))(a1);
	}

	static ::System::Void Method_3_964275CC6EF48707(::UnityEngine::CircleCollider2D* a1)
	{
		return ((::System::Void(*)(::UnityEngine::CircleCollider2D*))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_964275CC6EF48707_OFFSET))(a1);
	}

	static ::System::Int32 Method_3_64752E993AF7A109()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_64752E993AF7A109_OFFSET))();
	}

	static ::System::Boolean Method_3_64F0C85A431FBD69()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_64F0C85A431FBD69_OFFSET))();
	}

	static ::Class_1_B1BEE66E5F9EF706* Method_3_6632971549249DA6()
	{
		return ((::Class_1_B1BEE66E5F9EF706*(*)())((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_6632971549249DA6_OFFSET))();
	}

	static ::System::Void Method_3_941C404C800CB723(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_941C404C800CB723_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::System::Int32>* Method_3_DA8ACD7B7323FEB7(::Class_2_208CC9941471731A_472* a1, ::System::Int32 a2, ::System::Func_2<::System::Int32, ::System::Boolean>* a3)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::Class_2_208CC9941471731A_472*, ::System::Int32, ::System::Func_2<::System::Int32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_DA8ACD7B7323FEB7_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_0B6F8EDBF10BF5E4(::System::Action_1<::MoleMole::Battle::Entity*>* a1)
	{
		return ((::System::Void(*)(::System::Action_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_0B6F8EDBF10BF5E4_OFFSET))(a1);
	}

	static ::System::Void Method_3_A61E7297CCF8BA13(::Class_2_BA2B2B0A0E98E063* a1, ::Class_1_D366ED82D8A1F916* a2, ::Struct_2_7A8A61AEC1AE9724& a3)
	{
		return ((::System::Void(*)(::Class_2_BA2B2B0A0E98E063*, ::Class_1_D366ED82D8A1F916*, ::Struct_2_7A8A61AEC1AE9724&))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_A61E7297CCF8BA13_OFFSET))(a1, a2, a3);
	}

	static ::MoleMole::Config::ConfigHotPotFoodAssets* Method_3_EA52B45B191A9DEC()
	{
		return ((::MoleMole::Config::ConfigHotPotFoodAssets*(*)())((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_EA52B45B191A9DEC_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* Method_3_A3B6A1DDAA93E05E(::Class_3_F61F3C9E55A83BDE* a1)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector2>*(*)(::Class_3_F61F3C9E55A83BDE*))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_A3B6A1DDAA93E05E_OFFSET))(a1);
	}

	::System::Void Method_3_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_6E57D3559C10FFA9_OFFSET))(this, a1);
	}

	static ::System::Single Method_3_8C70B114AEDBC85C(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::System::Single(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_8C70B114AEDBC85C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_5790A55946AA509D_OFFSET))();
	}

	static ::System::Void Method_3_725111AB239C4EE9(::System::Collections::Generic::List_1<::Class_3_F61F3C9E55A83BDE*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_3_F61F3C9E55A83BDE*>*))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_725111AB239C4EE9_OFFSET))(a1);
	}

	static ::MoleMole::UIActivityHotpotEffectBuffedWidgetController* Method_3_DB7BD8EACD2D166A(::MoleMole::UIBaseController* a1, ::UnityEngine::Transform* a2, ::System::Boolean a3)
	{
		return ((::MoleMole::UIActivityHotpotEffectBuffedWidgetController*(*)(::MoleMole::UIBaseController*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_DB7BD8EACD2D166A_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_70F996834AEFED46(::System::Single a1)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_70F996834AEFED46_OFFSET))(a1);
	}

	static ::System::Void Method_3_96A53A17AC5D0E93()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_96A53A17AC5D0E93_OFFSET))();
	}

	static ::Cysharp::Threading::Tasks::UniTask_1<::Class_3_C91109162D964E4D_Struct_2_05E939B2CEBE19D9> Method_3_B94BF5E8516663DD()
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::Class_3_C91109162D964E4D_Struct_2_05E939B2CEBE19D9>(*)())((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_B94BF5E8516663DD_OFFSET))();
	}

	static ::System::Int32 Method_3_CFC954823788397E(::Class_3_C91109162D964E4D_Enum_3_56325BAC39D5E463 a1)
	{
		return ((::System::Int32(*)(::Class_3_C91109162D964E4D_Enum_3_56325BAC39D5E463))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_CFC954823788397E_OFFSET))(a1);
	}

	static ::Class_1_4109B64C3CE1B638<::System::UInt32>* Method_3_AC66933F678486A9()
	{
		return ((::Class_1_4109B64C3CE1B638<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_AC66933F678486A9_OFFSET))();
	}

	::System::Void Method_3_A11144519902A27F(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_A11144519902A27F_OFFSET))(this, a1);
	}

	static ::Class_1_4109B64C3CE1B638<::System::UInt32>* Method_3_4E1F0EEE7E069A3D()
	{
		return ((::Class_1_4109B64C3CE1B638<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_4E1F0EEE7E069A3D_OFFSET))();
	}

	static ::System::Boolean Method_3_9CC9F3E0C642B5C8(::Class_2_C806D582A5D61934* a1, ::Class_2_C806D582A5D61934*& a2)
	{
		return ((::System::Boolean(*)(::Class_2_C806D582A5D61934*, ::Class_2_C806D582A5D61934*&))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_9CC9F3E0C642B5C8_OFFSET))(a1, a2);
	}

	static ::MoleMole::Battle::Entity* Method_3_74FCF152F386E2A4(::MoleMole::Battle::Entity* a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::MoleMole::Battle::Entity*(*)(::MoleMole::Battle::Entity*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_74FCF152F386E2A4_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_64F0C85A431FBD69_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_64F0C85A431FBD69_1_OFFSET))();
	}

	static ::MoleMole::Battle::Entity* Method_3_FA9DA6297AFC8DEF(::MoleMole::Battle::Entity* a1)
	{
		return ((::MoleMole::Battle::Entity*(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_FA9DA6297AFC8DEF_OFFSET))(a1);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Method_3_C4FF64FE80C6B13F()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)())((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_C4FF64FE80C6B13F_OFFSET))();
	}

	static ::System::Int32 Method_3_F54DE4640CE99063(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_F54DE4640CE99063_OFFSET))(a1);
	}

	static ::System::Void Method_3_E4EA5D095E8D26A9(::System::Action_4<::MoleMole::Battle::Entity*, ::System::Boolean, ::System::Single, ::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::System::Action_4<::MoleMole::Battle::Entity*, ::System::Boolean, ::System::Single, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_E4EA5D095E8D26A9_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* Method_3_65FDB28F0A512411()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector2>*(*)())((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_65FDB28F0A512411_OFFSET))();
	}

	static ::System::Boolean Method_3_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_CE34EA208837238D_OFFSET))();
	}

	static ::System::Void Method_3_F4DD08A31BA3F883()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_F4DD08A31BA3F883_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Method_3_D2DF0053C495B738(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_D2DF0053C495B738_OFFSET))(a1);
	}

	static ::Class_2_BA2B2B0A0E98E063* Method_3_1619908D06CDEE3B(::Class_2_BA2B2B0A0E98E063* a1)
	{
		return ((::Class_2_BA2B2B0A0E98E063*(*)(::Class_2_BA2B2B0A0E98E063*))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_1619908D06CDEE3B_OFFSET))(a1);
	}

	static ::System::Void Method_3_F9793AC0D3DC7FB0(::System::Collections::Generic::List_1<::Class_3_C91109162D964E4D_Struct_2_876867655EE47E8B>* a1, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*& a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_3_C91109162D964E4D_Struct_2_876867655EE47E8B>*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*&))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_F9793AC0D3DC7FB0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_74D7875D35ECD2DC(::System::Action_1<::MoleMole::Battle::Entity*>* a1)
	{
		return ((::System::Void(*)(::System::Action_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_74D7875D35ECD2DC_OFFSET))(a1);
	}

	static ::System::Void Method_3_5D81100E617C9D69(::MoleMole::Battle::HotpotRenderInfo* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::HotpotRenderInfo*))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_5D81100E617C9D69_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_CA373AA1C7054598_2_OFFSET))(this);
	}

	static ::System::Void Method_3_7BD1B56F7314884B(::Class_3_F61F3C9E55A83BDE* a1)
	{
		return ((::System::Void(*)(::Class_3_F61F3C9E55A83BDE*))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_7BD1B56F7314884B_OFFSET))(a1);
	}

	static ::System::Void Method_3_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_4EA6B1791DACA9CC_OFFSET))();
	}

	static ::System::Void Method_3_7EAA8879197594BA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_7EAA8879197594BA_OFFSET))();
	}

	static ::System::Void Method_3_B247C6D88E785B91()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_B247C6D88E785B91_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::System::Int32>* Method_3_BFC993DCA65EFAE8(::System::Int32 a1, ::System::Func_2<::System::Int32, ::System::Boolean>* a2)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::System::Int32, ::System::Func_2<::System::Int32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_BFC993DCA65EFAE8_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector2 Method_3_61E2D72C594FD207(::UnityEngine::CapsuleCollider2D* a1)
	{
		return ((::UnityEngine::Vector2(*)(::UnityEngine::CapsuleCollider2D*))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_61E2D72C594FD207_OFFSET))(a1);
	}

	static ::System::Void Method_3_777C630B90A28EF1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_777C630B90A28EF1_OFFSET))();
	}

	static ::UnityEngine::Vector2 Method_3_3462F23611337342(::UnityEngine::CircleCollider2D* a1)
	{
		return ((::UnityEngine::Vector2(*)(::UnityEngine::CircleCollider2D*))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_3462F23611337342_OFFSET))(a1);
	}

	static ::System::Void Method_3_CD9F3CEFB366C27A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_CD9F3CEFB366C27A_OFFSET))();
	}

	static ::UnityEngine::Vector2 Method_3_E1B55979C5E1BF33(::UnityEngine::Vector2 a1)
	{
		return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_E1B55979C5E1BF33_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_E092AC7ED11C0DBF(::System::Func_2<::UnityEngine::Vector2, ::System::Boolean>* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*& a3)
	{
		return ((::System::Boolean(*)(::System::Func_2<::UnityEngine::Vector2, ::System::Boolean>*, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*&))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_E092AC7ED11C0DBF_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_0B7E3489D2C0938B()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_0B7E3489D2C0938B_OFFSET))();
	}

	static ::System::Void Method_3_5A124CAF1E48B74F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_5A124CAF1E48B74F_OFFSET))();
	}

	static ::System::Void Method_3_00ECB1907189577E(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_00ECB1907189577E_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_CA373AA1C7054598_3_OFFSET))(this);
	}

	static ::System::Single Method_3_38B41890D067FE00(::UnityEngine::CircleCollider2D* a1)
	{
		return ((::System::Single(*)(::UnityEngine::CircleCollider2D*))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_38B41890D067FE00_OFFSET))(a1);
	}

	static ::System::Void Method_3_0D8CEA5B4A10354C(::System::Action_2<::System::Single, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::System::Action_2<::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_0D8CEA5B4A10354C_OFFSET))(a1);
	}

	static ::System::Void Method_3_61B50550343DF8FF(::MoleMole::Battle::Entity* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_61B50550343DF8FF_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* Method_3_B63471E4A401E3B7()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector2>*(*)())((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_B63471E4A401E3B7_OFFSET))();
	}

	static ::UnityEngine::Vector2 Method_3_6B1EC46BEB65F7EE(::UnityEngine::Vector2 a1)
	{
		return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_6B1EC46BEB65F7EE_OFFSET))(a1);
	}

	static ::System::Collections::Generic::IEnumerable_1<::Class_3_F61F3C9E55A83BDE*>* Method_3_F3B09FE33AF4636A(::Class_3_C91109162D964E4D_Enum_3_8592CC02CC4A1D4E a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_3_F61F3C9E55A83BDE*>*(*)(::Class_3_C91109162D964E4D_Enum_3_8592CC02CC4A1D4E))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_F3B09FE33AF4636A_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::System::Int32>* Method_3_00170A5488D70665(::Class_2_208CC9941471731A_472* a1, ::System::Int32 a2, ::System::Func_2<::System::Int32, ::System::Boolean>* a3)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::Class_2_208CC9941471731A_472*, ::System::Int32, ::System::Func_2<::System::Int32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_00170A5488D70665_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector2 Method_3_EA4A1D68431875A1(::UnityEngine::BoxCollider2D* a1)
	{
		return ((::UnityEngine::Vector2(*)(::UnityEngine::BoxCollider2D*))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_EA4A1D68431875A1_OFFSET))(a1);
	}

	static ::System::Int32 Method_3_DFDC8B0EF9883FD8()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_DFDC8B0EF9883FD8_OFFSET))();
	}

	static ::System::Void Method_3_A249F809E1A7288A(::Class_2_208CC9941471731A_472* a1, ::MoleMole::Battle::HotpotPhysicsInfo* a2, ::System::Collections::Generic::List_1<::Class_3_C91109162D964E4D_Struct_2_876867655EE47E8B>* a3, ::MoleMole::Battle::HotpotRenderInfo* a4, ::UnityEngine::AnimationCurve* a5, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*& a6)
	{
		return ((::System::Void(*)(::Class_2_208CC9941471731A_472*, ::MoleMole::Battle::HotpotPhysicsInfo*, ::System::Collections::Generic::List_1<::Class_3_C91109162D964E4D_Struct_2_876867655EE47E8B>*, ::MoleMole::Battle::HotpotRenderInfo*, ::UnityEngine::AnimationCurve*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*&))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_A249F809E1A7288A_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Int32 Method_3_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_F5599B7DA8E7E53C_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::System::Int32>* Method_3_BAD4BD6FCA2B0877()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)())((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_BAD4BD6FCA2B0877_OFFSET))();
	}

	static ::System::Void Method_3_DC2E80477583A303(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_DC2E80477583A303_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::Class_2_52E46C711C8C873D*>* Method_3_47B83CD3792867F5(::Class_1_D366ED82D8A1F916* a1, ::System::Collections::Generic::List_1<::Class_2_52E46C711C8C873D*>* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_52E46C711C8C873D*>*(*)(::Class_1_D366ED82D8A1F916*, ::System::Collections::Generic::List_1<::Class_2_52E46C711C8C873D*>*))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_47B83CD3792867F5_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_64F0C85A431FBD69_2()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_64F0C85A431FBD69_2_OFFSET))();
	}

	static ::System::Single Method_3_AC22C945535424C1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Single(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_AC22C945535424C1_OFFSET))(a1);
	}

	static ::System::Void Method_3_2839AE123F8ECAA7()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_2839AE123F8ECAA7_OFFSET))();
	}

	static ::System::Single Method_3_EDCFFB2BBC7E8517(::Class_3_F61F3C9E55A83BDE* a1)
	{
		return ((::System::Single(*)(::Class_3_F61F3C9E55A83BDE*))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_EDCFFB2BBC7E8517_OFFSET))(a1);
	}

	static ::System::Void Method_3_8F7825DAFFB9B517()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_8F7825DAFFB9B517_OFFSET))();
	}

	::System::Void Method_3_A11144519902A27F_1(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_A11144519902A27F_1_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_17FC3F8666F0B632(::System::Collections::Generic::List_1<::Class_3_F61F3C9E55A83BDE*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_3_F61F3C9E55A83BDE*>*))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_17FC3F8666F0B632_OFFSET))(a1);
	}

	static ::System::Void Method_3_B2D76D5F1EC1D96A(::Class_2_BA2B2B0A0E98E063* a1)
	{
		return ((::System::Void(*)(::Class_2_BA2B2B0A0E98E063*))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_B2D76D5F1EC1D96A_OFFSET))(a1);
	}

	static ::System::Void Method_3_AA169839CB93802A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_AA169839CB93802A_OFFSET))();
	}

	static ::UnityEngine::Transform* Method_3_7BFF9286B1E75F04(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::UnityEngine::Transform*(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_7BFF9286B1E75F04_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C9A3013DD208C696()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_C9A3013DD208C696_OFFSET))();
	}

	static ::System::Boolean Method_3_9341AA7EA7999C47(::UnityEngine::Collider2D* a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::Collider2D*))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_9341AA7EA7999C47_OFFSET))(a1);
	}

	static ::System::Void Method_3_9AC2EB92C1176AF6(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_9AC2EB92C1176AF6_OFFSET))(a1);
	}

	static ::System::Void Method_3_74D7875D35ECD2DC_1(::System::Action_1<::MoleMole::Battle::Entity*>* a1)
	{
		return ((::System::Void(*)(::System::Action_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_74D7875D35ECD2DC_1_OFFSET))(a1);
	}

	static ::System::Void Method_3_987B592D446BA52D(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_987B592D446BA52D_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_D339EFAB24ED44B0()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_D339EFAB24ED44B0_OFFSET))();
	}

	static ::System::Void Method_3_7E1BADD1D133FA1C()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_7E1BADD1D133FA1C_OFFSET))();
	}

	static ::System::Boolean Method_3_B5C1C87629BA3DD3(::UnityEngine::Bounds a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Bounds, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_B5C1C87629BA3DD3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_F6EBFF91130D3379(::System::Collections::Generic::List_1<::Class_3_C91109162D964E4D_Struct_2_876867655EE47E8B>* a1, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*& a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_3_C91109162D964E4D_Struct_2_876867655EE47E8B>*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*&))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_F6EBFF91130D3379_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_30AE4AE4C92E5C1E(::Class_2_208CC9941471731A_472* a1, ::MoleMole::Battle::HotpotPhysicsInfo* a2)
	{
		return ((::System::Void(*)(::Class_2_208CC9941471731A_472*, ::MoleMole::Battle::HotpotPhysicsInfo*))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_30AE4AE4C92E5C1E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_652F3820D8B242FF()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_652F3820D8B242FF_OFFSET))();
	}

	static ::System::Void Method_3_4E622703F04DD6C1(::System::Collections::Generic::List_1<::Class_3_F61F3C9E55A83BDE*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_3_F61F3C9E55A83BDE*>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_4E622703F04DD6C1_OFFSET))(a1, a2);
	}

	static ::Cysharp::Threading::Tasks::UniTask Method_3_FE4FFF99CBDC5C59()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)())((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_FE4FFF99CBDC5C59_OFFSET))();
	}

	static ::System::Single Method_3_DEC92D06880D5E09(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Single(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_DEC92D06880D5E09_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_AE43D8497D68FDD5(::UnityEngine::Vector2 a1, ::UnityEngine::CircleCollider2D* a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::CircleCollider2D*))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_AE43D8497D68FDD5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_3056E83B97B8BEA6(::MoleMole::Battle::HotpotPhysicsInfo* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::HotpotPhysicsInfo*))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_3056E83B97B8BEA6_OFFSET))(a1);
	}

	static ::System::Void Method_3_777C630B90A28EF1_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_777C630B90A28EF1_1_OFFSET))();
	}

	static ::System::Void Method_3_DDFCBBB54CA12CE0()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_DDFCBBB54CA12CE0_OFFSET))();
	}

	static ::Class_2_293B23618CFCC726_Class_1_04A718CFB2B0DB18_11* Method_3_826B0C06409A827D(::System::Int32 a1)
	{
		return ((::Class_2_293B23618CFCC726_Class_1_04A718CFB2B0DB18_11*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_826B0C06409A827D_OFFSET))(a1);
	}

	static ::System::Void Method_3_9EF64292D3DA5796(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_9EF64292D3DA5796_OFFSET))(a1);
	}

	static ::System::Random* Method_3_D6D92909C8F827F0()
	{
		return ((::System::Random*(*)())((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_D6D92909C8F827F0_OFFSET))();
	}

	static ::System::Void Method_3_817ADB949107EF96(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_817ADB949107EF96_OFFSET))(a1);
	}

	static ::System::Void Method_3_C97F1DF1BCE94A44_1(::Class_2_BA2B2B0A0E98E063* a1)
	{
		return ((::System::Void(*)(::Class_2_BA2B2B0A0E98E063*))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_C97F1DF1BCE94A44_1_OFFSET))(a1);
	}

	static ::System::Void Method_3_3F7D432C99ECDDFB(::Class_2_BA2B2B0A0E98E063* a1)
	{
		return ((::System::Void(*)(::Class_2_BA2B2B0A0E98E063*))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_3F7D432C99ECDDFB_OFFSET))(a1);
	}

	static ::System::Int32 Method_3_5C95969136A61381(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Int32(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_5C95969136A61381_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_CA373AA1C7054598_4_OFFSET))(this);
	}

	static ::System::Void Method_3_724025AF880C2293()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_724025AF880C2293_OFFSET))();
	}

	static ::Class_2_293B23618CFCC726* Method_3_E97AC7B8F06B8C3E()
	{
		return ((::Class_2_293B23618CFCC726*(*)())((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_E97AC7B8F06B8C3E_OFFSET))();
	}

	static ::Cysharp::Threading::Tasks::UniTask Method_3_FE4FFF99CBDC5C59_1()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)())((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_FE4FFF99CBDC5C59_1_OFFSET))();
	}

	static ::System::Void Method_3_F10284D62B4E7B0F(::System::Collections::Generic::List_1<::Class_3_F61F3C9E55A83BDE*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_3_F61F3C9E55A83BDE*>*))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_F10284D62B4E7B0F_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_A23D212841FC2425(::System::Single a1, ::UnityEngine::Vector2& a2)
	{
		return ((::System::Boolean(*)(::System::Single, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_A23D212841FC2425_OFFSET))(a1, a2);
	}

	static ::MoleMole::Battle::Entity* Method_3_0F307E58E13616B5(::MoleMole::Battle::Entity* a1, ::Class_2_C806D582A5D61934* a2, ::System::Boolean a3)
	{
		return ((::MoleMole::Battle::Entity*(*)(::MoleMole::Battle::Entity*, ::Class_2_C806D582A5D61934*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_0F307E58E13616B5_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector2 Method_3_8E447DD3187FF293(::UnityEngine::Collider2D* a1)
	{
		return ((::UnityEngine::Vector2(*)(::UnityEngine::Collider2D*))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_8E447DD3187FF293_OFFSET))(a1);
	}

	static ::System::Void Method_3_98649EB90A9F09D6(::System::Action_2<::MoleMole::Battle::Entity*, ::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::System::Action_2<::MoleMole::Battle::Entity*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_98649EB90A9F09D6_OFFSET))(a1);
	}

	static ::System::Void Method_3_1EEEF19FFE826B2C(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_1EEEF19FFE826B2C_OFFSET))(a1, a2);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* Method_3_F7D4F0C8269A0DEF(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_F7D4F0C8269A0DEF_OFFSET))(a1);
	}

	static ::System::Void Method_3_83E91A5059B511D9(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_83E91A5059B511D9_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_683DBC22C8BA1727(::UnityEngine::Collider2D* a1, ::System::Single a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a3)
	{
		return ((::System::Boolean(*)(::UnityEngine::Collider2D*, ::System::Single, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_683DBC22C8BA1727_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_3_4DC03FD0B9BE6839(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::String*(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_4DC03FD0B9BE6839_OFFSET))(a1);
	}

	static ::System::Void Method_3_0A4C6FE8D8F138A3(::Class_2_BA2B2B0A0E98E063* a1, ::Class_1_D366ED82D8A1F916* a2, ::Struct_2_7A8A61AEC1AE9724& a3)
	{
		return ((::System::Void(*)(::Class_2_BA2B2B0A0E98E063*, ::Class_1_D366ED82D8A1F916*, ::Struct_2_7A8A61AEC1AE9724&))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_0A4C6FE8D8F138A3_OFFSET))(a1, a2, a3);
	}

	static ::Cysharp::Threading::Tasks::UniTask_1<::Class_3_C91109162D964E4D_Struct_2_05E939B2CEBE19D9> Method_3_6FAAD22742869553(::System::Boolean a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::Class_3_C91109162D964E4D_Struct_2_05E939B2CEBE19D9>(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_6FAAD22742869553_OFFSET))(a1);
	}

	static ::System::Void Method_3_D737CD2779D51A4E()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_D737CD2779D51A4E_OFFSET))();
	}

	static ::System::Void Method_3_879E2012C93F1917(::Class_1_F61BB49F70F7407A* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::Class_1_F61BB49F70F7407A*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_879E2012C93F1917_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_132A2FBBBB8FD3A3(::Class_2_208CC9941471731A_214* a1)
	{
		return ((::System::Void(*)(::Class_2_208CC9941471731A_214*))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_132A2FBBBB8FD3A3_OFFSET))(a1);
	}

	static ::System::Void Method_3_702CDECA197C07BB(::System::Int32 a1, ::System::Action_1<::MoleMole::Battle::Entity*>* a2)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Action_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_702CDECA197C07BB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_AEE4AA7933DF37CD(::Class_2_BA2B2B0A0E98E063* a1, ::Class_1_D366ED82D8A1F916* a2, ::Struct_2_7A8A61AEC1AE9724& a3)
	{
		return ((::System::Void(*)(::Class_2_BA2B2B0A0E98E063*, ::Class_1_D366ED82D8A1F916*, ::Struct_2_7A8A61AEC1AE9724&))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_AEE4AA7933DF37CD_OFFSET))(a1, a2, a3);
	}

	static ::Class_3_C9173DEF57C38F23* Method_3_D2121F48ED54ABB6()
	{
		return ((::Class_3_C9173DEF57C38F23*(*)())((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_METHOD_3_D2121F48ED54ABB6_OFFSET))();
	}
};
