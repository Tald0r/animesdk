#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_EA02B975BED3466B_Struct_2_0856AFBA2442CBE4.h"
#include "unitysdk/Class_3_EA02B975BED3466B_Struct_2_2C598A2C9BF09BDC.h"
#include "unitysdk/Class_3_EA02B975BED3466B_Struct_2_AB8E50E31B2513AE.h"
#include "unitysdk/Class_3_EA02B975BED3466B_Struct_2_B69C0DBD20A3CE66.h"
#include "unitysdk/Class_3_FB573D79216A03BA_Enum_3_AD1A5EE858DBFC52.h"
#include "unitysdk/Enum_3_84ED1BE6947BE914.h"
#include "unitysdk/Enum_3_8A11C59891D25300.h"
#include "unitysdk/Enum_3_B4FF51A33B9736E7.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/Config/LevelEndType.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/EntityDieCheckType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDLevelEndNode_LevelEndPerformType.h"
#include "unitysdk/Share/EItemType.h"
#include "unitysdk/Struct_2_8A77D15D7EA8B8D3_1.h"
#include "unitysdk/Struct_2_95FEC2CAD22EBF62.h"
#include "unitysdk/Struct_2_ABC67D4EFBF3BD9A_4.h"
#include "unitysdk/Struct_2_BBE6D3C197515027.h"
#include "unitysdk/Struct_2_F2A7939F5DFF18C1_4.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_432;
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
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }

