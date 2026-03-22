#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_5560EE9F1F33A604.h"
#include "unitysdk/Class_3_1988BABB1B1A4043_Struct_2_04D90A334135A87C_1.h"
#include "unitysdk/Class_3_1988BABB1B1A4043_Struct_2_04E70A334141E598_9.h"
#include "unitysdk/Class_3_1988BABB1B1A4043_Struct_2_E71A4E719BBCD0AD_5.h"
#include "unitysdk/Enum_3_7609C87F8335DE37.h"
#include "unitysdk/Enum_3_B5351BFCBBBCD1DB.h"
#include "unitysdk/Enum_3_EFEF7CE7B8D41309.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/Share/GridDir.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_0AEBFEBDADDA07AC;
class Class_1_86A85CB5038B7046_Class_3_8A15F387AB2587C6;
class Class_1_91C8BEDC157826A6;
class Class_1_BB6D76999072F2AC;
class Class_4_07210A4295CAA0F3;
class Class_4_1B550CDA2463DC9D_12;
class Class_4_1B550CDA2463DC9D_3;
class Class_4_B99AA5AE371451AA;
class Class_5_2B047B81D949C4E6;
class Class_5_AF65C3A968E836D2;
class Class_5_EC49DC305E06FE39;
class Class_5_F60EFCE4D76BF533;
class Class_5_F638703ACD0FA08E;
namespace MoleMole { class TextureSheetData; }
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_1988BABB1B1A4043_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x91B8E90)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_012442DC66F6C104_OFFSET UNITYSDK_OFFSET(0x91BE0B0)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_028D08135C92B92C_OFFSET UNITYSDK_OFFSET(0x7AE9320)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_0915110004B2F0C9_OFFSET UNITYSDK_OFFSET(0x7AE4880)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_09F8F0CE9265A9ED_OFFSET UNITYSDK_OFFSET(0x7AEA050)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_0DF48D0CD6571641_OFFSET UNITYSDK_OFFSET(0x91BC340)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_131887F75E35FB38_OFFSET UNITYSDK_OFFSET(0x7AE47F0)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_178FE28C0151E3F3_OFFSET UNITYSDK_OFFSET(0x7AE9F30)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_1886FC5ED64EDA15_OFFSET UNITYSDK_OFFSET(0x91BBBC0)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_1A3EE9BB2D509DC7_OFFSET UNITYSDK_OFFSET(0x7AE82F0)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_1ABFC545181D7029_OFFSET UNITYSDK_OFFSET(0x91BADB0)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_1FDF946A4561D3B2_OFFSET UNITYSDK_OFFSET(0x91BDD60)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_265EBE125CFA6795_OFFSET UNITYSDK_OFFSET(0x91BD530)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_2685B6183E614529_1_OFFSET UNITYSDK_OFFSET(0x91BD340)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x91BB8B0)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_298654DAF298212C_OFFSET UNITYSDK_OFFSET(0x91BC1D0)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_2C369CDAD8E6625E_OFFSET UNITYSDK_OFFSET(0x91BA700)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_2D9AFE84AA33C605_OFFSET UNITYSDK_OFFSET(0x7AE8610)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_2F6A8208B0155A87_OFFSET UNITYSDK_OFFSET(0x7AEA5F0)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_34658B0D57648CD1_OFFSET UNITYSDK_OFFSET(0x91B9750)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_39468678C9BF10F3_OFFSET UNITYSDK_OFFSET(0x91BEF50)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_3A53EFE5A70356ED_OFFSET UNITYSDK_OFFSET(0x91BC270)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_438A2B32EE083095_OFFSET UNITYSDK_OFFSET(0x7AEA130)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_45086CE8B9BC1BC1_OFFSET UNITYSDK_OFFSET(0x7AE9410)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_458C38E2122E80C1_OFFSET UNITYSDK_OFFSET(0x7AE5520)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_4602E165BEBC3FA0_OFFSET UNITYSDK_OFFSET(0x91BAA80)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_49BD1757AE1929C3_OFFSET UNITYSDK_OFFSET(0x7AE6410)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_4CB35AC1EEF323BF_OFFSET UNITYSDK_OFFSET(0x91BBEC0)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_4CE724C788E99385_OFFSET UNITYSDK_OFFSET(0x91BE9F0)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_522DF5E02B341D3A_OFFSET UNITYSDK_OFFSET(0x7AEB4F0)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_5507D41BC502D78A_OFFSET UNITYSDK_OFFSET(0x91BA150)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_55FBF17A3D9E0C6B_OFFSET UNITYSDK_OFFSET(0x91BD8A0)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_56DC205179D3605E_OFFSET UNITYSDK_OFFSET(0x91BB920)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_59D9A4A3B6A88DC3_OFFSET UNITYSDK_OFFSET(0x91BA7E0)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_5B84EE47D139291E_OFFSET UNITYSDK_OFFSET(0x7AE6E90)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_5EDFBED4ADF7E010_1_OFFSET UNITYSDK_OFFSET(0x7AE96D0)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_5EDFBED4ADF7E010_OFFSET UNITYSDK_OFFSET(0x91BD3B0)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_61A6EC8706DE09C0_1_OFFSET UNITYSDK_OFFSET(0x7AEB500)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_61A6EC8706DE09C0_OFFSET UNITYSDK_OFFSET(0x7AE9DA0)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_620FC84D969405E9_OFFSET UNITYSDK_OFFSET(0x7AE71C0)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_624D6688244FE805_OFFSET UNITYSDK_OFFSET(0x7AE7F50)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_62AC8464DDE460C0_OFFSET UNITYSDK_OFFSET(0x91BCCD0)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_6DD0A462BC3211D3_OFFSET UNITYSDK_OFFSET(0x7AE89D0)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_6E1A1594402A8F68_OFFSET UNITYSDK_OFFSET(0x91BD440)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_701537ED789B26E8_OFFSET UNITYSDK_OFFSET(0x91BEB90)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_79508C356DC84A7B_OFFSET UNITYSDK_OFFSET(0x7AE59B0)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_809D71F963054FE1_OFFSET UNITYSDK_OFFSET(0x7AEB350)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_82353F5C3C999AF3_OFFSET UNITYSDK_OFFSET(0x7AE72A0)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_89D1A6BA67A57B89_OFFSET UNITYSDK_OFFSET(0x7AE7DC0)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_8CE32FC8A0F92C1E_OFFSET UNITYSDK_OFFSET(0x7AEB3C0)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_8FCB3EB540FCB750_OFFSET UNITYSDK_OFFSET(0x7AE8D70)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_944725D8BEE125D5_OFFSET UNITYSDK_OFFSET(0x7AEB330)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_949A72507D1C22EB_OFFSET UNITYSDK_OFFSET(0x7AE9C80)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_95A6CB0D6B89CF2C_OFFSET UNITYSDK_OFFSET(0x7AE9420)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_9D0417A7B5BA1EBE_OFFSET UNITYSDK_OFFSET(0x7AE5A90)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_9E6C9D9460C5C4E3_OFFSET UNITYSDK_OFFSET(0x7AE8B70)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_A11144519902A27F_1_OFFSET UNITYSDK_OFFSET(0x7AEA7F0)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_A11144519902A27F_OFFSET UNITYSDK_OFFSET(0x7AE7300)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_AF081070273CE162_OFFSET UNITYSDK_OFFSET(0x7AE5500)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_B31B8CD4D2B64C0B_OFFSET UNITYSDK_OFFSET(0x91BF080)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x7AEA860)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_BFD1B8A4ECD2B060_OFFSET UNITYSDK_OFFSET(0x7AE9760)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_C0D10D5803A1EBFF_OFFSET UNITYSDK_OFFSET(0x7AEA960)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_C64E937FD18B1C93_OFFSET UNITYSDK_OFFSET(0x91BF2F0)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_C9D5EACD1CD9A169_OFFSET UNITYSDK_OFFSET(0x7AE9F90)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x7AE5040)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x91B9FF0)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_CAC18F53CC6E2A84_OFFSET UNITYSDK_OFFSET(0x7AE6640)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_CC7845FF35CBFA9F_OFFSET UNITYSDK_OFFSET(0x7AE64C0)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_D2244A495DCEA747_OFFSET UNITYSDK_OFFSET(0x7AE4690)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_D25AEC702B49D0A1_OFFSET UNITYSDK_OFFSET(0x91BE8F0)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_D279183863085EC4_OFFSET UNITYSDK_OFFSET(0x7AE4F70)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_D2AE29786A9A52EE_OFFSET UNITYSDK_OFFSET(0x7AE50A0)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_D3B3973DB5E3F08A_OFFSET UNITYSDK_OFFSET(0x7AE7C50)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_D8A2F3592E683073_OFFSET UNITYSDK_OFFSET(0x7AE70B0)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_DB636782A1BCFD12_OFFSET UNITYSDK_OFFSET(0x7AE84C0)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_DDBFFB4BA554A018_OFFSET UNITYSDK_OFFSET(0x7AE7520)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_DF8F63F5B6ABFB27_OFFSET UNITYSDK_OFFSET(0x7AEA8D0)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_E0EE30FBE6FAA731_OFFSET UNITYSDK_OFFSET(0x91BB780)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_E82E8EB2F4200B5B_OFFSET UNITYSDK_OFFSET(0x7AEA6D0)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_ECADD6570AA812A9_OFFSET UNITYSDK_OFFSET(0x7AE6C60)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_ECC293A7A310E872_OFFSET UNITYSDK_OFFSET(0x7AE76D0)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_EE16BDB199583236_OFFSET UNITYSDK_OFFSET(0x7AE5900)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_F18A32956D3A25E2_OFFSET UNITYSDK_OFFSET(0x7AEAB90)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_F43869F6207199BE_OFFSET UNITYSDK_OFFSET(0x91BC980)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_F459C84B2D9A2CE1_OFFSET UNITYSDK_OFFSET(0x91BDF00)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_FABC9D43ED6552D8_OFFSET UNITYSDK_OFFSET(0x7AE7370)
#define CLASS_3_1988BABB1B1A4043_METHOD_3_FF1EDDBE34FDC308_OFFSET UNITYSDK_OFFSET(0x7AE7920)
#define CLASS_3_1988BABB1B1A4043_START_OFFSET UNITYSDK_OFFSET(0x91B8C00)
#define CLASS_3_1988BABB1B1A4043__CTOR_OFFSET UNITYSDK_OFFSET(0x91BA0A0)

