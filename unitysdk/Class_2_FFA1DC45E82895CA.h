#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_FFA1DC45E82895CA_Struct_2_46A3F15720DA5D2E.h"
#include "unitysdk/Enum_3_340DE32BA097F66C.h"
#include "unitysdk/Enum_3_3EEBD34AD102DD3A.h"
#include "unitysdk/Enum_3_F4705266FB2007C7.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/MoleMole/EUILayoutPlatform.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/Struct_2_FC34C7AD15A42B48.h"

class Class_1_0425BAB2DA712771;
class Class_1_2214FEECE03C0878;
class Class_1_42C045EB606087D3;
class Class_1_545352D1BF1C6114;
class Class_1_83665B095F1535B5_6;
class Class_1_B608519FA97F3075;
class Class_1_C1DE3BFE90072195;
class Class_1_D091CC614BEA65CF;
class Class_1_D9BAE726F869C3AC;
class Class_1_FA793AB1D49D0132;
class Class_1_FEF94ADD35E379A4;
class Class_2_17EF7F195EE14706;
class Class_2_69DAA12DBAB4BAB6;
class Class_2_69DAA12DBAB4BAB6_1;
class Class_2_98EE7E9B2CE0B1EF;
class Class_2_FFA1DC45E82895CA_Class_1_5F2AF534298BD49E;
class Class_2_FFA1DC45E82895CA_Class_1_A1B152800F64AF89;
class Class_2_FFA1DC45E82895CA_Class_1_CC42976CF0CE67F4;
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralDynamicTipsPopWindowController; }
namespace MoleMole { class UIStreamingGamePageController; }
namespace MoleMole { class UIWidgetController; }
namespace MoleMole { class UIWindowController; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_FFA1DC45E82895CA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x77C79E0)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_09EBAB7C3C808ABE_OFFSET UNITYSDK_OFFSET(0x77CC0D0)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_0C582FA0BFE66757_OFFSET UNITYSDK_OFFSET(0x77CC470)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_0D025125E9AE757D_OFFSET UNITYSDK_OFFSET(0x77C9BA0)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_0E861A2923147443_OFFSET UNITYSDK_OFFSET(0x77C8730)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_108DC9487BD6C442_OFFSET UNITYSDK_OFFSET(0xCAC1970)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_119A00138C8FBB94_OFFSET UNITYSDK_OFFSET(0xCAC0090)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_1D1311D7097AB21C_1_OFFSET UNITYSDK_OFFSET(0xCAC1120)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_1D1311D7097AB21C_OFFSET UNITYSDK_OFFSET(0x77C8540)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xCAC1750)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_1FA80F8BF37F7D95_OFFSET UNITYSDK_OFFSET(0x77C84A0)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_1FE4DD8CBB24E4D9_OFFSET UNITYSDK_OFFSET(0x77CB830)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_2426BA724C306045_OFFSET UNITYSDK_OFFSET(0xCABFDD0)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0xCAC0320)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_24748FC20F375725_2_OFFSET UNITYSDK_OFFSET(0xCAC16C0)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_24748FC20F375725_3_OFFSET UNITYSDK_OFFSET(0xCAC17D0)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_24748FC20F375725_4_OFFSET UNITYSDK_OFFSET(0xCAC17E0)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0xCABEEB0)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_251037281A7AF6C1_OFFSET UNITYSDK_OFFSET(0xCAC1510)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_2594E942E8253A18_OFFSET UNITYSDK_OFFSET(0xCABEE20)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_297F286CF1AECDBC_OFFSET UNITYSDK_OFFSET(0xCABDF70)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_298942D3DCCCD1E3_OFFSET UNITYSDK_OFFSET(0x77CC330)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_2C1F0A815CE2FE02_1_OFFSET UNITYSDK_OFFSET(0xCABE000)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_2C1F0A815CE2FE02_OFFSET UNITYSDK_OFFSET(0x77CBD50)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_2E252FD94A63058D_OFFSET UNITYSDK_OFFSET(0x77CA340)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_3163D7A1A14BD7F3_OFFSET UNITYSDK_OFFSET(0x77C87C0)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x77CB4F0)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_344D5D047452A8A0_OFFSET UNITYSDK_OFFSET(0x77CA6C0)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0xCABE420)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_3C8529ADE3C415DA_OFFSET UNITYSDK_OFFSET(0xCABF640)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_430905B2CC88FFE9_OFFSET UNITYSDK_OFFSET(0xCABFF30)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x77CB070)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_4CCDC33A2CFA4242_OFFSET UNITYSDK_OFFSET(0x77CB8B0)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0xCABEA20)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_64F3965CE4C4DB47_OFFSET UNITYSDK_OFFSET(0x77CBF20)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_68228FE79AC89865_OFFSET UNITYSDK_OFFSET(0x77CC510)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_6983244F4961AEFF_OFFSET UNITYSDK_OFFSET(0x77CAA10)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_69C3E41B97DE974B_1_OFFSET UNITYSDK_OFFSET(0x77CC250)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_69C3E41B97DE974B_OFFSET UNITYSDK_OFFSET(0x77CA940)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_6B5A70A07A65E282_OFFSET UNITYSDK_OFFSET(0x77C9D80)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_6CC6072A77FEA9CD_OFFSET UNITYSDK_OFFSET(0xCABE4E0)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_6F73A40265D5B980_OFFSET UNITYSDK_OFFSET(0x77CCA10)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_743C0505E07FA68E_1_OFFSET UNITYSDK_OFFSET(0x77C83D0)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_743C0505E07FA68E_OFFSET UNITYSDK_OFFSET(0x77C8300)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0xCABF780)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_78189213C5E4D60A_OFFSET UNITYSDK_OFFSET(0xCABF310)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_7AB2C887EB34984A_OFFSET UNITYSDK_OFFSET(0xCABFC00)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_7B387F5FDA97A44D_OFFSET UNITYSDK_OFFSET(0xCAC03C0)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_7BFE43CF14951AD2_OFFSET UNITYSDK_OFFSET(0xCABEC40)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_7C34BD5B0A8B215F_OFFSET UNITYSDK_OFFSET(0xCAC17F0)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0xCAC0330)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_8E4376B4CBE5D2D3_OFFSET UNITYSDK_OFFSET(0xCAC1310)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x77CB470)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_9681042564541CD6_2_OFFSET UNITYSDK_OFFSET(0x77CC970)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x77CB160)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_A4D6B6FB1DF145F2_OFFSET UNITYSDK_OFFSET(0xCABEEC0)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x77CBEB0)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_BAB8431B52287D95_OFFSET UNITYSDK_OFFSET(0x77C9E30)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_BBE670F03C6932E0_OFFSET UNITYSDK_OFFSET(0x77CB200)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_BCB087DFB7399B96_OFFSET UNITYSDK_OFFSET(0x77CA1F0)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_BDBBCA8133A15990_OFFSET UNITYSDK_OFFSET(0x77CA7B0)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_BDEBD5E1E766ABDE_OFFSET UNITYSDK_OFFSET(0xCABEB90)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_BF17C9008346C3AC_OFFSET UNITYSDK_OFFSET(0x77CB0E0)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_C3186D6FAA8429DB_OFFSET UNITYSDK_OFFSET(0x77CAD10)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_C47A61DDA4747C86_OFFSET UNITYSDK_OFFSET(0xCAC1A10)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_C755D06E5C80BC6A_OFFSET UNITYSDK_OFFSET(0x77C90E0)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_C957C2654A0B3CE7_OFFSET UNITYSDK_OFFSET(0x77C8930)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_D13B002ECB89C9C2_OFFSET UNITYSDK_OFFSET(0xCAC0B30)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_D4896D949CEEA457_OFFSET UNITYSDK_OFFSET(0x77CB5A0)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_D4E1804C25B5032C_OFFSET UNITYSDK_OFFSET(0xCAC0350)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_D83311888982C7B7_OFFSET UNITYSDK_OFFSET(0xCABE6C0)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_D94E828E9DA8A315_OFFSET UNITYSDK_OFFSET(0xCABF7F0)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_DA64D40A107DBE32_OFFSET UNITYSDK_OFFSET(0xCABEF40)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_DDCA828D17128240_OFFSET UNITYSDK_OFFSET(0xCABF860)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_DE45EA3A177BC33B_OFFSET UNITYSDK_OFFSET(0xCABDE40)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_DF842D186A7B50E3_OFFSET UNITYSDK_OFFSET(0xCAC16D0)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_E7E1B6DBFFBAA7F0_OFFSET UNITYSDK_OFFSET(0xCABE160)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_EF53EE87B22FE440_OFFSET UNITYSDK_OFFSET(0x77C95C0)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xCAC0340)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x77C8520)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_F2446CF066E027CA_OFFSET UNITYSDK_OFFSET(0xCAC0EF0)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_F29D7A7F508EABE1_OFFSET UNITYSDK_OFFSET(0xCABDF00)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_FD647A48096EB173_OFFSET UNITYSDK_OFFSET(0x77C8BD0)
#define CLASS_2_FFA1DC45E82895CA_METHOD_2_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x77CA8D0)
#define CLASS_2_FFA1DC45E82895CA_ONCREATE_OFFSET UNITYSDK_OFFSET(0x77C7B70)
#define CLASS_2_FFA1DC45E82895CA__CTOR_OFFSET UNITYSDK_OFFSET(0x77C7F40)