#define CLASS_3_EA02B975BED3466B_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x913DA30)
#define CLASS_3_EA02B975BED3466B_METHOD_3_0068B163F1F27BF3_OFFSET UNITYSDK_OFFSET(0x913F1B0)
#define CLASS_3_EA02B975BED3466B_METHOD_3_016E85CEDEE00FF4_OFFSET UNITYSDK_OFFSET(0x9141C10)
#define CLASS_3_EA02B975BED3466B_METHOD_3_01953D7882459DEC_OFFSET UNITYSDK_OFFSET(0x913F090)
#define CLASS_3_EA02B975BED3466B_METHOD_3_0DE30235AD1E5472_OFFSET UNITYSDK_OFFSET(0x9141D80)
#define CLASS_3_EA02B975BED3466B_METHOD_3_13D02FA728EAC9EE_OFFSET UNITYSDK_OFFSET(0x913F190)
#define CLASS_3_EA02B975BED3466B_METHOD_3_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x91429C0)
#define CLASS_3_EA02B975BED3466B_METHOD_3_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x91425C0)
#define CLASS_3_EA02B975BED3466B_METHOD_3_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x913F1A0)
#define CLASS_3_EA02B975BED3466B_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x9141B50)
#define CLASS_3_EA02B975BED3466B_METHOD_3_3D44B4187813BA58_OFFSET UNITYSDK_OFFSET(0x913EB90)
#define CLASS_3_EA02B975BED3466B_METHOD_3_3D78D2E0F9F95F07_OFFSET UNITYSDK_OFFSET(0x9142960)
#define CLASS_3_EA02B975BED3466B_METHOD_3_499095FFABD49154_OFFSET UNITYSDK_OFFSET(0x913ED50)
#define CLASS_3_EA02B975BED3466B_METHOD_3_4E1CEED4842C0815_OFFSET UNITYSDK_OFFSET(0x9142090)
#define CLASS_3_EA02B975BED3466B_METHOD_3_4ED5A32649C8BEBA_OFFSET UNITYSDK_OFFSET(0x91416F0)
#define CLASS_3_EA02B975BED3466B_METHOD_3_52FB29FB5E593F19_OFFSET UNITYSDK_OFFSET(0x9141D70)
#define CLASS_3_EA02B975BED3466B_METHOD_3_5710174DFF89C413_OFFSET UNITYSDK_OFFSET(0x913F1D0)
#define CLASS_3_EA02B975BED3466B_METHOD_3_5780411EFE947D94_OFFSET UNITYSDK_OFFSET(0x9142810)
#define CLASS_3_EA02B975BED3466B_METHOD_3_60DC879ACE99CF48_OFFSET UNITYSDK_OFFSET(0x9142710)
#define CLASS_3_EA02B975BED3466B_METHOD_3_639AEB9338EFC1BD_OFFSET UNITYSDK_OFFSET(0x9141B40)
#define CLASS_3_EA02B975BED3466B_METHOD_3_6F84A66A56C7E7C2_OFFSET UNITYSDK_OFFSET(0x9141920)
#define CLASS_3_EA02B975BED3466B_METHOD_3_7083C8CC65727677_OFFSET UNITYSDK_OFFSET(0x9141F40)
#define CLASS_3_EA02B975BED3466B_METHOD_3_7C8C894633A8C89E_OFFSET UNITYSDK_OFFSET(0x91414F0)
#define CLASS_3_EA02B975BED3466B_METHOD_3_952453844D88CADD_OFFSET UNITYSDK_OFFSET(0x9142030)
#define CLASS_3_EA02B975BED3466B_METHOD_3_A129B212F3785E01_OFFSET UNITYSDK_OFFSET(0x9141CA0)
#define CLASS_3_EA02B975BED3466B_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x9142E60)
#define CLASS_3_EA02B975BED3466B_METHOD_3_A2953D6A3EB2D06E_OFFSET UNITYSDK_OFFSET(0x913E960)
#define CLASS_3_EA02B975BED3466B_METHOD_3_A57EFC29FC0A4418_OFFSET UNITYSDK_OFFSET(0x9142830)
#define CLASS_3_EA02B975BED3466B_METHOD_3_AA18443F042C7418_OFFSET UNITYSDK_OFFSET(0x9141D60)
#define CLASS_3_EA02B975BED3466B_METHOD_3_B3F352584D32F9FD_OFFSET UNITYSDK_OFFSET(0x913EB70)
#define CLASS_3_EA02B975BED3466B_METHOD_3_BA59219F41763A1C_OFFSET UNITYSDK_OFFSET(0x9142700)
#define CLASS_3_EA02B975BED3466B_METHOD_3_BF508D80265F8A02_OFFSET UNITYSDK_OFFSET(0x9141890)
#define CLASS_3_EA02B975BED3466B_METHOD_3_C52C99DE7C7DCF87_OFFSET UNITYSDK_OFFSET(0x9142A50)
#define CLASS_3_EA02B975BED3466B_METHOD_3_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x9142990)
#define CLASS_3_EA02B975BED3466B_METHOD_3_C74E50CBD41F0264_2_OFFSET UNITYSDK_OFFSET(0x91429A0)
#define CLASS_3_EA02B975BED3466B_METHOD_3_C74E50CBD41F0264_3_OFFSET UNITYSDK_OFFSET(0x9142A40)
#define CLASS_3_EA02B975BED3466B_METHOD_3_C74E50CBD41F0264_4_OFFSET UNITYSDK_OFFSET(0x9142E40)
#define CLASS_3_EA02B975BED3466B_METHOD_3_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x913F1C0)
#define CLASS_3_EA02B975BED3466B_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x913ECE0)
#define CLASS_3_EA02B975BED3466B_METHOD_3_CB3169B66131673A_OFFSET UNITYSDK_OFFSET(0x913EE80)
#define CLASS_3_EA02B975BED3466B_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x9142DA0)
#define CLASS_3_EA02B975BED3466B_METHOD_3_D0910C538D3429E2_OFFSET UNITYSDK_OFFSET(0x9142650)
#define CLASS_3_EA02B975BED3466B_METHOD_3_DA8A0099597CAAE1_OFFSET UNITYSDK_OFFSET(0x9142640)
#define CLASS_3_EA02B975BED3466B_METHOD_3_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x91427F0)
#define CLASS_3_EA02B975BED3466B_METHOD_3_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x9142800)
#define CLASS_3_EA02B975BED3466B_METHOD_3_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0x9142980)
#define CLASS_3_EA02B975BED3466B_METHOD_3_F0088C88851A7DFB_4_OFFSET UNITYSDK_OFFSET(0x91429B0)
#define CLASS_3_EA02B975BED3466B_METHOD_3_F0088C88851A7DFB_5_OFFSET UNITYSDK_OFFSET(0x9142E50)
#define CLASS_3_EA02B975BED3466B_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x9141910)
#define CLASS_3_EA02B975BED3466B_METHOD_3_F0F72ACA1AB01F3F_OFFSET UNITYSDK_OFFSET(0x91423B0)
#define CLASS_3_EA02B975BED3466B_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x913C750)
#define CLASS_3_EA02B975BED3466B__CCTOR_OFFSET UNITYSDK_OFFSET(0x913DA90)
#define CLASS_3_EA02B975BED3466B__CTOR_OFFSET UNITYSDK_OFFSET(0x913DB90)