inline static constexpr unsigned int Class_3_1988BABB1B1A4043_TypeDefinitionIndex = 78355;

class Class_3_1988BABB1B1A4043 : public ::Class_2_5560EE9F1F33A604
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x40
	::Nap::NapECS::EcsFilter* Field_3_5; // 0x48
	::System::Action_2<::Class_5_F60EFCE4D76BF533*, ::Class_5_F638703ACD0FA08E*>* Field_3_7; // 0x50
	::Nap::NapECS::EcsFilter* Field_3_4; // 0x58
	::Nap::NapECS::EcsFilter* Field_3_2; // 0x60
	::Nap::NapECS::EcsFilter* Field_3_1; // 0x68
	::Nap::NapECS::EcsFilter* Field_3_3; // 0x70
	::MoleMole::HollowChessboard::HollowCell Field_3_6; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_START_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Method_3_34658B0D57648CD1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_34658B0D57648CD1_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_5507D41BC502D78A(::Class_5_AF65C3A968E836D2* a1, ::MoleMole::HollowChessboard::HollowCell a2, ::System::Boolean a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::Class_5_AF65C3A968E836D2*, ::MoleMole::HollowChessboard::HollowCell, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_5507D41BC502D78A_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_59D9A4A3B6A88DC3(::System::Int32 a1, ::Class_5_2B047B81D949C4E6* a2)
	{
		return ((::System::Void(*)(::System::Int32, ::Class_5_2B047B81D949C4E6*))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_59D9A4A3B6A88DC3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_4602E165BEBC3FA0(::Class_5_2B047B81D949C4E6* a1, ::Class_5_F638703ACD0FA08E* a2)
	{
		return ((::System::Void(*)(::Class_5_2B047B81D949C4E6*, ::Class_5_F638703ACD0FA08E*))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_4602E165BEBC3FA0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_1ABFC545181D7029(::Class_1_BB6D76999072F2AC* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_1_BB6D76999072F2AC*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_1ABFC545181D7029_OFFSET))(a1, a2);
	}

	::System::Void Method_3_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_2685B6183E614529_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_56DC205179D3605E(::Class_5_2B047B81D949C4E6* a1, ::Class_5_EC49DC305E06FE39* a2)
	{
		return ((::System::Void(*)(::Class_5_2B047B81D949C4E6*, ::Class_5_EC49DC305E06FE39*))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_56DC205179D3605E_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_3_1886FC5ED64EDA15(::Class_5_2B047B81D949C4E6* a1, ::System::Int32 a2, ::System::UInt64 a3)
	{
		return ((::System::Int32(*)(::Class_5_2B047B81D949C4E6*, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_1886FC5ED64EDA15_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_4CB35AC1EEF323BF(::Class_5_2B047B81D949C4E6* a1, ::Class_4_B99AA5AE371451AA* a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Action* a7, ::Enum_3_EFEF7CE7B8D41309 a8)
	{
		return ((::System::Void(*)(::Class_5_2B047B81D949C4E6*, ::Class_4_B99AA5AE371451AA*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Action*, ::Enum_3_EFEF7CE7B8D41309))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_4CB35AC1EEF323BF_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::Void Method_3_3A53EFE5A70356ED(::MoleMole::HollowChessboard::HollowCell a1, ::MoleMole::HollowChessboard::HollowChessboardUID a2, ::System::UInt32 a3, ::System::UInt32 a4, ::Share::GridDir a5)
	{
		return ((::System::Void(*)(::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowChessboardUID, ::System::UInt32, ::System::UInt32, ::Share::GridDir))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_3A53EFE5A70356ED_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_E0EE30FBE6FAA731(::Class_5_2B047B81D949C4E6* a1, ::Class_4_B99AA5AE371451AA* a2, ::Class_1_BB6D76999072F2AC* a3, ::System::Action* a4, ::Class_3_1988BABB1B1A4043_Struct_2_E71A4E719BBCD0AD_5& a5)
	{
		return ((::System::Void(*)(::Class_5_2B047B81D949C4E6*, ::Class_4_B99AA5AE371451AA*, ::Class_1_BB6D76999072F2AC*, ::System::Action*, ::Class_3_1988BABB1B1A4043_Struct_2_E71A4E719BBCD0AD_5&))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_E0EE30FBE6FAA731_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_298654DAF298212C(::Class_5_2B047B81D949C4E6* a1, ::Class_4_B99AA5AE371451AA* a2, ::System::Int32 a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::Class_5_2B047B81D949C4E6*, ::Class_4_B99AA5AE371451AA*, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_298654DAF298212C_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_3_0DF48D0CD6571641(::Class_5_2B047B81D949C4E6* a1, ::Class_4_B99AA5AE371451AA* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Action* a5, ::System::Boolean a6)
	{
		return ((::System::Boolean(*)(::Class_5_2B047B81D949C4E6*, ::Class_4_B99AA5AE371451AA*, ::System::Int32, ::System::Int32, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_0DF48D0CD6571641_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_F43869F6207199BE(::Class_5_2B047B81D949C4E6* a1, ::Class_4_B99AA5AE371451AA* a2)
	{
		return ((::System::Void(*)(::Class_5_2B047B81D949C4E6*, ::Class_4_B99AA5AE371451AA*))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_F43869F6207199BE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_62AC8464DDE460C0(::Class_5_2B047B81D949C4E6* a1, ::Class_4_B99AA5AE371451AA* a2, ::System::Boolean a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::Class_5_2B047B81D949C4E6*, ::Class_4_B99AA5AE371451AA*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_62AC8464DDE460C0_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_3_2685B6183E614529_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_2685B6183E614529_1_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_5EDFBED4ADF7E010(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Boolean(*)(::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_5EDFBED4ADF7E010_OFFSET))(a1);
	}

	static ::System::Void Method_3_2C369CDAD8E6625E(::Class_5_AF65C3A968E836D2* a1, ::MoleMole::HollowChessboard::HollowCell a2, ::System::String* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::Class_5_AF65C3A968E836D2*, ::MoleMole::HollowChessboard::HollowCell, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_2C369CDAD8E6625E_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_3_265EBE125CFA6795(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_265EBE125CFA6795_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_55FBF17A3D9E0C6B(::MoleMole::HollowChessboard::HollowChessboardUID a1, ::MoleMole::HollowChessboard::HollowCell a2, ::Class_1_0AEBFEBDADDA07AC* a3, ::MoleMole::HollowChessboard::HollowEntity* a4)
	{
		return ((::System::Void(*)(::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowCell, ::Class_1_0AEBFEBDADDA07AC*, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_55FBF17A3D9E0C6B_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_1FDF946A4561D3B2(::Class_5_EC49DC305E06FE39* a1, ::Class_4_1B550CDA2463DC9D_12* a2)
	{
		return ((::System::Void(*)(::Class_5_EC49DC305E06FE39*, ::Class_4_1B550CDA2463DC9D_12*))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_1FDF946A4561D3B2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_F459C84B2D9A2CE1(::Class_5_2B047B81D949C4E6* a1, ::Class_4_B99AA5AE371451AA* a2)
	{
		return ((::System::Void(*)(::Class_5_2B047B81D949C4E6*, ::Class_4_B99AA5AE371451AA*))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_F459C84B2D9A2CE1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_D25AEC702B49D0A1(::MoleMole::HollowChessboard::HollowChessboardUID a1, ::MoleMole::HollowChessboard::HollowCell a2, ::Class_1_0AEBFEBDADDA07AC* a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowCell, ::Class_1_0AEBFEBDADDA07AC*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_D25AEC702B49D0A1_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_4CE724C788E99385(::Class_5_2B047B81D949C4E6* a1, ::Class_4_B99AA5AE371451AA* a2, ::Class_1_91C8BEDC157826A6* a3, ::System::Action* a4, ::MoleMole::HollowChessboard::HollowCell a5, ::Class_3_1988BABB1B1A4043_Struct_2_04E70A334141E598_9& a6)
	{
		return ((::System::Void(*)(::Class_5_2B047B81D949C4E6*, ::Class_4_B99AA5AE371451AA*, ::Class_1_91C8BEDC157826A6*, ::System::Action*, ::MoleMole::HollowChessboard::HollowCell, ::Class_3_1988BABB1B1A4043_Struct_2_04E70A334141E598_9&))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_4CE724C788E99385_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_3_701537ED789B26E8(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_701537ED789B26E8_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_39468678C9BF10F3(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_39468678C9BF10F3_OFFSET))(a1);
	}

	static ::System::Void Method_3_012442DC66F6C104(::Class_5_2B047B81D949C4E6* a1, ::Class_4_B99AA5AE371451AA* a2)
	{
		return ((::System::Void(*)(::Class_5_2B047B81D949C4E6*, ::Class_4_B99AA5AE371451AA*))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_012442DC66F6C104_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B31B8CD4D2B64C0B(::MoleMole::HollowChessboard::HollowCell a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Action* a6, ::Class_1_86A85CB5038B7046_Class_3_8A15F387AB2587C6* a7)
	{
		return ((::System::Void(*)(::MoleMole::HollowChessboard::HollowCell, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Action*, ::Class_1_86A85CB5038B7046_Class_3_8A15F387AB2587C6*))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_B31B8CD4D2B64C0B_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::Enum_3_EFEF7CE7B8D41309 Method_3_6E1A1594402A8F68(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::Enum_3_EFEF7CE7B8D41309(*)(::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_6E1A1594402A8F68_OFFSET))(a1);
	}

	static ::System::Void Method_3_C64E937FD18B1C93(::Class_5_2B047B81D949C4E6* a1, ::Class_5_EC49DC305E06FE39* a2, ::Class_4_1B550CDA2463DC9D_3* a3)
	{
		return ((::System::Void(*)(::Class_5_2B047B81D949C4E6*, ::Class_5_EC49DC305E06FE39*, ::Class_4_1B550CDA2463DC9D_3*))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_C64E937FD18B1C93_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_D2244A495DCEA747(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_D2244A495DCEA747_OFFSET))(a1);
	}

	static ::System::Void Method_3_131887F75E35FB38(::Class_5_2B047B81D949C4E6* a1)
	{
		return ((::System::Void(*)(::Class_5_2B047B81D949C4E6*))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_131887F75E35FB38_OFFSET))(a1);
	}

	::System::Void Method_3_0915110004B2F0C9(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_0915110004B2F0C9_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_D2AE29786A9A52EE(::Class_5_F60EFCE4D76BF533* a1, ::Class_5_F638703ACD0FA08E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_F60EFCE4D76BF533*, ::Class_5_F638703ACD0FA08E*))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_D2AE29786A9A52EE_OFFSET))(this, a1, a2);
	}

	::MoleMole::HollowChessboard::HollowCell Method_3_AF081070273CE162()
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_AF081070273CE162_OFFSET))(this);
	}

	static ::System::Void Method_3_458C38E2122E80C1(::Class_5_2B047B81D949C4E6* a1)
	{
		return ((::System::Void(*)(::Class_5_2B047B81D949C4E6*))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_458C38E2122E80C1_OFFSET))(a1);
	}

	static ::System::ValueTuple_2<::System::Boolean, ::System::String*> Method_3_EE16BDB199583236(::System::String* a1)
	{
		return ((::System::ValueTuple_2<::System::Boolean, ::System::String*>(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_EE16BDB199583236_OFFSET))(a1);
	}

	static ::System::Void Method_3_79508C356DC84A7B(::Class_5_2B047B81D949C4E6* a1, ::Class_4_B99AA5AE371451AA* a2, ::System::String* a3, ::System::Action* a4, ::System::Boolean a5, ::System::Boolean a6, ::Class_1_86A85CB5038B7046_Class_3_8A15F387AB2587C6* a7)
	{
		return ((::System::Void(*)(::Class_5_2B047B81D949C4E6*, ::Class_4_B99AA5AE371451AA*, ::System::String*, ::System::Action*, ::System::Boolean, ::System::Boolean, ::Class_1_86A85CB5038B7046_Class_3_8A15F387AB2587C6*))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_79508C356DC84A7B_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void Method_3_49BD1757AE1929C3(::Class_5_2B047B81D949C4E6* a1, ::Class_4_B99AA5AE371451AA* a2, ::System::Int32 a3, ::System::Action* a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::Class_5_2B047B81D949C4E6*, ::Class_4_B99AA5AE371451AA*, ::System::Int32, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_49BD1757AE1929C3_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_CAC18F53CC6E2A84(::Class_5_2B047B81D949C4E6* a1, ::Class_4_B99AA5AE371451AA* a2)
	{
		return ((::System::Void(*)(::Class_5_2B047B81D949C4E6*, ::Class_4_B99AA5AE371451AA*))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_CAC18F53CC6E2A84_OFFSET))(a1, a2);
	}

	static ::System::String* Method_3_D8A2F3592E683073(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_D8A2F3592E683073_OFFSET))(a1);
	}

	static ::System::Void Method_3_620FC84D969405E9(::MoleMole::HollowChessboard::HollowChessboardUID a1, ::MoleMole::HollowChessboard::HollowCell a2, ::Class_1_0AEBFEBDADDA07AC* a3)
	{
		return ((::System::Void(*)(::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowCell, ::Class_1_0AEBFEBDADDA07AC*))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_620FC84D969405E9_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_CC7845FF35CBFA9F(::Class_4_B99AA5AE371451AA* a1, ::Class_5_2B047B81D949C4E6* a2)
	{
		return ((::System::Void(*)(::Class_4_B99AA5AE371451AA*, ::Class_5_2B047B81D949C4E6*))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_CC7845FF35CBFA9F_OFFSET))(a1, a2);
	}

	static ::Enum_3_7609C87F8335DE37 Method_3_82353F5C3C999AF3(::System::String* a1)
	{
		return ((::Enum_3_7609C87F8335DE37(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_82353F5C3C999AF3_OFFSET))(a1);
	}

	::System::Void Method_3_A11144519902A27F(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_A11144519902A27F_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_5B84EE47D139291E(::Class_5_2B047B81D949C4E6* a1, ::Class_4_B99AA5AE371451AA* a2, ::System::Action* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::Class_5_2B047B81D949C4E6*, ::Class_4_B99AA5AE371451AA*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_5B84EE47D139291E_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_3_FABC9D43ED6552D8(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_FABC9D43ED6552D8_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_DDBFFB4BA554A018(::Class_5_2B047B81D949C4E6* a1)
	{
		return ((::System::Void(*)(::Class_5_2B047B81D949C4E6*))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_DDBFFB4BA554A018_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_ECC293A7A310E872(::MoleMole::HollowChessboard::HollowCell a1, ::Class_5_F60EFCE4D76BF533* a2)
	{
		return ((::System::Boolean(*)(::MoleMole::HollowChessboard::HollowCell, ::Class_5_F60EFCE4D76BF533*))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_ECC293A7A310E872_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_D3B3973DB5E3F08A(::Class_5_2B047B81D949C4E6* a1, ::Class_4_B99AA5AE371451AA* a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Action* a7, ::System::UInt64 a8, ::Enum_3_EFEF7CE7B8D41309 a9)
	{
		return ((::System::Void(*)(::Class_5_2B047B81D949C4E6*, ::Class_4_B99AA5AE371451AA*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Action*, ::System::UInt64, ::Enum_3_EFEF7CE7B8D41309))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_D3B3973DB5E3F08A_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	static ::Class_4_07210A4295CAA0F3* Method_3_D279183863085EC4()
	{
		return ((::Class_4_07210A4295CAA0F3*(*)())((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_D279183863085EC4_OFFSET))();
	}

	::System::Void Method_3_89D1A6BA67A57B89(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_89D1A6BA67A57B89_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_624D6688244FE805(::Class_5_2B047B81D949C4E6* a1, ::MoleMole::HollowChessboard::HollowEntity* a2)
	{
		return ((::System::Void(*)(::Class_5_2B047B81D949C4E6*, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_624D6688244FE805_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_1A3EE9BB2D509DC7(::Class_5_2B047B81D949C4E6* a1, ::Class_4_B99AA5AE371451AA* a2, ::System::String* a3, ::System::Action* a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::Class_5_2B047B81D949C4E6*, ::Class_4_B99AA5AE371451AA*, ::System::String*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_1A3EE9BB2D509DC7_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_DB636782A1BCFD12(::Class_5_2B047B81D949C4E6* a1, ::Class_4_B99AA5AE371451AA* a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Action* a7, ::Enum_3_EFEF7CE7B8D41309 a8)
	{
		return ((::System::Void(*)(::Class_5_2B047B81D949C4E6*, ::Class_4_B99AA5AE371451AA*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Action*, ::Enum_3_EFEF7CE7B8D41309))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_DB636782A1BCFD12_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::Void Method_3_6DD0A462BC3211D3(::Class_5_2B047B81D949C4E6* a1, ::Class_4_B99AA5AE371451AA* a2)
	{
		return ((::System::Void(*)(::Class_5_2B047B81D949C4E6*, ::Class_4_B99AA5AE371451AA*))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_6DD0A462BC3211D3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_028D08135C92B92C(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_028D08135C92B92C_OFFSET))(a1);
	}

	::System::Action_2<::Class_5_F60EFCE4D76BF533*, ::Class_5_F638703ACD0FA08E*>* Method_3_45086CE8B9BC1BC1()
	{
		return ((::System::Action_2<::Class_5_F60EFCE4D76BF533*, ::Class_5_F638703ACD0FA08E*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_45086CE8B9BC1BC1_OFFSET))(this);
	}

	static ::System::Void Method_3_95A6CB0D6B89CF2C(::MoleMole::HollowChessboard::HollowCell a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::MoleMole::HollowChessboard::HollowCell, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_95A6CB0D6B89CF2C_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_5EDFBED4ADF7E010_1(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Boolean(*)(::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_5EDFBED4ADF7E010_1_OFFSET))(a1);
	}

	static ::System::Void Method_3_ECADD6570AA812A9(::Class_5_2B047B81D949C4E6* a1, ::Class_4_B99AA5AE371451AA* a2)
	{
		return ((::System::Void(*)(::Class_5_2B047B81D949C4E6*, ::Class_4_B99AA5AE371451AA*))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_ECADD6570AA812A9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_BFD1B8A4ECD2B060(::Class_3_1988BABB1B1A4043_Struct_2_04D90A334135A87C_1& a1)
	{
		return ((::System::Void(*)(::Class_3_1988BABB1B1A4043_Struct_2_04D90A334135A87C_1&))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_BFD1B8A4ECD2B060_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_9D0417A7B5BA1EBE(::Class_5_2B047B81D949C4E6* a1, ::Class_4_B99AA5AE371451AA* a2, ::System::String* a3, ::System::Int32 a4, ::System::Action* a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Boolean a8, ::Class_1_86A85CB5038B7046_Class_3_8A15F387AB2587C6* a9)
	{
		return ((::System::Boolean(*)(::Class_5_2B047B81D949C4E6*, ::Class_4_B99AA5AE371451AA*, ::System::String*, ::System::Int32, ::System::Action*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::Class_1_86A85CB5038B7046_Class_3_8A15F387AB2587C6*))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_9D0417A7B5BA1EBE_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	static ::System::Int32 Method_3_2D9AFE84AA33C605(::Class_5_2B047B81D949C4E6* a1, ::System::Int32 a2, ::System::Int32& a3, ::System::Boolean a4)
	{
		return ((::System::Int32(*)(::Class_5_2B047B81D949C4E6*, ::System::Int32, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_2D9AFE84AA33C605_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_9E6C9D9460C5C4E3(::MoleMole::HollowChessboard::HollowChessboardUID a1, ::MoleMole::HollowChessboard::HollowCell a2, ::Enum_3_B5351BFCBBBCD1DB a3)
	{
		return ((::System::Void(*)(::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowCell, ::Enum_3_B5351BFCBBBCD1DB))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_9E6C9D9460C5C4E3_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_949A72507D1C22EB(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Boolean(*)(::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_949A72507D1C22EB_OFFSET))(a1);
	}

	::System::Void Method_3_61A6EC8706DE09C0(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_61A6EC8706DE09C0_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_178FE28C0151E3F3(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_178FE28C0151E3F3_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_C9D5EACD1CD9A169(::System::Int32 a1, ::System::String*& a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_C9D5EACD1CD9A169_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_8FCB3EB540FCB750(::Class_5_2B047B81D949C4E6* a1)
	{
		return ((::System::Void(*)(::Class_5_2B047B81D949C4E6*))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_8FCB3EB540FCB750_OFFSET))(a1);
	}

	::System::Void Method_3_09F8F0CE9265A9ED(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_09F8F0CE9265A9ED_OFFSET))(this, a1);
	}

	static ::System::String* Method_3_FF1EDDBE34FDC308(::MoleMole::HollowChessboard::HollowCell a1, ::Class_5_F60EFCE4D76BF533* a2)
	{
		return ((::System::String*(*)(::MoleMole::HollowChessboard::HollowCell, ::Class_5_F60EFCE4D76BF533*))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_FF1EDDBE34FDC308_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_2F6A8208B0155A87(::Class_5_AF65C3A968E836D2* a1, ::MoleMole::HollowChessboard::HollowCell a2, ::System::Int32 a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::Class_5_AF65C3A968E836D2*, ::MoleMole::HollowChessboard::HollowCell, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_2F6A8208B0155A87_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_3_E82E8EB2F4200B5B(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Boolean(*)(::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_E82E8EB2F4200B5B_OFFSET))(a1);
	}

	::System::Void Method_3_A11144519902A27F_1(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_A11144519902A27F_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::MoleMole::TextureSheetData* Method_3_DF8F63F5B6ABFB27(::System::String* a1, ::System::Boolean a2)
	{
		return ((::MoleMole::TextureSheetData*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_DF8F63F5B6ABFB27_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C0D10D5803A1EBFF(::Class_5_2B047B81D949C4E6* a1, ::Class_4_B99AA5AE371451AA* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::Class_5_2B047B81D949C4E6*, ::Class_4_B99AA5AE371451AA*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_C0D10D5803A1EBFF_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_3_F18A32956D3A25E2(::System::String* a1, ::Class_1_0AEBFEBDADDA07AC* a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::System::String*, ::Class_1_0AEBFEBDADDA07AC*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_F18A32956D3A25E2_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_944725D8BEE125D5(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_944725D8BEE125D5_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_809D71F963054FE1(::Class_5_EC49DC305E06FE39* a1, ::Class_4_1B550CDA2463DC9D_12* a2)
	{
		return ((::System::Void(*)(::Class_5_EC49DC305E06FE39*, ::Class_4_1B550CDA2463DC9D_12*))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_809D71F963054FE1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_8CE32FC8A0F92C1E(::Class_3_1988BABB1B1A4043_Struct_2_04D90A334135A87C_1& a1)
	{
		return ((::System::Void(*)(::Class_3_1988BABB1B1A4043_Struct_2_04D90A334135A87C_1&))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_8CE32FC8A0F92C1E_OFFSET))(a1);
	}

	::System::Void Method_3_522DF5E02B341D3A(::System::Action_2<::Class_5_F60EFCE4D76BF533*, ::Class_5_F638703ACD0FA08E*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::Class_5_F60EFCE4D76BF533*, ::Class_5_F638703ACD0FA08E*>*))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_522DF5E02B341D3A_OFFSET))(this, a1);
	}

	::System::Void Method_3_61A6EC8706DE09C0_1(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_61A6EC8706DE09C0_1_OFFSET))(this, a1);
	}

	static ::System::String* Method_3_438A2B32EE083095(::Class_5_2B047B81D949C4E6* a1, ::Class_5_F60EFCE4D76BF533* a2)
	{
		return ((::System::String*(*)(::Class_5_2B047B81D949C4E6*, ::Class_5_F60EFCE4D76BF533*))((::PBYTE)hIl2Cpp + CLASS_3_1988BABB1B1A4043_METHOD_3_438A2B32EE083095_OFFSET))(a1, a2);
	}
};
