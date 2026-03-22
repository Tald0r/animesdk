#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_17B78A87EAE1DCED.h"
#include "unitysdk/Enum_3_64FEF67DF2D01E84.h"
#include "unitysdk/Foundation/Tuple_3.h"
#include "unitysdk/MoleMole/Config/MatPropertySetting.h"
#include "unitysdk/MoleMole/Config/MaterialPropertyType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESLoopable.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueVector.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole { class ConfigAnimationCurveGroup; }
namespace MoleMole { class ConfigMaterialPropertyModifier; }
namespace MoleMole::Config { class ConfigMaterialPropertyModifierMap; }
namespace MoleMole::EffectSimulate { class Color01KeyframeCurve; }
namespace MoleMole::EffectSimulate { class ESAvatarMatChange_RendererPartInfo; }
namespace MoleMole::EffectSimulate { class Float01KeyframeCurve; }
namespace MoleMole::EffectSimulate { class UV01KeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector201KeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector401KeyframeCurve; }
namespace MoleMole::EffectSimulate { template <typename T> class Keyframeable01Curve_1; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture; }

#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_00D6B3CB1F4F5FE2_OFFSET UNITYSDK_OFFSET(0x9723960)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_032DFEAD312377C0_OFFSET UNITYSDK_OFFSET(0x97249F0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_0721A34A3F235CD6_OFFSET UNITYSDK_OFFSET(0x972B4E0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_0A3CE4A741F45029_1_OFFSET UNITYSDK_OFFSET(0x97238E0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_0A3CE4A741F45029_OFFSET UNITYSDK_OFFSET(0x9722C40)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_0D188FD3C4F156EF_OFFSET UNITYSDK_OFFSET(0x9726DC0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_0E35DB016D979A03_OFFSET UNITYSDK_OFFSET(0x9728720)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_0FF9BF68FEB50D87_OFFSET UNITYSDK_OFFSET(0x9725150)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_167F9AB65FD3C1E9_OFFSET UNITYSDK_OFFSET(0x97235B0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_18D011164747AC77_OFFSET UNITYSDK_OFFSET(0x972C220)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_18F90A371677B540_OFFSET UNITYSDK_OFFSET(0x97259E0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_1A8F94774D88DD12_OFFSET UNITYSDK_OFFSET(0x97252C0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x9726710)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_26A79C332EBF67F2_OFFSET UNITYSDK_OFFSET(0x972A6C0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_287B7650AAB16AEB_OFFSET UNITYSDK_OFFSET(0x972BF80)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_28C4F976AF001929_OFFSET UNITYSDK_OFFSET(0x9728A90)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_2988BD068ACDE805_OFFSET UNITYSDK_OFFSET(0x9722490)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_299CD3036627B007_OFFSET UNITYSDK_OFFSET(0x9725AC0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_2F71CF19D2F02460_OFFSET UNITYSDK_OFFSET(0x9724A20)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_3465AD12EDAA53AB_OFFSET UNITYSDK_OFFSET(0x97285C0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_36ECCC8189CC65B2_OFFSET UNITYSDK_OFFSET(0x9727970)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x97218D0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_391A84BCD9F51317_2_OFFSET UNITYSDK_OFFSET(0x97228A0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_391A84BCD9F51317_3_OFFSET UNITYSDK_OFFSET(0x972B020)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x9720BB0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_3965D1A67E88A029_OFFSET UNITYSDK_OFFSET(0x97230B0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_3D0BF1EF6D10A8B1_OFFSET UNITYSDK_OFFSET(0x9720FC0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x972B310)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_3EAAB2553A6018C4_OFFSET UNITYSDK_OFFSET(0x9722B90)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_3EB003E6F47D1FDF_1_OFFSET UNITYSDK_OFFSET(0x972C1A0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_3EB003E6F47D1FDF_OFFSET UNITYSDK_OFFSET(0x9724FF0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_3F6D459B7BA17E37_OFFSET UNITYSDK_OFFSET(0x9729A60)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_4272BE5198E6F216_OFFSET UNITYSDK_OFFSET(0x9724E60)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_43069389B18F0936_OFFSET UNITYSDK_OFFSET(0x9729B80)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x9725F80)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0x972BA60)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x9721990)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_49AC00594530B714_1_OFFSET UNITYSDK_OFFSET(0x972A660)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_49AC00594530B714_OFFSET UNITYSDK_OFFSET(0x9721930)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_49D41C826A66EA0F_OFFSET UNITYSDK_OFFSET(0x97214F0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_4AEBC27535CE7836_OFFSET UNITYSDK_OFFSET(0x972B710)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_4BD70257E617DEC0_OFFSET UNITYSDK_OFFSET(0x97293C0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_4BFF0BF9C8A5E012_OFFSET UNITYSDK_OFFSET(0x9723710)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_4F127FCB7C2E8AED_OFFSET UNITYSDK_OFFSET(0x9722900)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_53442613EB754348_OFFSET UNITYSDK_OFFSET(0x97241D0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_6020561CA0348DF2_OFFSET UNITYSDK_OFFSET(0x9728170)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_635EAE627A5D17CD_OFFSET UNITYSDK_OFFSET(0x9722AA0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_64890C014C2E0CC0_OFFSET UNITYSDK_OFFSET(0x9729C50)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_681E224EC188A7D5_OFFSET UNITYSDK_OFFSET(0x9720C10)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_6BCC7E4AC005654C_OFFSET UNITYSDK_OFFSET(0x9724420)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_6C766F53B1CC8109_OFFSET UNITYSDK_OFFSET(0x9721E30)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_71F8914B71084768_OFFSET UNITYSDK_OFFSET(0x9725A50)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_74F298BDAF021C94_OFFSET UNITYSDK_OFFSET(0x9725EF0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_7AEA4B2B25797605_OFFSET UNITYSDK_OFFSET(0x9720DE0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_7CFF0A7927F17273_OFFSET UNITYSDK_OFFSET(0x9726180)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_7E2FFE9B78D3EB9C_OFFSET UNITYSDK_OFFSET(0x9724E70)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_7EAAFC58338571AC_OFFSET UNITYSDK_OFFSET(0x972B090)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_7FCB4B23D3986319_OFFSET UNITYSDK_OFFSET(0x97226A0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_801A0FB93AD84194_OFFSET UNITYSDK_OFFSET(0x97233F0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_84995642A381B4E7_OFFSET UNITYSDK_OFFSET(0x9722F20)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_8558E387859BE466_OFFSET UNITYSDK_OFFSET(0x9726CB0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_86ADBB4228161C74_OFFSET UNITYSDK_OFFSET(0x97215E0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_8B5E14352498A551_OFFSET UNITYSDK_OFFSET(0x9726780)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_8E8F5C0EE115EF35_OFFSET UNITYSDK_OFFSET(0x9728930)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_9441529D4B4B549D_1_OFFSET UNITYSDK_OFFSET(0x97243B0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_9441529D4B4B549D_OFFSET UNITYSDK_OFFSET(0x9720D70)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_97B3D064317CBD55_OFFSET UNITYSDK_OFFSET(0x97212E0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_97E1A7CC17EEB189_OFFSET UNITYSDK_OFFSET(0x9725070)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_98F2C6700C79FC7B_OFFSET UNITYSDK_OFFSET(0x9729510)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_9DA1EAEE913D8A2B_OFFSET UNITYSDK_OFFSET(0x9727B60)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_9F8EF6EE79B16064_OFFSET UNITYSDK_OFFSET(0x9721840)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_A239DF324AF4215D_1_OFFSET UNITYSDK_OFFSET(0x97281F0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x97227E0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x97280B0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_A4EE86012E9FFAB6_OFFSET UNITYSDK_OFFSET(0x972B190)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_A6EDF0A838D0833E_OFFSET UNITYSDK_OFFSET(0x972B7E0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_AAA5D9082F14E784_OFFSET UNITYSDK_OFFSET(0x9721260)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_ABC8D484A6686265_OFFSET UNITYSDK_OFFSET(0x9721AA0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_AEBA7FC38248F3FF_OFFSET UNITYSDK_OFFSET(0x9722EB0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_B700C588F0375CB9_OFFSET UNITYSDK_OFFSET(0x97213F0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_BD1BC91599C8496D_OFFSET UNITYSDK_OFFSET(0x97232B0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_BE0B46E2EB67FE6C_OFFSET UNITYSDK_OFFSET(0x97297C0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x9728A30)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x9721A40)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9721200)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CAE5E281C1387FAA_OFFSET UNITYSDK_OFFSET(0x97258B0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CB7ECC66FD28DB10_OFFSET UNITYSDK_OFFSET(0x972B5F0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CC407148D5B8B025_OFFSET UNITYSDK_OFFSET(0x972AD90)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CCFDEEDCD5323B77_OFFSET UNITYSDK_OFFSET(0x972B380)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CFC69F38706EDADE_OFFSET UNITYSDK_OFFSET(0x9722970)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x972B080)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_D7CD998E3C12F8FA_OFFSET UNITYSDK_OFFSET(0x9726C10)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_DB455921A77E55B3_OFFSET UNITYSDK_OFFSET(0x97256C0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_DE1123ACD21D60EB_OFFSET UNITYSDK_OFFSET(0x9722CE0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_E006F4B7F26D8648_OFFSET UNITYSDK_OFFSET(0x9727FA0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_E0F2C81B101352A9_OFFSET UNITYSDK_OFFSET(0x9725FF0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_E121925593BB16FB_OFFSET UNITYSDK_OFFSET(0x972A2B0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_E21475E93D67A007_OFFSET UNITYSDK_OFFSET(0x972B960)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_E22A8C9553B04EDC_OFFSET UNITYSDK_OFFSET(0x97282B0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_E446EF351D4FD898_OFFSET UNITYSDK_OFFSET(0x972BD90)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_E639AC66E23A9DAF_1_OFFSET UNITYSDK_OFFSET(0x972B860)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_E639AC66E23A9DAF_OFFSET UNITYSDK_OFFSET(0x9726610)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_EEA73B6010018ADD_OFFSET UNITYSDK_OFFSET(0x9720C90)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_F291D33602C690AF_OFFSET UNITYSDK_OFFSET(0x972BBF0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_F322A47054696FF7_OFFSET UNITYSDK_OFFSET(0x9723F70)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_F761B83D73E58C46_OFFSET UNITYSDK_OFFSET(0x9724070)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_F91B8892FC7A8C48_1_OFFSET UNITYSDK_OFFSET(0x9721370)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_F91B8892FC7A8C48_OFFSET UNITYSDK_OFFSET(0x9720CF0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_FAFB283ECD0EB684_OFFSET UNITYSDK_OFFSET(0x9727A70)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x9721E20)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x9721BB0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESAvatarMatChange_TypeDefinitionIndex = 54439;

	class ESAvatarMatChange : public ::MoleMole::EffectSimulate::ESLoopable
	{
	public:
		static ::System::Action_1<::UnityEngine::Material*>** StaticGet_m_fcMakeAvatarMatKeywordChange()
		{
			return (::System::Action_1<::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(ESAvatarMatChange_TypeDefinitionIndex)->GetStaticField(0x47800);
		}
		// static const ::System::Int32 DRAW_ORDER = 0x14; // 0x0
		// static const ::System::String* BASE_GROUP_NAME; // 0x0
		// static const ::System::String* OTHER_GROUP_NAME; // 0x0
		// static const ::System::Int32 TOP_DRAW_ORDER = 0xFFFFFF9C; // 0x0
		// static const ::System::String* RENDERER_PART_CONFIG_GROUP_NAME; // 0x0
		// static const ::System::String* MAT_PROP_MODIFIER_ASSET_FOLDER_PATH; // 0x0
		// static const ::System::String* MAT_PROP_MODIFIER_ASSET_AUTOGEN_FOLDER_PATH; // 0x0
		// static const ::System::String* MAT_PROP_MODIFIER_TEMP_SELECT_SPLIT_CHAR; // 0x0
		::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo* m_stOverrideRendererPartInfo; // 0x58
		::UnityEngine::Renderer* m_stRenderer; // 0x60
		::System::Int32 _uniqueSeqID; // 0x68
		::System::String* _tempSelect; // 0x70
		::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo* rendererPartInfo; // 0x78
		::UnityEngine::AnimationCurve* fadeInCurve; // 0x80
		::UnityEngine::AnimationCurve* fadeOutCurve; // 0x88
		::UnityEngine::AnimationCurve* fadeOutCurve_Shower; // 0x90
		::System::Int32 priority; // 0x98
		::System::Boolean ignoreWorldTimescale; // 0x9C
		::System::Boolean ignoreOwnerTimescale; // 0x9D
		::System::Boolean ignoreWitchTimescale; // 0x9E
		::System::Boolean canCarryIntoBlackCurtain; // 0x9F
		::System::Boolean forbidSuspendByBlackCurtain; // 0xA0
		::System::Boolean endPerformWhiteList; // 0xA1
		::System::Boolean applyToAllShaders; // 0xA2
		::System::Boolean canPlayInCoopNonAuthority; // 0xA3
		::System::Boolean UseQuaSetting; // 0xA4
		::MoleMole::Config::MatPropertySetting QuaSetting; // 0xA5
		::MoleMole::EffectSimulate::Float01KeyframeCurve* enableCurve; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE__CCTOR_OFFSET))();
		}

		::System::Boolean Method_3_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Type* Method_3_681E224EC188A7D5()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_681E224EC188A7D5_OFFSET))(this);
		}

		::MoleMole::Config::MaterialPropertyType Method_3_EEA73B6010018ADD()
		{
			return ((::MoleMole::Config::MaterialPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_EEA73B6010018ADD_OFFSET))(this);
		}

		::System::Void Method_3_F91B8892FC7A8C48(::MoleMole::ConfigMaterialPropertyModifier* a1, ::MoleMole::ConfigAnimationCurveGroup* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyModifier*, ::MoleMole::ConfigAnimationCurveGroup*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_F91B8892FC7A8C48_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_9441529D4B4B549D(::MoleMole::ConfigMaterialPropertyModifier* a1, ::MoleMole::ConfigAnimationCurveGroup* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyModifier*, ::MoleMole::ConfigAnimationCurveGroup*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_9441529D4B4B549D_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_3_7AEA4B2B25797605()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_7AEA4B2B25797605_OFFSET))(this);
		}

		::System::Void Method_3_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_3_AAA5D9082F14E784(::UnityEngine::Material* a1, ::UnityEngine::MaterialPropertyBlock* a2, ::UnityEngine::Material* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_AAA5D9082F14E784_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_97B3D064317CBD55(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::UnityEngine::MaterialPropertyBlock* a3, ::UnityEngine::Material* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_97B3D064317CBD55_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_3_F91B8892FC7A8C48_1(::MoleMole::ConfigMaterialPropertyModifier* a1, ::MoleMole::ConfigAnimationCurveGroup* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyModifier*, ::MoleMole::ConfigAnimationCurveGroup*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_F91B8892FC7A8C48_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_B700C588F0375CB9(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_B700C588F0375CB9_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_86ADBB4228161C74()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_86ADBB4228161C74_OFFSET))(this);
		}

		::System::Void Method_3_9F8EF6EE79B16064(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_9F8EF6EE79B16064_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_391A84BCD9F51317_1_OFFSET))(this);
		}

		::Enum_3_17B78A87EAE1DCED Method_3_49AC00594530B714()
		{
			return ((::Enum_3_17B78A87EAE1DCED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_49AC00594530B714_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_ABC8D484A6686265(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_ABC8D484A6686265_OFFSET))(this, a1);
		}

		::System::Void Method_3_6C766F53B1CC8109(::MoleMole::ConfigAnimationCurveGroup* a1, ::System::Single a2, ::System::Single a3, ::System::Boolean a4, ::MoleMole::EffectSimulate::Vector401KeyframeCurve* a5, ::System::Byte a6)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigAnimationCurveGroup*, ::System::Single, ::System::Single, ::System::Boolean, ::MoleMole::EffectSimulate::Vector401KeyframeCurve*, ::System::Byte))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_6C766F53B1CC8109_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void Method_3_2988BD068ACDE805(::UnityEngine::Material* a1, ::UnityEngine::MaterialPropertyBlock* a2, ::System::Boolean a3, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::System::Single>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::System::Boolean, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::System::Single>*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_2988BD068ACDE805_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_3_A239DF324AF4215D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_A239DF324AF4215D_OFFSET))(this);
		}

		::System::Boolean Method_3_391A84BCD9F51317_2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_391A84BCD9F51317_2_OFFSET))(this);
		}

		::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo* Method_3_4F127FCB7C2E8AED()
		{
			return ((::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_4F127FCB7C2E8AED_OFFSET))(this);
		}

		::System::Void Method_3_CFC69F38706EDADE(::UnityEngine::AnimationCurve* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CFC69F38706EDADE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_3EAAB2553A6018C4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_3EAAB2553A6018C4_OFFSET))(this);
		}

		::System::Void Method_3_0A3CE4A741F45029(::UnityEngine::Material* a1, ::UnityEngine::MaterialPropertyBlock* a2, ::UnityEngine::Material* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_0A3CE4A741F45029_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_84995642A381B4E7(::MoleMole::ConfigAnimationCurveGroup* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigAnimationCurveGroup*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_84995642A381B4E7_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_3_BD1BC91599C8496D(::UnityEngine::Material* a1, ::UnityEngine::Material* a2, ::System::Boolean a3, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::System::Single>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*, ::System::Boolean, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::System::Single>*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_BD1BC91599C8496D_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_3_167F9AB65FD3C1E9(::UnityEngine::Material* a1, ::UnityEngine::Material* a2, ::System::Boolean a3, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Vector4>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*, ::System::Boolean, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_167F9AB65FD3C1E9_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_3_0A3CE4A741F45029_1(::UnityEngine::Material* a1, ::UnityEngine::MaterialPropertyBlock* a2, ::UnityEngine::Material* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_0A3CE4A741F45029_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_3_00D6B3CB1F4F5FE2(::MoleMole::EffectSimulate::UV01KeyframeCurve* a1, ::MoleMole::MaterialPropertyModifierValueTexture a2, ::MoleMole::ConfigAnimationCurveGroup* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::EffectSimulate::UV01KeyframeCurve*, ::MoleMole::MaterialPropertyModifierValueTexture, ::MoleMole::ConfigAnimationCurveGroup*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_00D6B3CB1F4F5FE2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_F761B83D73E58C46(::UnityEngine::Material* a1, ::UnityEngine::MaterialPropertyBlock* a2, ::System::String* a3, ::System::Boolean a4, ::UnityEngine::Texture* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::System::String*, ::System::Boolean, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_F761B83D73E58C46_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_3_801A0FB93AD84194(::UnityEngine::Material* a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_801A0FB93AD84194_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_9441529D4B4B549D_1(::MoleMole::ConfigMaterialPropertyModifier* a1, ::MoleMole::ConfigAnimationCurveGroup* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyModifier*, ::MoleMole::ConfigAnimationCurveGroup*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_9441529D4B4B549D_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_3_6BCC7E4AC005654C(::MoleMole::EffectSimulate::Vector401KeyframeCurve* a1, ::MoleMole::MaterialPropertyModifierValueVector a2, ::MoleMole::ConfigAnimationCurveGroup* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::EffectSimulate::Vector401KeyframeCurve*, ::MoleMole::MaterialPropertyModifierValueVector, ::MoleMole::ConfigAnimationCurveGroup*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_6BCC7E4AC005654C_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::AnimationCurve* Method_3_635EAE627A5D17CD(::UnityEngine::AnimationCurve* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_635EAE627A5D17CD_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Collections::Generic::List_1<::Foundation::Tuple_3<::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*>>*>* Method_3_032DFEAD312377C0()
		{
			return ((::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Collections::Generic::List_1<::Foundation::Tuple_3<::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*>>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_032DFEAD312377C0_OFFSET))(this);
		}

		::System::Void Method_3_2F71CF19D2F02460(::MoleMole::ConfigAnimationCurveGroup* a1, ::System::Single a2, ::System::Single a3, ::System::Boolean a4, ::MoleMole::EffectSimulate::Float01KeyframeCurve* a5)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigAnimationCurveGroup*, ::System::Single, ::System::Single, ::System::Boolean, ::MoleMole::EffectSimulate::Float01KeyframeCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_2F71CF19D2F02460_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_3_4272BE5198E6F216(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_4272BE5198E6F216_OFFSET))(this, a1);
		}

		::System::Void Method_3_7E2FFE9B78D3EB9C(::UnityEngine::MaterialPropertyBlock* a1, ::System::String* a2, ::UnityEngine::Vector4 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::String*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_7E2FFE9B78D3EB9C_OFFSET))(this, a1, a2, a3);
		}

		::MoleMole::MaterialPropertyModifierValueFloat Method_3_3EB003E6F47D1FDF(::System::Boolean a1)
		{
			return ((::MoleMole::MaterialPropertyModifierValueFloat(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_3EB003E6F47D1FDF_OFFSET))(this, a1);
		}

		::UnityEngine::AnimationCurve* Method_3_F322A47054696FF7(::MoleMole::ConfigAnimationCurveGroup* a1, ::System::String* a2)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::MoleMole::ConfigAnimationCurveGroup*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_F322A47054696FF7_OFFSET))(this, a1, a2);
		}

		::System::Single Method_3_3D0BF1EF6D10A8B1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_3D0BF1EF6D10A8B1_OFFSET))(this);
		}

		::System::Void Method_3_0FF9BF68FEB50D87(::UnityEngine::Material* a1, ::UnityEngine::Material* a2, ::System::Boolean a3, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Vector2>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*, ::System::Boolean, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_0FF9BF68FEB50D87_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_3_1A8F94774D88DD12(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::System::String* a3, ::UnityEngine::Texture* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::System::String*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_1A8F94774D88DD12_OFFSET))(this, a1, a2, a3, a4);
		}

		::MoleMole::MaterialPropertyModifierValueVector Method_3_CAE5E281C1387FAA(::System::Boolean a1, ::MoleMole::EffectSimulate::Vector401KeyframeCurve* a2, ::System::Byte a3)
		{
			return ((::MoleMole::MaterialPropertyModifierValueVector(*)(::PVOID, ::System::Boolean, ::MoleMole::EffectSimulate::Vector401KeyframeCurve*, ::System::Byte))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CAE5E281C1387FAA_OFFSET))(this, a1, a2, a3);
		}

		::System::String* Method_3_18F90A371677B540(::UnityEngine::Object* a1)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_18F90A371677B540_OFFSET))(this, a1);
		}

		::System::Void Method_3_71F8914B71084768(::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_71F8914B71084768_OFFSET))(this, a1);
		}

		::System::Void Method_3_299CD3036627B007(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::System::String* a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_299CD3036627B007_OFFSET))(this, a1, a2, a3, a4);
		}

		::MoleMole::MaterialPropertyModifierValueBool Method_3_74F298BDAF021C94(::System::Boolean a1)
		{
			return ((::MoleMole::MaterialPropertyModifierValueBool(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_74F298BDAF021C94_OFFSET))(this, a1);
		}

		::System::Void Method_3_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_3_E0F2C81B101352A9(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::UnityEngine::Material* a3, ::System::Boolean a4, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Color>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::UnityEngine::Material*, ::System::Boolean, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_E0F2C81B101352A9_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_3_DE1123ACD21D60EB(::UnityEngine::Material* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_DE1123ACD21D60EB_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_3_E639AC66E23A9DAF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_E639AC66E23A9DAF_OFFSET))(this);
		}

		::System::Void Method_3_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_2685B6183E614529_OFFSET))(this, a1);
		}

		::System::Void Method_3_8B5E14352498A551(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::System::String* a3, ::UnityEngine::Vector4 a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::System::String*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_8B5E14352498A551_OFFSET))(this, a1, a2, a3, a4);
		}

		::MoleMole::MaterialPropertyModifierValueFloat Method_3_D7CD998E3C12F8FA(::System::Boolean a1, ::System::Single a2)
		{
			return ((::MoleMole::MaterialPropertyModifierValueFloat(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_D7CD998E3C12F8FA_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_53442613EB754348(::UnityEngine::MaterialPropertyBlock* a1, ::System::String* a2, ::UnityEngine::Texture* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::String*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_53442613EB754348_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_8558E387859BE466(::UnityEngine::Material* a1, ::UnityEngine::MaterialPropertyBlock* a2, ::System::Boolean a3, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Vector4>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::System::Boolean, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_8558E387859BE466_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean Method_3_0D188FD3C4F156EF(::MoleMole::EffectSimulate::Color01KeyframeCurve* a1, ::MoleMole::MaterialPropertyModifierValueColor a2, ::MoleMole::ConfigAnimationCurveGroup* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::EffectSimulate::Color01KeyframeCurve*, ::MoleMole::MaterialPropertyModifierValueColor, ::MoleMole::ConfigAnimationCurveGroup*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_0D188FD3C4F156EF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_36ECCC8189CC65B2(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_36ECCC8189CC65B2_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_FAFB283ECD0EB684(::UnityEngine::Material* a1, ::UnityEngine::Material* a2, ::System::String* a3, ::System::Boolean a4, ::UnityEngine::Texture* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*, ::System::String*, ::System::Boolean, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_FAFB283ECD0EB684_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_3_9DA1EAEE913D8A2B(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::System::String* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_9DA1EAEE913D8A2B_OFFSET))(this, a1, a2, a3, a4);
		}

		::MoleMole::MaterialPropertyModifierValueColor Method_3_E006F4B7F26D8648(::System::Boolean a1, ::MoleMole::EffectSimulate::Color01KeyframeCurve* a2)
		{
			return ((::MoleMole::MaterialPropertyModifierValueColor(*)(::PVOID, ::System::Boolean, ::MoleMole::EffectSimulate::Color01KeyframeCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_E006F4B7F26D8648_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_3_A3FAE12D7B6ACD62()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_A3FAE12D7B6ACD62_OFFSET))(this);
		}

		::UnityEngine::Texture* Method_3_6020561CA0348DF2(::MoleMole::MaterialPropertyModifierValueTexture a1)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::MoleMole::MaterialPropertyModifierValueTexture))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_6020561CA0348DF2_OFFSET))(this, a1);
		}

		::System::Void Method_3_A239DF324AF4215D_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_A239DF324AF4215D_1_OFFSET))(this);
		}

		::System::Void Method_3_49D41C826A66EA0F(::System::Action_3<::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_3<::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_49D41C826A66EA0F_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_3465AD12EDAA53AB(::UnityEngine::Material* a1, ::UnityEngine::Material* a2, ::System::Boolean a3, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Color>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*, ::System::Boolean, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_3465AD12EDAA53AB_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean Method_3_8E8F5C0EE115EF35(::MoleMole::EffectSimulate::Vector401KeyframeCurve* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::EffectSimulate::Vector401KeyframeCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_8E8F5C0EE115EF35_OFFSET))(this, a1);
		}

		::System::Void Method_3_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::String* Method_3_28C4F976AF001929(::System::String* a1, ::System::String* a2, ::MoleMole::Config::ConfigMaterialPropertyModifierMap* a3, ::System::Single a4, ::System::String* a5, ::System::Boolean a6, ::System::String* a7, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a8, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a9)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*, ::MoleMole::Config::ConfigMaterialPropertyModifierMap*, ::System::Single, ::System::String*, ::System::Boolean, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_28C4F976AF001929_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void Method_3_CA373AA1C7054598_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CA373AA1C7054598_2_OFFSET))(this);
		}

		::System::Void Method_3_4BD70257E617DEC0(::UnityEngine::MaterialPropertyBlock* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_4BD70257E617DEC0_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void Method_3_98F2C6700C79FC7B(::UnityEngine::AnimationCurve* a1)
		{
			return ((::System::Void(*)(::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_98F2C6700C79FC7B_OFFSET))(a1);
		}

		::System::Void Method_3_BE0B46E2EB67FE6C(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::UnityEngine::Material* a3, ::System::Boolean a4, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Vector4>* a5, ::System::Byte a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::UnityEngine::Material*, ::System::Boolean, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Vector4>*, ::System::Byte))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_BE0B46E2EB67FE6C_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_3_43069389B18F0936()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_43069389B18F0936_OFFSET))(this);
		}

		::System::Void Method_3_AEBA7FC38248F3FF(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_AEBA7FC38248F3FF_OFFSET))(this, a1);
		}

		::System::Void Method_3_64890C014C2E0CC0(::MoleMole::ConfigAnimationCurveGroup* a1, ::System::Single a2, ::System::Single a3, ::System::Boolean a4, ::MoleMole::EffectSimulate::UV01KeyframeCurve* a5)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigAnimationCurveGroup*, ::System::Single, ::System::Single, ::System::Boolean, ::MoleMole::EffectSimulate::UV01KeyframeCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_64890C014C2E0CC0_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_3_E121925593BB16FB(::MoleMole::ConfigAnimationCurveGroup* a1, ::System::Single a2, ::System::Single a3, ::System::Boolean a4, ::MoleMole::EffectSimulate::Vector201KeyframeCurve* a5)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigAnimationCurveGroup*, ::System::Single, ::System::Single, ::System::Boolean, ::MoleMole::EffectSimulate::Vector201KeyframeCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_E121925593BB16FB_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::Enum_3_17B78A87EAE1DCED Method_3_49AC00594530B714_1()
		{
			return ((::Enum_3_17B78A87EAE1DCED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_49AC00594530B714_1_OFFSET))(this);
		}

		::System::Void Method_3_7FCB4B23D3986319(::UnityEngine::MaterialPropertyBlock* a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_7FCB4B23D3986319_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_7CFF0A7927F17273(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::System::String* a3, ::UnityEngine::Color a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_7CFF0A7927F17273_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_3_DB455921A77E55B3(::UnityEngine::Material* a1, ::System::String* a2, ::UnityEngine::Texture* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::String*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_DB455921A77E55B3_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::AnimationCurve* Method_3_3965D1A67E88A029(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_3965D1A67E88A029_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector4 Method_3_3F6D459B7BA17E37(::UnityEngine::Vector4 a1, ::UnityEngine::Vector4 a2, ::System::Byte a3)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::System::Byte))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_3F6D459B7BA17E37_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_E22A8C9553B04EDC(::System::Action_4<::UnityEngine::Renderer*, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_4<::UnityEngine::Renderer*, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_E22A8C9553B04EDC_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_CC407148D5B8B025(::MoleMole::ConfigAnimationCurveGroup* a1, ::System::Single a2, ::System::Single a3, ::System::Boolean a4, ::MoleMole::EffectSimulate::Float01KeyframeCurve* a5)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigAnimationCurveGroup*, ::System::Single, ::System::Single, ::System::Boolean, ::MoleMole::EffectSimulate::Float01KeyframeCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CC407148D5B8B025_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean Method_3_391A84BCD9F51317_3()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_391A84BCD9F51317_3_OFFSET))(this);
		}

		::System::Void Method_3_D3129FE8DF635B48()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_D3129FE8DF635B48_OFFSET))(this);
		}

		::System::Boolean Method_3_26A79C332EBF67F2(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_26A79C332EBF67F2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_7EAAFC58338571AC(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::UnityEngine::Material* a3, ::System::String* a4, ::System::Boolean a5, ::UnityEngine::Texture* a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::UnityEngine::Material*, ::System::String*, ::System::Boolean, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_7EAAFC58338571AC_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void Method_3_A4EE86012E9FFAB6(::UnityEngine::MaterialPropertyBlock* a1, ::System::String* a2, ::UnityEngine::Color a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_A4EE86012E9FFAB6_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_3E7178C5ECF017DB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_3E7178C5ECF017DB_OFFSET))(this, a1);
		}

		::System::Void Method_3_CCFDEEDCD5323B77(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::UnityEngine::Material* a3, ::System::Boolean a4, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::System::Single>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::UnityEngine::Material*, ::System::Boolean, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::System::Single>*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CCFDEEDCD5323B77_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_3_0E35DB016D979A03(::UnityEngine::Material* a1, ::System::String* a2, ::UnityEngine::Color a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_0E35DB016D979A03_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_0721A34A3F235CD6(::UnityEngine::Material* a1, ::UnityEngine::MaterialPropertyBlock* a2, ::System::Boolean a3, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Color>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::System::Boolean, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_0721A34A3F235CD6_OFFSET))(this, a1, a2, a3, a4);
		}

		::MoleMole::MaterialPropertyModifierValueVector Method_3_CB7ECC66FD28DB10(::System::Boolean a1, ::MoleMole::EffectSimulate::Vector401KeyframeCurve* a2)
		{
			return ((::MoleMole::MaterialPropertyModifierValueVector(*)(::PVOID, ::System::Boolean, ::MoleMole::EffectSimulate::Vector401KeyframeCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CB7ECC66FD28DB10_OFFSET))(this, a1, a2);
		}

		::MoleMole::MaterialPropertyModifierValueFloat Method_3_4AEBC27535CE7836(::System::Boolean a1, ::MoleMole::EffectSimulate::Float01KeyframeCurve* a2)
		{
			return ((::MoleMole::MaterialPropertyModifierValueFloat(*)(::PVOID, ::System::Boolean, ::MoleMole::EffectSimulate::Float01KeyframeCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_4AEBC27535CE7836_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_3_A6EDF0A838D0833E()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_A6EDF0A838D0833E_OFFSET))(this);
		}

		::System::Void Method_3_4BFF0BF9C8A5E012(::UnityEngine::Material* a1, ::System::String* a2, ::UnityEngine::Vector4 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::String*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_4BFF0BF9C8A5E012_OFFSET))(this, a1, a2, a3);
		}

		::MoleMole::MaterialPropertyModifierValueVector Method_3_E21475E93D67A007(::System::Boolean a1, ::MoleMole::EffectSimulate::Vector201KeyframeCurve* a2)
		{
			return ((::MoleMole::MaterialPropertyModifierValueVector(*)(::PVOID, ::System::Boolean, ::MoleMole::EffectSimulate::Vector201KeyframeCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_E21475E93D67A007_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_3_E639AC66E23A9DAF_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_E639AC66E23A9DAF_1_OFFSET))(this);
		}

		::Enum_3_64FEF67DF2D01E84 Method_3_97E1A7CC17EEB189()
		{
			return ((::Enum_3_64FEF67DF2D01E84(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_97E1A7CC17EEB189_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_4343F372F34C05BF_2_OFFSET))(this);
		}

		::System::Void Method_3_F291D33602C690AF(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::UnityEngine::Material* a3, ::System::Boolean a4, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Vector2>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::UnityEngine::Material*, ::System::Boolean, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_F291D33602C690AF_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::MoleMole::MaterialPropertyModifierValueTexture Method_3_E446EF351D4FD898(::System::Boolean a1, ::UnityEngine::Texture* a2, ::MoleMole::EffectSimulate::UV01KeyframeCurve* a3)
		{
			return ((::MoleMole::MaterialPropertyModifierValueTexture(*)(::PVOID, ::System::Boolean, ::UnityEngine::Texture*, ::MoleMole::EffectSimulate::UV01KeyframeCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_E446EF351D4FD898_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_3_287B7650AAB16AEB(::MoleMole::EffectSimulate::Float01KeyframeCurve* a1, ::MoleMole::MaterialPropertyModifierValueFloat a2, ::MoleMole::ConfigAnimationCurveGroup* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::EffectSimulate::Float01KeyframeCurve*, ::MoleMole::MaterialPropertyModifierValueFloat, ::MoleMole::ConfigAnimationCurveGroup*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_287B7650AAB16AEB_OFFSET))(this, a1, a2, a3);
		}

		::MoleMole::MaterialPropertyModifierValueFloat Method_3_3EB003E6F47D1FDF_1(::System::Boolean a1)
		{
			return ((::MoleMole::MaterialPropertyModifierValueFloat(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_3EB003E6F47D1FDF_1_OFFSET))(this, a1);
		}

		::System::Void Method_3_18D011164747AC77(::MoleMole::ConfigAnimationCurveGroup* a1, ::System::Single a2, ::System::Single a3, ::System::Boolean a4, ::MoleMole::EffectSimulate::Color01KeyframeCurve* a5)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigAnimationCurveGroup*, ::System::Single, ::System::Single, ::System::Boolean, ::MoleMole::EffectSimulate::Color01KeyframeCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_18D011164747AC77_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}