inline static constexpr unsigned int Class_3_EA02B975BED3466B_TypeDefinitionIndex = 66613;

class Class_3_EA02B975BED3466B : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	static ::System::Text::StringBuilder** StaticGet_Field_3_64()
	{
		return (::System::Text::StringBuilder**)Il2CppClass::FromTypeDefinitionIndex(Class_3_EA02B975BED3466B_TypeDefinitionIndex)->GetStaticField(0x31740);
	}
	// static const ::System::Int32 Field_3_81 = 0x41; // 0x0
	::System::Collections::Generic::Dictionary_2<::Enum_3_8A11C59891D25300, ::System::Collections::Generic::List_1<::Struct_2_ABC67D4EFBF3BD9A_4>*>* Field_3_60; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*>* Field_3_63; // 0x50
	::System::Type* Field_3_8; // 0x58
	::Class_3_EA02B975BED3466B_Struct_2_0856AFBA2442CBE4 Field_3_76; // 0x60
	::System::Collections::Generic::List_1<::System::String*>* Field_3_59; // 0x90
	::System::Collections::Generic::Dictionary_2<::Class_1_0D6706375CDAAE8C*, ::System::Collections::Generic::List_1<::Struct_2_8A77D15D7EA8B8D3_1>*>* Field_3_36; // 0x98
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::ValueTuple_2<::System::Int32, ::System::Int32>>*>*>* Field_3_47; // 0xA0
	::System::Collections::Generic::HashSet_1<::MoleMole::EntityHandle>* Field_3_31; // 0xA8
	::System::Collections::Generic::List_1<::Struct_2_BBE6D3C197515027>* Field_3_69; // 0xB0
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::Enum_3_B4FF51A33B9736E7>>* Field_3_35; // 0xB8
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_FB573D79216A03BA_Enum_3_AD1A5EE858DBFC52>* Field_3_67; // 0xC0
	::Class_1_8289F2785D9AA990* Field_3_49; // 0xC8
	::System::Collections::Generic::List_1<::Class_1_EA9FB249A31C5B86*>* Field_3_29; // 0xD0
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_44; // 0xD8
	::MoleMole::Config::StageEntry* Field_3_0; // 0xE0
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_3_30; // 0xE8
	::Class_3_EA02B975BED3466B_Struct_2_B69C0DBD20A3CE66 Field_3_19; // 0xF0
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_62; // 0x108
	::System::Object* Field_3_11; // 0x110
	::System::Collections::Generic::IReadOnlyDictionary_2<::Share::EItemType, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*>* Field_3_37; // 0x118
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_8289F2785D9AA990*>* Field_3_34; // 0x120
	::Class_3_EA02B975BED3466B_Struct_2_AB8E50E31B2513AE Field_3_18; // 0x128
	::System::Collections::Generic::List_1<::System::String*>* Field_3_61; // 0x150
	::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* Field_3_71; // 0x158
	::System::Collections::Generic::Dictionary_2<::Enum_3_84ED1BE6947BE914, ::System::Collections::Generic::List_1<::Struct_2_F2A7939F5DFF18C1_4>*>* Field_3_70; // 0x160
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_3_2; // 0x168
	::System::Collections::Generic::List_1<::Class_3_EA02B975BED3466B_Struct_2_0856AFBA2442CBE4>* Field_3_73; // 0x170
	::Class_1_9A931A6A933A5644* Field_3_6; // 0x178
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_3_54; // 0x180
	::Class_1_8289F2785D9AA990* Field_3_65; // 0x188
	::MoleMole::EntityHandle Field_3_39; // 0x190
	::Struct_2_95FEC2CAD22EBF62 Field_3_43; // 0x1A0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_9BB4AD5956D1660B*>* Field_3_52; // 0x1C0
	::System::String* Field_3_56; // 0x1C8
	::System::Collections::Generic::List_1<::MoleMole::UIGeneralNewsBubbleRowWidgetController*>* Field_3_45; // 0x1D0
	::Class_1_8289F2785D9AA990* Field_3_21; // 0x1D8
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_3_EA02B975BED3466B_Class_1_DCE79A11CC8A2FDA*>* Field_3_53; // 0x1E0
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_EA02B975BED3466B_Struct_2_2C598A2C9BF09BDC>* Field_3_80; // 0x1E8
	::System::Type* Field_3_10; // 0x1F0
	::System::Collections::Generic::List_1<::Struct_2_8A77D15D7EA8B8D3_1>* Field_3_40; // 0x1F8
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* Field_3_68; // 0x200
	::Class_1_2BEAA93324417DF4* Field_3_50; // 0x208
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_33; // 0x210
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_E54D0DE062FD8194*>* Field_3_46; // 0x218
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Field_3_48; // 0x220
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_3D452FA003157C19_Class_0_16E7307DCC43CB2C_1*>* Field_3_77; // 0x228
	::System::Collections::Generic::List_1<::Class_1_8289F2785D9AA990*>* Field_3_22; // 0x230
	::System::Single Field_3_74; // 0x238
	::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType Field_3_13; // 0x23C
	::System::Int32 Field_3_1; // 0x240
	::Foundation::Coroutine::CoroutineHandle Field_3_51; // 0x244
	::MoleMole::FlowCanvas::Nodes::EntityDieCheckType Field_3_9; // 0x248
	::System::Int32 Field_3_42; // 0x24C
	::MoleMole::FlowCanvas::Nodes::EntityDieCheckType Field_3_12; // 0x250
	::System::Int32 Field_3_79; // 0x254
	::UnityEngine::Vector3 Field_3_57; // 0x258
	::System::Int32 Field_3_38; // 0x264
	::System::UInt32 Field_3_3; // 0x268
	::System::Int32 Field_3_78; // 0x26C
	::System::Int32 Field_3_7; // 0x270
	::System::Boolean Field_3_14; // 0x274
	::System::Boolean Field_3_28; // 0x275
	::System::Boolean Field_3_32; // 0x276
	::System::Boolean Field_3_16; // 0x277
	::MoleMole::Config::LevelEndType Field_3_20; // 0x278
	::Class_3_FB573D79216A03BA_Enum_3_AD1A5EE858DBFC52 Field_3_66; // 0x27C
	::System::Single Field_3_27; // 0x280
	::System::Boolean Field_3_41; // 0x284
	::System::Boolean Field_3_4; // 0x285
	::System::Boolean Field_3_23; // 0x286
	::System::Boolean Field_3_26; // 0x287
	::System::Boolean Field_3_5; // 0x288
	::System::Boolean Field_3_58; // 0x289
	::System::Boolean Field_3_15; // 0x28A
	::System::Boolean Field_3_72; // 0x28B
	::UnityEngine::Vector3 Field_3_55; // 0x28C
	::System::Boolean Field_3_75; // 0x298
	::System::Boolean Field_3_17; // 0x299
	::System::Boolean Field_3_24; // 0x29A
	::System::Boolean Field_3_25; // 0x29B

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

	::Class_1_9BB4AD5956D1660B* Method_3_A2953D6A3EB2D06E(::System::String* a1, ::System::Single a2)
	{
		return ((::Class_1_9BB4AD5956D1660B*(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_A2953D6A3EB2D06E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_B3F352584D32F9FD(::Class_3_EA02B975BED3466B_Struct_2_B69C0DBD20A3CE66 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_EA02B975BED3466B_Struct_2_B69C0DBD20A3CE66))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_B3F352584D32F9FD_OFFSET))(this, a1);
	}

	::Class_3_EA02B975BED3466B_Class_1_DCE79A11CC8A2FDA* Method_3_3D44B4187813BA58(::System::String* a1, ::System::Boolean a2)
	{
		return ((::Class_3_EA02B975BED3466B_Class_1_DCE79A11CC8A2FDA*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_3D44B4187813BA58_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_3_499095FFABD49154(::System::String* a1, ::Class_3_EA02B975BED3466B_Class_1_DCE79A11CC8A2FDA*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Class_3_EA02B975BED3466B_Class_1_DCE79A11CC8A2FDA*&))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_499095FFABD49154_OFFSET))(this, a1, a2);
	}

	::Class_1_0D6706375CDAAE8C* Method_3_CB3169B66131673A(::System::Int32 a1, ::Share::EItemType a2)
	{
		return ((::Class_1_0D6706375CDAAE8C*(*)(::PVOID, ::System::Int32, ::Share::EItemType))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_CB3169B66131673A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_01953D7882459DEC(::Class_2_131E282CCAEB876E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_131E282CCAEB876E*))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_01953D7882459DEC_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* Method_3_13D02FA728EAC9EE()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_13D02FA728EAC9EE_OFFSET))(this);
	}

	::Class_1_8289F2785D9AA990* Method_3_24748FC20F375725()
	{
		return ((::Class_1_8289F2785D9AA990*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_24748FC20F375725_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_3_EA02B975BED3466B_Class_1_DCE79A11CC8A2FDA*>* Method_3_0068B163F1F27BF3()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_3_EA02B975BED3466B_Class_1_DCE79A11CC8A2FDA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_0068B163F1F27BF3_OFFSET))(this);
	}

	::System::Void Method_3_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_3_5710174DFF89C413(::MoleMole::Config::StageEntry* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::StageEntry*))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_5710174DFF89C413_OFFSET))(this, a1);
	}

	::System::Void Method_3_4ED5A32649C8BEBA(::Class_1_0D6706375CDAAE8C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_4ED5A32649C8BEBA_OFFSET))(this, a1);
	}

	::Enum_3_84ED1BE6947BE914 Method_3_BF508D80265F8A02()
	{
		return ((::Enum_3_84ED1BE6947BE914(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_BF508D80265F8A02_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::String* Method_3_6F84A66A56C7E7C2(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_6F84A66A56C7E7C2_OFFSET))(this, a1);
	}

	::System::Void Method_3_639AEB9338EFC1BD(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_639AEB9338EFC1BD_OFFSET))(this, a1);
	}

	::System::Void Method_3_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_432* Method_3_016E85CEDEE00FF4()
	{
		return ((::Class_0_16E4307DCC419505_432*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_016E85CEDEE00FF4_OFFSET))(this);
	}

	::System::String* Method_3_A129B212F3785E01(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_A129B212F3785E01_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_AA18443F042C7418(::Class_3_FB573D79216A03BA_Enum_3_AD1A5EE858DBFC52 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_FB573D79216A03BA_Enum_3_AD1A5EE858DBFC52))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_AA18443F042C7418_OFFSET))(this, a1);
	}

	::Class_3_FB573D79216A03BA_Enum_3_AD1A5EE858DBFC52 Method_3_52FB29FB5E593F19()
	{
		return ((::Class_3_FB573D79216A03BA_Enum_3_AD1A5EE858DBFC52(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_52FB29FB5E593F19_OFFSET))(this);
	}

	::System::Void Method_3_0DE30235AD1E5472(::System::Boolean a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_0DE30235AD1E5472_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* Method_3_7083C8CC65727677()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_7083C8CC65727677_OFFSET))(this);
	}

	::System::Void Method_3_952453844D88CADD(::Class_1_9BB4AD5956D1660B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9BB4AD5956D1660B*))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_952453844D88CADD_OFFSET))(this, a1);
	}

	::Class_3_EA02B975BED3466B_Class_1_DCE79A11CC8A2FDA* Method_3_4E1CEED4842C0815(::System::String* a1, ::System::Boolean& a2, ::System::Boolean a3, ::System::Single a4)
	{
		return ((::Class_3_EA02B975BED3466B_Class_1_DCE79A11CC8A2FDA*(*)(::PVOID, ::System::String*, ::System::Boolean&, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_4E1CEED4842C0815_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_3_F0F72ACA1AB01F3F(::System::String* a1, ::System::Int32 a2, ::System::Collections::Generic::HashSet_1<::System::String*>*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Collections::Generic::HashSet_1<::System::String*>*&))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_F0F72ACA1AB01F3F_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_3_7C8C894633A8C89E(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_7C8C894633A8C89E_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_FB573D79216A03BA_Enum_3_AD1A5EE858DBFC52>* Method_3_DA8A0099597CAAE1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_FB573D79216A03BA_Enum_3_AD1A5EE858DBFC52>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_DA8A0099597CAAE1_OFFSET))(this);
	}

	::System::Void Method_3_D0910C538D3429E2(::System::UInt32 a1, ::Class_3_EA02B975BED3466B_Struct_2_2C598A2C9BF09BDC a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_3_EA02B975BED3466B_Struct_2_2C598A2C9BF09BDC))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_D0910C538D3429E2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_BA59219F41763A1C(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_FB573D79216A03BA_Enum_3_AD1A5EE858DBFC52>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_FB573D79216A03BA_Enum_3_AD1A5EE858DBFC52>*))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_BA59219F41763A1C_OFFSET))(this, a1);
	}

	::System::Void Method_3_60DC879ACE99CF48(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_60DC879ACE99CF48_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::Class_3_EA02B975BED3466B_Struct_2_B69C0DBD20A3CE66 Method_3_5780411EFE947D94()
	{
		return ((::Class_3_EA02B975BED3466B_Struct_2_B69C0DBD20A3CE66(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_5780411EFE947D94_OFFSET))(this);
	}

	::System::Boolean Method_3_A57EFC29FC0A4418(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_A57EFC29FC0A4418_OFFSET))(this, a1, a2);
	}

	::Struct_2_95FEC2CAD22EBF62 Method_3_3D78D2E0F9F95F07()
	{
		return ((::Struct_2_95FEC2CAD22EBF62(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_3D78D2E0F9F95F07_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_F0088C88851A7DFB_3_OFFSET))(this);
	}

	::System::Void Method_3_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_C74E50CBD41F0264_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_C74E50CBD41F0264_2_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_F0088C88851A7DFB_4_OFFSET))(this);
	}

	::System::Boolean Method_3_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Void Method_3_C74E50CBD41F0264_3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_C74E50CBD41F0264_3_OFFSET))(this, a1);
	}

	::System::Void Method_3_C52C99DE7C7DCF87(::System::String* a1, ::System::Int32 a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_C52C99DE7C7DCF87_OFFSET))(this, a1, a2, a3);
	}

	static ::Class_3_EA02B975BED3466B* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_EA02B975BED3466B*(*)())((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Void Method_3_C74E50CBD41F0264_4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_C74E50CBD41F0264_4_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_5()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_F0088C88851A7DFB_5_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
