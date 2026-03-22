#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8A3658A741325FC2.h"
#include "unitysdk/Class_2_3CC769D284A54927_Enum_3_0589839C04E22A88.h"
#include "unitysdk/Class_2_3CC769D284A54927_Enum_3_059D0CF60338BF04.h"
#include "unitysdk/Class_2_3CC769D284A54927_Enum_3_57164B6F828D1B2A.h"
#include "unitysdk/Class_2_3CC769D284A54927_Enum_3_B89961F60F1DB18A.h"
#include "unitysdk/Class_2_3CC769D284A54927_Enum_3_F887AE78DCD8C199.h"
#include "unitysdk/Class_2_3CC769D284A54927_Struct_2_25AF7E5CD29C404A_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Enum_3_53C4A418F34F74D8.h"
#include "unitysdk/Enum_3_ACBA14D36481C70A.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/FishCameraConfig.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_207206F45DEB584F;
class Class_1_2BEAA93324417DF4;
class Class_1_451601B8BB62C38C;
class Class_2_208CC9941471731A_170;
class Class_2_208CC9941471731A_541;
class Class_2_208CC9941471731A_865;
class Class_2_5F64140FAB2210F3;
class Class_3_9F091E965E210217_14;
class FishingRodController;
namespace MoleMole { class FishMove3DCurve; }
namespace MoleMole { class FishMoveParam; }
namespace MoleMole { class FishPosConfig; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigHollowCameraShake; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define CLASS_2_3CC769D284A54927_METHOD_2_00A7BD815EF9D5AD_OFFSET UNITYSDK_OFFSET(0x6660F80)
#define CLASS_2_3CC769D284A54927_METHOD_2_00DC6C482249EA10_1_OFFSET UNITYSDK_OFFSET(0x665E710)
#define CLASS_2_3CC769D284A54927_METHOD_2_00DC6C482249EA10_OFFSET UNITYSDK_OFFSET(0x6657370)
#define CLASS_2_3CC769D284A54927_METHOD_2_00DF19F0A88D3736_1_OFFSET UNITYSDK_OFFSET(0x665DF10)
#define CLASS_2_3CC769D284A54927_METHOD_2_00DF19F0A88D3736_OFFSET UNITYSDK_OFFSET(0x665AE20)
#define CLASS_2_3CC769D284A54927_METHOD_2_0189276CA7D924BD_OFFSET UNITYSDK_OFFSET(0x665D010)
#define CLASS_2_3CC769D284A54927_METHOD_2_08B8D05BB3CFDF07_OFFSET UNITYSDK_OFFSET(0x6661280)
#define CLASS_2_3CC769D284A54927_METHOD_2_1587071CC24184D9_OFFSET UNITYSDK_OFFSET(0x6655E90)
#define CLASS_2_3CC769D284A54927_METHOD_2_1659BCB6D1A9FC34_OFFSET UNITYSDK_OFFSET(0x66597A0)
#define CLASS_2_3CC769D284A54927_METHOD_2_17A4FC8F0F949C2F_OFFSET UNITYSDK_OFFSET(0x66601C0)
#define CLASS_2_3CC769D284A54927_METHOD_2_1938F8C98D264CE8_OFFSET UNITYSDK_OFFSET(0x6661460)
#define CLASS_2_3CC769D284A54927_METHOD_2_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x665CF90)
#define CLASS_2_3CC769D284A54927_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x665CEF0)
#define CLASS_2_3CC769D284A54927_METHOD_2_25732AD12ABCB1D0_OFFSET UNITYSDK_OFFSET(0x665A2D0)
#define CLASS_2_3CC769D284A54927_METHOD_2_2B75EF17FA51A4C2_OFFSET UNITYSDK_OFFSET(0x6661910)
#define CLASS_2_3CC769D284A54927_METHOD_2_2E851C6C3D00F448_OFFSET UNITYSDK_OFFSET(0x665CCC0)
#define CLASS_2_3CC769D284A54927_METHOD_2_322660C1A07434B2_OFFSET UNITYSDK_OFFSET(0x6654250)
#define CLASS_2_3CC769D284A54927_METHOD_2_333A447E1F9DB36C_OFFSET UNITYSDK_OFFSET(0x665AF60)
#define CLASS_2_3CC769D284A54927_METHOD_2_3979F8726BD0E71A_1_OFFSET UNITYSDK_OFFSET(0x6655BA0)
#define CLASS_2_3CC769D284A54927_METHOD_2_3979F8726BD0E71A_2_OFFSET UNITYSDK_OFFSET(0x665E000)
#define CLASS_2_3CC769D284A54927_METHOD_2_3979F8726BD0E71A_3_OFFSET UNITYSDK_OFFSET(0x665FB80)
#define CLASS_2_3CC769D284A54927_METHOD_2_3979F8726BD0E71A_4_OFFSET UNITYSDK_OFFSET(0x66608F0)
#define CLASS_2_3CC769D284A54927_METHOD_2_3979F8726BD0E71A_OFFSET UNITYSDK_OFFSET(0x6654180)
#define CLASS_2_3CC769D284A54927_METHOD_2_39B15D62F456A7DF_OFFSET UNITYSDK_OFFSET(0x66553E0)
#define CLASS_2_3CC769D284A54927_METHOD_2_3E59D56A6D957BC3_1_OFFSET UNITYSDK_OFFSET(0x6659D90)
#define CLASS_2_3CC769D284A54927_METHOD_2_3E59D56A6D957BC3_OFFSET UNITYSDK_OFFSET(0x6656ED0)
#define CLASS_2_3CC769D284A54927_METHOD_2_3EF867693A80F0C3_OFFSET UNITYSDK_OFFSET(0x6654C30)
#define CLASS_2_3CC769D284A54927_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x66535E0)
#define CLASS_2_3CC769D284A54927_METHOD_2_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0x6659350)
#define CLASS_2_3CC769D284A54927_METHOD_2_439E3F52A37E310B_OFFSET UNITYSDK_OFFSET(0x665D5C0)
#define CLASS_2_3CC769D284A54927_METHOD_2_43A46E5F9FAC62B8_OFFSET UNITYSDK_OFFSET(0x6657360)
#define CLASS_2_3CC769D284A54927_METHOD_2_46FFE52154A62C56_OFFSET UNITYSDK_OFFSET(0x6653D50)
#define CLASS_2_3CC769D284A54927_METHOD_2_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0x665AE10)
#define CLASS_2_3CC769D284A54927_METHOD_2_4D70E3D849E4E16D_OFFSET UNITYSDK_OFFSET(0x665D920)
#define CLASS_2_3CC769D284A54927_METHOD_2_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0x665CF70)
#define CLASS_2_3CC769D284A54927_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x6654C20)
#define CLASS_2_3CC769D284A54927_METHOD_2_558C6AE12602A241_OFFSET UNITYSDK_OFFSET(0x6659220)
#define CLASS_2_3CC769D284A54927_METHOD_2_65177D87AE73D86A_1_OFFSET UNITYSDK_OFFSET(0x6660E80)
#define CLASS_2_3CC769D284A54927_METHOD_2_65177D87AE73D86A_OFFSET UNITYSDK_OFFSET(0x665CDD0)
#define CLASS_2_3CC769D284A54927_METHOD_2_68C5DD35C3F86CD6_OFFSET UNITYSDK_OFFSET(0x6656A10)
#define CLASS_2_3CC769D284A54927_METHOD_2_7B29B3E93168F64B_OFFSET UNITYSDK_OFFSET(0x6657170)
#define CLASS_2_3CC769D284A54927_METHOD_2_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0x665A030)
#define CLASS_2_3CC769D284A54927_METHOD_2_80685B06EECEDBB2_OFFSET UNITYSDK_OFFSET(0x665B210)
#define CLASS_2_3CC769D284A54927_METHOD_2_806E0B713D18089E_OFFSET UNITYSDK_OFFSET(0x66617E0)
#define CLASS_2_3CC769D284A54927_METHOD_2_82E9EBEA9DC2A831_OFFSET UNITYSDK_OFFSET(0x665B9C0)
#define CLASS_2_3CC769D284A54927_METHOD_2_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x6655D30)
#define CLASS_2_3CC769D284A54927_METHOD_2_851895CF23E62498_OFFSET UNITYSDK_OFFSET(0x665E2A0)
#define CLASS_2_3CC769D284A54927_METHOD_2_86234E7B8FC44C08_OFFSET UNITYSDK_OFFSET(0x665F270)
#define CLASS_2_3CC769D284A54927_METHOD_2_8714CF4AE9195CA2_OFFSET UNITYSDK_OFFSET(0x6654F00)
#define CLASS_2_3CC769D284A54927_METHOD_2_8972CA953214CCAC_OFFSET UNITYSDK_OFFSET(0x6654B20)
#define CLASS_2_3CC769D284A54927_METHOD_2_9309CE6A2148BDD0_OFFSET UNITYSDK_OFFSET(0x665EF10)
#define CLASS_2_3CC769D284A54927_METHOD_2_9C3D8ED2211D368B_1_OFFSET UNITYSDK_OFFSET(0x6661710)
#define CLASS_2_3CC769D284A54927_METHOD_2_9C3D8ED2211D368B_OFFSET UNITYSDK_OFFSET(0x6656E10)
#define CLASS_2_3CC769D284A54927_METHOD_2_9EC462BCBB737EBC_OFFSET UNITYSDK_OFFSET(0x665AA30)
#define CLASS_2_3CC769D284A54927_METHOD_2_A20A6181036872A3_1_OFFSET UNITYSDK_OFFSET(0x6656CC0)
#define CLASS_2_3CC769D284A54927_METHOD_2_A20A6181036872A3_OFFSET UNITYSDK_OFFSET(0x6655D40)
#define CLASS_2_3CC769D284A54927_METHOD_2_A7C4A6FA5DA2B20C_OFFSET UNITYSDK_OFFSET(0x665C490)
#define CLASS_2_3CC769D284A54927_METHOD_2_AA08720895458700_1_OFFSET UNITYSDK_OFFSET(0x665DC60)
#define CLASS_2_3CC769D284A54927_METHOD_2_AA08720895458700_2_OFFSET UNITYSDK_OFFSET(0x66609D0)
#define CLASS_2_3CC769D284A54927_METHOD_2_AA08720895458700_3_OFFSET UNITYSDK_OFFSET(0x6661210)
#define CLASS_2_3CC769D284A54927_METHOD_2_AA08720895458700_OFFSET UNITYSDK_OFFSET(0x665AEF0)
#define CLASS_2_3CC769D284A54927_METHOD_2_AA972BE565DAF9E3_OFFSET UNITYSDK_OFFSET(0x665CC20)
#define CLASS_2_3CC769D284A54927_METHOD_2_AB88190D695EBEA9_OFFSET UNITYSDK_OFFSET(0x665B450)
#define CLASS_2_3CC769D284A54927_METHOD_2_B4B14845111E88EF_OFFSET UNITYSDK_OFFSET(0x6653FD0)
#define CLASS_2_3CC769D284A54927_METHOD_2_B6BB704B01BCC35B_OFFSET UNITYSDK_OFFSET(0x6659D10)
#define CLASS_2_3CC769D284A54927_METHOD_2_BDA46A2B8AED6F11_OFFSET UNITYSDK_OFFSET(0x665FC90)
#define CLASS_2_3CC769D284A54927_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x665ABC0)
#define CLASS_2_3CC769D284A54927_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x665DBC0)
#define CLASS_2_3CC769D284A54927_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x665AB50)
#define CLASS_2_3CC769D284A54927_METHOD_2_D109CE569415FA03_OFFSET UNITYSDK_OFFSET(0x665BFE0)
#define CLASS_2_3CC769D284A54927_METHOD_2_D2EF5984500DDB97_OFFSET UNITYSDK_OFFSET(0x665E120)
#define CLASS_2_3CC769D284A54927_METHOD_2_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x665DC30)
#define CLASS_2_3CC769D284A54927_METHOD_2_D85E8FCE666274AD_OFFSET UNITYSDK_OFFSET(0x665D6D0)
#define CLASS_2_3CC769D284A54927_METHOD_2_DA53837F60532EF6_OFFSET UNITYSDK_OFFSET(0x665C930)
#define CLASS_2_3CC769D284A54927_METHOD_2_DBE9F5EB50CBCB21_OFFSET UNITYSDK_OFFSET(0x665F8F0)
#define CLASS_2_3CC769D284A54927_METHOD_2_E14A7FCF78650419_OFFSET UNITYSDK_OFFSET(0x6660A40)
#define CLASS_2_3CC769D284A54927_METHOD_2_E2E632F486B6377D_OFFSET UNITYSDK_OFFSET(0x665DDA0)
#define CLASS_2_3CC769D284A54927_METHOD_2_E7262B6FC0F1EFC1_OFFSET UNITYSDK_OFFSET(0x6653B20)
#define CLASS_2_3CC769D284A54927_METHOD_2_E824E5100AAFBB01_OFFSET UNITYSDK_OFFSET(0x66556D0)
#define CLASS_2_3CC769D284A54927_METHOD_2_E86DCAEC10915696_OFFSET UNITYSDK_OFFSET(0x665B030)
#define CLASS_2_3CC769D284A54927_METHOD_2_E8A4A5DF27E2D917_OFFSET UNITYSDK_OFFSET(0x6660BB0)
#define CLASS_2_3CC769D284A54927_METHOD_2_EFB5322CAF695953_OFFSET UNITYSDK_OFFSET(0x665AC20)
#define CLASS_2_3CC769D284A54927_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x665DC50)
#define CLASS_2_3CC769D284A54927_METHOD_2_F239777256F9BA8F_OFFSET UNITYSDK_OFFSET(0x665CF80)
#define CLASS_2_3CC769D284A54927_METHOD_2_F44CBB782D24B59B_OFFSET UNITYSDK_OFFSET(0x665DCD0)
#define CLASS_2_3CC769D284A54927_METHOD_2_FE4FFF99CBDC5C59_1_OFFSET UNITYSDK_OFFSET(0x665CB70)
#define CLASS_2_3CC769D284A54927_METHOD_2_FE4FFF99CBDC5C59_2_OFFSET UNITYSDK_OFFSET(0x665E1E0)
#define CLASS_2_3CC769D284A54927_METHOD_2_FE4FFF99CBDC5C59_3_OFFSET UNITYSDK_OFFSET(0x665F830)
#define CLASS_2_3CC769D284A54927_METHOD_2_FE4FFF99CBDC5C59_4_OFFSET UNITYSDK_OFFSET(0x6661160)
#define CLASS_2_3CC769D284A54927_METHOD_2_FE4FFF99CBDC5C59_OFFSET UNITYSDK_OFFSET(0x6655C80)
#define CLASS_2_3CC769D284A54927__CCTOR_OFFSET UNITYSDK_OFFSET(0x6653B10)
#define CLASS_2_3CC769D284A54927__CTOR_OFFSET UNITYSDK_OFFSET(0x6653680)

inline static constexpr unsigned int Class_2_3CC769D284A54927_TypeDefinitionIndex = 46626;

class Class_2_3CC769D284A54927 : public ::Class_1_8A3658A741325FC2
{
public:
	static ::System::Boolean* StaticGet_Field_2_26()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_3CC769D284A54927_TypeDefinitionIndex)->GetStaticField(0xC9F0);
	}
	static ::System::Int32* StaticGet_Field_2_27()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_3CC769D284A54927_TypeDefinitionIndex)->GetStaticField(0xC9F4);
	}
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_25; // 0x18
	::UnityEngine::Transform* Field_2_85; // 0x20
	::UnityEngine::Transform* Field_2_87; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* Field_2_21; // 0x30
	::Foundation::AssetPath Field_2_70; // 0x38
	::Class_3_9F091E965E210217_14* Field_2_60; // 0x48
	::UnityEngine::GameObject* Field_2_90; // 0x50
	::UnityEngine::Animator* Field_2_81; // 0x58
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_24; // 0x60
	::UnityEngine::Transform* Field_2_77; // 0x68
	::UnityEngine::Transform* Field_2_83; // 0x70
	::UnityEngine::Transform* Field_2_89; // 0x78
	::UnityEngine::Material* Field_2_13; // 0x80
	::System::Collections::Generic::List_1<::Class_3_9F091E965E210217_14*>* Field_2_57; // 0x88
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ScreenEffectType>* Field_2_22; // 0x90
	::UnityEngine::Transform* Field_2_86; // 0x98
	::MoleMole::Battle::Entity* Field_2_75; // 0xA0
	::UnityEngine::Transform* Field_2_88; // 0xA8
	::MoleMole::Battle::Entity* Field_2_73; // 0xB0
	::MoleMole::Battle::Entity* Field_2_74; // 0xB8
	::MoleMole::Battle::Entity* Field_2_69; // 0xC0
	::UnityEngine::GameObject* Field_2_71; // 0xC8
	::Class_2_208CC9941471731A_170* Field_2_62; // 0xD0
	::UnityEngine::Transform* Field_2_78; // 0xD8
	::Class_1_2BEAA93324417DF4* Field_2_55; // 0xE0
	::MoleMole::Battle::Entity* Field_2_72; // 0xE8
	::UnityEngine::Transform* Field_2_84; // 0xF0
	::FishingRodController* Field_2_80; // 0xF8
	::System::Collections::Generic::Queue_1<::Class_3_9F091E965E210217_14*>* Field_2_56; // 0x100
	::System::Threading::CancellationToken Field_2_63; // 0x108
	::UnityEngine::Transform* Field_2_82; // 0x110
	::Foundation::AssetRequestHandle Field_2_91; // 0x118
	::Class_2_208CC9941471731A_541* Field_2_61; // 0x138
	::Class_1_207206F45DEB584F* Field_2_0; // 0x140
	::Class_2_5F64140FAB2210F3* Field_2_4; // 0x148
	::UnityEngine::Transform* Field_2_79; // 0x150
	::System::Collections::Generic::List_1<::Class_1_451601B8BB62C38C*>* Field_2_19; // 0x158
	::MoleMole::Battle::Entity* Field_2_76; // 0x160
	::System::Int32 Field_2_38; // 0x168
	::System::Int32 Field_2_33; // 0x16C
	::System::Single Field_2_20; // 0x170
	::System::Single Field_2_8; // 0x174
	::System::Int32 Field_2_49; // 0x178
	::System::Int32 Field_2_37; // 0x17C
	::Class_2_3CC769D284A54927_Enum_3_B89961F60F1DB18A Field_2_28; // 0x180
	::Class_2_3CC769D284A54927_Enum_3_F887AE78DCD8C199 Field_2_53; // 0x184
	::System::Int32 Field_2_39; // 0x188
	::System::Int32 Field_2_29; // 0x18C
	::System::Single Field_2_97; // 0x190
	::System::Int32 Field_2_35; // 0x194
	::System::Int32 Field_2_30; // 0x198
	::System::Boolean Field_2_66; // 0x19C
	::System::Boolean Field_2_65; // 0x19D
	::System::Boolean Field_2_18; // 0x19E
	::System::Boolean Field_2_67; // 0x19F
	::System::Int32 Field_2_54; // 0x1A0
	::Class_2_3CC769D284A54927_Enum_3_059D0CF60338BF04 Field_2_52; // 0x1A4
	::System::Int32 Field_2_31; // 0x1A8
	::System::Single Field_2_17; // 0x1AC
	::System::Int32 Field_2_36; // 0x1B0
	::System::Int32 Field_2_94; // 0x1B4
	::UnityEngine::Vector3 Field_2_92; // 0x1B8
	::System::Single Field_2_11; // 0x1C4
	::System::Int32 Field_2_51; // 0x1C8
	::System::Int32 Field_2_48; // 0x1CC
	::System::Int32 Field_2_45; // 0x1D0
	::UnityEngine::Vector3 Field_2_98; // 0x1D4
	::System::Int32 Field_2_58; // 0x1E0
	::Class_2_3CC769D284A54927_Enum_3_57164B6F828D1B2A Field_2_1; // 0x1E4
	::System::Int32 Field_2_50; // 0x1E8
	::UnityEngine::Vector3 Field_2_12; // 0x1EC
	::System::Boolean Field_2_100; // 0x1F8
	::System::Boolean Field_2_64; // 0x1F9
	::System::Boolean Field_2_15; // 0x1FA
	::System::Boolean Field_2_3; // 0x1FB
	::System::Int32 Field_2_47; // 0x1FC
	::System::Int32 Field_2_96; // 0x200
	::System::Int32 Field_2_43; // 0x204
	::System::Single Field_2_99; // 0x208
	::System::Int32 Field_2_32; // 0x20C
	::System::Int32 Field_2_44; // 0x210
	::System::Int32 Field_2_42; // 0x214
	::System::UInt32 Field_2_59; // 0x218
	::System::Int32 Field_2_34; // 0x21C
	::System::Single Field_2_93; // 0x220
	::System::Int32 Field_2_40; // 0x224
	::System::Single Field_2_2; // 0x228
	::System::Single Field_2_10; // 0x22C
	::System::Int32 Field_2_95; // 0x230
	::Class_2_3CC769D284A54927_Enum_3_0589839C04E22A88 Field_2_6; // 0x234
	::Class_2_3CC769D284A54927_Struct_2_25AF7E5CD29C404A_1 Field_2_5; // 0x238
	::System::Single Field_2_9; // 0x258
	::System::Int32 Field_2_46; // 0x25C
	::System::Single Field_2_16; // 0x260
	::System::Boolean Field_2_23; // 0x264
	::System::Boolean Field_2_14; // 0x265
	::System::Boolean Field_2_68; // 0x266
	::System::Int32 Field_2_101; // 0x268
	::System::Single Field_2_7; // 0x26C
	::System::Int32 Field_2_41; // 0x270

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927__CCTOR_OFFSET))();
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_E7262B6FC0F1EFC1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_E7262B6FC0F1EFC1_OFFSET))(this, a1);
	}

	::System::Void Method_2_B4B14845111E88EF(::Enum_3_53C4A418F34F74D8 a1, ::System::Action_1<::System::EventArgs*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_53C4A418F34F74D8, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_B4B14845111E88EF_OFFSET))(this, a1, a2);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_3979F8726BD0E71A(::System::Int32 a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_3979F8726BD0E71A_OFFSET))(this, a1);
	}

	::System::Void Method_2_322660C1A07434B2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_322660C1A07434B2_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_8972CA953214CCAC(::System::Boolean a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_8972CA953214CCAC_OFFSET))(this, a1);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_3EF867693A80F0C3(::Class_2_3CC769D284A54927_Enum_3_F887AE78DCD8C199 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_2_3CC769D284A54927_Enum_3_F887AE78DCD8C199))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_3EF867693A80F0C3_OFFSET))(this, a1);
	}

	::System::Void Method_2_8714CF4AE9195CA2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_8714CF4AE9195CA2_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_3979F8726BD0E71A_1(::System::Int32 a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_3979F8726BD0E71A_1_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_FE4FFF99CBDC5C59()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_FE4FFF99CBDC5C59_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_832295EC279E5994_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_A20A6181036872A3(::System::Int32 a1, ::System::Boolean a2, ::System::Threading::CancellationTokenSource* a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Threading::CancellationTokenSource*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_A20A6181036872A3_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_39B15D62F456A7DF(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_39B15D62F456A7DF_OFFSET))(this, a1);
	}

	::System::Void Method_2_1587071CC24184D9(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_1587071CC24184D9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_68C5DD35C3F86CD6(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_68C5DD35C3F86CD6_OFFSET))(this, a1, a2);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_A20A6181036872A3_1(::System::Int32 a1, ::System::Boolean a2, ::System::Threading::CancellationTokenSource* a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Threading::CancellationTokenSource*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_A20A6181036872A3_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_9C3D8ED2211D368B(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_9C3D8ED2211D368B_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E59D56A6D957BC3(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_3E59D56A6D957BC3_OFFSET))(this, a1);
	}

	::UnityEngine::AnimationCurve* Method_2_7B29B3E93168F64B(::Class_2_3CC769D284A54927_Enum_3_059D0CF60338BF04 a1)
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::Class_2_3CC769D284A54927_Enum_3_059D0CF60338BF04))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_7B29B3E93168F64B_OFFSET))(this, a1);
	}

	::Class_2_208CC9941471731A_541* Method_2_43A46E5F9FAC62B8()
	{
		return ((::Class_2_208CC9941471731A_541*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_43A46E5F9FAC62B8_OFFSET))(this);
	}

	::System::Void Method_2_00DC6C482249EA10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_00DC6C482249EA10_OFFSET))(this);
	}

	::System::Void Method_2_805C56F44231AEF9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_805C56F44231AEF9_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_9EC462BCBB737EBC(::UnityEngine::AnimationCurve* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_9EC462BCBB737EBC_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_EFB5322CAF695953(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_EFB5322CAF695953_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_451601B8BB62C38C*>* Method_2_4993EDAE54425105()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_451601B8BB62C38C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_4993EDAE54425105_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_00DF19F0A88D3736(::System::Single a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_00DF19F0A88D3736_OFFSET))(this, a1);
	}

	::System::Void Method_2_AA08720895458700(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_AA08720895458700_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> Method_2_333A447E1F9DB36C()
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_333A447E1F9DB36C_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_E86DCAEC10915696(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::MoleMole::FishMove3DCurve* a3, ::System::Single a4, ::System::Boolean a5, ::System::Threading::CancellationToken a6)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::FishMove3DCurve*, ::System::Single, ::System::Boolean, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_E86DCAEC10915696_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::PipelineCamera::WorldBasicCameraData Method_2_80685B06EECEDBB2(::PipelineCamera::WorldBasicCameraData a1, ::PipelineCamera::WorldBasicCameraData a2, ::System::Single a3)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::WorldBasicCameraData, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_80685B06EECEDBB2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_AB88190D695EBEA9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_AB88190D695EBEA9_OFFSET))(this);
	}

	::System::Void Method_2_82E9EBEA9DC2A831(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_82E9EBEA9DC2A831_OFFSET))(this, a1);
	}

	::System::Void Method_2_D109CE569415FA03()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_D109CE569415FA03_OFFSET))(this);
	}

	::System::Void Method_2_A7C4A6FA5DA2B20C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_A7C4A6FA5DA2B20C_OFFSET))(this);
	}

	::MoleMole::FishMoveParam* Method_2_DA53837F60532EF6()
	{
		return ((::MoleMole::FishMoveParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_DA53837F60532EF6_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_FE4FFF99CBDC5C59_1()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_FE4FFF99CBDC5C59_1_OFFSET))(this);
	}

	::System::Boolean Method_2_AA972BE565DAF9E3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_AA972BE565DAF9E3_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_2E851C6C3D00F448(::Class_2_3CC769D284A54927_Enum_3_059D0CF60338BF04 a1, ::System::Int32 a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Class_2_3CC769D284A54927_Enum_3_059D0CF60338BF04, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_2E851C6C3D00F448_OFFSET))(this, a1, a2);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_65177D87AE73D86A(::UnityEngine::Vector3 a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_65177D87AE73D86A_OFFSET))(this, a1);
	}

	::System::Void Method_2_1659BCB6D1A9FC34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_1659BCB6D1A9FC34_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Single Method_2_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_5323F2DF46A044DA_1_OFFSET))(this);
	}

	::Class_3_9F091E965E210217_14* Method_2_F239777256F9BA8F()
	{
		return ((::Class_3_9F091E965E210217_14*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_F239777256F9BA8F_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Void Method_2_0189276CA7D924BD(::Enum_3_ACBA14D36481C70A a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_ACBA14D36481C70A, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_0189276CA7D924BD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_4D70E3D849E4E16D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_4D70E3D849E4E16D_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_AA08720895458700_1(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_AA08720895458700_1_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_F44CBB782D24B59B(::System::Threading::CancellationTokenSource* a1, ::System::Boolean a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationTokenSource*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_F44CBB782D24B59B_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_D85E8FCE666274AD(::Class_2_208CC9941471731A_865* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_865*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_D85E8FCE666274AD_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> Method_2_E2E632F486B6377D(::MoleMole::FishCameraConfig a1, ::MoleMole::Config::ConfigHollowCameraShake* a2, ::System::Single a3)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::PVOID, ::MoleMole::FishCameraConfig, ::MoleMole::Config::ConfigHollowCameraShake*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_E2E632F486B6377D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_558C6AE12602A241()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_558C6AE12602A241_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_00DF19F0A88D3736_1(::System::Single a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_00DF19F0A88D3736_1_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_3979F8726BD0E71A_2(::System::Int32 a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_3979F8726BD0E71A_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_D2EF5984500DDB97(::Enum_3_53C4A418F34F74D8 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_53C4A418F34F74D8))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_D2EF5984500DDB97_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_FE4FFF99CBDC5C59_2()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_FE4FFF99CBDC5C59_2_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_851895CF23E62498(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_851895CF23E62498_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_00DC6C482249EA10_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_00DC6C482249EA10_1_OFFSET))(this);
	}

	::System::Void Method_2_4389275F4099DE36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_4389275F4099DE36_OFFSET))(this);
	}

	::System::Void Method_2_9309CE6A2148BDD0(::System::Int32 a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Threading::CancellationTokenSource* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Boolean, ::System::Threading::CancellationTokenSource*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_9309CE6A2148BDD0_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_86234E7B8FC44C08(::System::Int32 a1, ::System::Boolean a2, ::System::Threading::CancellationTokenSource* a3, ::System::Action_1<::System::Boolean>* a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Threading::CancellationTokenSource*, ::System::Action_1<::System::Boolean>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_86234E7B8FC44C08_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_FE4FFF99CBDC5C59_3()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_FE4FFF99CBDC5C59_3_OFFSET))(this);
	}

	::System::Void Method_2_DBE9F5EB50CBCB21(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_DBE9F5EB50CBCB21_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_3979F8726BD0E71A_3(::System::Int32 a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_3979F8726BD0E71A_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_BDA46A2B8AED6F11(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::System::Single a3, ::MoleMole::Config::ConfigHollowCameraShake* a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::MoleMole::Config::ConfigHollowCameraShake*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_BDA46A2B8AED6F11_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_17A4FC8F0F949C2F(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_17A4FC8F0F949C2F_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E59D56A6D957BC3_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_3E59D56A6D957BC3_1_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_3979F8726BD0E71A_4(::System::Int32 a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_3979F8726BD0E71A_4_OFFSET))(this, a1);
	}

	::System::Void Method_2_B6BB704B01BCC35B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_B6BB704B01BCC35B_OFFSET))(this);
	}

	::System::Void Method_2_E824E5100AAFBB01(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_E824E5100AAFBB01_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AA08720895458700_2(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_AA08720895458700_2_OFFSET))(this, a1);
	}

	::Class_1_451601B8BB62C38C* Method_2_E14A7FCF78650419()
	{
		return ((::Class_1_451601B8BB62C38C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_E14A7FCF78650419_OFFSET))(this);
	}

	::System::Void Method_2_E8A4A5DF27E2D917(::System::String* a1, ::MoleMole::Config::ScreenEffectType a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ScreenEffectType))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_E8A4A5DF27E2D917_OFFSET))(this, a1, a2);
	}

	::UnityEngine::GameObject* Method_2_46FFE52154A62C56()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_46FFE52154A62C56_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_65177D87AE73D86A_1(::UnityEngine::Vector3 a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_65177D87AE73D86A_1_OFFSET))(this, a1);
	}

	::MoleMole::FishPosConfig* Method_2_00A7BD815EF9D5AD()
	{
		return ((::MoleMole::FishPosConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_00A7BD815EF9D5AD_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_FE4FFF99CBDC5C59_4()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_FE4FFF99CBDC5C59_4_OFFSET))(this);
	}

	::System::Void Method_2_AA08720895458700_3(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_AA08720895458700_3_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_08B8D05BB3CFDF07(::Class_2_3CC769D284A54927_Enum_3_57164B6F828D1B2A a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Single a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Class_2_3CC769D284A54927_Enum_3_57164B6F828D1B2A, ::System::Boolean, ::System::Boolean, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_08B8D05BB3CFDF07_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_1938F8C98D264CE8(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_1938F8C98D264CE8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_25732AD12ABCB1D0(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_25732AD12ABCB1D0_OFFSET))(this, a1, a2, a3, a4);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_9C3D8ED2211D368B_1(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_9C3D8ED2211D368B_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_806E0B713D18089E(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_806E0B713D18089E_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_439E3F52A37E310B(::Class_2_208CC9941471731A_865* a1, ::Enum_3_ACBA14D36481C70A a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_865*, ::Enum_3_ACBA14D36481C70A, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_439E3F52A37E310B_OFFSET))(this, a1, a2, a3, a4);
	}

	::PipelineCamera::WorldBasicCameraData Method_2_2B75EF17FA51A4C2(::MoleMole::FishCameraConfig a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::MoleMole::FishCameraConfig))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_METHOD_2_2B75EF17FA51A4C2_OFFSET))(this, a1);
	}
};
