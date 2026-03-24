#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Enum_3_E2BB401879FE05E8.h"
#include "unitysdk/Enum_3_F674042AB3067BFB.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/UICameraAtom.h"
#include "unitysdk/Share/GridDir.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_454;
class Class_1_6882402F0E54C8AE;
class Class_2_32138D5A75148582;
class Class_2_4381F51A10516261;
class Class_2_46A7F03961ADD6EC;
class Class_2_5F64140FAB2210F3;
class Class_2_954470B5468267C8;
class Class_2_AD95DD998F7AF291_3;
class Class_2_C4447E0793BA6636;
class Class_2_D4C53B59CD34FFED;
class Class_2_F02C9DCBE9D88C7A;
class Class_5_AF65C3A968E836D2;
namespace MoleMole { class UIHollowChessboard3DModelController; }
namespace MoleMole::Cameras { class VCameraCustomTargetGroup; }
namespace MoleMole::Cameras { class VCameraTargetGroup; }
namespace MoleMole::Config { class ConfigHollowCameraBounce; }
namespace MoleMole::Config { class ConfigHollowCameraShake; }
namespace MoleMole::Config { class ConfigHollowCameraStretchV2; }
namespace MoleMole::Config { class ConfigHollowChessboardCamera; }
namespace Share { class CVector2; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_E5B7864412CDC074_METHOD_1_00DEF5A164D9A9D5_OFFSET UNITYSDK_OFFSET(0xAF09F70)
#define CLASS_1_E5B7864412CDC074_METHOD_1_06D2228B483124DF_OFFSET UNITYSDK_OFFSET(0xAF0BD10)
#define CLASS_1_E5B7864412CDC074_METHOD_1_0AFA90E4B45F47A7_OFFSET UNITYSDK_OFFSET(0x697FB10)
#define CLASS_1_E5B7864412CDC074_METHOD_1_0C221FCA05A7E312_OFFSET UNITYSDK_OFFSET(0x697BED0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_145034070A52EAE6_OFFSET UNITYSDK_OFFSET(0xAF04C60)
#define CLASS_1_E5B7864412CDC074_METHOD_1_1F7B9CBD9BFB886C_OFFSET UNITYSDK_OFFSET(0xAF0C630)
#define CLASS_1_E5B7864412CDC074_METHOD_1_20D6605E17B95057_OFFSET UNITYSDK_OFFSET(0x697F6B0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_2258313D16F57989_OFFSET UNITYSDK_OFFSET(0xAF09E80)
#define CLASS_1_E5B7864412CDC074_METHOD_1_23998463F0B51901_OFFSET UNITYSDK_OFFSET(0xAF0A2C0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_25E1717AC740E4D8_OFFSET UNITYSDK_OFFSET(0x69823B0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_2DC57A98C12C3B08_OFFSET UNITYSDK_OFFSET(0xAF0D3E0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_2FA6186936186DD5_OFFSET UNITYSDK_OFFSET(0xAF094A0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_32F2A54B76F4A075_OFFSET UNITYSDK_OFFSET(0xAF0B8C0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_35A3E037AE40D4E6_OFFSET UNITYSDK_OFFSET(0x697D530)
#define CLASS_1_E5B7864412CDC074_METHOD_1_35C2147AAA113EE8_OFFSET UNITYSDK_OFFSET(0x697DA20)
#define CLASS_1_E5B7864412CDC074_METHOD_1_3C8ACECF8DED690A_OFFSET UNITYSDK_OFFSET(0xAF02BC0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0x69812A0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_4334192989EA7BA7_OFFSET UNITYSDK_OFFSET(0xAF06820)
#define CLASS_1_E5B7864412CDC074_METHOD_1_508E2F6DAF579FF3_OFFSET UNITYSDK_OFFSET(0xAF05080)
#define CLASS_1_E5B7864412CDC074_METHOD_1_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x6980C20)
#define CLASS_1_E5B7864412CDC074_METHOD_1_52C6D61BCBD2D69A_OFFSET UNITYSDK_OFFSET(0xAF0C9C0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0xAF07040)
#define CLASS_1_E5B7864412CDC074_METHOD_1_5878AFA000AEB05A_OFFSET UNITYSDK_OFFSET(0x697F090)
#define CLASS_1_E5B7864412CDC074_METHOD_1_588C7CDA7B8F75A1_OFFSET UNITYSDK_OFFSET(0xAF03F90)
#define CLASS_1_E5B7864412CDC074_METHOD_1_5986658AFDADED88_OFFSET UNITYSDK_OFFSET(0x697B050)
#define CLASS_1_E5B7864412CDC074_METHOD_1_606AE513BAFD876B_OFFSET UNITYSDK_OFFSET(0x69815C0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_626C719A884DEF9A_OFFSET UNITYSDK_OFFSET(0xAF06FA0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_7769AA02B48690B5_OFFSET UNITYSDK_OFFSET(0x697CBE0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_78955B0A1A661CC4_OFFSET UNITYSDK_OFFSET(0x697B8F0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_7EBE4E0D7A98E48B_OFFSET UNITYSDK_OFFSET(0x697C580)
#define CLASS_1_E5B7864412CDC074_METHOD_1_83FA0D3387977421_OFFSET UNITYSDK_OFFSET(0x697BFC0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_84B8ABF3C2EF60EE_OFFSET UNITYSDK_OFFSET(0x69825E0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_8DC652D916C182B2_OFFSET UNITYSDK_OFFSET(0x697D2C0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_8FBB86B755BAC359_OFFSET UNITYSDK_OFFSET(0x6980AF0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_9EF665C07CB5B066_OFFSET UNITYSDK_OFFSET(0xAF03EA0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_A3587E8D94134238_OFFSET UNITYSDK_OFFSET(0xAF0C590)
#define CLASS_1_E5B7864412CDC074_METHOD_1_A37F95FE754B38A0_OFFSET UNITYSDK_OFFSET(0x69820C0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_A5F11439BBA4D407_OFFSET UNITYSDK_OFFSET(0xAF07EC0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_A607957373336DE5_OFFSET UNITYSDK_OFFSET(0x6981160)
#define CLASS_1_E5B7864412CDC074_METHOD_1_A6185D969F0931D8_OFFSET UNITYSDK_OFFSET(0xAF058C0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_A9DE4BB9A0E5598F_OFFSET UNITYSDK_OFFSET(0x697BBB0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_ADD9855FD49AD8D2_OFFSET UNITYSDK_OFFSET(0x6981950)
#define CLASS_1_E5B7864412CDC074_METHOD_1_AE748D1621064ED1_OFFSET UNITYSDK_OFFSET(0x69809D0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xAF0D040)
#define CLASS_1_E5B7864412CDC074_METHOD_1_B1BDEE17D8857FD1_OFFSET UNITYSDK_OFFSET(0xAF0BA30)
#define CLASS_1_E5B7864412CDC074_METHOD_1_B489722BAF57AF73_OFFSET UNITYSDK_OFFSET(0x697FB90)
#define CLASS_1_E5B7864412CDC074_METHOD_1_B7289E081ADF91A6_OFFSET UNITYSDK_OFFSET(0xAF0C030)
#define CLASS_1_E5B7864412CDC074_METHOD_1_B7EDD769B79C6563_OFFSET UNITYSDK_OFFSET(0xAF0A1B0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_BA1BB49741CFDFE1_1_OFFSET UNITYSDK_OFFSET(0xAF0BEC0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_BA1BB49741CFDFE1_OFFSET UNITYSDK_OFFSET(0xAF0B8D0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_BCFC75DE0278F431_1_OFFSET UNITYSDK_OFFSET(0x69823A0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_BCFC75DE0278F431_OFFSET UNITYSDK_OFFSET(0x697D2B0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_C33AA666DB3DE34D_OFFSET UNITYSDK_OFFSET(0xAF04910)
#define CLASS_1_E5B7864412CDC074_METHOD_1_C37AACF2642A2F6A_OFFSET UNITYSDK_OFFSET(0x697B6C0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_C411E5881DF297DE_OFFSET UNITYSDK_OFFSET(0xAF0D200)
#define CLASS_1_E5B7864412CDC074_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x6980C10)
#define CLASS_1_E5B7864412CDC074_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0xAF0D100)
#define CLASS_1_E5B7864412CDC074_METHOD_1_C7E9988AD5E10B7A_OFFSET UNITYSDK_OFFSET(0xAF05F00)
#define CLASS_1_E5B7864412CDC074_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xAF09E10)
#define CLASS_1_E5B7864412CDC074_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0xAF0D520)
#define CLASS_1_E5B7864412CDC074_METHOD_1_CAF85877FDFC30A8_OFFSET UNITYSDK_OFFSET(0x6980DB0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_CFD9A84212B388AA_OFFSET UNITYSDK_OFFSET(0x6981290)
#define CLASS_1_E5B7864412CDC074_METHOD_1_D08299638F50AEA0_OFFSET UNITYSDK_OFFSET(0x6983220)
#define CLASS_1_E5B7864412CDC074_METHOD_1_D0DEB18CEDA5EC73_OFFSET UNITYSDK_OFFSET(0xAF07060)
#define CLASS_1_E5B7864412CDC074_METHOD_1_DDE31FEAF2A25220_OFFSET UNITYSDK_OFFSET(0xAF08440)
#define CLASS_1_E5B7864412CDC074_METHOD_1_E12CF800D66E5E44_OFFSET UNITYSDK_OFFSET(0xAF0D110)
#define CLASS_1_E5B7864412CDC074_METHOD_1_E3B10A51EB0F6A50_OFFSET UNITYSDK_OFFSET(0xAF06C30)
#define CLASS_1_E5B7864412CDC074_METHOD_1_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0xAF07050)
#define CLASS_1_E5B7864412CDC074_METHOD_1_E8702C4614090520_OFFSET UNITYSDK_OFFSET(0xAF05DA0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_EEF8998130F57BC0_OFFSET UNITYSDK_OFFSET(0x69810B0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0xAF09E00)
#define CLASS_1_E5B7864412CDC074_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x697BA60)
#define CLASS_1_E5B7864412CDC074_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xAF05070)
#define CLASS_1_E5B7864412CDC074_METHOD_1_F3A2343C2D2235E6_OFFSET UNITYSDK_OFFSET(0x6982270)
#define CLASS_1_E5B7864412CDC074_METHOD_1_F3AA9A2F67D0417A_OFFSET UNITYSDK_OFFSET(0xAF0C8C0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_F55212E77440B167_OFFSET UNITYSDK_OFFSET(0x697EE50)
#define CLASS_1_E5B7864412CDC074_METHOD_1_F7BA13C72A6B3F58_1_OFFSET UNITYSDK_OFFSET(0x697F7F0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_F7BA13C72A6B3F58_OFFSET UNITYSDK_OFFSET(0xAF0D2B0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_F8294187DC3A14E6_OFFSET UNITYSDK_OFFSET(0x697BA70)
#define CLASS_1_E5B7864412CDC074_METHOD_1_FAA0BB64FC1D8FBA_OFFSET UNITYSDK_OFFSET(0x6982C10)
#define CLASS_1_E5B7864412CDC074_ONDRAG_OFFSET UNITYSDK_OFFSET(0xAF02EB0)
#define CLASS_1_E5B7864412CDC074__CTOR_OFFSET UNITYSDK_OFFSET(0xAF01FD0)

inline static constexpr unsigned int Class_1_E5B7864412CDC074_TypeDefinitionIndex = 52690;

class Class_1_E5B7864412CDC074 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_2; // 0x0
	// static const ::System::Single Field_1_3; // 0x0
	// static const ::System::Single Field_1_10; // 0x0
	// static const ::System::Single Field_1_11; // 0x0
	::UnityEngine::Camera* Field_1_19; // 0x10
	::MoleMole::Config::ConfigHollowCameraStretchV2* Field_1_36; // 0x18
	::UnityEngine::GameObject* Field_1_14; // 0x20
	::Class_2_5F64140FAB2210F3* Field_1_33; // 0x28
	::Cinemachine::CameraState Field_1_25; // 0x30
	::MoleMole::Config::ConfigHollowChessboardCamera* Field_1_31; // 0x118
	::Class_2_F02C9DCBE9D88C7A* Field_1_42; // 0x120
	::MoleMole::Cameras::VCameraCustomTargetGroup* Field_1_16; // 0x128
	::UnityEngine::GameObject* Field_1_22; // 0x130
	::UnityEngine::Camera* Field_1_20; // 0x138
	::Class_2_C4447E0793BA6636* Field_1_32; // 0x140
	::UnityEngine::GameObject* Field_1_21; // 0x148
	::MoleMole::UIHollowChessboard3DModelController* Field_1_18; // 0x150
	::System::Action* Field_1_8; // 0x158
	::Class_2_46A7F03961ADD6EC* Field_1_43; // 0x160
	::Class_2_954470B5468267C8* Field_1_45; // 0x168
	::Class_2_AD95DD998F7AF291_3* Field_1_47; // 0x170
	::Class_2_4381F51A10516261* Field_1_37; // 0x178
	::System::String* Field_1_17; // 0x180
	::Class_2_D4C53B59CD34FFED* Field_1_44; // 0x188
	::Class_1_6882402F0E54C8AE* Field_1_9; // 0x190
	::Class_2_32138D5A75148582* Field_1_46; // 0x198
	::System::Action_2<::System::Single, ::System::Single>* Field_1_0; // 0x1A0
	::MoleMole::Cameras::VCameraTargetGroup* Field_1_15; // 0x1A8
	::System::Single Field_1_1; // 0x1B0
	::UnityEngine::Quaternion Field_1_29; // 0x1B4
	::UnityEngine::Vector3 Field_1_23; // 0x1C4
	::UnityEngine::Vector3 Field_1_5; // 0x1D0
	::System::Single Field_1_30; // 0x1DC
	::UnityEngine::Vector3 Field_1_27; // 0x1E0
	::UnityEngine::Vector3 Field_1_41; // 0x1EC
	::UnityEngine::Vector2 Field_1_38; // 0x1F8
	::System::Single Field_1_12; // 0x200
	::UnityEngine::Vector3 Field_1_35; // 0x204
	::UnityEngine::Vector3 Field_1_6; // 0x210
	::Foundation::Coroutine::CoroutineHandle Field_1_7; // 0x21C
	::UnityEngine::Vector3 Field_1_26; // 0x220
	::System::Boolean Field_1_40; // 0x22C
	::System::Boolean Field_1_34; // 0x22D
	::System::Boolean Field_1_24; // 0x22E
	::System::Boolean Field_1_39; // 0x22F
	::System::Nullable_1<::System::Single> Field_1_4; // 0x230
	::UnityEngine::Vector3 Field_1_28; // 0x238
	::System::Single Field_1_13; // 0x244

