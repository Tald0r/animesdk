#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5474F8DF52FEA038_1.h"
#include "unitysdk/Enum_3_7A1514E0E8DA163E.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/Struct_2_B6A3FA7992F9F37E_7.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_451601B8BB62C38C_1;
class Class_1_70343D1BCCE5CAC5;
class Class_1_8A6364989E7EB34F;
class Class_3_F35B080B137ECC46;
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace MoleMole { class CriWareVideoPlayer; }
namespace MoleMole { class IVideoPlayer; }
namespace MoleMole { class MonoDirectorBindingReplace; }
namespace MoleMole { class TLStartEndEntityAnimatorParamControl; }
namespace MoleMole { class TimelineData; }
namespace MoleMole { class TimelineDataExtra; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Timeline { class TimelineEndMarker; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MdbComponent; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define CLASS_1_808777F49073B015_METHOD_1_02515F2C595038D3_OFFSET UNITYSDK_OFFSET(0x6D722A0)
#define CLASS_1_808777F49073B015_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x6D6AEB0)
#define CLASS_1_808777F49073B015_METHOD_1_0869E1192F8E01DF_OFFSET UNITYSDK_OFFSET(0x6D6D960)
#define CLASS_1_808777F49073B015_METHOD_1_0C44FB644D25C1C2_OFFSET UNITYSDK_OFFSET(0x6D72B20)
#define CLASS_1_808777F49073B015_METHOD_1_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0x6D714C0)
#define CLASS_1_808777F49073B015_METHOD_1_0DF420E95D6252BE_OFFSET UNITYSDK_OFFSET(0x6D681C0)
#define CLASS_1_808777F49073B015_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x6D685E0)
#define CLASS_1_808777F49073B015_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x8389DA0)
#define CLASS_1_808777F49073B015_METHOD_1_18378026938D76D0_OFFSET UNITYSDK_OFFSET(0x6D6E7B0)
#define CLASS_1_808777F49073B015_METHOD_1_1A47A27867045779_OFFSET UNITYSDK_OFFSET(0x6D723E0)
#define CLASS_1_808777F49073B015_METHOD_1_1F7078DEAED43133_OFFSET UNITYSDK_OFFSET(0x6D6E9B0)
#define CLASS_1_808777F49073B015_METHOD_1_24B2CA816EFA1FA5_OFFSET UNITYSDK_OFFSET(0x8388EC0)
#define CLASS_1_808777F49073B015_METHOD_1_2685B6183E614529_1_OFFSET UNITYSDK_OFFSET(0x6D72A00)
#define CLASS_1_808777F49073B015_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x8389010)
#define CLASS_1_808777F49073B015_METHOD_1_2B72D8CCB653B89E_OFFSET UNITYSDK_OFFSET(0x6D683A0)
#define CLASS_1_808777F49073B015_METHOD_1_2E4528FBBAEF6EBC_OFFSET UNITYSDK_OFFSET(0x838B810)
#define CLASS_1_808777F49073B015_METHOD_1_31C4D3F517263756_1_OFFSET UNITYSDK_OFFSET(0x6D6EE20)
#define CLASS_1_808777F49073B015_METHOD_1_31C4D3F517263756_OFFSET UNITYSDK_OFFSET(0x6D6B140)
#define CLASS_1_808777F49073B015_METHOD_1_3528E5AEECF3EE4B_OFFSET UNITYSDK_OFFSET(0x6D71350)
#define CLASS_1_808777F49073B015_METHOD_1_36971FC3F16E2CEB_OFFSET UNITYSDK_OFFSET(0x6D69AC0)
#define CLASS_1_808777F49073B015_METHOD_1_387229AF4E3C1A8D_OFFSET UNITYSDK_OFFSET(0x838B580)
#define CLASS_1_808777F49073B015_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x83890E0)
#define CLASS_1_808777F49073B015_METHOD_1_39FD7185C859CEAD_OFFSET UNITYSDK_OFFSET(0x6D6D240)
#define CLASS_1_808777F49073B015_METHOD_1_3B5DE03DF446D2EE_OFFSET UNITYSDK_OFFSET(0x6D727F0)
#define CLASS_1_808777F49073B015_METHOD_1_3C6DE30A05E56B81_OFFSET UNITYSDK_OFFSET(0x6D72A80)
#define CLASS_1_808777F49073B015_METHOD_1_3F8DC0E62FBF27F8_OFFSET UNITYSDK_OFFSET(0x6D68C60)
#define CLASS_1_808777F49073B015_METHOD_1_4133E4E4A140F845_OFFSET UNITYSDK_OFFSET(0x838B800)
#define CLASS_1_808777F49073B015_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x6D68060)
#define CLASS_1_808777F49073B015_METHOD_1_51BBA01F511E6107_OFFSET UNITYSDK_OFFSET(0x6D68310)
#define CLASS_1_808777F49073B015_METHOD_1_58B012CC03942BBE_OFFSET UNITYSDK_OFFSET(0x6D688D0)
#define CLASS_1_808777F49073B015_METHOD_1_5FBC14A0D5AF8E77_OFFSET UNITYSDK_OFFSET(0x6D6A610)
#define CLASS_1_808777F49073B015_METHOD_1_62BD317AABD2514B_OFFSET UNITYSDK_OFFSET(0x6D6B410)
#define CLASS_1_808777F49073B015_METHOD_1_6423291ED13007B8_OFFSET UNITYSDK_OFFSET(0x6D6BAB0)
#define CLASS_1_808777F49073B015_METHOD_1_6E10DBA521A04356_OFFSET UNITYSDK_OFFSET(0x838A1F0)
#define CLASS_1_808777F49073B015_METHOD_1_7333E9D347F24AF9_OFFSET UNITYSDK_OFFSET(0x6D6EBD0)
#define CLASS_1_808777F49073B015_METHOD_1_7A10665530975E77_OFFSET UNITYSDK_OFFSET(0x8389FF0)
#define CLASS_1_808777F49073B015_METHOD_1_7EAA8879197594BA_OFFSET UNITYSDK_OFFSET(0x6D6C690)
#define CLASS_1_808777F49073B015_METHOD_1_7EB91F076D923E80_OFFSET UNITYSDK_OFFSET(0x83891C0)
#define CLASS_1_808777F49073B015_METHOD_1_7F29568EA964E563_OFFSET UNITYSDK_OFFSET(0x8389910)
#define CLASS_1_808777F49073B015_METHOD_1_821BBDC04720A2EB_OFFSET UNITYSDK_OFFSET(0x6D6EED0)
#define CLASS_1_808777F49073B015_METHOD_1_827B1A367D684101_OFFSET UNITYSDK_OFFSET(0x6D6DE00)
#define CLASS_1_808777F49073B015_METHOD_1_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0x838BC90)
#define CLASS_1_808777F49073B015_METHOD_1_866D0979717F6B36_1_OFFSET UNITYSDK_OFFSET(0x6D70BE0)
#define CLASS_1_808777F49073B015_METHOD_1_866D0979717F6B36_OFFSET UNITYSDK_OFFSET(0x6D70710)
#define CLASS_1_808777F49073B015_METHOD_1_86D9A88811BF5A61_OFFSET UNITYSDK_OFFSET(0x8389E40)
#define CLASS_1_808777F49073B015_METHOD_1_8A3D91A38AD395C0_OFFSET UNITYSDK_OFFSET(0x6D6EA60)
#define CLASS_1_808777F49073B015_METHOD_1_8ADACB724BF6FDC9_OFFSET UNITYSDK_OFFSET(0x8389F00)
#define CLASS_1_808777F49073B015_METHOD_1_8B5E3014AFF7F8EA_OFFSET UNITYSDK_OFFSET(0x6D6FE10)
#define CLASS_1_808777F49073B015_METHOD_1_8C244062F54BDC37_OFFSET UNITYSDK_OFFSET(0x8388CE0)
#define CLASS_1_808777F49073B015_METHOD_1_8C704EC832EDEFC8_1_OFFSET UNITYSDK_OFFSET(0x6D686C0)
#define CLASS_1_808777F49073B015_METHOD_1_8C704EC832EDEFC8_OFFSET UNITYSDK_OFFSET(0x6D71D70)
#define CLASS_1_808777F49073B015_METHOD_1_8E8225D5C438C827_OFFSET UNITYSDK_OFFSET(0x6D735C0)
#define CLASS_1_808777F49073B015_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x6D6BA30)
#define CLASS_1_808777F49073B015_METHOD_1_9765352E01408D38_1_OFFSET UNITYSDK_OFFSET(0x6D6B200)
#define CLASS_1_808777F49073B015_METHOD_1_9765352E01408D38_OFFSET UNITYSDK_OFFSET(0x838B370)
#define CLASS_1_808777F49073B015_METHOD_1_9805F2901C5A7FC1_OFFSET UNITYSDK_OFFSET(0x6D6DC90)
#define CLASS_1_808777F49073B015_METHOD_1_9A6DA36CCAE7D188_OFFSET UNITYSDK_OFFSET(0x6D68A00)
#define CLASS_1_808777F49073B015_METHOD_1_A8F6F688241E6DBC_OFFSET UNITYSDK_OFFSET(0x6D71C20)
#define CLASS_1_808777F49073B015_METHOD_1_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x6D685F0)
#define CLASS_1_808777F49073B015_METHOD_1_AB7ED27CAB69BE58_OFFSET UNITYSDK_OFFSET(0x6D6F430)
#define CLASS_1_808777F49073B015_METHOD_1_AC87D629B1CC8666_OFFSET UNITYSDK_OFFSET(0x6D6A910)
#define CLASS_1_808777F49073B015_METHOD_1_AFDC576A9606B859_OFFSET UNITYSDK_OFFSET(0x6D6BBE0)
#define CLASS_1_808777F49073B015_METHOD_1_BC46FCF99873D9DD_OFFSET UNITYSDK_OFFSET(0x6D73410)
#define CLASS_1_808777F49073B015_METHOD_1_BFB00779E460D7A3_OFFSET UNITYSDK_OFFSET(0x6D716F0)
#define CLASS_1_808777F49073B015_METHOD_1_C13397628F12D974_OFFSET UNITYSDK_OFFSET(0x838B2D0)
#define CLASS_1_808777F49073B015_METHOD_1_C229FF62B898C0B2_1_OFFSET UNITYSDK_OFFSET(0x6D71AE0)
#define CLASS_1_808777F49073B015_METHOD_1_C229FF62B898C0B2_OFFSET UNITYSDK_OFFSET(0x6D685D0)
#define CLASS_1_808777F49073B015_METHOD_1_C7E9B901870A3F22_OFFSET UNITYSDK_OFFSET(0x6D721D0)
#define CLASS_1_808777F49073B015_METHOD_1_C9A3013DD208C696_OFFSET UNITYSDK_OFFSET(0x6D6AFF0)
#define CLASS_1_808777F49073B015_METHOD_1_C9B8D402E05B5EA7_OFFSET UNITYSDK_OFFSET(0x6D68A80)
#define CLASS_1_808777F49073B015_METHOD_1_CA1CE8D3891A75F7_OFFSET UNITYSDK_OFFSET(0x6D73470)
#define CLASS_1_808777F49073B015_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x8389080)
#define CLASS_1_808777F49073B015_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x8389150)
#define CLASS_1_808777F49073B015_METHOD_1_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0x6D67FD0)
#define CLASS_1_808777F49073B015_METHOD_1_CA373AA1C7054598_4_OFFSET UNITYSDK_OFFSET(0x6D72780)
#define CLASS_1_808777F49073B015_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8388E30)
#define CLASS_1_808777F49073B015_METHOD_1_CD8EB704BDED69B6_OFFSET UNITYSDK_OFFSET(0x6D67CC0)
#define CLASS_1_808777F49073B015_METHOD_1_CEB6A25B31B02E31_OFFSET UNITYSDK_OFFSET(0x838B060)
#define CLASS_1_808777F49073B015_METHOD_1_CEBFF096B4C9D46B_OFFSET UNITYSDK_OFFSET(0x6D6CF40)
#define CLASS_1_808777F49073B015_METHOD_1_D109CE569415FA03_OFFSET UNITYSDK_OFFSET(0x838C0E0)
#define CLASS_1_808777F49073B015_METHOD_1_D33218A492B26449_OFFSET UNITYSDK_OFFSET(0x6D71160)
#define CLASS_1_808777F49073B015_METHOD_1_DCB92203BF04FB69_OFFSET UNITYSDK_OFFSET(0x6D6C450)
#define CLASS_1_808777F49073B015_METHOD_1_E639AC66E23A9DAF_OFFSET UNITYSDK_OFFSET(0x8388C70)
#define CLASS_1_808777F49073B015_METHOD_1_EFFD9041E3B406C9_OFFSET UNITYSDK_OFFSET(0x6D6B820)
#define CLASS_1_808777F49073B015_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x6D6EE10)
#define CLASS_1_808777F49073B015_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x6D71AD0)
#define CLASS_1_808777F49073B015_METHOD_1_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0x6D72B10)
#define CLASS_1_808777F49073B015_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x6D6E9A0)
#define CLASS_1_808777F49073B015_METHOD_1_FA1737A15BC87805_OFFSET UNITYSDK_OFFSET(0x6D73480)
#define CLASS_1_808777F49073B015_METHOD_1_FAAB2F3E37F7E1A8_OFFSET UNITYSDK_OFFSET(0x838BF00)
#define CLASS_1_808777F49073B015_METHOD_1_FBD2F13A4C10BA82_OFFSET UNITYSDK_OFFSET(0x6D71AF0)
#define CLASS_1_808777F49073B015__CTOR_OFFSET UNITYSDK_OFFSET(0x838A190)

inline static constexpr unsigned int Class_1_808777F49073B015_TypeDefinitionIndex = 42596;

class Class_1_808777F49073B015 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_44; // 0x0
	::System::Collections::Generic::HashSet_1<::MoleMole::EntityHandle>* Field_1_4; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::Timeline::TimelineEndMarker*>* Field_1_37; // 0x18
	::UnityEngine::GameObject* Field_1_12; // 0x20
	::Class_1_451601B8BB62C38C_1* Field_1_6; // 0x28
	::System::Action_1<::UnityEngine::Transform*>* Field_1_33; // 0x30
	::MoleMole::MonoDirectorBindingReplace* Field_1_17; // 0x38
	::System::Collections::Generic::Dictionary_2<::MoleMole::GameplayTag, ::MoleMole::EntityHandle>* Field_1_39; // 0x40
	::System::Collections::Generic::HashSet_1<::MoleMole::EntityHandle>* Field_1_3; // 0x48
	::UnityEngine::Transform* Field_1_18; // 0x50
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Transform*, ::UnityEngine::Transform*>>* Field_1_38; // 0x58
	::System::String* Field_1_45; // 0x60
	::System::String* Field_1_0; // 0x68
	::System::Action* Field_1_34; // 0x70
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_5; // 0x78
	::System::Action* Field_1_35; // 0x80
	::UnityEngine::Playables::PlayableDirector* Field_1_11; // 0x88
	::System::Collections::Generic::Dictionary_2<::MoleMole::GameplayTag, ::Class_1_8A6364989E7EB34F*>* Field_1_42; // 0x90
	::System::Action_1<::UnityEngine::Transform*>* Field_1_32; // 0x98
	::System::Collections::Generic::List_1<::Class_1_70343D1BCCE5CAC5*>* Field_1_36; // 0xA0
	::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* Field_1_16; // 0xA8
	::UnityEngine::Transform* Field_1_43; // 0xB0
	::MoleMole::TimelineData* Field_1_1; // 0xB8
	::System::String* Field_1_9; // 0xC0
	::UnityEngine::GameObject* Field_1_13; // 0xC8
	::MoleMole::CriWareVideoPlayer* Field_1_31; // 0xD0
	::UnityEngine::Playables::PlayableDirector* Field_1_14; // 0xD8
	::System::Collections::Generic::Dictionary_2<::MoleMole::GameplayTag, ::MoleMole::EntityHandle>* Field_1_48; // 0xE0
	::System::Collections::Generic::Dictionary_2<::MoleMole::GameplayTag, ::MoleMole::EntityHandle>* Field_1_41; // 0xE8
	::System::Collections::Generic::List_1<::Cinemachine::CinemachineVirtualCameraBase*>* Field_1_49; // 0xF0
	::System::Collections::Generic::Dictionary_2<::MoleMole::GameplayTag, ::Struct_2_B6A3FA7992F9F37E_7>* Field_1_40; // 0xF8
	::MoleMole::TimelineDataExtra* Field_1_2; // 0x100
	::System::Double Field_1_28; // 0x108
	::System::Double Field_1_26; // 0x110
	::System::Boolean Field_1_23; // 0x118
	::System::Boolean Field_1_10; // 0x119
	::System::Boolean Field_1_46; // 0x11A
	::System::Boolean Field_1_19; // 0x11B
	::System::Single Field_1_7; // 0x11C
	::System::Double Field_1_25; // 0x120
	::System::Boolean Field_1_22; // 0x128
	::System::Boolean Field_1_21; // 0x129
	::System::Boolean Field_1_20; // 0x12A
	::System::Boolean Field_1_47; // 0x12B
	::System::Boolean Field_1_30; // 0x12C
	::System::Boolean Field_1_8; // 0x12D
	::System::Boolean Field_1_15; // 0x12E
	::System::Boolean Field_1_29; // 0x12F
	::System::Double Field_1_27; // 0x130
	::System::Double Field_1_24; // 0x138

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_E639AC66E23A9DAF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_E639AC66E23A9DAF_OFFSET))(this);
	}

	::System::Void Method_1_8C244062F54BDC37(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_8C244062F54BDC37_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_24B2CA816EFA1FA5(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_24B2CA816EFA1FA5_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_1_7EB91F076D923E80(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_7EB91F076D923E80_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7F29568EA964E563()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_7F29568EA964E563_OFFSET))(this);
	}

	::System::Void Method_1_86D9A88811BF5A61(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_86D9A88811BF5A61_OFFSET))(this, a1);
	}

	::System::Void Method_1_6E10DBA521A04356()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_6E10DBA521A04356_OFFSET))(this);
	}

	static ::System::Void Method_1_CEB6A25B31B02E31(::Class_3_F35B080B137ECC46* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_F35B080B137ECC46*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_CEB6A25B31B02E31_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_C13397628F12D974(::MoleMole::Timeline::TimelineEndMarker* a1, ::MoleMole::Timeline::TimelineEndMarker* a2)
	{
		return ((::System::Int32(*)(::MoleMole::Timeline::TimelineEndMarker*, ::MoleMole::Timeline::TimelineEndMarker*))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_C13397628F12D974_OFFSET))(a1, a2);
	}

	::System::Void Method_1_8ADACB724BF6FDC9(::MoleMole::TimelineData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::TimelineData*))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_8ADACB724BF6FDC9_OFFSET))(this, a1);
	}

	::System::Void Method_1_9765352E01408D38()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_9765352E01408D38_OFFSET))(this);
	}

	::System::Void Method_1_7A10665530975E77(::MoleMole::TimelineData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::TimelineData*))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_7A10665530975E77_OFFSET))(this, a1);
	}

	::MoleMole::MonoDirectorBindingReplace* Method_1_387229AF4E3C1A8D()
	{
		return ((::MoleMole::MonoDirectorBindingReplace*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_387229AF4E3C1A8D_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::MoleMole::TimelineData* Method_1_4133E4E4A140F845()
	{
		return ((::MoleMole::TimelineData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_4133E4E4A140F845_OFFSET))(this);
	}

	::System::Void Method_1_2E4528FBBAEF6EBC(::Enum_3_7A1514E0E8DA163E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_7A1514E0E8DA163E))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_2E4528FBBAEF6EBC_OFFSET))(this, a1);
	}

	::System::Void Method_1_85377D41FEE05B66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_85377D41FEE05B66_OFFSET))(this);
	}

	::System::Void Method_1_FAAB2F3E37F7E1A8(::System::Double a1, ::System::Double a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_FAAB2F3E37F7E1A8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D109CE569415FA03()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_D109CE569415FA03_OFFSET))(this);
	}

	::System::Void Method_1_CD8EB704BDED69B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_CD8EB704BDED69B6_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_CA373AA1C7054598_3_OFFSET))(this);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}

	::System::Boolean Method_1_0DF420E95D6252BE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_0DF420E95D6252BE_OFFSET))(this);
	}

	::System::Void Method_1_2B72D8CCB653B89E(::System::String* a1, ::MoleMole::GameplayTag a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::GameplayTag))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_2B72D8CCB653B89E_OFFSET))(this, a1, a2);
	}

	::System::Double Method_1_C229FF62B898C0B2()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_C229FF62B898C0B2_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_AA169839CB93802A_OFFSET))(this);
	}

	::System::Void Method_1_9A6DA36CCAE7D188()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_9A6DA36CCAE7D188_OFFSET))(this);
	}

	::System::Double Method_1_C9B8D402E05B5EA7()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_C9B8D402E05B5EA7_OFFSET))(this);
	}

	::System::Void Method_1_3F8DC0E62FBF27F8(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_3F8DC0E62FBF27F8_OFFSET))(this, a1);
	}

	::System::Void Method_1_36971FC3F16E2CEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_36971FC3F16E2CEB_OFFSET))(this);
	}

	::System::Void Method_1_5FBC14A0D5AF8E77(::System::Boolean a1, ::MoleMole::GameplayTag a2, ::MoleMole::TLStartEndEntityAnimatorParamControl* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::GameplayTag, ::MoleMole::TLStartEndEntityAnimatorParamControl*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_5FBC14A0D5AF8E77_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_0865E94460F11643_OFFSET))(this);
	}

	::System::Void Method_1_C9A3013DD208C696()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_C9A3013DD208C696_OFFSET))(this);
	}

	::System::Void Method_1_31C4D3F517263756(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_31C4D3F517263756_OFFSET))(this, a1);
	}

	::System::Void Method_1_9765352E01408D38_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_9765352E01408D38_1_OFFSET))(this);
	}

	::System::Void Method_1_58B012CC03942BBE(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_58B012CC03942BBE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EFFD9041E3B406C9(::System::Double a1, ::System::Double a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_EFFD9041E3B406C9_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::Battle::Entity* Method_1_AC87D629B1CC8666(::MoleMole::GameplayTag a1)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::MoleMole::GameplayTag))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_AC87D629B1CC8666_OFFSET))(this, a1);
	}

	::System::Void Method_1_6423291ED13007B8(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_6423291ED13007B8_OFFSET))(this, a1);
	}

	::System::Void Method_1_AFDC576A9606B859()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_AFDC576A9606B859_OFFSET))(this);
	}

	::System::Void Method_1_DCB92203BF04FB69(::MoleMole::TimelineData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::TimelineData*))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_DCB92203BF04FB69_OFFSET))(this, a1);
	}

	::System::Void Method_1_39FD7185C859CEAD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_39FD7185C859CEAD_OFFSET))(this);
	}

	::System::Void Method_1_0869E1192F8E01DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_0869E1192F8E01DF_OFFSET))(this);
	}

	::System::Void Method_1_9805F2901C5A7FC1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_9805F2901C5A7FC1_OFFSET))(this, a1);
	}

	::System::Void Method_1_827B1A367D684101(::System::Double a1, ::Enum_3_5474F8DF52FEA038_1 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double, ::Enum_3_5474F8DF52FEA038_1))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_827B1A367D684101_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_18378026938D76D0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_18378026938D76D0_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Double Method_1_1F7078DEAED43133(::System::Double a1)
	{
		return ((::System::Double(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_1F7078DEAED43133_OFFSET))(this, a1);
	}

	::System::Void Method_1_8A3D91A38AD395C0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_8A3D91A38AD395C0_OFFSET))(this, a1);
	}

	::System::Void Method_1_7333E9D347F24AF9(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_7333E9D347F24AF9_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_7EAA8879197594BA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_7EAA8879197594BA_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Void Method_1_62BD317AABD2514B(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_62BD317AABD2514B_OFFSET))(this, a1);
	}

	::System::Double Method_1_C229FF62B898C0B2_1()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_C229FF62B898C0B2_1_OFFSET))(this);
	}

	::System::Void Method_1_FBD2F13A4C10BA82(::MoleMole::IVideoPlayer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_FBD2F13A4C10BA82_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A8F6F688241E6DBC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_A8F6F688241E6DBC_OFFSET))(this);
	}

	::System::Void Method_1_D33218A492B26449()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_D33218A492B26449_OFFSET))(this);
	}

	::System::Void Method_1_8C704EC832EDEFC8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_8C704EC832EDEFC8_OFFSET))(this);
	}

	static ::Il2CppArray<::System::Int32>* Method_1_C7E9B901870A3F22(::UnityEngine::MdbComponent* a1)
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::UnityEngine::MdbComponent*))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_C7E9B901870A3F22_OFFSET))(a1);
	}

	::System::Void Method_1_51BBA01F511E6107()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_51BBA01F511E6107_OFFSET))(this);
	}

	::System::Void Method_1_821BBDC04720A2EB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_821BBDC04720A2EB_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Void Method_1_0D7638DBC93E5002()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_0D7638DBC93E5002_OFFSET))(this);
	}

	::System::Void Method_1_3528E5AEECF3EE4B(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_3528E5AEECF3EE4B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1A47A27867045779(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_1A47A27867045779_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_CA373AA1C7054598_4_OFFSET))(this);
	}

	::System::Void Method_1_8C704EC832EDEFC8_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_8C704EC832EDEFC8_1_OFFSET))(this);
	}

	::System::Boolean Method_1_3B5DE03DF446D2EE(::MoleMole::TimelineData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::TimelineData*))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_3B5DE03DF446D2EE_OFFSET))(this, a1);
	}

	::System::Void Method_1_866D0979717F6B36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_866D0979717F6B36_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_2685B6183E614529_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_3C6DE30A05E56B81(::Foundation::AssetPath a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_3C6DE30A05E56B81_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_866D0979717F6B36_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_866D0979717F6B36_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_F0088C88851A7DFB_3_OFFSET))(this);
	}

	::System::Void Method_1_CEBFF096B4C9D46B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_CEBFF096B4C9D46B_OFFSET))(this);
	}

	::System::Void Method_1_31C4D3F517263756_1(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_31C4D3F517263756_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_AB7ED27CAB69BE58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_AB7ED27CAB69BE58_OFFSET))(this);
	}

	::System::Double Method_1_02515F2C595038D3(::System::Double a1)
	{
		return ((::System::Double(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_02515F2C595038D3_OFFSET))(this, a1);
	}

	::System::Void Method_1_0C44FB644D25C1C2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_0C44FB644D25C1C2_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_BC46FCF99873D9DD()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_BC46FCF99873D9DD_OFFSET))(this);
	}

	::System::Void Method_1_8B5E3014AFF7F8EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_8B5E3014AFF7F8EA_OFFSET))(this);
	}

	::UnityEngine::Playables::PlayableDirector* Method_1_CA1CE8D3891A75F7()
	{
		return ((::UnityEngine::Playables::PlayableDirector*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_CA1CE8D3891A75F7_OFFSET))(this);
	}

	::System::Void Method_1_FA1737A15BC87805(::Foundation::AssetPath a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_FA1737A15BC87805_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BFB00779E460D7A3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_BFB00779E460D7A3_OFFSET))(this);
	}

	static ::System::Int32 Method_1_8E8225D5C438C827(::Class_1_70343D1BCCE5CAC5* a1, ::Class_1_70343D1BCCE5CAC5* a2)
	{
		return ((::System::Int32(*)(::Class_1_70343D1BCCE5CAC5*, ::Class_1_70343D1BCCE5CAC5*))((::PBYTE)hIl2Cpp + CLASS_1_808777F49073B015_METHOD_1_8E8225D5C438C827_OFFSET))(a1, a2);
	}
};
