#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_EA02B975BED3466B_Struct_2_0856AFBA2442CBE4.h"
#include "unitysdk/Class_3_EA02B975BED3466B_Struct_2_2C598A2C9BF09BDC.h"
#include "unitysdk/Class_3_EA02B975BED3466B_Struct_2_AB8E50E31B2513AE.h"
#include "unitysdk/Class_3_EA02B975BED3466B_Struct_2_B69C0DBD20A3CE66.h"
#include "unitysdk/Class_3_FB573D79216A03BA_Enum_3_DC648FE7CC4D0552.h"
#include "unitysdk/Enum_3_8A11C59891D25300.h"
#include "unitysdk/Enum_3_B4ECAB024B401031.h"
#include "unitysdk/Enum_3_B4FF51A33B9736E7.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/Config/LevelEndType.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/EntityDieCheckType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDLevelEndNode_LevelEndPerformType.h"
#include "unitysdk/Share/EItemType.h"
#include "unitysdk/Struct_2_40CB8E823ACA81D0.h"
#include "unitysdk/Struct_2_8A77D15D7EA8B8D3.h"
#include "unitysdk/Struct_2_95FEC2CAD22EBF62.h"
#include "unitysdk/Struct_2_9DFB39885391F41D.h"
#include "unitysdk/Struct_2_ABC67D4EFBF3BD9A_1.h"
#include "unitysdk/Struct_2_BBE6D3C197515027.h"
#include "unitysdk/Struct_2_F2A7939F5DFF18C1.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_189;
class Class_1_0D6706375CDAAE8C;
class Class_1_2BEAA93324417DF4;
class Class_1_3D452FA003157C19_Class_0_16E7307DCC43CB2C_1;
class Class_1_8289F2785D9AA990;
class Class_1_9A931A6A933A5644;
class Class_1_9BB4AD5956D1660B;
class Class_1_EA9FB249A31C5B86;
class Class_2_131E282CCAEB876E;
class Class_3_E54D0DE062FD8194;
class Class_3_EA02B975BED3466B_Class_1_DCE79A11CC8A2FDA;
namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }
namespace MoleMole::Config { class StageEntry; }
namespace System { class IDisposable; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }

#define CLASS_3_EA02B975BED3466B_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xDA33EA0)
#define CLASS_3_EA02B975BED3466B_METHOD_3_0068B163F1F27BF3_OFFSET UNITYSDK_OFFSET(0xDA3A480)
#define CLASS_3_EA02B975BED3466B_METHOD_3_016E85CEDEE00FF4_OFFSET UNITYSDK_OFFSET(0xDA35FD0)
#define CLASS_3_EA02B975BED3466B_METHOD_3_01953D7882459DEC_OFFSET UNITYSDK_OFFSET(0xDA3A370)
#define CLASS_3_EA02B975BED3466B_METHOD_3_0DE30235AD1E5472_OFFSET UNITYSDK_OFFSET(0xDA36410)
#define CLASS_3_EA02B975BED3466B_METHOD_3_13D02FA728EAC9EE_OFFSET UNITYSDK_OFFSET(0xDA353A0)
#define CLASS_3_EA02B975BED3466B_METHOD_3_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xDA39250)
#define CLASS_3_EA02B975BED3466B_METHOD_3_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0xDA39AB0)
#define CLASS_3_EA02B975BED3466B_METHOD_3_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xDA39430)
#define CLASS_3_EA02B975BED3466B_METHOD_3_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0xDA397F0)
#define CLASS_3_EA02B975BED3466B_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xDA365D0)
#define CLASS_3_EA02B975BED3466B_METHOD_3_39EE66186B769F16_OFFSET UNITYSDK_OFFSET(0xDA36240)
#define CLASS_3_EA02B975BED3466B_METHOD_3_3C5F8E3777877644_1_OFFSET UNITYSDK_OFFSET(0xDA35BC0)
#define CLASS_3_EA02B975BED3466B_METHOD_3_3C5F8E3777877644_2_OFFSET UNITYSDK_OFFSET(0xDA360E0)
#define CLASS_3_EA02B975BED3466B_METHOD_3_3C5F8E3777877644_3_OFFSET UNITYSDK_OFFSET(0xDA39330)
#define CLASS_3_EA02B975BED3466B_METHOD_3_3C5F8E3777877644_OFFSET UNITYSDK_OFFSET(0xDA353B0)
#define CLASS_3_EA02B975BED3466B_METHOD_3_3D44B4187813BA58_OFFSET UNITYSDK_OFFSET(0xDA39B40)
#define CLASS_3_EA02B975BED3466B_METHOD_3_3D78D2E0F9F95F07_OFFSET UNITYSDK_OFFSET(0xDA39950)
#define CLASS_3_EA02B975BED3466B_METHOD_3_499095FFABD49154_OFFSET UNITYSDK_OFFSET(0xDA39980)
#define CLASS_3_EA02B975BED3466B_METHOD_3_4E1CEED4842C0815_OFFSET UNITYSDK_OFFSET(0xDA394C0)
#define CLASS_3_EA02B975BED3466B_METHOD_3_4ED5A32649C8BEBA_OFFSET UNITYSDK_OFFSET(0xDA359A0)
#define CLASS_3_EA02B975BED3466B_METHOD_3_52FB29FB5E593F19_OFFSET UNITYSDK_OFFSET(0xDA39970)
#define CLASS_3_EA02B975BED3466B_METHOD_3_5710174DFF89C413_OFFSET UNITYSDK_OFFSET(0xDA368A0)
#define CLASS_3_EA02B975BED3466B_METHOD_3_5780411EFE947D94_OFFSET UNITYSDK_OFFSET(0xDA38A00)
#define CLASS_3_EA02B975BED3466B_METHOD_3_609FA3D38FA252B6_OFFSET UNITYSDK_OFFSET(0xDA39CA0)
#define CLASS_3_EA02B975BED3466B_METHOD_3_60DC879ACE99CF48_OFFSET UNITYSDK_OFFSET(0xDA34EB0)
#define CLASS_3_EA02B975BED3466B_METHOD_3_639AEB9338EFC1BD_OFFSET UNITYSDK_OFFSET(0xDA38A20)
#define CLASS_3_EA02B975BED3466B_METHOD_3_6F84A66A56C7E7C2_OFFSET UNITYSDK_OFFSET(0xDA3A750)
#define CLASS_3_EA02B975BED3466B_METHOD_3_7083C8CC65727677_OFFSET UNITYSDK_OFFSET(0xDA35CC0)
#define CLASS_3_EA02B975BED3466B_METHOD_3_7C8C894633A8C89E_OFFSET UNITYSDK_OFFSET(0xDA38800)
#define CLASS_3_EA02B975BED3466B_METHOD_3_952453844D88CADD_OFFSET UNITYSDK_OFFSET(0xDA3A310)
#define CLASS_3_EA02B975BED3466B_METHOD_3_9557B1C613115965_1_OFFSET UNITYSDK_OFFSET(0xDA3A490)
#define CLASS_3_EA02B975BED3466B_METHOD_3_9557B1C613115965_OFFSET UNITYSDK_OFFSET(0xDA354B0)
#define CLASS_3_EA02B975BED3466B_METHOD_3_A129B212F3785E01_OFFSET UNITYSDK_OFFSET(0xDA352E0)
#define CLASS_3_EA02B975BED3466B_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xDA361E0)
#define CLASS_3_EA02B975BED3466B_METHOD_3_A2953D6A3EB2D06E_OFFSET UNITYSDK_OFFSET(0xDA39050)
#define CLASS_3_EA02B975BED3466B_METHOD_3_A57EFC29FC0A4418_OFFSET UNITYSDK_OFFSET(0xDA38F20)
#define CLASS_3_EA02B975BED3466B_METHOD_3_AA18443F042C7418_OFFSET UNITYSDK_OFFSET(0xDA3A740)
#define CLASS_3_EA02B975BED3466B_METHOD_3_AE5D2F3CFBE15D74_OFFSET UNITYSDK_OFFSET(0xDA33C10)
#define CLASS_3_EA02B975BED3466B_METHOD_3_B3F352584D32F9FD_OFFSET UNITYSDK_OFFSET(0xDA3A970)
#define CLASS_3_EA02B975BED3466B_METHOD_3_B7ED72458888ABCF_OFFSET UNITYSDK_OFFSET(0xDA39800)
#define CLASS_3_EA02B975BED3466B_METHOD_3_BA59219F41763A1C_OFFSET UNITYSDK_OFFSET(0xDA394B0)
#define CLASS_3_EA02B975BED3466B_METHOD_3_BF508D80265F8A02_OFFSET UNITYSDK_OFFSET(0xDA35B40)
#define CLASS_3_EA02B975BED3466B_METHOD_3_C52C99DE7C7DCF87_OFFSET UNITYSDK_OFFSET(0xDA34F90)
#define CLASS_3_EA02B975BED3466B_METHOD_3_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0xDA38F00)
#define CLASS_3_EA02B975BED3466B_METHOD_3_C74E50CBD41F0264_2_OFFSET UNITYSDK_OFFSET(0xDA38F10)
#define CLASS_3_EA02B975BED3466B_METHOD_3_C74E50CBD41F0264_3_OFFSET UNITYSDK_OFFSET(0xDA397E0)
#define CLASS_3_EA02B975BED3466B_METHOD_3_C74E50CBD41F0264_4_OFFSET UNITYSDK_OFFSET(0xDA39B30)
#define CLASS_3_EA02B975BED3466B_METHOD_3_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0xDA360D0)
#define CLASS_3_EA02B975BED3466B_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xDA36060)
#define CLASS_3_EA02B975BED3466B_METHOD_3_CB3169B66131673A_OFFSET UNITYSDK_OFFSET(0xDA36690)
#define CLASS_3_EA02B975BED3466B_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0xDA3A270)
#define CLASS_3_EA02B975BED3466B_METHOD_3_D0910C538D3429E2_OFFSET UNITYSDK_OFFSET(0xDA3A690)
#define CLASS_3_EA02B975BED3466B_METHOD_3_DA8A0099597CAAE1_OFFSET UNITYSDK_OFFSET(0xDA3A470)
#define CLASS_3_EA02B975BED3466B_METHOD_3_E36FCCF1EB5613BB_OFFSET UNITYSDK_OFFSET(0xDA356B0)
#define CLASS_3_EA02B975BED3466B_METHOD_3_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0xDA35DB0)
#define CLASS_3_EA02B975BED3466B_METHOD_3_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0xDA38EF0)
#define CLASS_3_EA02B975BED3466B_METHOD_3_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0xDA39C90)
#define CLASS_3_EA02B975BED3466B_METHOD_3_F0088C88851A7DFB_4_OFFSET UNITYSDK_OFFSET(0xDA3A260)
#define CLASS_3_EA02B975BED3466B_METHOD_3_F0088C88851A7DFB_5_OFFSET UNITYSDK_OFFSET(0xDA3A980)
#define CLASS_3_EA02B975BED3466B_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xDA34F80)
#define CLASS_3_EA02B975BED3466B_METHOD_3_F0F72ACA1AB01F3F_OFFSET UNITYSDK_OFFSET(0xDA35DC0)
#define CLASS_3_EA02B975BED3466B_METHOD_3_FDCC5B03083ECBA7_OFFSET UNITYSDK_OFFSET(0xDA38A30)
#define CLASS_3_EA02B975BED3466B_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xDA327F0)
#define CLASS_3_EA02B975BED3466B__CCTOR_OFFSET UNITYSDK_OFFSET(0xDA33F00)
#define CLASS_3_EA02B975BED3466B__CTOR_OFFSET UNITYSDK_OFFSET(0xDA34000)

