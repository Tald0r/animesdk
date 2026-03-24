#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0C5EBCCE1D54A049.h"
#include "unitysdk/Enum_3_193F3C12190537FD.h"
#include "unitysdk/Enum_3_462371125D2D5513.h"
#include "unitysdk/Enum_3_70248E32F82D4889_1.h"
#include "unitysdk/Enum_3_C3C384691A090251.h"
#include "unitysdk/Enum_3_E02FB5DE7C8D1AE7.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/MusicGame/ELiveHouseSpineEmojiType.h"
#include "unitysdk/MoleMole/MusicGame/ELiveHouseTrackHeadEmojiType.h"
#include "unitysdk/MoleMole/MusicGame/FLiveHouseSettingData.h"
#include "unitysdk/MoleMole/MusicGame/FLiveHouseSpineEmojiData.h"
#include "unitysdk/MoleMole/MusicGame/FLiveHouseTrackHeadEmojiData.h"
#include "unitysdk/Struct_2_081A2682696AA10B.h"
#include "unitysdk/Struct_2_4C8453486C91E3A1_4.h"
#include "unitysdk/Struct_2_B4A88BE55E27A7C3.h"
#include "unitysdk/Struct_2_FFBC003CFBB61A74.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_158;
class Class_1_D43702405C026A47;
class Class_3_CDD7C63403A61D90;
class Class_3_D11B47081CD802C8;
class Class_4_EDAF922741458586;
namespace MoleMole { class ActivityLivehouseRhythmBeatmapConfig; }
namespace MoleMole { class Note; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole::Config { class ActivityLiveHouseConstValue; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D1816B8957201A9F_METHOD_1_022E73465569B5C3_OFFSET UNITYSDK_OFFSET(0x9372010)
#define CLASS_1_D1816B8957201A9F_METHOD_1_03E375A30E3AFF80_OFFSET UNITYSDK_OFFSET(0x9370170)
#define CLASS_1_D1816B8957201A9F_METHOD_1_04F7CE19528E4FE5_OFFSET UNITYSDK_OFFSET(0x9372DD0)
#define CLASS_1_D1816B8957201A9F_METHOD_1_055E3BF644BB741B_OFFSET UNITYSDK_OFFSET(0x9374BA0)
#define CLASS_1_D1816B8957201A9F_METHOD_1_080936BC105064D6_1_OFFSET UNITYSDK_OFFSET(0x93746A0)
#define CLASS_1_D1816B8957201A9F_METHOD_1_080936BC105064D6_OFFSET UNITYSDK_OFFSET(0x9371B90)
#define CLASS_1_D1816B8957201A9F_METHOD_1_09A39B89545FE101_OFFSET UNITYSDK_OFFSET(0x9371450)
#define CLASS_1_D1816B8957201A9F_METHOD_1_16A1F5578E20CC62_OFFSET UNITYSDK_OFFSET(0x93731D0)
#define CLASS_1_D1816B8957201A9F_METHOD_1_18712DB3B1B723E8_OFFSET UNITYSDK_OFFSET(0x9372200)
#define CLASS_1_D1816B8957201A9F_METHOD_1_1BA49AE473484BAE_OFFSET UNITYSDK_OFFSET(0x9374A30)
#define CLASS_1_D1816B8957201A9F_METHOD_1_231B9F7B8693F245_OFFSET UNITYSDK_OFFSET(0x9373940)
#define CLASS_1_D1816B8957201A9F_METHOD_1_2762DA0C58DE2FB7_OFFSET UNITYSDK_OFFSET(0x9372E70)
#define CLASS_1_D1816B8957201A9F_METHOD_1_295A574A3B3BE00D_1_OFFSET UNITYSDK_OFFSET(0x9371890)
#define CLASS_1_D1816B8957201A9F_METHOD_1_295A574A3B3BE00D_OFFSET UNITYSDK_OFFSET(0x9372430)
#define CLASS_1_D1816B8957201A9F_METHOD_1_2AB16C1FA4EAF6A2_OFFSET UNITYSDK_OFFSET(0x93720A0)
#define CLASS_1_D1816B8957201A9F_METHOD_1_3150507749BCEAEC_OFFSET UNITYSDK_OFFSET(0x9373750)
#define CLASS_1_D1816B8957201A9F_METHOD_1_340963F02BF514CA_OFFSET UNITYSDK_OFFSET(0x9370F60)
#define CLASS_1_D1816B8957201A9F_METHOD_1_3D98DB7DD083F480_OFFSET UNITYSDK_OFFSET(0x9370BD0)
#define CLASS_1_D1816B8957201A9F_METHOD_1_431CEE840B9AD9EF_1_OFFSET UNITYSDK_OFFSET(0x9373290)
#define CLASS_1_D1816B8957201A9F_METHOD_1_431CEE840B9AD9EF_2_OFFSET UNITYSDK_OFFSET(0x93737B0)
#define CLASS_1_D1816B8957201A9F_METHOD_1_431CEE840B9AD9EF_OFFSET UNITYSDK_OFFSET(0x9370A40)
#define CLASS_1_D1816B8957201A9F_METHOD_1_4A2D31B96D58BF84_OFFSET UNITYSDK_OFFSET(0x9372680)
#define CLASS_1_D1816B8957201A9F_METHOD_1_4E2BCE3C8705DF5E_OFFSET UNITYSDK_OFFSET(0x9374B00)
#define CLASS_1_D1816B8957201A9F_METHOD_1_55A6AB128FB8E363_OFFSET UNITYSDK_OFFSET(0x9372A70)
#define CLASS_1_D1816B8957201A9F_METHOD_1_57A8E11FECF10345_OFFSET UNITYSDK_OFFSET(0x9372D40)
#define CLASS_1_D1816B8957201A9F_METHOD_1_5A0ABD813A2B8D81_OFFSET UNITYSDK_OFFSET(0x9370730)
#define CLASS_1_D1816B8957201A9F_METHOD_1_5B484627A8A06DD9_OFFSET UNITYSDK_OFFSET(0x9370C60)
#define CLASS_1_D1816B8957201A9F_METHOD_1_6346628F16B83983_OFFSET UNITYSDK_OFFSET(0x9370340)
#define CLASS_1_D1816B8957201A9F_METHOD_1_67539326A6504A6B_OFFSET UNITYSDK_OFFSET(0x9371500)
#define CLASS_1_D1816B8957201A9F_METHOD_1_744DD0CF02061671_OFFSET UNITYSDK_OFFSET(0x9372980)
#define CLASS_1_D1816B8957201A9F_METHOD_1_7A3720011442FAF3_1_OFFSET UNITYSDK_OFFSET(0x9371E70)
#define CLASS_1_D1816B8957201A9F_METHOD_1_7A3720011442FAF3_OFFSET UNITYSDK_OFFSET(0x9371CA0)
#define CLASS_1_D1816B8957201A9F_METHOD_1_7B634279EA4AF444_OFFSET UNITYSDK_OFFSET(0x9371EE0)
#define CLASS_1_D1816B8957201A9F_METHOD_1_7D4F9B568D8BC6AB_1_OFFSET UNITYSDK_OFFSET(0x9374C00)
#define CLASS_1_D1816B8957201A9F_METHOD_1_7D4F9B568D8BC6AB_OFFSET UNITYSDK_OFFSET(0x9370900)
#define CLASS_1_D1816B8957201A9F_METHOD_1_7F8ED38F9AEF6911_OFFSET UNITYSDK_OFFSET(0x93744F0)
#define CLASS_1_D1816B8957201A9F_METHOD_1_8A3768DAE2FA37B5_OFFSET UNITYSDK_OFFSET(0x9373430)
#define CLASS_1_D1816B8957201A9F_METHOD_1_9B207DC6E5A6D4EB_OFFSET UNITYSDK_OFFSET(0x9372340)
#define CLASS_1_D1816B8957201A9F_METHOD_1_A4B358CFA248B244_1_OFFSET UNITYSDK_OFFSET(0x9370D50)
#define CLASS_1_D1816B8957201A9F_METHOD_1_A4B358CFA248B244_OFFSET UNITYSDK_OFFSET(0x93703A0)
#define CLASS_1_D1816B8957201A9F_METHOD_1_A6C44177113A33BB_OFFSET UNITYSDK_OFFSET(0x93704E0)
#define CLASS_1_D1816B8957201A9F_METHOD_1_AA2C5C495E0E542E_OFFSET UNITYSDK_OFFSET(0x9373C80)
#define CLASS_1_D1816B8957201A9F_METHOD_1_AA754EA59735BAD9_OFFSET UNITYSDK_OFFSET(0x93717F0)
#define CLASS_1_D1816B8957201A9F_METHOD_1_AC998F1FC9040BDA_1_OFFSET UNITYSDK_OFFSET(0x9370470)
#define CLASS_1_D1816B8957201A9F_METHOD_1_AC998F1FC9040BDA_2_OFFSET UNITYSDK_OFFSET(0x9374A90)
#define CLASS_1_D1816B8957201A9F_METHOD_1_AC998F1FC9040BDA_OFFSET UNITYSDK_OFFSET(0x9370250)
#define CLASS_1_D1816B8957201A9F_METHOD_1_AE9195AF42F185CC_OFFSET UNITYSDK_OFFSET(0x93712D0)
#define CLASS_1_D1816B8957201A9F_METHOD_1_B1B131E061549818_OFFSET UNITYSDK_OFFSET(0x9371D20)
#define CLASS_1_D1816B8957201A9F_METHOD_1_B238D66305ADFDDE_OFFSET UNITYSDK_OFFSET(0x9370960)
#define CLASS_1_D1816B8957201A9F_METHOD_1_B2BFA56222961CF0_1_OFFSET UNITYSDK_OFFSET(0x9374450)
#define CLASS_1_D1816B8957201A9F_METHOD_1_B2BFA56222961CF0_2_OFFSET UNITYSDK_OFFSET(0x9374DA0)
#define CLASS_1_D1816B8957201A9F_METHOD_1_B2BFA56222961CF0_OFFSET UNITYSDK_OFFSET(0x9373BE0)
#define CLASS_1_D1816B8957201A9F_METHOD_1_C1C5AB73E443B1B4_1_OFFSET UNITYSDK_OFFSET(0x9371C40)
#define CLASS_1_D1816B8957201A9F_METHOD_1_C1C5AB73E443B1B4_2_OFFSET UNITYSDK_OFFSET(0x9373490)
#define CLASS_1_D1816B8957201A9F_METHOD_1_C1C5AB73E443B1B4_3_OFFSET UNITYSDK_OFFSET(0x9371780)
#define CLASS_1_D1816B8957201A9F_METHOD_1_C1C5AB73E443B1B4_4_OFFSET UNITYSDK_OFFSET(0x93747D0)
#define CLASS_1_D1816B8957201A9F_METHOD_1_C1C5AB73E443B1B4_5_OFFSET UNITYSDK_OFFSET(0x9374C60)
#define CLASS_1_D1816B8957201A9F_METHOD_1_C1C5AB73E443B1B4_OFFSET UNITYSDK_OFFSET(0x9370400)
#define CLASS_1_D1816B8957201A9F_METHOD_1_C21DC7486A01DA55_OFFSET UNITYSDK_OFFSET(0x9373A90)
#define CLASS_1_D1816B8957201A9F_METHOD_1_C293B8F3ADB851B9_OFFSET UNITYSDK_OFFSET(0x9374380)
#define CLASS_1_D1816B8957201A9F_METHOD_1_C4D836FAB9875D44_OFFSET UNITYSDK_OFFSET(0x9373500)
#define CLASS_1_D1816B8957201A9F_METHOD_1_D954970F3588635B_OFFSET UNITYSDK_OFFSET(0x9370DB0)
#define CLASS_1_D1816B8957201A9F_METHOD_1_DD55BBAE50946E29_OFFSET UNITYSDK_OFFSET(0x93730D0)
#define CLASS_1_D1816B8957201A9F_METHOD_1_DF289035BEA563C0_OFFSET UNITYSDK_OFFSET(0x9372AD0)
#define CLASS_1_D1816B8957201A9F_METHOD_1_E2030E810407E26B_1_OFFSET UNITYSDK_OFFSET(0x93702C0)
#define CLASS_1_D1816B8957201A9F_METHOD_1_E2030E810407E26B_2_OFFSET UNITYSDK_OFFSET(0x9371B20)
#define CLASS_1_D1816B8957201A9F_METHOD_1_E2030E810407E26B_OFFSET UNITYSDK_OFFSET(0x93701D0)
#define CLASS_1_D1816B8957201A9F_METHOD_1_E554CEBF01F65235_OFFSET UNITYSDK_OFFSET(0x9371F80)
#define CLASS_1_D1816B8957201A9F_METHOD_1_E625AB0285C2BCC8_OFFSET UNITYSDK_OFFSET(0x9374840)
#define CLASS_1_D1816B8957201A9F_METHOD_1_F2256D3B7C7C8994_OFFSET UNITYSDK_OFFSET(0x9374730)
#define CLASS_1_D1816B8957201A9F_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x9370EA0)
#define CLASS_1_D1816B8957201A9F_METHOD_1_FAB42FA500CDD883_OFFSET UNITYSDK_OFFSET(0x9374CD0)
#define CLASS_1_D1816B8957201A9F_METHOD_1_FE07EFF807C70F65_OFFSET UNITYSDK_OFFSET(0x93723A0)
#define CLASS_1_D1816B8957201A9F__CCTOR_OFFSET UNITYSDK_OFFSET(0x936FF20)

inline static constexpr unsigned int Class_1_D1816B8957201A9F_TypeDefinitionIndex = 80716;

class Class_1_D1816B8957201A9F : public ::System::Object
{
public:
	static ::MoleMole::Config::ActivityLiveHouseConstValue** StaticGet_Field_1_10()
	{
		return (::MoleMole::Config::ActivityLiveHouseConstValue**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1816B8957201A9F_TypeDefinitionIndex)->GetStaticField(0x2AA30);
	}
	static ::System::Collections::Generic::Dictionary_2<::MoleMole::MusicGame::ELiveHouseSpineEmojiType, ::MoleMole::MusicGame::FLiveHouseSpineEmojiData>** StaticGet_Field_1_12()
	{
		return (::System::Collections::Generic::Dictionary_2<::MoleMole::MusicGame::ELiveHouseSpineEmojiType, ::MoleMole::MusicGame::FLiveHouseSpineEmojiData>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1816B8957201A9F_TypeDefinitionIndex)->GetStaticField(0x2AA38);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::MusicGame::ELiveHouseSpineEmojiType>** StaticGet_Field_1_15()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::MusicGame::ELiveHouseSpineEmojiType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1816B8957201A9F_TypeDefinitionIndex)->GetStaticField(0x2AA40);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_6()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1816B8957201A9F_TypeDefinitionIndex)->GetStaticField(0x2AA48);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::MoleMole::MusicGame::ELiveHouseTrackHeadEmojiType, ::System::Collections::Generic::List_1<::MoleMole::MusicGame::FLiveHouseTrackHeadEmojiData>*>*>** StaticGet_Field_1_11()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::MoleMole::MusicGame::ELiveHouseTrackHeadEmojiType, ::System::Collections::Generic::List_1<::MoleMole::MusicGame::FLiveHouseTrackHeadEmojiData>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1816B8957201A9F_TypeDefinitionIndex)->GetStaticField(0x2AA50);
	}
	static ::System::Double* StaticGet_Field_1_7()
	{
		return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1816B8957201A9F_TypeDefinitionIndex)->GetStaticField(0x9560);
	}
	static ::System::Double* StaticGet_Field_1_8()
	{
		return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1816B8957201A9F_TypeDefinitionIndex)->GetStaticField(0x9568);
	}
	static ::System::Single* StaticGet_Field_1_13()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1816B8957201A9F_TypeDefinitionIndex)->GetStaticField(0x9570);
	}
	static ::System::UInt32* StaticGet_Field_1_14()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1816B8957201A9F_TypeDefinitionIndex)->GetStaticField(0x9574);
	}
	static ::System::Boolean* StaticGet_Field_1_16()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1816B8957201A9F_TypeDefinitionIndex)->GetStaticField(0x9578);
	}
	static ::MoleMole::MusicGame::FLiveHouseSettingData* StaticGet_Field_1_9()
	{
		return (::MoleMole::MusicGame::FLiveHouseSettingData*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1816B8957201A9F_TypeDefinitionIndex)->GetStaticField(0x957C);
	}
	// static const ::System::Int32 Field_1_0 = 0x12D5; // 0x0
	// static const ::System::Int32 Field_1_1 = 0x3; // 0x0
	// static const ::System::Single Field_1_2; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x30; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xFFFFFFD0; // 0x0
	// static const ::System::Single Field_1_5; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_03E375A30E3AFF80(::System::Collections::Generic::Dictionary_2<::MoleMole::MusicGame::ELiveHouseSpineEmojiType, ::MoleMole::MusicGame::FLiveHouseSpineEmojiData>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::MoleMole::MusicGame::ELiveHouseSpineEmojiType, ::MoleMole::MusicGame::FLiveHouseSpineEmojiData>*))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_03E375A30E3AFF80_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_E2030E810407E26B(::Enum_3_193F3C12190537FD a1)
	{
		return ((::System::Boolean(*)(::Enum_3_193F3C12190537FD))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_E2030E810407E26B_OFFSET))(a1);
	}

	static ::System::Double Method_1_AC998F1FC9040BDA(::MoleMole::Note* a1)
	{
		return ((::System::Double(*)(::MoleMole::Note*))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_AC998F1FC9040BDA_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_E2030E810407E26B_1(::Enum_3_462371125D2D5513 a1)
	{
		return ((::System::Boolean(*)(::Enum_3_462371125D2D5513))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_E2030E810407E26B_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_6346628F16B83983(::MoleMole::Config::ActivityLiveHouseConstValue* a1)
	{
		return ((::System::Void(*)(::MoleMole::Config::ActivityLiveHouseConstValue*))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_6346628F16B83983_OFFSET))(a1);
	}

	static ::System::Double Method_1_A4B358CFA248B244()
	{
		return ((::System::Double(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_A4B358CFA248B244_OFFSET))();
	}

	static ::System::Boolean Method_1_C1C5AB73E443B1B4(::Enum_3_462371125D2D5513 a1)
	{
		return ((::System::Boolean(*)(::Enum_3_462371125D2D5513))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_C1C5AB73E443B1B4_OFFSET))(a1);
	}

	static ::System::Double Method_1_AC998F1FC9040BDA_1(::MoleMole::Note* a1)
	{
		return ((::System::Double(*)(::MoleMole::Note*))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_AC998F1FC9040BDA_1_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::System::Int32>* Method_1_A6C44177113A33BB(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_A6C44177113A33BB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7D4F9B568D8BC6AB(::System::Double a1)
	{
		return ((::System::Void(*)(::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_7D4F9B568D8BC6AB_OFFSET))(a1);
	}

	static ::System::Double Method_1_B238D66305ADFDDE(::MoleMole::ActivityLivehouseRhythmBeatmapConfig* a1)
	{
		return ((::System::Double(*)(::MoleMole::ActivityLivehouseRhythmBeatmapConfig*))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_B238D66305ADFDDE_OFFSET))(a1);
	}

	static ::System::Double Method_1_431CEE840B9AD9EF(::MoleMole::Note* a1)
	{
		return ((::System::Double(*)(::MoleMole::Note*))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_431CEE840B9AD9EF_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_3D98DB7DD083F480(::Class_3_D11B47081CD802C8* a1)
	{
		return ((::System::Boolean(*)(::Class_3_D11B47081CD802C8*))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_3D98DB7DD083F480_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_5B484627A8A06DD9(::Enum_3_462371125D2D5513 a1)
	{
		return ((::System::Boolean(*)(::Enum_3_462371125D2D5513))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_5B484627A8A06DD9_OFFSET))(a1);
	}

	static ::System::Double Method_1_A4B358CFA248B244_1()
	{
		return ((::System::Double(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_A4B358CFA248B244_1_OFFSET))();
	}

	static ::System::Void Method_1_D954970F3588635B(::MoleMole::MusicGame::FLiveHouseSettingData a1)
	{
		return ((::System::Void(*)(::MoleMole::MusicGame::FLiveHouseSettingData))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_D954970F3588635B_OFFSET))(a1);
	}

	static ::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_F730968E2645E14B_OFFSET))();
	}

	static ::MoleMole::MusicGame::ELiveHouseTrackHeadEmojiType Method_1_340963F02BF514CA(::Struct_2_FFBC003CFBB61A74 a1)
	{
		return ((::MoleMole::MusicGame::ELiveHouseTrackHeadEmojiType(*)(::Struct_2_FFBC003CFBB61A74))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_340963F02BF514CA_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_AE9195AF42F185CC(::Class_0_16E4307DCC419505_158*& a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_158*&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_AE9195AF42F185CC_OFFSET))(a1, a2);
	}

	static ::MoleMole::MusicGame::ELiveHouseSpineEmojiType Method_1_67539326A6504A6B(::Struct_2_FFBC003CFBB61A74 a1)
	{
		return ((::MoleMole::MusicGame::ELiveHouseSpineEmojiType(*)(::Struct_2_FFBC003CFBB61A74))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_67539326A6504A6B_OFFSET))(a1);
	}

	static ::System::Double Method_1_AA754EA59735BAD9(::MoleMole::Note* a1)
	{
		return ((::System::Double(*)(::MoleMole::Note*))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_AA754EA59735BAD9_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_E2030E810407E26B_2(::Enum_3_462371125D2D5513 a1)
	{
		return ((::System::Boolean(*)(::Enum_3_462371125D2D5513))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_E2030E810407E26B_2_OFFSET))(a1);
	}

	static ::System::Double Method_1_080936BC105064D6(::MoleMole::Note* a1, ::System::Double a2)
	{
		return ((::System::Double(*)(::MoleMole::Note*, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_080936BC105064D6_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_C1C5AB73E443B1B4_1(::Enum_3_462371125D2D5513 a1)
	{
		return ((::System::Boolean(*)(::Enum_3_462371125D2D5513))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_C1C5AB73E443B1B4_1_OFFSET))(a1);
	}

	static ::Enum_3_70248E32F82D4889_1 Method_1_7A3720011442FAF3(::Enum_3_193F3C12190537FD a1)
	{
		return ((::Enum_3_70248E32F82D4889_1(*)(::Enum_3_193F3C12190537FD))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_7A3720011442FAF3_OFFSET))(a1);
	}

	static ::MoleMole::MusicGame::ELiveHouseSpineEmojiType Method_1_B1B131E061549818(::System::String* a1)
	{
		return ((::MoleMole::MusicGame::ELiveHouseSpineEmojiType(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_B1B131E061549818_OFFSET))(a1);
	}

	static ::Enum_3_193F3C12190537FD Method_1_7A3720011442FAF3_1(::Enum_3_462371125D2D5513 a1)
	{
		return ((::Enum_3_193F3C12190537FD(*)(::Enum_3_462371125D2D5513))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_7A3720011442FAF3_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_7B634279EA4AF444(::Class_4_EDAF922741458586* a1, ::Enum_3_C3C384691A090251 a2)
	{
		return ((::System::Boolean(*)(::Class_4_EDAF922741458586*, ::Enum_3_C3C384691A090251))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_7B634279EA4AF444_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_E554CEBF01F65235(::MoleMole::Note* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Note*))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_E554CEBF01F65235_OFFSET))(a1);
	}

	static ::Enum_3_C3C384691A090251 Method_1_022E73465569B5C3(::MoleMole::InputActionEvent a1)
	{
		return ((::Enum_3_C3C384691A090251(*)(::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_022E73465569B5C3_OFFSET))(a1);
	}

	static ::Enum_3_0C5EBCCE1D54A049 Method_1_2AB16C1FA4EAF6A2(::System::Int32 a1)
	{
		return ((::Enum_3_0C5EBCCE1D54A049(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_2AB16C1FA4EAF6A2_OFFSET))(a1);
	}

	static ::Class_1_D43702405C026A47* Method_1_18712DB3B1B723E8()
	{
		return ((::Class_1_D43702405C026A47*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_18712DB3B1B723E8_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::MoleMole::MusicGame::ELiveHouseTrackHeadEmojiType, ::System::Collections::Generic::List_1<::MoleMole::MusicGame::FLiveHouseTrackHeadEmojiData>*>*>* Method_1_9B207DC6E5A6D4EB()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::MoleMole::MusicGame::ELiveHouseTrackHeadEmojiType, ::System::Collections::Generic::List_1<::MoleMole::MusicGame::FLiveHouseTrackHeadEmojiData>*>*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_9B207DC6E5A6D4EB_OFFSET))();
	}

	static ::Struct_2_081A2682696AA10B Method_1_FE07EFF807C70F65(::Class_3_CDD7C63403A61D90* a1, ::Enum_3_E02FB5DE7C8D1AE7 a2)
	{
		return ((::Struct_2_081A2682696AA10B(*)(::Class_3_CDD7C63403A61D90*, ::Enum_3_E02FB5DE7C8D1AE7))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_FE07EFF807C70F65_OFFSET))(a1, a2);
	}

	static ::System::Double Method_1_295A574A3B3BE00D(::MoleMole::Note* a1)
	{
		return ((::System::Double(*)(::MoleMole::Note*))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_295A574A3B3BE00D_OFFSET))(a1);
	}

	static ::System::Void Method_1_4A2D31B96D58BF84(::System::Collections::Generic::Dictionary_2<::MoleMole::MusicGame::ELiveHouseSpineEmojiType, ::MoleMole::MusicGame::FLiveHouseSpineEmojiData>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::MoleMole::MusicGame::ELiveHouseSpineEmojiType, ::MoleMole::MusicGame::FLiveHouseSpineEmojiData>*))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_4A2D31B96D58BF84_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_5A0ABD813A2B8D81(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_5A0ABD813A2B8D81_OFFSET))(a1);
	}

	static ::System::Double Method_1_744DD0CF02061671(::MoleMole::Note* a1)
	{
		return ((::System::Double(*)(::MoleMole::Note*))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_744DD0CF02061671_OFFSET))(a1);
	}

	static ::System::Void Method_1_55A6AB128FB8E363(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::MoleMole::MusicGame::ELiveHouseTrackHeadEmojiType, ::System::Collections::Generic::List_1<::MoleMole::MusicGame::FLiveHouseTrackHeadEmojiData>*>*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::MoleMole::MusicGame::ELiveHouseTrackHeadEmojiType, ::System::Collections::Generic::List_1<::MoleMole::MusicGame::FLiveHouseTrackHeadEmojiData>*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_55A6AB128FB8E363_OFFSET))(a1);
	}

	static ::System::Single Method_1_DF289035BEA563C0(::MoleMole::MusicGame::ELiveHouseSpineEmojiType a1)
	{
		return ((::System::Single(*)(::MoleMole::MusicGame::ELiveHouseSpineEmojiType))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_DF289035BEA563C0_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_09A39B89545FE101()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_09A39B89545FE101_OFFSET))();
	}

	static ::System::Boolean Method_1_57A8E11FECF10345(::Struct_2_B4A88BE55E27A7C3 a1, ::Struct_2_B4A88BE55E27A7C3 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_B4A88BE55E27A7C3, ::Struct_2_B4A88BE55E27A7C3))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_57A8E11FECF10345_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_04F7CE19528E4FE5(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_04F7CE19528E4FE5_OFFSET))(a1);
	}

	static ::System::String* Method_1_2762DA0C58DE2FB7(::MoleMole::MusicGame::ELiveHouseSpineEmojiType a1)
	{
		return ((::System::String*(*)(::MoleMole::MusicGame::ELiveHouseSpineEmojiType))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_2762DA0C58DE2FB7_OFFSET))(a1);
	}

	static ::Foundation::AssetPath Method_1_DD55BBAE50946E29(::Class_4_EDAF922741458586* a1)
	{
		return ((::Foundation::AssetPath(*)(::Class_4_EDAF922741458586*))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_DD55BBAE50946E29_OFFSET))(a1);
	}

	static ::Struct_2_FFBC003CFBB61A74 Method_1_16A1F5578E20CC62(::Class_3_D11B47081CD802C8* a1, ::Struct_2_4C8453486C91E3A1_4 a2)
	{
		return ((::Struct_2_FFBC003CFBB61A74(*)(::Class_3_D11B47081CD802C8*, ::Struct_2_4C8453486C91E3A1_4))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_16A1F5578E20CC62_OFFSET))(a1, a2);
	}

	static ::System::Double Method_1_431CEE840B9AD9EF_1(::MoleMole::Note* a1)
	{
		return ((::System::Double(*)(::MoleMole::Note*))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_431CEE840B9AD9EF_1_OFFSET))(a1);
	}

	static ::MoleMole::Config::ActivityLiveHouseConstValue* Method_1_8A3768DAE2FA37B5()
	{
		return ((::MoleMole::Config::ActivityLiveHouseConstValue*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_8A3768DAE2FA37B5_OFFSET))();
	}

	static ::System::Boolean Method_1_C1C5AB73E443B1B4_2(::Enum_3_462371125D2D5513 a1)
	{
		return ((::System::Boolean(*)(::Enum_3_462371125D2D5513))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_C1C5AB73E443B1B4_2_OFFSET))(a1);
	}

	static ::System::Double Method_1_295A574A3B3BE00D_1(::MoleMole::Note* a1)
	{
		return ((::System::Double(*)(::MoleMole::Note*))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_295A574A3B3BE00D_1_OFFSET))(a1);
	}

	static ::System::Collections::Generic::Dictionary_2<::MoleMole::MusicGame::ELiveHouseTrackHeadEmojiType, ::System::Collections::Generic::List_1<::MoleMole::MusicGame::FLiveHouseTrackHeadEmojiData>*>* Method_1_C4D836FAB9875D44(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::MoleMole::MusicGame::ELiveHouseTrackHeadEmojiType, ::System::Collections::Generic::List_1<::MoleMole::MusicGame::FLiveHouseTrackHeadEmojiData>*>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_C4D836FAB9875D44_OFFSET))(a1);
	}

	static ::System::Single Method_1_3150507749BCEAEC()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_3150507749BCEAEC_OFFSET))();
	}

	static ::System::Double Method_1_431CEE840B9AD9EF_2(::MoleMole::Note* a1)
	{
		return ((::System::Double(*)(::MoleMole::Note*))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_431CEE840B9AD9EF_2_OFFSET))(a1);
	}

	static ::System::Double Method_1_231B9F7B8693F245(::MoleMole::Note* a1, ::System::Double a2)
	{
		return ((::System::Double(*)(::MoleMole::Note*, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_231B9F7B8693F245_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::MusicGame::FLiveHouseTrackHeadEmojiData>* Method_1_C21DC7486A01DA55(::System::Int32 a1, ::MoleMole::MusicGame::ELiveHouseTrackHeadEmojiType a2)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::MusicGame::FLiveHouseTrackHeadEmojiData>*(*)(::System::Int32, ::MoleMole::MusicGame::ELiveHouseTrackHeadEmojiType))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_C21DC7486A01DA55_OFFSET))(a1, a2);
	}

	static ::Struct_2_FFBC003CFBB61A74 Method_1_B2BFA56222961CF0(::Class_3_D11B47081CD802C8* a1)
	{
		return ((::Struct_2_FFBC003CFBB61A74(*)(::Class_3_D11B47081CD802C8*))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_B2BFA56222961CF0_OFFSET))(a1);
	}

	static ::System::Void Method_1_AA2C5C495E0E542E(::MoleMole::UIBaseController* a1, ::Enum_3_0C5EBCCE1D54A049 a2)
	{
		return ((::System::Void(*)(::MoleMole::UIBaseController*, ::Enum_3_0C5EBCCE1D54A049))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_AA2C5C495E0E542E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C293B8F3ADB851B9()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_C293B8F3ADB851B9_OFFSET))();
	}

	static ::Struct_2_FFBC003CFBB61A74 Method_1_B2BFA56222961CF0_1(::Class_3_D11B47081CD802C8* a1)
	{
		return ((::Struct_2_FFBC003CFBB61A74(*)(::Class_3_D11B47081CD802C8*))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_B2BFA56222961CF0_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_C1C5AB73E443B1B4_3(::Enum_3_193F3C12190537FD a1)
	{
		return ((::System::Boolean(*)(::Enum_3_193F3C12190537FD))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_C1C5AB73E443B1B4_3_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_7F8ED38F9AEF6911()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_7F8ED38F9AEF6911_OFFSET))();
	}

	static ::System::Double Method_1_080936BC105064D6_1(::MoleMole::Note* a1, ::System::Double a2)
	{
		return ((::System::Double(*)(::MoleMole::Note*, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_080936BC105064D6_1_OFFSET))(a1, a2);
	}

	static ::MoleMole::MusicGame::FLiveHouseSettingData Method_1_F2256D3B7C7C8994()
	{
		return ((::MoleMole::MusicGame::FLiveHouseSettingData(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_F2256D3B7C7C8994_OFFSET))();
	}

	static ::System::Boolean Method_1_C1C5AB73E443B1B4_4(::Enum_3_462371125D2D5513 a1)
	{
		return ((::System::Boolean(*)(::Enum_3_462371125D2D5513))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_C1C5AB73E443B1B4_4_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_E625AB0285C2BCC8(::Struct_2_FFBC003CFBB61A74 a1)
	{
		return ((::System::Boolean(*)(::Struct_2_FFBC003CFBB61A74))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_E625AB0285C2BCC8_OFFSET))(a1);
	}

	static ::System::Collections::Generic::Dictionary_2<::MoleMole::MusicGame::ELiveHouseSpineEmojiType, ::MoleMole::MusicGame::FLiveHouseSpineEmojiData>* Method_1_1BA49AE473484BAE()
	{
		return ((::System::Collections::Generic::Dictionary_2<::MoleMole::MusicGame::ELiveHouseSpineEmojiType, ::MoleMole::MusicGame::FLiveHouseSpineEmojiData>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_1BA49AE473484BAE_OFFSET))();
	}

	static ::System::Double Method_1_AC998F1FC9040BDA_2(::MoleMole::Note* a1)
	{
		return ((::System::Double(*)(::MoleMole::Note*))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_AC998F1FC9040BDA_2_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_4E2BCE3C8705DF5E()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_4E2BCE3C8705DF5E_OFFSET))();
	}

	static ::System::Void Method_1_055E3BF644BB741B(::System::Single a1)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_055E3BF644BB741B_OFFSET))(a1);
	}

	static ::System::Void Method_1_7D4F9B568D8BC6AB_1(::System::Double a1)
	{
		return ((::System::Void(*)(::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_7D4F9B568D8BC6AB_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_C1C5AB73E443B1B4_5(::Enum_3_193F3C12190537FD a1)
	{
		return ((::System::Boolean(*)(::Enum_3_193F3C12190537FD))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_C1C5AB73E443B1B4_5_OFFSET))(a1);
	}

	static ::Struct_2_FFBC003CFBB61A74 Method_1_FAB42FA500CDD883(::Class_3_D11B47081CD802C8* a1, ::Enum_3_193F3C12190537FD a2, ::Enum_3_462371125D2D5513 a3, ::Enum_3_E02FB5DE7C8D1AE7 a4)
	{
		return ((::Struct_2_FFBC003CFBB61A74(*)(::Class_3_D11B47081CD802C8*, ::Enum_3_193F3C12190537FD, ::Enum_3_462371125D2D5513, ::Enum_3_E02FB5DE7C8D1AE7))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_FAB42FA500CDD883_OFFSET))(a1, a2, a3, a4);
	}

	static ::Struct_2_FFBC003CFBB61A74 Method_1_B2BFA56222961CF0_2(::Class_3_D11B47081CD802C8* a1)
	{
		return ((::Struct_2_FFBC003CFBB61A74(*)(::Class_3_D11B47081CD802C8*))((::PBYTE)hIl2Cpp + CLASS_1_D1816B8957201A9F_METHOD_1_B2BFA56222961CF0_2_OFFSET))(a1);
	}
};