	::System::Void _ctor(::UnityEngine::Camera* a1, ::MoleMole::Config::ConfigHollowChessboardCamera* a2, ::MoleMole::UIHollowChessboard3DModelController* a3, ::UnityEngine::GameObject* a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::MoleMole::Config::ConfigHollowChessboardCamera*, ::MoleMole::UIHollowChessboard3DModelController*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void OnDrag(::UnityEngine::Vector2 a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::Vector2 a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_ONDRAG_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_588C7CDA7B8F75A1(::Enum_3_E2BB401879FE05E8 a1, ::UnityEngine::Vector3 a2, ::System::Action* a3, ::System::Boolean a4, ::System::Single a5, ::UnityEngine::AnimationCurve* a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E2BB401879FE05E8, ::UnityEngine::Vector3, ::System::Action*, ::System::Boolean, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_588C7CDA7B8F75A1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_1_145034070A52EAE6(::MoleMole::Config::ConfigHollowCameraShake* a1, ::System::Action* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigHollowCameraShake*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_145034070A52EAE6_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::UnityEngine::Bounds Method_1_508E2F6DAF579FF3(::Class_0_16E4307DCC419505_454* a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion a3)
	{
		return ((::UnityEngine::Bounds(*)(::PVOID, ::Class_0_16E4307DCC419505_454*, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_508E2F6DAF579FF3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_A6185D969F0931D8(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_A6185D969F0931D8_OFFSET))(this, a1, a2, a3);
	}

	::System::Nullable_1<::UnityEngine::Vector3> Method_1_4334192989EA7BA7(::UnityEngine::Vector3 a1, ::System::String* a2, ::System::Boolean a3, ::System::ValueTuple_3<::System::Boolean, ::System::Boolean, ::System::Boolean> a4, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell> a5, ::Share::CVector2* a6, ::System::Nullable_1<::MoleMole::HollowChessboard::HollowCell> a7)
	{
		return ((::System::Nullable_1<::UnityEngine::Vector3>(*)(::PVOID, ::UnityEngine::Vector3, ::System::String*, ::System::Boolean, ::System::ValueTuple_3<::System::Boolean, ::System::Boolean, ::System::Boolean>, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell>, ::Share::CVector2*, ::System::Nullable_1<::MoleMole::HollowChessboard::HollowCell>))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_4334192989EA7BA7_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_626C719A884DEF9A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_626C719A884DEF9A_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_D0DEB18CEDA5EC73(::Class_5_AF65C3A968E836D2* a1, ::Share::CVector2* a2, ::System::Single a3, ::MoleMole::UICameraAtom& a4, ::System::Nullable_1<::MoleMole::HollowChessboard::HollowCell> a5, ::UnityEngine::Vector2 a6)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_5_AF65C3A968E836D2*, ::Share::CVector2*, ::System::Single, ::MoleMole::UICameraAtom&, ::System::Nullable_1<::MoleMole::HollowChessboard::HollowCell>, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_D0DEB18CEDA5EC73_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_A5F11439BBA4D407(::Enum_3_E2BB401879FE05E8 a1, ::UnityEngine::Vector3 a2, ::System::Action* a3, ::System::String* a4, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell> a5, ::Share::CVector2* a6, ::System::Nullable_1<::MoleMole::HollowChessboard::HollowCell> a7, ::System::Boolean a8, ::System::Boolean a9)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E2BB401879FE05E8, ::UnityEngine::Vector3, ::System::Action*, ::System::String*, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell>, ::Share::CVector2*, ::System::Nullable_1<::MoleMole::HollowChessboard::HollowCell>, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_A5F11439BBA4D407_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_1_3C8ACECF8DED690A(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_3C8ACECF8DED690A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::MoleMole::UICameraAtom Method_1_C33AA666DB3DE34D()
	{
		return ((::MoleMole::UICameraAtom(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_C33AA666DB3DE34D_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_2258313D16F57989(::System::Int32 a1, ::System::Func_1<::UnityEngine::Vector3>* a2, ::UnityEngine::Quaternion a3, ::System::UInt32 a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Func_1<::UnityEngine::Vector3>*, ::UnityEngine::Quaternion, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_2258313D16F57989_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_00DEF5A164D9A9D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_00DEF5A164D9A9D5_OFFSET))(this);
	}

	::System::String* Method_1_B7EDD769B79C6563()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_B7EDD769B79C6563_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_23998463F0B51901(::Class_5_AF65C3A968E836D2* a1, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell> a2, ::System::Single a3, ::MoleMole::UICameraAtom& a4, ::UnityEngine::Vector2 a5)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_5_AF65C3A968E836D2*, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell>, ::System::Single, ::MoleMole::UICameraAtom&, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_23998463F0B51901_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_32F2A54B76F4A075(::System::Action_2<::System::Single, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_32F2A54B76F4A075_OFFSET))(this, a1);
	}

	::System::Void Method_1_BA1BB49741CFDFE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_BA1BB49741CFDFE1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_E3B10A51EB0F6A50(::UnityEngine::Vector3 a1, ::MoleMole::Config::ConfigHollowCameraStretchV2* a2, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell> a3, ::Share::CVector2* a4, ::System::Nullable_1<::MoleMole::HollowChessboard::HollowCell> a5)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::MoleMole::Config::ConfigHollowCameraStretchV2*, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell>, ::Share::CVector2*, ::System::Nullable_1<::MoleMole::HollowChessboard::HollowCell>))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_E3B10A51EB0F6A50_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::UnityEngine::Vector3 Method_1_06D2228B483124DF(::System::Single a1, ::System::Single a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_06D2228B483124DF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BA1BB49741CFDFE1_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_BA1BB49741CFDFE1_1_OFFSET))(this);
	}

	::System::Void Method_1_B7289E081ADF91A6(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::System::Func_1<::System::ValueTuple_2<::System::Single, ::System::Single>>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Func_1<::System::ValueTuple_2<::System::Single, ::System::Single>>*))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_B7289E081ADF91A6_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Single Method_1_A3587E8D94134238(::System::Single a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_A3587E8D94134238_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C7E9988AD5E10B7A(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_C7E9988AD5E10B7A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B1BDEE17D8857FD1(::System::Boolean a1, ::Class_5_AF65C3A968E836D2* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_5_AF65C3A968E836D2*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_B1BDEE17D8857FD1_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_DDE31FEAF2A25220(::Enum_3_E2BB401879FE05E8 a1, ::System::Action* a2, ::System::Action* a3, ::System::Nullable_1<::UnityEngine::Vector3> a4, ::System::Boolean a5, ::System::Boolean a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_E2BB401879FE05E8, ::System::Action*, ::System::Action*, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_DDE31FEAF2A25220_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::UnityEngine::Vector3 Method_1_1F7B9CBD9BFB886C(::UnityEngine::Vector3 a1, ::System::Nullable_1<::System::Single> a2, ::System::Nullable_1<::System::Single> a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Nullable_1<::System::Single>, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_1F7B9CBD9BFB886C_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Rect Method_1_F3AA9A2F67D0417A()
	{
		return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_F3AA9A2F67D0417A_OFFSET))(this);
	}

	::System::Void Method_1_52C6D61BCBD2D69A(::Enum_3_E2BB401879FE05E8 a1, ::System::String* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E2BB401879FE05E8, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_52C6D61BCBD2D69A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Single Method_1_9EF665C07CB5B066(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_9EF665C07CB5B066_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_2FA6186936186DD5(::Enum_3_E2BB401879FE05E8 a1, ::UnityEngine::Vector3 a2, ::System::Action* a3, ::System::String* a4, ::System::Boolean a5, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell> a6, ::Share::CVector2* a7, ::System::Boolean a8, ::System::Nullable_1<::MoleMole::HollowChessboard::HollowCell> a9, ::System::Boolean a10, ::System::Boolean a11, ::System::Action* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_E2BB401879FE05E8, ::UnityEngine::Vector3, ::System::Action*, ::System::String*, ::System::Boolean, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell>, ::Share::CVector2*, ::System::Boolean, ::System::Nullable_1<::MoleMole::HollowChessboard::HollowCell>, ::System::Boolean, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_2FA6186936186DD5_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Void Method_1_E12CF800D66E5E44(::UnityEngine::Vector3 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_E12CF800D66E5E44_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector2 Method_1_E8702C4614090520()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_E8702C4614090520_OFFSET))(this);
	}

	::System::Void Method_1_C411E5881DF297DE(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_C411E5881DF297DE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F7BA13C72A6B3F58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_F7BA13C72A6B3F58_OFFSET))(this);
	}

	::System::Void Method_1_2DC57A98C12C3B08(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_2DC57A98C12C3B08_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_5986658AFDADED88(::Class_5_AF65C3A968E836D2* a1, ::MoleMole::UICameraAtom a2, ::MoleMole::Config::ConfigHollowCameraStretchV2* a3, ::UnityEngine::Vector3 a4, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell> a5, ::Share::CVector2* a6, ::System::Nullable_1<::MoleMole::HollowChessboard::HollowCell> a7)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_5_AF65C3A968E836D2*, ::MoleMole::UICameraAtom, ::MoleMole::Config::ConfigHollowCameraStretchV2*, ::UnityEngine::Vector3, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell>, ::Share::CVector2*, ::System::Nullable_1<::MoleMole::HollowChessboard::HollowCell>))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_5986658AFDADED88_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::UnityEngine::Rect Method_1_F8294187DC3A14E6(::UnityEngine::Rect a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::UnityEngine::Rect(*)(::PVOID, ::UnityEngine::Rect, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_F8294187DC3A14E6_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_1_A9DE4BB9A0E5598F(::UnityEngine::Vector2 a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_A9DE4BB9A0E5598F_OFFSET))(this, a1);
	}

	::System::Void Method_1_0C221FCA05A7E312(::UnityEngine::Vector2 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::System::Func_1<::System::ValueTuple_2<::System::Single, ::System::Single>>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Func_1<::System::ValueTuple_2<::System::Single, ::System::Single>>*))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_0C221FCA05A7E312_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::UnityEngine::Vector3 Method_1_78955B0A1A661CC4(::Class_0_16E4307DCC419505_454* a1, ::System::Single a2, ::MoleMole::UICameraAtom& a3, ::UnityEngine::Vector2 a4)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_0_16E4307DCC419505_454*, ::System::Single, ::MoleMole::UICameraAtom&, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_78955B0A1A661CC4_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Camera* Method_1_BCFC75DE0278F431()
	{
		return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_BCFC75DE0278F431_OFFSET))(this);
	}

	::System::Void Method_1_8DC652D916C182B2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_8DC652D916C182B2_OFFSET))(this);
	}

	::System::Void Method_1_35A3E037AE40D4E6(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_35A3E037AE40D4E6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_35C2147AAA113EE8(::UnityEngine::Vector3 a1, ::System::Action_1<::UnityEngine::Vector3>* a2, ::System::Action* a3, ::System::String* a4, ::System::Boolean a5, ::System::ValueTuple_3<::System::Boolean, ::System::Boolean, ::System::Boolean> a6, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell> a7, ::Share::CVector2* a8, ::System::Nullable_1<::MoleMole::HollowChessboard::HollowCell> a9, ::Enum_3_F674042AB3067BFB a10, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>* a11, ::Enum_3_E2BB401879FE05E8 a12)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Action_1<::UnityEngine::Vector3>*, ::System::Action*, ::System::String*, ::System::Boolean, ::System::ValueTuple_3<::System::Boolean, ::System::Boolean, ::System::Boolean>, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell>, ::Share::CVector2*, ::System::Nullable_1<::MoleMole::HollowChessboard::HollowCell>, ::Enum_3_F674042AB3067BFB, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*, ::Enum_3_E2BB401879FE05E8))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_35C2147AAA113EE8_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Void Method_1_5878AFA000AEB05A(::System::Single a1, ::System::Action* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_5878AFA000AEB05A_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Boolean Method_1_20D6605E17B95057(::System::Single a1)
	{
		return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_20D6605E17B95057_OFFSET))(a1);
	}

	::System::Void Method_1_F7BA13C72A6B3F58_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_F7BA13C72A6B3F58_1_OFFSET))(this);
	}

	::System::Void Method_1_0AFA90E4B45F47A7(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_0AFA90E4B45F47A7_OFFSET))(this, a1);
	}

	::System::Void Method_1_B489722BAF57AF73(::Enum_3_E2BB401879FE05E8 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::AnimationCurve* a4, ::System::Action* a5, ::System::Boolean a6, ::System::Nullable_1<::System::Single> a7)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E2BB401879FE05E8, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Action*, ::System::Boolean, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_B489722BAF57AF73_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_1_8FBB86B755BAC359()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_8FBB86B755BAC359_OFFSET))(this);
	}

	::System::Boolean Method_1_F55212E77440B167()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_F55212E77440B167_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Boolean Method_1_CAF85877FDFC30A8(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_CAF85877FDFC30A8_OFFSET))(this, a1);
	}

	::System::Void Method_1_83FA0D3387977421(::UnityEngine::Vector2 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::System::Func_1<::System::ValueTuple_2<::System::Single, ::System::Single>>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Func_1<::System::ValueTuple_2<::System::Single, ::System::Single>>*))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_83FA0D3387977421_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Share::GridDir Method_1_EEF8998130F57BC0(::UnityEngine::Vector2 a1)
	{
		return ((::Share::GridDir(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_EEF8998130F57BC0_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_A607957373336DE5(::UnityEngine::Vector3 a1, ::UnityEngine::Rect a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_A607957373336DE5_OFFSET))(this, a1, a2);
	}

	::System::Action_2<::System::Single, ::System::Single>* Method_1_CFD9A84212B388AA()
	{
		return ((::System::Action_2<::System::Single, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_CFD9A84212B388AA_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_7769AA02B48690B5(::UnityEngine::Vector3 a1, ::System::Single a2, ::MoleMole::UICameraAtom& a3, ::UnityEngine::Bounds& a4, ::UnityEngine::Vector2 a5)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::MoleMole::UICameraAtom&, ::UnityEngine::Bounds&, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_7769AA02B48690B5_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::System::Single Method_1_C37AACF2642A2F6A(::MoleMole::Config::ConfigHollowCameraStretchV2* a1)
	{
		return ((::System::Single(*)(::MoleMole::Config::ConfigHollowCameraStretchV2*))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_C37AACF2642A2F6A_OFFSET))(a1);
	}

	::System::Void Method_1_3CCA0B8A31B650A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_3CCA0B8A31B650A8_OFFSET))(this);
	}

	static ::UnityEngine::Vector3 Method_1_AE748D1621064ED1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector2 a2, ::MoleMole::UICameraAtom a3, ::UnityEngine::Camera* a4)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector2, ::MoleMole::UICameraAtom, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_AE748D1621064ED1_OFFSET))(a1, a2, a3, a4);
	}

	::System::Single Method_1_606AE513BAFD876B(::UnityEngine::AnimationCurve* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_606AE513BAFD876B_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_ADD9855FD49AD8D2(::MoleMole::Config::ConfigHollowCameraStretchV2* a1, ::UnityEngine::Vector3 a2, ::System::Action* a3, ::System::Boolean a4, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell> a5, ::Share::CVector2* a6, ::System::Boolean a7, ::System::Nullable_1<::MoleMole::HollowChessboard::HollowCell> a8, ::System::Boolean a9)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigHollowCameraStretchV2*, ::UnityEngine::Vector3, ::System::Action*, ::System::Boolean, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell>, ::Share::CVector2*, ::System::Boolean, ::System::Nullable_1<::MoleMole::HollowChessboard::HollowCell>, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_ADD9855FD49AD8D2_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_1_F3A2343C2D2235E6(::System::String* a1, ::UnityEngine::Vector3 a2, ::System::Action* a3, ::System::Action* a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::System::Action*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_F3A2343C2D2235E6_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_A37F95FE754B38A0(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_A37F95FE754B38A0_OFFSET))(this, a1);
	}

	::UnityEngine::Camera* Method_1_BCFC75DE0278F431_1()
	{
		return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_BCFC75DE0278F431_1_OFFSET))(this);
	}

	::System::Void Method_1_25E1717AC740E4D8(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_25E1717AC740E4D8_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_7EBE4E0D7A98E48B(::Class_0_16E4307DCC419505_454* a1, ::MoleMole::UICameraAtom& a2, ::UnityEngine::Bounds& a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_0_16E4307DCC419505_454*, ::MoleMole::UICameraAtom&, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_7EBE4E0D7A98E48B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_84B8ABF3C2EF60EE(::Enum_3_E2BB401879FE05E8 a1, ::System::Action* a2, ::System::Action* a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector2 a5)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E2BB401879FE05E8, ::System::Action*, ::System::Action*, ::UnityEngine::Vector3, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_84B8ABF3C2EF60EE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_FAA0BB64FC1D8FBA(::UnityEngine::Vector3 a1, ::MoleMole::Config::ConfigHollowCameraBounce* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::MoleMole::Config::ConfigHollowCameraBounce*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_FAA0BB64FC1D8FBA_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_D08299638F50AEA0(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_D08299638F50AEA0_OFFSET))(this, a1, a2);
	}
};