inline static constexpr unsigned int Class_3_EA02B975BED3466B_TypeDefinitionIndex = 38953;

class Class_3_EA02B975BED3466B : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	static ::System::Text::StringBuilder** StaticGet_Field_3_42()
	{
		return (::System::Text::StringBuilder**)Il2CppClass::FromTypeDefinitionIndex(Class_3_EA02B975BED3466B_TypeDefinitionIndex)->GetStaticField(0x3C4A0);
	}
	// static const ::System::Int32 Field_3_87 = 0x41; // 0x0
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_40; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_9BB4AD5956D1660B*>* Field_3_30; // 0x50
	::Class_3_EA02B975BED3466B_Struct_2_B69C0DBD20A3CE66 Field_3_77; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Field_3_26; // 0x70
	::Class_1_8289F2785D9AA990* Field_3_43; // 0x78
	::System::Collections::Generic::List_1<::Class_3_EA02B975BED3466B_Struct_2_0856AFBA2442CBE4>* Field_3_51; // 0x80
	::Struct_2_40CB8E823ACA81D0 Field_3_64; // 0x88
	::System::Collections::Generic::Dictionary_2<::Enum_3_B4ECAB024B401031, ::System::Collections::Generic::List_1<::Struct_2_F2A7939F5DFF18C1>*>* Field_3_48; // 0xC0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_3_32; // 0xC8
	::Class_1_8289F2785D9AA990* Field_3_79; // 0xD0
	::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* Field_3_49; // 0xD8
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_3_8; // 0xE0
	::System::Object* Field_3_69; // 0xE8
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_8289F2785D9AA990*>* Field_3_12; // 0xF0
	::System::Collections::Generic::List_1<::System::String*>* Field_3_63; // 0xF8
	::MoleMole::Config::StageEntry* Field_3_0; // 0x100
	::Struct_2_40CB8E823ACA81D0 Field_3_61; // 0x108
	::System::Collections::Generic::List_1<::System::IDisposable*>* Field_3_59; // 0x140
	::Class_3_EA02B975BED3466B_Struct_2_AB8E50E31B2513AE Field_3_76; // 0x148
	::System::Collections::Generic::List_1<::System::String*>* Field_3_65; // 0x170
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_EA02B975BED3466B_Struct_2_2C598A2C9BF09BDC>* Field_3_58; // 0x178
	::System::String* Field_3_34; // 0x180
	::Class_1_2BEAA93324417DF4* Field_3_28; // 0x188
	::Struct_2_40CB8E823ACA81D0 Field_3_62; // 0x190
	::Struct_2_95FEC2CAD22EBF62 Field_3_21; // 0x1C8
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* Field_3_46; // 0x1E8
	::System::Collections::Generic::List_1<::Class_1_8289F2785D9AA990*>* Field_3_80; // 0x1F0
	::System::Collections::Generic::List_1<::Struct_2_8A77D15D7EA8B8D3>* Field_3_18; // 0x1F8
	::System::Collections::Generic::List_1<::Struct_2_BBE6D3C197515027>* Field_3_47; // 0x200
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*>* Field_3_41; // 0x208
	::System::Collections::Generic::List_1<::System::String*>* Field_3_37; // 0x210
	::System::Type* Field_3_66; // 0x218
	::System::Collections::Generic::IReadOnlyDictionary_2<::Share::EItemType, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*>* Field_3_15; // 0x220
	::System::Collections::Generic::List_1<::MoleMole::UIGeneralNewsBubbleRowWidgetController*>* Field_3_23; // 0x228
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::ValueTuple_2<::System::Int32, ::System::Int32>>*>*>* Field_3_25; // 0x230
	::System::Collections::Generic::List_1<::Class_1_EA9FB249A31C5B86*>* Field_3_7; // 0x238
	::System::Collections::Generic::Dictionary_2<::Class_1_0D6706375CDAAE8C*, ::System::Collections::Generic::List_1<::Struct_2_8A77D15D7EA8B8D3>*>* Field_3_14; // 0x240
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_3_2; // 0x248
	::Class_1_9A931A6A933A5644* Field_3_5; // 0x250
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_E54D0DE062FD8194*>* Field_3_24; // 0x258
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_11; // 0x260
	::Struct_2_40CB8E823ACA81D0 Field_3_60; // 0x268
	::MoleMole::EntityHandle Field_3_17; // 0x2A0
	::System::Collections::Generic::List_1<::System::String*>* Field_3_39; // 0x2B0
	::System::Type* Field_3_68; // 0x2B8
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_3D452FA003157C19_Class_0_16E7307DCC43CB2C_1*>* Field_3_55; // 0x2C0
	::System::Collections::Generic::HashSet_1<::MoleMole::EntityHandle>* Field_3_9; // 0x2C8
	::Class_1_8289F2785D9AA990* Field_3_27; // 0x2D0
	::System::Collections::Generic::Dictionary_2<::Enum_3_8A11C59891D25300, ::System::Collections::Generic::List_1<::Struct_2_ABC67D4EFBF3BD9A_1>*>* Field_3_38; // 0x2D8
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_FB573D79216A03BA_Enum_3_DC648FE7CC4D0552>* Field_3_45; // 0x2E0
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_22; // 0x2E8
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_3_EA02B975BED3466B_Class_1_DCE79A11CC8A2FDA*>* Field_3_31; // 0x2F0
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::Enum_3_B4FF51A33B9736E7>>* Field_3_13; // 0x2F8
	::Class_3_EA02B975BED3466B_Struct_2_0856AFBA2442CBE4 Field_3_54; // 0x300
	::System::Int32 Field_3_1; // 0x330
	::System::Int32 Field_3_20; // 0x334
	::System::Boolean Field_3_53; // 0x338
	::System::Boolean Field_3_82; // 0x339
	::System::Boolean Field_3_75; // 0x33A
	::UnityEngine::Vector3 Field_3_35; // 0x33C
	::MoleMole::FlowCanvas::Nodes::EntityDieCheckType Field_3_67; // 0x348
	::System::Int32 Field_3_57; // 0x34C
	::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType Field_3_71; // 0x350
	::MoleMole::Config::LevelEndType Field_3_78; // 0x354
	::MoleMole::FlowCanvas::Nodes::EntityDieCheckType Field_3_70; // 0x358
	::System::Single Field_3_52; // 0x35C
	::UnityEngine::Vector3 Field_3_33; // 0x360
	::System::UInt32 Field_3_3; // 0x36C
	::System::Boolean Field_3_74; // 0x370
	::System::Boolean Field_3_86; // 0x371
	::System::Boolean Field_3_73; // 0x372
	::System::Boolean Field_3_83; // 0x373
	::System::Int32 Field_3_6; // 0x374
	::System::Boolean Field_3_50; // 0x378
	::System::Boolean Field_3_10; // 0x379
	::System::Boolean Field_3_84; // 0x37A
	::System::Boolean Field_3_36; // 0x37B
	::Foundation::Coroutine::CoroutineHandle Field_3_29; // 0x37C
	::Class_3_FB573D79216A03BA_Enum_3_DC648FE7CC4D0552 Field_3_44; // 0x380
	::System::Int32 Field_3_16; // 0x384
	::System::Boolean Field_3_72; // 0x388
	::System::Boolean Field_3_81; // 0x389
	::System::Boolean Field_3_4; // 0x38A
	::System::Boolean Field_3_19; // 0x38B
	::System::Int32 Field_3_56; // 0x38C
	::System::Single Field_3_85; // 0x390

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_60DC879ACE99CF48(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_60DC879ACE99CF48_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_3_C52C99DE7C7DCF87(::System::String* a1, ::System::Int32 a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_C52C99DE7C7DCF87_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* Method_3_13D02FA728EAC9EE()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_13D02FA728EAC9EE_OFFSET))(this);
	}

	::System::Void Method_3_AE5D2F3CFBE15D74()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_AE5D2F3CFBE15D74_OFFSET))(this);
	}

	::System::Boolean Method_3_3C5F8E3777877644(::Struct_2_9DFB39885391F41D a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_9DFB39885391F41D))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_3C5F8E3777877644_OFFSET))(this, a1);
	}

	::Struct_2_9DFB39885391F41D Method_3_9557B1C613115965(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::String* a2)
	{
		return ((::Struct_2_9DFB39885391F41D(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_9557B1C613115965_OFFSET))(this, a1, a2);
	}

	::System::String* Method_3_A129B212F3785E01(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_A129B212F3785E01_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_4ED5A32649C8BEBA(::Class_1_0D6706375CDAAE8C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_4ED5A32649C8BEBA_OFFSET))(this, a1);
	}

	::Enum_3_B4ECAB024B401031 Method_3_BF508D80265F8A02()
	{
		return ((::Enum_3_B4ECAB024B401031(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_BF508D80265F8A02_OFFSET))(this);
	}

	::System::Boolean Method_3_3C5F8E3777877644_1(::Struct_2_9DFB39885391F41D a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_9DFB39885391F41D))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_3C5F8E3777877644_1_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* Method_3_7083C8CC65727677()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_7083C8CC65727677_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Boolean Method_3_F0F72ACA1AB01F3F(::System::String* a1, ::System::Int32 a2, ::System::Collections::Generic::HashSet_1<::System::String*>*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Collections::Generic::HashSet_1<::System::String*>*&))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_F0F72ACA1AB01F3F_OFFSET))(this, a1, a2, a3);
	}

	::Class_0_16E4307DCC419505_189* Method_3_016E85CEDEE00FF4()
	{
		return ((::Class_0_16E4307DCC419505_189*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_016E85CEDEE00FF4_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_3C5F8E3777877644_2(::Struct_2_9DFB39885391F41D a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_9DFB39885391F41D))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_3C5F8E3777877644_2_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::Struct_2_9DFB39885391F41D Method_3_39EE66186B769F16(::System::String* a1)
	{
		return ((::Struct_2_9DFB39885391F41D(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_39EE66186B769F16_OFFSET))(this, a1);
	}

	::System::Void Method_3_0DE30235AD1E5472(::System::Boolean a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_0DE30235AD1E5472_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_E36FCCF1EB5613BB(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Collections::Generic::List_1<::System::String*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_E36FCCF1EB5613BB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::Class_1_0D6706375CDAAE8C* Method_3_CB3169B66131673A(::System::Int32 a1, ::Share::EItemType a2)
	{
		return ((::Class_1_0D6706375CDAAE8C*(*)(::PVOID, ::System::Int32, ::Share::EItemType))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_CB3169B66131673A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_5710174DFF89C413(::MoleMole::Config::StageEntry* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::StageEntry*))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_5710174DFF89C413_OFFSET))(this, a1);
	}

	::Class_3_EA02B975BED3466B_Struct_2_B69C0DBD20A3CE66 Method_3_5780411EFE947D94()
	{
		return ((::Class_3_EA02B975BED3466B_Struct_2_B69C0DBD20A3CE66(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_5780411EFE947D94_OFFSET))(this);
	}

	::System::Void Method_3_639AEB9338EFC1BD(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_639AEB9338EFC1BD_OFFSET))(this, a1);
	}

	::System::Void Method_3_FDCC5B03083ECBA7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_FDCC5B03083ECBA7_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Void Method_3_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_C74E50CBD41F0264_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_C74E50CBD41F0264_2_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_A57EFC29FC0A4418(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_A57EFC29FC0A4418_OFFSET))(this, a1, a2);
	}

	::Class_1_9BB4AD5956D1660B* Method_3_A2953D6A3EB2D06E(::System::String* a1, ::System::Single a2)
	{
		return ((::Class_1_9BB4AD5956D1660B*(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_A2953D6A3EB2D06E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Boolean Method_3_3C5F8E3777877644_3(::Struct_2_9DFB39885391F41D a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_9DFB39885391F41D))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_3C5F8E3777877644_3_OFFSET))(this, a1);
	}

	::System::Void Method_3_7C8C894633A8C89E(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_7C8C894633A8C89E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_3_BA59219F41763A1C(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_FB573D79216A03BA_Enum_3_DC648FE7CC4D0552>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_FB573D79216A03BA_Enum_3_DC648FE7CC4D0552>*))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_BA59219F41763A1C_OFFSET))(this, a1);
	}

	::Class_3_EA02B975BED3466B_Class_1_DCE79A11CC8A2FDA* Method_3_4E1CEED4842C0815(::System::String* a1, ::System::Boolean& a2, ::System::Boolean a3, ::System::Single a4)
	{
		return ((::Class_3_EA02B975BED3466B_Class_1_DCE79A11CC8A2FDA*(*)(::PVOID, ::System::String*, ::System::Boolean&, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_4E1CEED4842C0815_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_C74E50CBD41F0264_3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_C74E50CBD41F0264_3_OFFSET))(this, a1);
	}

	::Class_1_8289F2785D9AA990* Method_3_24748FC20F375725()
	{
		return ((::Class_1_8289F2785D9AA990*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_24748FC20F375725_OFFSET))(this);
	}

	::Struct_2_9DFB39885391F41D Method_3_B7ED72458888ABCF(::System::String* a1, ::System::Int32 a2)
	{
		return ((::Struct_2_9DFB39885391F41D(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_B7ED72458888ABCF_OFFSET))(this, a1, a2);
	}

	::Struct_2_95FEC2CAD22EBF62 Method_3_3D78D2E0F9F95F07()
	{
		return ((::Struct_2_95FEC2CAD22EBF62(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_3D78D2E0F9F95F07_OFFSET))(this);
	}

	::Class_3_FB573D79216A03BA_Enum_3_DC648FE7CC4D0552 Method_3_52FB29FB5E593F19()
	{
		return ((::Class_3_FB573D79216A03BA_Enum_3_DC648FE7CC4D0552(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_52FB29FB5E593F19_OFFSET))(this);
	}

	::System::Boolean Method_3_499095FFABD49154(::System::String* a1, ::Class_3_EA02B975BED3466B_Class_1_DCE79A11CC8A2FDA*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Class_3_EA02B975BED3466B_Class_1_DCE79A11CC8A2FDA*&))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_499095FFABD49154_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Void Method_3_C74E50CBD41F0264_4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_C74E50CBD41F0264_4_OFFSET))(this, a1);
	}

	::Class_3_EA02B975BED3466B_Class_1_DCE79A11CC8A2FDA* Method_3_3D44B4187813BA58(::System::String* a1, ::System::Boolean a2)
	{
		return ((::Class_3_EA02B975BED3466B_Class_1_DCE79A11CC8A2FDA*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_3D44B4187813BA58_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_F0088C88851A7DFB_3_OFFSET))(this);
	}

	::System::Void Method_3_609FA3D38FA252B6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_609FA3D38FA252B6_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_F0088C88851A7DFB_4_OFFSET))(this);
	}

	static ::Class_3_EA02B975BED3466B* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_EA02B975BED3466B*(*)())((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Void Method_3_952453844D88CADD(::Class_1_9BB4AD5956D1660B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9BB4AD5956D1660B*))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_952453844D88CADD_OFFSET))(this, a1);
	}

	::System::Void Method_3_01953D7882459DEC(::Class_2_131E282CCAEB876E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_131E282CCAEB876E*))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_01953D7882459DEC_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_FB573D79216A03BA_Enum_3_DC648FE7CC4D0552>* Method_3_DA8A0099597CAAE1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_FB573D79216A03BA_Enum_3_DC648FE7CC4D0552>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_DA8A0099597CAAE1_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_3_EA02B975BED3466B_Class_1_DCE79A11CC8A2FDA*>* Method_3_0068B163F1F27BF3()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_3_EA02B975BED3466B_Class_1_DCE79A11CC8A2FDA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_0068B163F1F27BF3_OFFSET))(this);
	}

	::Struct_2_9DFB39885391F41D Method_3_9557B1C613115965_1(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::String* a2)
	{
		return ((::Struct_2_9DFB39885391F41D(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_9557B1C613115965_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D0910C538D3429E2(::System::UInt32 a1, ::Class_3_EA02B975BED3466B_Struct_2_2C598A2C9BF09BDC a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_3_EA02B975BED3466B_Struct_2_2C598A2C9BF09BDC))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_D0910C538D3429E2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_AA18443F042C7418(::Class_3_FB573D79216A03BA_Enum_3_DC648FE7CC4D0552 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_FB573D79216A03BA_Enum_3_DC648FE7CC4D0552))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_AA18443F042C7418_OFFSET))(this, a1);
	}

	::System::String* Method_3_6F84A66A56C7E7C2(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_6F84A66A56C7E7C2_OFFSET))(this, a1);
	}

	::System::Void Method_3_B3F352584D32F9FD(::Class_3_EA02B975BED3466B_Struct_2_B69C0DBD20A3CE66 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_EA02B975BED3466B_Struct_2_B69C0DBD20A3CE66))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_B3F352584D32F9FD_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_5()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_F0088C88851A7DFB_5_OFFSET))(this);
	}
};
