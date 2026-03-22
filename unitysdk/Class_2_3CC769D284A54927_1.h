#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8A3658A741325FC2.h"
#include "unitysdk/Class_2_3CC769D284A54927_1_Enum_3_3C549D6CCF7A45F3.h"
#include "unitysdk/Class_2_3CC769D284A54927_1_Enum_3_8B68B5C2E96E415B.h"
#include "unitysdk/Class_2_3CC769D284A54927_1_Struct_2_25AF7E5CD29C404A_2.h"
#include "unitysdk/Class_2_3CC769D284A54927_Enum_3_0589839C04E22A88.h"
#include "unitysdk/Class_2_3CC769D284A54927_Enum_3_57164B6F828D1B2A.h"
#include "unitysdk/Class_2_3CC769D284A54927_Enum_3_B89961F60F1DB18A.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Enum_3_53C4A418F34F74D8.h"
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
class Class_2_208CC9941471731A_463;
class Class_2_208CC9941471731A_635;
class Class_2_208CC9941471731A_891;
class Class_2_5F64140FAB2210F3;
class Class_3_6EF456A21AE85EEC_135;
class Class_3_9D33A2E94B3E53DC;
class Class_3_D9FABB598B022DEA_1;
class FishingRodController;
namespace MoleMole { class FishMove3DCurve; }
namespace MoleMole { class FishMoveParam; }
namespace MoleMole { class FishPosConfig; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigHollowCameraShake; }
namespace RootMotion::FinalIK { class LookController; }
namespace System { class Action; }
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
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define CLASS_2_3CC769D284A54927_1_METHOD_2_00DC6C482249EA10_OFFSET UNITYSDK_OFFSET(0x7C25F30)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_00DF19F0A88D3736_OFFSET UNITYSDK_OFFSET(0x7C323C0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x7C2E260)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x7C2CE90)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_08B8D05BB3CFDF07_OFFSET UNITYSDK_OFFSET(0x7C31CF0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_123DFB09BD2C9B9E_OFFSET UNITYSDK_OFFSET(0x7C1F5B0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_1659BCB6D1A9FC34_OFFSET UNITYSDK_OFFSET(0x7C2BF50)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_17A4FC8F0F949C2F_OFFSET UNITYSDK_OFFSET(0x7C2CEA0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x7C29720)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_1938F8C98D264CE8_OFFSET UNITYSDK_OFFSET(0x7C30290)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x7C30010)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x7C270B0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_1FD6BDA1CE7A4F68_OFFSET UNITYSDK_OFFSET(0x7C2E270)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_25732AD12ABCB1D0_OFFSET UNITYSDK_OFFSET(0x7C2D5E0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_2B75EF17FA51A4C2_OFFSET UNITYSDK_OFFSET(0x7C26740)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_2E7C0D86C81DC9BF_OFFSET UNITYSDK_OFFSET(0x7C297D0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_333A447E1F9DB36C_OFFSET UNITYSDK_OFFSET(0x7C2ED60)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x7C2B9C0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_3694AD952F4FFD05_OFFSET UNITYSDK_OFFSET(0x7C285A0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_3979F8726BD0E71A_1_OFFSET UNITYSDK_OFFSET(0x7C2E880)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_3979F8726BD0E71A_2_OFFSET UNITYSDK_OFFSET(0x7C2F610)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_3979F8726BD0E71A_3_OFFSET UNITYSDK_OFFSET(0x7C2FA00)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_3979F8726BD0E71A_4_OFFSET UNITYSDK_OFFSET(0x7C33F50)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_3979F8726BD0E71A_OFFSET UNITYSDK_OFFSET(0x7C27690)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_3DEEB3DA75089F6D_OFFSET UNITYSDK_OFFSET(0x7C26BD0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_3E586421BA588EFD_OFFSET UNITYSDK_OFFSET(0x7C325E0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_3E59D56A6D957BC3_1_OFFSET UNITYSDK_OFFSET(0x7C2C4D0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_3E59D56A6D957BC3_OFFSET UNITYSDK_OFFSET(0x7C278B0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x7C27760)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0x7C2BB00)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_43A46E5F9FAC62B8_OFFSET UNITYSDK_OFFSET(0x7C2CE80)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_4568CF0A4B3096CD_OFFSET UNITYSDK_OFFSET(0x7C2E6E0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_46FFE52154A62C56_OFFSET UNITYSDK_OFFSET(0x7C308C0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_483E22AD1DF04969_OFFSET UNITYSDK_OFFSET(0x7C324B0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0x7C31430)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_4D70E3D849E4E16D_OFFSET UNITYSDK_OFFSET(0x7C31ED0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0x7C31CE0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_5323F2DF46A044DA_2_OFFSET UNITYSDK_OFFSET(0x7C31950)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x7C2EE40)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_55E74F41B8EB525D_OFFSET UNITYSDK_OFFSET(0x7C32160)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_57DCB1CE056E3F2A_OFFSET UNITYSDK_OFFSET(0x7C2F200)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_5F07EA98A10C6EA9_OFFSET UNITYSDK_OFFSET(0x7C2F300)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_65177D87AE73D86A_1_OFFSET UNITYSDK_OFFSET(0x7C34C10)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_65177D87AE73D86A_OFFSET UNITYSDK_OFFSET(0x7C2F100)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_68C5DD35C3F86CD6_OFFSET UNITYSDK_OFFSET(0x7C348C0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_6C8825BD793BF050_OFFSET UNITYSDK_OFFSET(0x7C2EE50)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_734CC582838F149E_OFFSET UNITYSDK_OFFSET(0x7C2DD60)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_7536D813D608DD3E_OFFSET UNITYSDK_OFFSET(0x7C2EC00)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_777C630B90A28EF1_OFFSET UNITYSDK_OFFSET(0x7C27CB0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_7B29B3E93168F64B_OFFSET UNITYSDK_OFFSET(0x7C29170)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_7E08D95B7FF5A527_OFFSET UNITYSDK_OFFSET(0x7C277E0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0x7C30CB0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_80685B06EECEDBB2_OFFSET UNITYSDK_OFFSET(0x7C31AA0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_806E0B713D18089E_OFFSET UNITYSDK_OFFSET(0x7C31970)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x7C31440)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x7C344C0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x7C273D0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_847EE1C72FB227FF_OFFSET UNITYSDK_OFFSET(0x7C2CD70)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_851895CF23E62498_OFFSET UNITYSDK_OFFSET(0x7C34030)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_85937A082BD1F4EA_OFFSET UNITYSDK_OFFSET(0x7C29360)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_86234E7B8FC44C08_OFFSET UNITYSDK_OFFSET(0x7C32A00)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_8714CF4AE9195CA2_OFFSET UNITYSDK_OFFSET(0x7C30F50)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_8972CA953214CCAC_OFFSET UNITYSDK_OFFSET(0x7C29620)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_91177D56EE5BDFAA_OFFSET UNITYSDK_OFFSET(0x7C305D0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_928CB4D70C21FDF4_OFFSET UNITYSDK_OFFSET(0x7C33520)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_9309CE6A2148BDD0_OFFSET UNITYSDK_OFFSET(0x7C34540)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_933D559847530E10_OFFSET UNITYSDK_OFFSET(0x7C322C0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x7C273E0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_9C3D8ED2211D368B_OFFSET UNITYSDK_OFFSET(0x7C31740)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_9E606B1B650D2069_OFFSET UNITYSDK_OFFSET(0x7C27130)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_A0042105686D97E8_OFFSET UNITYSDK_OFFSET(0x7C2CC40)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_A20A6181036872A3_1_OFFSET UNITYSDK_OFFSET(0x7C27B50)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_A20A6181036872A3_OFFSET UNITYSDK_OFFSET(0x7C25D20)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_A7C4A6FA5DA2B20C_OFFSET UNITYSDK_OFFSET(0x7C33A00)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_AA08720895458700_1_OFFSET UNITYSDK_OFFSET(0x7C2F590)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_AA08720895458700_2_OFFSET UNITYSDK_OFFSET(0x7C30550)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_AA08720895458700_OFFSET UNITYSDK_OFFSET(0x7C27620)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_AA972BE565DAF9E3_OFFSET UNITYSDK_OFFSET(0x7C2E1B0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_AFDC576A9606B859_OFFSET UNITYSDK_OFFSET(0x7C298E0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_B2C52ACF9D9B435B_OFFSET UNITYSDK_OFFSET(0x7C282F0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_B4B14845111E88EF_OFFSET UNITYSDK_OFFSET(0x7C25560)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_B6BB704B01BCC35B_OFFSET UNITYSDK_OFFSET(0x7C28AB0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_BDA46A2B8AED6F11_OFFSET UNITYSDK_OFFSET(0x7C2FAF0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x7C30540)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_C39B31ED923BE88F_OFFSET UNITYSDK_OFFSET(0x7C28B30)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x7C329F0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x7C27CA0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x7C344D0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x7C2CC50)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_CF469E0BCFDDD161_OFFSET UNITYSDK_OFFSET(0x7C2E960)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_D2EF5984500DDB97_OFFSET UNITYSDK_OFFSET(0x7C2CCB0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x7C2ED40)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_DA53837F60532EF6_OFFSET UNITYSDK_OFFSET(0x7C31450)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_DBE9F5EB50CBCB21_OFFSET UNITYSDK_OFFSET(0x7C33770)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_E14A7FCF78650419_OFFSET UNITYSDK_OFFSET(0x7C30B40)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_E2E632F486B6377D_OFFSET UNITYSDK_OFFSET(0x7C274B0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_E7262B6FC0F1EFC1_OFFSET UNITYSDK_OFFSET(0x7C30690)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_E824E5100AAFBB01_OFFSET UNITYSDK_OFFSET(0x7C2C770)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_E86DCAEC10915696_OFFSET UNITYSDK_OFFSET(0x7C26EE0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_E8A4A5DF27E2D917_OFFSET UNITYSDK_OFFSET(0x7C2F730)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_EFB5322CAF695953_OFFSET UNITYSDK_OFFSET(0x7C30090)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x7C34B70)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x7C2E250)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_F0E307B84478A272_1_OFFSET UNITYSDK_OFFSET(0x7C2DD40)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_F0E307B84478A272_2_OFFSET UNITYSDK_OFFSET(0x7C344A0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x7C297B0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_F0F8DE036FE283F6_OFFSET UNITYSDK_OFFSET(0x7C25460)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_F10A0D072D26C4BF_OFFSET UNITYSDK_OFFSET(0x7C318C0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_F239777256F9BA8F_1_OFFSET UNITYSDK_OFFSET(0x7C305C0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_F239777256F9BA8F_OFFSET UNITYSDK_OFFSET(0x7C2F600)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_F44CBB782D24B59B_OFFSET UNITYSDK_OFFSET(0x7C2EB30)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_F7BA13C72A6B3F58_OFFSET UNITYSDK_OFFSET(0x7C2DE20)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_FA662896843C137A_OFFSET UNITYSDK_OFFSET(0x7C34B80)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_FE4FFF99CBDC5C59_1_OFFSET UNITYSDK_OFFSET(0x7C29560)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_FE4FFF99CBDC5C59_2_OFFSET UNITYSDK_OFFSET(0x7C31690)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_FE4FFF99CBDC5C59_3_OFFSET UNITYSDK_OFFSET(0x7C31810)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_FE4FFF99CBDC5C59_4_OFFSET UNITYSDK_OFFSET(0x7C33EA0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_FE4FFF99CBDC5C59_OFFSET UNITYSDK_OFFSET(0x7C25E70)
#define CLASS_2_3CC769D284A54927_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x7C25CD0)
#define CLASS_2_3CC769D284A54927_1__CTOR_OFFSET UNITYSDK_OFFSET(0x7C25710)

inline static constexpr unsigned int Class_2_3CC769D284A54927_1_TypeDefinitionIndex = 52792;

class Class_2_3CC769D284A54927_1 : public ::Class_1_8A3658A741325FC2
{
public:
	static ::System::Int32* StaticGet_Field_2_48()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_3CC769D284A54927_1_TypeDefinitionIndex)->GetStaticField(0xDF20);
	}
	static ::System::Int32* StaticGet_Field_2_63()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_3CC769D284A54927_1_TypeDefinitionIndex)->GetStaticField(0xDF24);
	}
	static ::System::Boolean* StaticGet_Field_2_62()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_3CC769D284A54927_1_TypeDefinitionIndex)->GetStaticField(0xDF28);
	}
	static ::System::Int32* StaticGet_Field_2_64()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_3CC769D284A54927_1_TypeDefinitionIndex)->GetStaticField(0xDF2C);
	}
	static ::System::Int32* StaticGet_Field_2_47()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_3CC769D284A54927_1_TypeDefinitionIndex)->GetStaticField(0xDF30);
	}
	static ::System::Single* StaticGet_Field_2_27()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_3CC769D284A54927_1_TypeDefinitionIndex)->GetStaticField(0xDF34);
	}
	static ::System::Single* StaticGet_Field_2_46()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_3CC769D284A54927_1_TypeDefinitionIndex)->GetStaticField(0xDF38);
	}
	// static const ::System::Int32 Field_2_139 = 0x579; // 0x0
	// static const ::System::Int32 Field_2_140 = 0x583; // 0x0
	::UnityEngine::Transform* Field_2_118; // 0x18
	::RootMotion::FinalIK::LookController* Field_2_59; // 0x20
	::Class_2_208CC9941471731A_463* Field_2_31; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_49; // 0x30
	::Class_3_9D33A2E94B3E53DC* Field_2_42; // 0x38
	::UnityEngine::Animator* Field_2_117; // 0x40
	::MoleMole::Battle::Entity* Field_2_109; // 0x48
	::Class_3_6EF456A21AE85EEC_135* Field_2_3; // 0x50
	::Class_2_5F64140FAB2210F3* Field_2_8; // 0x58
	::System::Collections::Generic::Dictionary_2<::Class_2_3CC769D284A54927_1_Enum_3_8B68B5C2E96E415B, ::System::Int32>* Field_2_141; // 0x60
	::MoleMole::Battle::Entity* Field_2_103; // 0x68
	::System::Collections::Generic::List_1<::Class_3_D9FABB598B022DEA_1*>* Field_2_1; // 0x70
	::UnityEngine::Animator* Field_2_58; // 0x78
	::UnityEngine::Transform* Field_2_120; // 0x80
	::UnityEngine::Transform* Field_2_124; // 0x88
	::System::Collections::Generic::List_1<::Class_3_9D33A2E94B3E53DC*>* Field_2_41; // 0x90
	::System::Threading::CancellationToken Field_2_97; // 0x98
	::MoleMole::Battle::Entity* Field_2_106; // 0xA0
	::Class_2_208CC9941471731A_635* Field_2_38; // 0xA8
	::UnityEngine::Transform* Field_2_112; // 0xB0
	::UnityEngine::GameObject* Field_2_105; // 0xB8
	::Class_1_207206F45DEB584F* Field_2_4; // 0xC0
	::Class_2_208CC9941471731A_891* Field_2_43; // 0xC8
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ScreenEffectType>* Field_2_143; // 0xD0
	::UnityEngine::Transform* Field_2_111; // 0xD8
	::MoleMole::Battle::Entity* Field_2_144; // 0xE0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* Field_2_142; // 0xE8
	::MoleMole::Battle::Entity* Field_2_110; // 0xF0
	::MoleMole::Battle::Entity* Field_2_107; // 0xF8
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_50; // 0x100
	::UnityEngine::GameObject* Field_2_126; // 0x108
	::UnityEngine::Material* Field_2_14; // 0x110
	::System::Collections::Generic::Queue_1<::Class_3_9D33A2E94B3E53DC*>* Field_2_40; // 0x118
	::UnityEngine::Transform* Field_2_123; // 0x120
	::Foundation::AssetRequestHandle Field_2_127; // 0x128
	::MoleMole::Battle::Entity* Field_2_57; // 0x148
	::Class_1_2BEAA93324417DF4* Field_2_138; // 0x150
	::UnityEngine::Transform* Field_2_125; // 0x158
	::MoleMole::Battle::Entity* Field_2_108; // 0x160
	::MoleMole::Battle::Entity* Field_2_115; // 0x168
	::UnityEngine::Transform* Field_2_119; // 0x170
	::UnityEngine::Transform* Field_2_122; // 0x178
	::UnityEngine::Transform* Field_2_121; // 0x180
	::System::Collections::Generic::List_1<::Class_1_451601B8BB62C38C*>* Field_2_147; // 0x188
	::FishingRodController* Field_2_116; // 0x190
	::System::Collections::Generic::List_1<::Class_3_6EF456A21AE85EEC_135*>* Field_2_2; // 0x198
	::UnityEngine::Transform* Field_2_113; // 0x1A0
	::Foundation::AssetPath Field_2_104; // 0x1A8
	::System::UInt32 Field_2_32; // 0x1B8
	::System::Single Field_2_135; // 0x1BC
	::System::Int32 Field_2_80; // 0x1C0
	::System::Single Field_2_12; // 0x1C4
	::System::Int32 Field_2_94; // 0x1C8
	::System::Single Field_2_45; // 0x1CC
	::System::Boolean Field_2_53; // 0x1D0
	::System::Boolean Field_2_114; // 0x1D1
	::System::Boolean Field_2_7; // 0x1D2
	::System::Boolean Field_2_102; // 0x1D3
	::System::Single Field_2_56; // 0x1D4
	::System::Int32 Field_2_131; // 0x1D8
	::System::Int32 Field_2_90; // 0x1DC
	::Class_2_3CC769D284A54927_Enum_3_0589839C04E22A88 Field_2_17; // 0x1E0
	::UnityEngine::Vector3 Field_2_128; // 0x1E4
	::System::Int32 Field_2_24; // 0x1F0
	::System::Int32 Field_2_10; // 0x1F4
	::System::UInt32 Field_2_36; // 0x1F8
	::UnityEngine::Vector3 Field_2_134; // 0x1FC
	::System::Int32 Field_2_92; // 0x208
	::System::Single Field_2_20; // 0x20C
	::System::Int32 Field_2_73; // 0x210
	::System::Int32 Field_2_74; // 0x214
	::System::Int32 Field_2_65; // 0x218
	::System::Single Field_2_11; // 0x21C
	::System::Int32 Field_2_72; // 0x220
	::System::UInt32 Field_2_35; // 0x224
	::System::Int32 Field_2_130; // 0x228
	::System::Boolean Field_2_146; // 0x22C
	::System::Boolean Field_2_100; // 0x22D
	::System::Boolean Field_2_54; // 0x22E
	::System::Boolean Field_2_37; // 0x22F
	::System::Int32 Field_2_87; // 0x230
	::System::Single Field_2_55; // 0x234
	::System::Int32 Field_2_84; // 0x238
	::System::Boolean Field_2_101; // 0x23C
	::System::Boolean Field_2_52; // 0x23D
	::Class_2_3CC769D284A54927_1_Struct_2_25AF7E5CD29C404A_2 Field_2_9; // 0x240
	::Class_2_3CC769D284A54927_Enum_3_57164B6F828D1B2A Field_2_5; // 0x260
	::System::Int32 Field_2_83; // 0x264
	::System::Single Field_2_133; // 0x268
	::UnityEngine::Quaternion Field_2_61; // 0x26C
	::System::Int32 Field_2_16; // 0x27C
	::System::Int32 Field_2_79; // 0x280
	::System::Boolean Field_2_44; // 0x284
	::System::Boolean Field_2_28; // 0x285
	::System::Boolean Field_2_98; // 0x286
	::System::Boolean Field_2_99; // 0x287
	::System::Int32 Field_2_26; // 0x288
	::System::Int32 Field_2_78; // 0x28C
	::System::Int32 Field_2_75; // 0x290
	::System::Int32 Field_2_91; // 0x294
	::System::Single Field_2_129; // 0x298
	::UnityEngine::Vector3 Field_2_60; // 0x29C
	::System::Int32 Field_2_93; // 0x2A8
	::System::Int32 Field_2_51; // 0x2AC
	::System::Int32 Field_2_66; // 0x2B0
	::System::Int32 Field_2_67; // 0x2B4
	::System::Int32 Field_2_89; // 0x2B8
	::System::Int32 Field_2_76; // 0x2BC
	::System::Int32 Field_2_96; // 0x2C0
	::System::Single Field_2_145; // 0x2C4
	::System::Int32 Field_2_86; // 0x2C8
	::Class_2_3CC769D284A54927_1_Enum_3_3C549D6CCF7A45F3 Field_2_23; // 0x2CC
	::System::Int32 Field_2_15; // 0x2D0
	::System::Single Field_2_21; // 0x2D4
	::UnityEngine::Vector3 Field_2_13; // 0x2D8
	::System::Int32 Field_2_25; // 0x2E4
	::Class_2_3CC769D284A54927_Enum_3_B89961F60F1DB18A Field_2_29; // 0x2E8
	::System::Int32 Field_2_88; // 0x2EC
	::System::Int32 Field_2_82; // 0x2F0
	::System::Int32 Field_2_95; // 0x2F4
	::System::Int32 Field_2_70; // 0x2F8
	::System::Int32 Field_2_137; // 0x2FC
	::System::Int32 Field_2_33; // 0x300
	::System::Int32 Field_2_132; // 0x304
	::System::Int32 Field_2_85; // 0x308
	::System::Int32 Field_2_71; // 0x30C
	::System::Int32 Field_2_77; // 0x310
	::System::Single Field_2_19; // 0x314
	::System::Int32 Field_2_68; // 0x318
	::System::Int32 Field_2_81; // 0x31C
	::System::Int32 Field_2_0; // 0x320
	::System::Boolean Field_2_136; // 0x324
	::System::Boolean Field_2_34; // 0x325
	::System::Boolean Field_2_22; // 0x326
	::System::Boolean Field_2_39; // 0x327
	::System::Single Field_2_6; // 0x328
	::System::Int32 Field_2_30; // 0x32C
	::System::Single Field_2_18; // 0x330
	::System::Int32 Field_2_69; // 0x334

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1__CCTOR_OFFSET))();
	}

	::System::Void Method_2_F0F8DE036FE283F6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_F0F8DE036FE283F6_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_A20A6181036872A3(::System::Int32 a1, ::System::Boolean a2, ::System::Threading::CancellationTokenSource* a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Threading::CancellationTokenSource*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_A20A6181036872A3_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_FE4FFF99CBDC5C59()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_FE4FFF99CBDC5C59_OFFSET))(this);
	}

	::System::Void Method_2_00DC6C482249EA10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_00DC6C482249EA10_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData Method_2_2B75EF17FA51A4C2(::MoleMole::FishCameraConfig a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::MoleMole::FishCameraConfig))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_2B75EF17FA51A4C2_OFFSET))(this, a1);
	}

	::System::Void Method_2_3DEEB3DA75089F6D(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_3DEEB3DA75089F6D_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_E86DCAEC10915696(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::MoleMole::FishMove3DCurve* a3, ::System::Single a4, ::System::Boolean a5, ::System::Threading::CancellationToken a6)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::FishMove3DCurve*, ::System::Single, ::System::Boolean, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_E86DCAEC10915696_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_9E606B1B650D2069(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_9E606B1B650D2069_OFFSET))(this, a1);
	}

	::System::Void Method_2_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> Method_2_E2E632F486B6377D(::MoleMole::FishCameraConfig a1, ::MoleMole::Config::ConfigHollowCameraShake* a2, ::System::Single a3)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::PVOID, ::MoleMole::FishCameraConfig, ::MoleMole::Config::ConfigHollowCameraShake*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_E2E632F486B6377D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_AA08720895458700(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_AA08720895458700_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_3979F8726BD0E71A(::System::Int32 a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_3979F8726BD0E71A_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_3E59D56A6D957BC3(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_3E59D56A6D957BC3_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_A20A6181036872A3_1(::System::Int32 a1, ::System::Boolean a2, ::System::Threading::CancellationTokenSource* a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Threading::CancellationTokenSource*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_A20A6181036872A3_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_2_777C630B90A28EF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_777C630B90A28EF1_OFFSET))(this);
	}

	::System::Void Method_2_B2C52ACF9D9B435B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_B2C52ACF9D9B435B_OFFSET))(this);
	}

	::System::Void Method_2_B6BB704B01BCC35B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_B6BB704B01BCC35B_OFFSET))(this);
	}

	::System::Void Method_2_C39B31ED923BE88F(::System::Int32 a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_C39B31ED923BE88F_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::AnimationCurve* Method_2_7B29B3E93168F64B(::Class_2_3CC769D284A54927_1_Enum_3_3C549D6CCF7A45F3 a1)
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::Class_2_3CC769D284A54927_1_Enum_3_3C549D6CCF7A45F3))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_7B29B3E93168F64B_OFFSET))(this, a1);
	}

	::System::Void Method_2_85937A082BD1F4EA(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_85937A082BD1F4EA_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_FE4FFF99CBDC5C59_1()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_FE4FFF99CBDC5C59_1_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_8972CA953214CCAC(::System::Boolean a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_8972CA953214CCAC_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}

	::System::Int32 Method_2_2E7C0D86C81DC9BF(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_2E7C0D86C81DC9BF_OFFSET))(this, a1);
	}

	::System::Void Method_2_AFDC576A9606B859()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_AFDC576A9606B859_OFFSET))(this);
	}

	::System::Void Method_2_A0042105686D97E8(::Class_3_9D33A2E94B3E53DC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_9D33A2E94B3E53DC*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_A0042105686D97E8_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_D2EF5984500DDB97(::Enum_3_53C4A418F34F74D8 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_53C4A418F34F74D8))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_D2EF5984500DDB97_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> Method_2_847EE1C72FB227FF(::MoleMole::Config::ConfigHollowCameraShake* a1, ::System::Single a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::PVOID, ::MoleMole::Config::ConfigHollowCameraShake*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_847EE1C72FB227FF_OFFSET))(this, a1, a2);
	}

	::Class_2_208CC9941471731A_891* Method_2_43A46E5F9FAC62B8()
	{
		return ((::Class_2_208CC9941471731A_891*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_43A46E5F9FAC62B8_OFFSET))(this);
	}

	::System::UInt32 Method_2_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_2_17A4FC8F0F949C2F(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_17A4FC8F0F949C2F_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0E307B84478A272_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_F0E307B84478A272_1_OFFSET))(this);
	}

	::System::Void Method_2_7E08D95B7FF5A527(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_7E08D95B7FF5A527_OFFSET))(this, a1);
	}

	::System::Void Method_2_734CC582838F149E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_734CC582838F149E_OFFSET))(this, a1);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Boolean Method_2_AA972BE565DAF9E3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_AA972BE565DAF9E3_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::UInt32 Method_2_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_2_1FD6BDA1CE7A4F68(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_1FD6BDA1CE7A4F68_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4568CF0A4B3096CD(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_4568CF0A4B3096CD_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_3979F8726BD0E71A_1(::System::Int32 a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_3979F8726BD0E71A_1_OFFSET))(this, a1);
	}

	::MoleMole::FishPosConfig* Method_2_CF469E0BCFDDD161()
	{
		return ((::MoleMole::FishPosConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_CF469E0BCFDDD161_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_F44CBB782D24B59B(::System::Threading::CancellationTokenSource* a1, ::System::Boolean a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationTokenSource*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_F44CBB782D24B59B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7536D813D608DD3E(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_7536D813D608DD3E_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> Method_2_333A447E1F9DB36C()
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_333A447E1F9DB36C_OFFSET))(this);
	}

	::System::Void Method_2_B4B14845111E88EF(::Enum_3_53C4A418F34F74D8 a1, ::System::Action_1<::System::EventArgs*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_53C4A418F34F74D8, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_B4B14845111E88EF_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_2_6C8825BD793BF050(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_6C8825BD793BF050_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1659BCB6D1A9FC34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_1659BCB6D1A9FC34_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_65177D87AE73D86A(::UnityEngine::Vector3 a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_65177D87AE73D86A_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_57DCB1CE056E3F2A()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_57DCB1CE056E3F2A_OFFSET))(this);
	}

	::System::Void Method_2_AA08720895458700_1(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_AA08720895458700_1_OFFSET))(this, a1);
	}

	::Class_3_9D33A2E94B3E53DC* Method_2_F239777256F9BA8F()
	{
		return ((::Class_3_9D33A2E94B3E53DC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_F239777256F9BA8F_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_3979F8726BD0E71A_2(::System::Int32 a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_3979F8726BD0E71A_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_E8A4A5DF27E2D917(::System::String* a1, ::MoleMole::Config::ScreenEffectType a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ScreenEffectType))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_E8A4A5DF27E2D917_OFFSET))(this, a1, a2);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_3979F8726BD0E71A_3(::System::Int32 a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_3979F8726BD0E71A_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_BDA46A2B8AED6F11(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::System::Single a3, ::MoleMole::Config::ConfigHollowCameraShake* a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::MoleMole::Config::ConfigHollowCameraShake*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_BDA46A2B8AED6F11_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_2_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Void Method_2_EFB5322CAF695953(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_EFB5322CAF695953_OFFSET))(this, a1);
	}

	::System::Void Method_2_1938F8C98D264CE8(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_1938F8C98D264CE8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Void Method_2_AA08720895458700_2(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_AA08720895458700_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_4389275F4099DE36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_4389275F4099DE36_OFFSET))(this);
	}

	::Class_3_9D33A2E94B3E53DC* Method_2_F239777256F9BA8F_1()
	{
		return ((::Class_3_9D33A2E94B3E53DC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_F239777256F9BA8F_1_OFFSET))(this);
	}

	::UnityEngine::Camera* Method_2_91177D56EE5BDFAA()
	{
		return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_91177D56EE5BDFAA_OFFSET))(this);
	}

	::System::Void Method_2_E7262B6FC0F1EFC1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_E7262B6FC0F1EFC1_OFFSET))(this, a1);
	}

	::Class_1_451601B8BB62C38C* Method_2_E14A7FCF78650419()
	{
		return ((::Class_1_451601B8BB62C38C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_E14A7FCF78650419_OFFSET))(this);
	}

	::System::Void Method_2_805C56F44231AEF9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_805C56F44231AEF9_OFFSET))(this);
	}

	::System::Void Method_2_8714CF4AE9195CA2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_8714CF4AE9195CA2_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_2_46FFE52154A62C56()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_46FFE52154A62C56_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_451601B8BB62C38C*>* Method_2_4993EDAE54425105()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_451601B8BB62C38C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_4993EDAE54425105_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_832295EC279E5994_1_OFFSET))(this);
	}

	::MoleMole::FishMoveParam* Method_2_DA53837F60532EF6()
	{
		return ((::MoleMole::FishMoveParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_DA53837F60532EF6_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_FE4FFF99CBDC5C59_2()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_FE4FFF99CBDC5C59_2_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_9C3D8ED2211D368B(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_9C3D8ED2211D368B_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_FE4FFF99CBDC5C59_3()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_FE4FFF99CBDC5C59_3_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_F10A0D072D26C4BF()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_F10A0D072D26C4BF_OFFSET))(this);
	}

	::System::Void Method_2_F7BA13C72A6B3F58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_F7BA13C72A6B3F58_OFFSET))(this);
	}

	::System::Void Method_2_3E59D56A6D957BC3_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_3E59D56A6D957BC3_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_806E0B713D18089E(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_806E0B713D18089E_OFFSET))(this, a1);
	}

	::System::Void Method_2_123DFB09BD2C9B9E(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_123DFB09BD2C9B9E_OFFSET))(this, a1);
	}

	::PipelineCamera::WorldBasicCameraData Method_2_80685B06EECEDBB2(::PipelineCamera::WorldBasicCameraData a1, ::PipelineCamera::WorldBasicCameraData a2, ::System::Single a3)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::WorldBasicCameraData, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_80685B06EECEDBB2_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_2_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_5323F2DF46A044DA_1_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_08B8D05BB3CFDF07(::Class_2_3CC769D284A54927_Enum_3_57164B6F828D1B2A a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Single a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Class_2_3CC769D284A54927_Enum_3_57164B6F828D1B2A, ::System::Boolean, ::System::Boolean, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_08B8D05BB3CFDF07_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_4D70E3D849E4E16D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_4D70E3D849E4E16D_OFFSET))(this, a1);
	}

	::System::Void Method_2_25732AD12ABCB1D0(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_25732AD12ABCB1D0_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Single Method_2_5323F2DF46A044DA_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_5323F2DF46A044DA_2_OFFSET))(this);
	}

	::System::Int32 Method_2_55E74F41B8EB525D(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_55E74F41B8EB525D_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_933D559847530E10(::Class_2_3CC769D284A54927_1_Enum_3_3C549D6CCF7A45F3 a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Class_2_3CC769D284A54927_1_Enum_3_3C549D6CCF7A45F3))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_933D559847530E10_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_00DF19F0A88D3736(::System::Single a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_00DF19F0A88D3736_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_483E22AD1DF04969(::UnityEngine::Vector3 a1, ::System::Boolean a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_483E22AD1DF04969_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3E586421BA588EFD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_3E586421BA588EFD_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_2_86234E7B8FC44C08(::System::Int32 a1, ::System::Boolean a2, ::System::Threading::CancellationTokenSource* a3, ::System::Action_1<::System::Boolean>* a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Threading::CancellationTokenSource*, ::System::Action_1<::System::Boolean>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_86234E7B8FC44C08_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_928CB4D70C21FDF4(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_928CB4D70C21FDF4_OFFSET))(this, a1);
	}

	::System::Void Method_2_DBE9F5EB50CBCB21(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_DBE9F5EB50CBCB21_OFFSET))(this, a1);
	}

	::System::Void Method_2_A7C4A6FA5DA2B20C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_A7C4A6FA5DA2B20C_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_FE4FFF99CBDC5C59_4()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_FE4FFF99CBDC5C59_4_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_3979F8726BD0E71A_4(::System::Int32 a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_3979F8726BD0E71A_4_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_851895CF23E62498(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_851895CF23E62498_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3694AD952F4FFD05(::Class_2_3CC769D284A54927_1_Enum_3_8B68B5C2E96E415B a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_3CC769D284A54927_1_Enum_3_8B68B5C2E96E415B))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_3694AD952F4FFD05_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0E307B84478A272_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_F0E307B84478A272_2_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_832295EC279E5994_2_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_9309CE6A2148BDD0(::System::Int32 a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Threading::CancellationTokenSource* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Boolean, ::System::Threading::CancellationTokenSource*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_9309CE6A2148BDD0_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_68C5DD35C3F86CD6(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_68C5DD35C3F86CD6_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_FA662896843C137A()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_FA662896843C137A_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_65177D87AE73D86A_1(::UnityEngine::Vector3 a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_65177D87AE73D86A_1_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_5F07EA98A10C6EA9(::System::Int32 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_5F07EA98A10C6EA9_OFFSET))(this, a1);
	}

	::System::Void Method_2_E824E5100AAFBB01(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_E824E5100AAFBB01_OFFSET))(this, a1, a2);
	}
};