inline static constexpr unsigned int Class_2_FFA1DC45E82895CA_TypeDefinitionIndex = 57742;

class Class_2_FFA1DC45E82895CA : public ::Foundation::SingletonDisposable_1<::Class_2_FFA1DC45E82895CA*>
{
public:
	::Class_2_69DAA12DBAB4BAB6_1* Field_2_8; // 0x10
	::Class_1_2214FEECE03C0878* Field_2_13; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::UIBaseController*>* Field_2_19; // 0x20
	::Class_2_FFA1DC45E82895CA_Class_1_CC42976CF0CE67F4* Field_2_21; // 0x28
	::Class_2_69DAA12DBAB4BAB6* Field_2_9; // 0x30
	::Class_2_98EE7E9B2CE0B1EF* Field_2_10; // 0x38
	::MoleMole::UIBaseController* Field_2_17; // 0x40
	::Class_1_B608519FA97F3075* Field_2_2; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::UIWindowController*>* Field_2_4; // 0x50
	::System::Collections::Generic::List_1<::MoleMole::UIBaseController*>* Field_2_18; // 0x58
	::Class_1_0425BAB2DA712771* Field_2_20; // 0x60
	::System::Collections::Generic::List_1<::Class_2_FFA1DC45E82895CA_Class_1_A1B152800F64AF89*>* Field_2_6; // 0x68
	::System::Collections::Generic::List_1<::Class_1_545352D1BF1C6114*>* Field_2_5; // 0x70
	::System::Collections::Generic::List_1<::Class_2_FFA1DC45E82895CA_Class_1_5F2AF534298BD49E*>* Field_2_3; // 0x78
	::Class_1_42C045EB606087D3* Field_2_1; // 0x80
	::Class_1_C1DE3BFE90072195* Field_2_12; // 0x88
	::MoleMole::UIBaseController* Field_2_16; // 0x90
	::Class_1_83665B095F1535B5_6* Field_2_7; // 0x98
	::Class_1_FEF94ADD35E379A4* Field_2_11; // 0xA0
	::System::Boolean Field_2_15; // 0xA8
	::System::Boolean Field_2_0; // 0xA9
	::System::Boolean Field_2_14; // 0xAA

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_ONCREATE_OFFSET))(this);
	}

	::Class_1_D091CC614BEA65CF* Method_2_743C0505E07FA68E(::System::Int32 a1, ::System::Action_1<::System::Int32>* a2, ::System::Action_1<::System::Int32>* a3)
	{
		return ((::Class_1_D091CC614BEA65CF*(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::Int32>*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_743C0505E07FA68E_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_D091CC614BEA65CF* Method_2_743C0505E07FA68E_1(::System::Int32 a1, ::System::Action_1<::System::Int32>* a2, ::System::Action_1<::System::Int32>* a3)
	{
		return ((::Class_1_D091CC614BEA65CF*(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::Int32>*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_743C0505E07FA68E_1_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_D091CC614BEA65CF* Method_2_1FA80F8BF37F7D95(::System::Int32 a1)
	{
		return ((::Class_1_D091CC614BEA65CF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_1FA80F8BF37F7D95_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}

	::System::Void Method_2_1D1311D7097AB21C(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_1D1311D7097AB21C_OFFSET))(this, a1);
	}

	::System::Void Method_2_3163D7A1A14BD7F3(::MoleMole::UIBaseController* a1, ::MoleMole::UIBaseController* a2, ::Class_1_FA793AB1D49D0132* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::MoleMole::UIBaseController*, ::Class_1_FA793AB1D49D0132*))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_3163D7A1A14BD7F3_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::Dictionary_2<::MoleMole::UIWindowController*, ::System::Collections::Generic::List_1<::MoleMole::UIBaseController*>*>* Method_2_C957C2654A0B3CE7()
	{
		return ((::System::Collections::Generic::Dictionary_2<::MoleMole::UIWindowController*, ::System::Collections::Generic::List_1<::MoleMole::UIBaseController*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_C957C2654A0B3CE7_OFFSET))(this);
	}

	::System::Void Method_2_FD647A48096EB173()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_FD647A48096EB173_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::MoleMole::UIWindowController*, ::System::Collections::Generic::List_1<::MoleMole::UIBaseController*>*>* Method_2_C755D06E5C80BC6A()
	{
		return ((::System::Collections::Generic::Dictionary_2<::MoleMole::UIWindowController*, ::System::Collections::Generic::List_1<::MoleMole::UIBaseController*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_C755D06E5C80BC6A_OFFSET))(this);
	}

	::System::Void Method_2_EF53EE87B22FE440(::MoleMole::UIWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_EF53EE87B22FE440_OFFSET))(this, a1);
	}

	::System::Void Method_2_0D025125E9AE757D(::MoleMole::UIWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_0D025125E9AE757D_OFFSET))(this, a1);
	}

	::System::Void Method_2_6B5A70A07A65E282(::System::Int32 a1, ::System::Action_1<::System::Int32>* a2, ::System::Action_1<::System::Int32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::Int32>*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_6B5A70A07A65E282_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_BAB8431B52287D95(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_BAB8431B52287D95_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_2E252FD94A63058D(::Enum_3_340DE32BA097F66C a1, ::Class_1_FA793AB1D49D0132* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_340DE32BA097F66C, ::Class_1_FA793AB1D49D0132*))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_2E252FD94A63058D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_344D5D047452A8A0(::System::Int32 a1, ::System::Action_1<::System::Int32>* a2, ::System::Action_1<::System::Int32>* a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::Int32>*, ::System::Action_1<::System::Int32>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_344D5D047452A8A0_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_BDBBCA8133A15990(::MoleMole::UIWidgetController* a1, ::MoleMole::UIBaseController* a2, ::Class_1_FA793AB1D49D0132* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWidgetController*, ::MoleMole::UIBaseController*, ::Class_1_FA793AB1D49D0132*))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_BDBBCA8133A15990_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_2_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Void Method_2_69C3E41B97DE974B(::System::Int32 a1, ::System::Action_1<::System::Int32>* a2, ::System::Action_1<::System::Int32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::Int32>*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_69C3E41B97DE974B_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::GameObject* Method_2_6983244F4961AEFF(::Foundation::AssetPath a1, ::UnityEngine::Transform* a2)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_6983244F4961AEFF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BCB087DFB7399B96(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_BCB087DFB7399B96_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_C3186D6FAA8429DB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_C3186D6FAA8429DB_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_BF17C9008346C3AC(::MoleMole::UIWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_BF17C9008346C3AC_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_BBE670F03C6932E0(::MoleMole::UIWindowController* a1, ::MoleMole::UIWindowController* a2, ::UnityEngine::Transform* a3, ::Class_1_FA793AB1D49D0132* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*, ::MoleMole::UIWindowController*, ::UnityEngine::Transform*, ::Class_1_FA793AB1D49D0132*))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_BBE670F03C6932E0_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_1FE4DD8CBB24E4D9(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_1FE4DD8CBB24E4D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_0E861A2923147443(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_0E861A2923147443_OFFSET))(this, a1, a2);
	}

	::MoleMole::UIStreamingGamePageController* Method_2_4CCDC33A2CFA4242(::System::Boolean a1)
	{
		return ((::MoleMole::UIStreamingGamePageController*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_4CCDC33A2CFA4242_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_2C1F0A815CE2FE02()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_2C1F0A815CE2FE02_OFFSET))(this);
	}

	::System::Void Method_2_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Void Method_2_64F3965CE4C4DB47()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_64F3965CE4C4DB47_OFFSET))(this);
	}

	static ::System::Boolean Method_2_09EBAB7C3C808ABE(::MoleMole::UIWindowController* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_09EBAB7C3C808ABE_OFFSET))(a1);
	}

	::System::Void Method_2_69C3E41B97DE974B_1(::System::Int32 a1, ::System::Action_1<::System::Int32>* a2, ::System::Action_1<::System::Int32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::Int32>*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_69C3E41B97DE974B_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_298942D3DCCCD1E3(::MoleMole::UIWindowController* a1, ::MoleMole::UIWindowController* a2, ::UnityEngine::Transform* a3, ::MoleMole::UIControllerContextBase* a4, ::Class_1_FA793AB1D49D0132* a5)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*, ::MoleMole::UIWindowController*, ::UnityEngine::Transform*, ::MoleMole::UIControllerContextBase*, ::Class_1_FA793AB1D49D0132*))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_298942D3DCCCD1E3_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_0C582FA0BFE66757(::MoleMole::UIWindowController* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_0C582FA0BFE66757_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_2_D4896D949CEEA457(::System::Boolean& a1, ::System::Collections::Generic::List_1<::MoleMole::UIBaseController*>* a2, ::System::Collections::Generic::List_1<::MoleMole::UIWindowController*>* a3)
	{
		return ((::System::Void(*)(::System::Boolean&, ::System::Collections::Generic::List_1<::MoleMole::UIBaseController*>*, ::System::Collections::Generic::List_1<::MoleMole::UIWindowController*>*))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_D4896D949CEEA457_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_2_68228FE79AC89865(::MoleMole::UIWindowController* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_68228FE79AC89865_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9681042564541CD6_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_9681042564541CD6_2_OFFSET))(this);
	}

	::System::Void Method_2_6F73A40265D5B980()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_6F73A40265D5B980_OFFSET))(this);
	}

	::System::Boolean Method_2_DE45EA3A177BC33B(::Class_1_FA793AB1D49D0132*& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FA793AB1D49D0132*&))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_DE45EA3A177BC33B_OFFSET))(this, a1);
	}

	::System::Void Method_2_F29D7A7F508EABE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_F29D7A7F508EABE1_OFFSET))(this);
	}

	::System::Void Method_2_297F286CF1AECDBC(::MoleMole::UIWindowController* a1, ::UnityEngine::Transform* a2, ::MoleMole::UIControllerContextBase* a3, ::Class_1_FA793AB1D49D0132* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*, ::UnityEngine::Transform*, ::MoleMole::UIControllerContextBase*, ::Class_1_FA793AB1D49D0132*))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_297F286CF1AECDBC_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_2C1F0A815CE2FE02_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_2C1F0A815CE2FE02_1_OFFSET))(this);
	}

	::Class_1_FA793AB1D49D0132* Method_2_358A144584A5DBFC()
	{
		return ((::Class_1_FA793AB1D49D0132*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_358A144584A5DBFC_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::UIBaseController*>* Method_2_E7E1B6DBFFBAA7F0()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::UIBaseController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_E7E1B6DBFFBAA7F0_OFFSET))(this);
	}

	::System::Void Method_2_6CC6072A77FEA9CD(::MoleMole::UIBaseController* a1, ::MoleMole::UIBaseController* a2, ::UnityEngine::Transform* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::MoleMole::UIBaseController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_6CC6072A77FEA9CD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_D83311888982C7B7(::Enum_3_340DE32BA097F66C a1, ::MoleMole::UIWindowController* a2, ::MoleMole::UIControllerContextBase* a3, ::Class_1_FA793AB1D49D0132* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_340DE32BA097F66C, ::MoleMole::UIWindowController*, ::MoleMole::UIControllerContextBase*, ::Class_1_FA793AB1D49D0132*))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_D83311888982C7B7_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_52607DE4C357D269_OFFSET))(this);
	}

	::System::Void Method_2_BDEBD5E1E766ABDE(::System::Boolean a1, ::MoleMole::UIBaseController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_BDEBD5E1E766ABDE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7BFE43CF14951AD2(::MoleMole::EUILayoutPlatform a1, ::MoleMole::EUILayoutPlatform a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EUILayoutPlatform, ::MoleMole::EUILayoutPlatform))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_7BFE43CF14951AD2_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_2_2594E942E8253A18(::MoleMole::UIBaseController* a1, ::MoleMole::UIBaseController* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::MoleMole::UIBaseController*, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_2594E942E8253A18_OFFSET))(this, a1, a2);
	}

	::Class_1_0425BAB2DA712771* Method_2_24748FC20F375725()
	{
		return ((::Class_1_0425BAB2DA712771*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_2_A4D6B6FB1DF145F2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_A4D6B6FB1DF145F2_OFFSET))(this, a1);
	}

	::System::Void Method_2_DA64D40A107DBE32(::Class_2_17EF7F195EE14706* a1, ::System::Boolean a2, ::MoleMole::UIControllerContextBase* a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_17EF7F195EE14706*, ::System::Boolean, ::MoleMole::UIControllerContextBase*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_DA64D40A107DBE32_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_78189213C5E4D60A(::System::Boolean a1, ::MoleMole::UIBaseController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_78189213C5E4D60A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3C8529ADE3C415DA(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_3C8529ADE3C415DA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Boolean Method_2_D94E828E9DA8A315()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_D94E828E9DA8A315_OFFSET))(this);
	}

	::System::Void Method_2_DDCA828D17128240(::MoleMole::UIBaseController* a1, ::MoleMole::UIControllerContextBase* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_DDCA828D17128240_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7AB2C887EB34984A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_7AB2C887EB34984A_OFFSET))(this, a1);
	}

	::System::Void Method_2_2426BA724C306045(::System::Int32 a1, ::System::Action_1<::System::Int32>* a2, ::System::Action_1<::System::Int32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::Int32>*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_2426BA724C306045_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_430905B2CC88FFE9(::Enum_3_340DE32BA097F66C a1, ::MoleMole::UIWidgetController* a2, ::Class_1_FA793AB1D49D0132* a3, ::Class_2_17EF7F195EE14706* a4, ::UnityEngine::Transform* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_340DE32BA097F66C, ::MoleMole::UIWidgetController*, ::Class_1_FA793AB1D49D0132*, ::Class_2_17EF7F195EE14706*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_430905B2CC88FFE9_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_119A00138C8FBB94(::MoleMole::UIWindowController* a1, ::Class_1_FA793AB1D49D0132* a2, ::UnityEngine::Transform*& a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*, ::Class_1_FA793AB1D49D0132*, ::UnityEngine::Transform*&))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_119A00138C8FBB94_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_FEF94ADD35E379A4* Method_2_24748FC20F375725_1()
	{
		return ((::Class_1_FEF94ADD35E379A4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_2_8C8625211DA811AE(::Class_1_0425BAB2DA712771* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0425BAB2DA712771*))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Int32 Method_2_D4E1804C25B5032C(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_D4E1804C25B5032C_OFFSET))(this, a1);
	}

	::System::Void Method_2_7B387F5FDA97A44D(::MoleMole::UIWindowController* a1, ::Enum_3_340DE32BA097F66C a2, ::Class_2_17EF7F195EE14706* a3, ::Class_1_FA793AB1D49D0132* a4, ::MoleMole::UIControllerContextBase* a5, ::System::Boolean a6, ::MoleMole::UIWindowController* a7, ::UnityEngine::Transform* a8)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*, ::Enum_3_340DE32BA097F66C, ::Class_2_17EF7F195EE14706*, ::Class_1_FA793AB1D49D0132*, ::MoleMole::UIControllerContextBase*, ::System::Boolean, ::MoleMole::UIWindowController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_7B387F5FDA97A44D_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_D13B002ECB89C9C2(::Enum_3_340DE32BA097F66C a1, ::MoleMole::UIWindowController* a2, ::Class_2_17EF7F195EE14706* a3, ::Class_1_FA793AB1D49D0132* a4, ::MoleMole::UIControllerContextBase* a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_340DE32BA097F66C, ::MoleMole::UIWindowController*, ::Class_2_17EF7F195EE14706*, ::Class_1_FA793AB1D49D0132*, ::MoleMole::UIControllerContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_D13B002ECB89C9C2_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_F2446CF066E027CA(::Enum_3_340DE32BA097F66C a1, ::MoleMole::UIWidgetController* a2, ::UnityEngine::Transform* a3, ::MoleMole::UIControllerContextBase* a4, ::Class_1_FA793AB1D49D0132* a5, ::Class_2_17EF7F195EE14706* a6)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_340DE32BA097F66C, ::MoleMole::UIWidgetController*, ::UnityEngine::Transform*, ::MoleMole::UIControllerContextBase*, ::Class_1_FA793AB1D49D0132*, ::Class_2_17EF7F195EE14706*))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_F2446CF066E027CA_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_1D1311D7097AB21C_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_1D1311D7097AB21C_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_8E4376B4CBE5D2D3(::Enum_3_340DE32BA097F66C a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_340DE32BA097F66C))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_8E4376B4CBE5D2D3_OFFSET))(this, a1);
	}

	::System::Void Method_2_251037281A7AF6C1(::Struct_2_FC34C7AD15A42B48 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FC34C7AD15A42B48, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_251037281A7AF6C1_OFFSET))(this, a1, a2);
	}

	::Class_1_C1DE3BFE90072195* Method_2_24748FC20F375725_2()
	{
		return ((::Class_1_C1DE3BFE90072195*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_24748FC20F375725_2_OFFSET))(this);
	}

	::System::Void Method_2_DF842D186A7B50E3(::MoleMole::UIWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_DF842D186A7B50E3_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::Class_1_B608519FA97F3075* Method_2_24748FC20F375725_3()
	{
		return ((::Class_1_B608519FA97F3075*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_24748FC20F375725_3_OFFSET))(this);
	}

	::Class_1_42C045EB606087D3* Method_2_24748FC20F375725_4()
	{
		return ((::Class_1_42C045EB606087D3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_24748FC20F375725_4_OFFSET))(this);
	}

	::Enum_3_F4705266FB2007C7 Method_2_7C34BD5B0A8B215F()
	{
		return ((::Enum_3_F4705266FB2007C7(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_7C34BD5B0A8B215F_OFFSET))(this);
	}

	::System::Void Method_2_108DC9487BD6C442(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_108DC9487BD6C442_OFFSET))(this, a1);
	}

	::System::Void Method_2_C47A61DDA4747C86(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_METHOD_2_C47A61DDA4747C86_OFFSET))(this, a1);
	}
};
