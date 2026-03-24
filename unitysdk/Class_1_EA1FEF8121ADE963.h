#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BinaryTracingCore/Source/TracingTools/LogTagDefine_DisableLogTag.h"
#include "unitysdk/Class_1_EA1FEF8121ADE963_Enum_3_B70C9FC819B54A14.h"
#include "unitysdk/Class_1_EA1FEF8121ADE963_Enum_3_F6FE0300C1074A6F.h"
#include "unitysdk/Enum_3_018E10D1FF758986.h"
#include "unitysdk/Enum_3_4C6BF0F5CE68C510.h"
#include "unitysdk/Enum_3_6D02A7ACA469A7C7.h"
#include "unitysdk/Enum_3_7CF6DCCA0AF3DB5F.h"
#include "unitysdk/Enum_3_7DA580CB619A9E71.h"
#include "unitysdk/Enum_3_9B96ACE49506217C.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/BuffGroupName.h"
#include "unitysdk/MoleMole/Config/CharacterAliveState.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/Config/DamageHitType.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/MoleMole/Config/HitAnimDirectionType.h"
#include "unitysdk/MoleMole/Config/HitDataType.h"
#include "unitysdk/MoleMole/Config/HitForwardType.h"
#include "unitysdk/MoleMole/Config/SpecialDamageTextType.h"
#include "unitysdk/MoleMole/Config/TeamProperty.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_2B6FA625C20F556D.h"
#include "unitysdk/System/Object.h"

class Class_1_1CDA382D823F8E80;
class Class_1_EA1FEF8121ADE963_Class_1_FD175DAB7C350E4D;
class Class_2_C5D830057BD6D4F5;
class Class_3_E85F004AD455EAA0;
namespace BinaryTracingCore::Source::TracingTools { class LogTagDefine_LogTag; }
namespace MoleMole::Config { class AttackTimeSlowConfig; }
namespace MoleMole::Config { class ConfigEntityAttackEffect; }
namespace MoleMole::Config { class ConfigHitEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_EA1FEF8121ADE963_METHOD_1_0EB1DFF81E150C87_OFFSET UNITYSDK_OFFSET(0x64F5E40)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xB490AE0)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_1F2C7BFE0C311F4F_OFFSET UNITYSDK_OFFSET(0xB490830)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_205A14011EEBDE57_1_OFFSET UNITYSDK_OFFSET(0xB490460)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_205A14011EEBDE57_OFFSET UNITYSDK_OFFSET(0xB490120)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0xB490840)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_38E30E6A6CA1E1CF_OFFSET UNITYSDK_OFFSET(0x64F6950)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0xB4907A0)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x64F5A50)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_413472096512A213_OFFSET UNITYSDK_OFFSET(0xB4910A0)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_41F8B8ACD2DFAAFE_OFFSET UNITYSDK_OFFSET(0xB4912C0)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0x64F6A60)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_5323F2DF46A044DA_2_OFFSET UNITYSDK_OFFSET(0x64F6AF0)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_5323F2DF46A044DA_3_OFFSET UNITYSDK_OFFSET(0x64F6B00)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_5323F2DF46A044DA_4_OFFSET UNITYSDK_OFFSET(0xB4904E0)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_5323F2DF46A044DA_5_OFFSET UNITYSDK_OFFSET(0xB490770)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_5323F2DF46A044DA_6_OFFSET UNITYSDK_OFFSET(0xB490820)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_5323F2DF46A044DA_7_OFFSET UNITYSDK_OFFSET(0xB490A20)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x64F5E30)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_69A21B8D5A946488_OFFSET UNITYSDK_OFFSET(0xB491180)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_6B4F1BA536F1DB6A_OFFSET UNITYSDK_OFFSET(0xB490BA0)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_6D3A4546382BD733_OFFSET UNITYSDK_OFFSET(0xB490750)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_77E3CF907BA6F8B7_OFFSET UNITYSDK_OFFSET(0xB4901B0)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_8633AE51B23EBDFD_1_OFFSET UNITYSDK_OFFSET(0xB490100)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_8633AE51B23EBDFD_2_OFFSET UNITYSDK_OFFSET(0xB490190)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_8633AE51B23EBDFD_3_OFFSET UNITYSDK_OFFSET(0xB491330)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_8633AE51B23EBDFD_OFFSET UNITYSDK_OFFSET(0x64F67F0)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_9990763B5163E37F_OFFSET UNITYSDK_OFFSET(0x64F6810)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_9D455FE4693966A8_OFFSET UNITYSDK_OFFSET(0xB4910C0)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_9F3B9DEDBB200991_OFFSET UNITYSDK_OFFSET(0xB4909B0)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_A3FAE12D7B6ACD62_1_OFFSET UNITYSDK_OFFSET(0xB490A30)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x64F68A0)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_A6544B958241856F_OFFSET UNITYSDK_OFFSET(0x64F5F50)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_AFC15F6B93E33EF3_OFFSET UNITYSDK_OFFSET(0xB490740)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_B59CA0E1A81AD6A3_OFFSET UNITYSDK_OFFSET(0x64F6A70)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_B897C8703A29D609_OFFSET UNITYSDK_OFFSET(0x64F5AC0)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_C229FF62B898C0B2_1_OFFSET UNITYSDK_OFFSET(0xB490780)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_C229FF62B898C0B2_2_OFFSET UNITYSDK_OFFSET(0xB490790)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_C229FF62B898C0B2_3_OFFSET UNITYSDK_OFFSET(0xB490910)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_C229FF62B898C0B2_OFFSET UNITYSDK_OFFSET(0xB4901A0)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_C22D01F87E245F4D_OFFSET UNITYSDK_OFFSET(0xB490D30)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x64F6800)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x64F5F40)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_C7B7DE5291230DD6_OFFSET UNITYSDK_OFFSET(0x64F5B30)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB490920)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_CF11FE5AC51B3A61_OFFSET UNITYSDK_OFFSET(0xB490BB0)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_D2F5EC9A721C1561_OFFSET UNITYSDK_OFFSET(0x64B07F0)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_DEA6ACF0B96986BD_OFFSET UNITYSDK_OFFSET(0xB490E50)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_E729CA49C1C1FBD1_OFFSET UNITYSDK_OFFSET(0xB490500)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0xB4904F0)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_E7F1AECA7CFF8AAD_2_OFFSET UNITYSDK_OFFSET(0xB490760)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_E7F1AECA7CFF8AAD_3_OFFSET UNITYSDK_OFFSET(0xB490810)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_E7F1AECA7CFF8AAD_4_OFFSET UNITYSDK_OFFSET(0xB490B90)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_E7F1AECA7CFF8AAD_5_OFFSET UNITYSDK_OFFSET(0xB490DA0)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_E7F1AECA7CFF8AAD_6_OFFSET UNITYSDK_OFFSET(0xB4910B0)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_E7F1AECA7CFF8AAD_7_OFFSET UNITYSDK_OFFSET(0xB491170)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0xB490110)
#define CLASS_1_EA1FEF8121ADE963_METHOD_1_F69D40EA1B4B8CA1_OFFSET UNITYSDK_OFFSET(0xB490DB0)
#define CLASS_1_EA1FEF8121ADE963__CCTOR_OFFSET UNITYSDK_OFFSET(0x64F59C0)
#define CLASS_1_EA1FEF8121ADE963__CTOR_OFFSET UNITYSDK_OFFSET(0x64F58B0)

inline static constexpr unsigned int Class_1_EA1FEF8121ADE963_TypeDefinitionIndex = 38094;

class Class_1_EA1FEF8121ADE963 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>** StaticGet_Field_1_141()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EA1FEF8121ADE963_TypeDefinitionIndex)->GetStaticField(0x42970);
	}
	::MoleMole::EntityHandle Field_1_4; // 0x10
	::Class_3_E85F004AD455EAA0* Field_1_101; // 0x20
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* Field_1_107; // 0x28
	::System::String* Field_1_31; // 0x30
	::MoleMole::EntityHandle Field_1_6; // 0x38
	::System::Collections::Generic::List_1<::MoleMole::Config::AttackTimeSlowConfig*>* Field_1_33; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Field_1_86; // 0x50
	::Class_1_EA1FEF8121ADE963_Class_1_FD175DAB7C350E4D* Field_1_100; // 0x58
	::Class_1_1CDA382D823F8E80* Field_1_112; // 0x60
	::System::Collections::Generic::List_1<::System::Single>* Field_1_140; // 0x68
	::MoleMole::Config::ConfigHitEffect* Field_1_102; // 0x70
	::MoleMole::Config::ConfigEntityAttackEffect* Field_1_106; // 0x78
	::System::String* Field_1_70; // 0x80
	::System::String* Field_1_32; // 0x88
	::System::Collections::Generic::List_1<::System::String*>* Field_1_72; // 0x90
	::System::String* Field_1_71; // 0x98
	::MoleMole::Config::ConfigHitEffect* Field_1_103; // 0xA0
	::MoleMole::Config::ConfigHitEffect* Field_1_104; // 0xA8
	::Class_2_C5D830057BD6D4F5* Field_1_132; // 0xB0
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::TeamProperty, ::System::Single>* Field_1_111; // 0xB8
	::System::String* Field_1_69; // 0xC0
	::System::Double Field_1_135; // 0xC8
	::System::Int32 Field_1_142; // 0xD0
	::System::Single Field_1_62; // 0xD4
	::System::Int32 Field_1_133; // 0xD8
	::System::Single Field_1_3; // 0xDC
	::System::Single Field_1_79; // 0xE0
	::System::Single Field_1_82; // 0xE4
	::System::Single Field_1_123; // 0xE8
	::System::Boolean Field_1_55; // 0xEC
	::System::Boolean Field_1_51; // 0xED
	::System::Boolean Field_1_54; // 0xEE
	::System::Boolean Field_1_27; // 0xEF
	::System::Single Field_1_0; // 0xF0
	::System::Single Field_1_45; // 0xF4
	::System::Single Field_1_38; // 0xF8
	::Struct_2_2B6FA625C20F556D Field_1_113; // 0xFC
	::System::Single Field_1_124; // 0x104
	::System::Single Field_1_76; // 0x108
	::System::Boolean Field_1_88; // 0x10C
	::System::Boolean Field_1_22; // 0x10D
	::System::Boolean Field_1_50; // 0x10E
	::System::Boolean Field_1_52; // 0x10F
	::MoleMole::Config::BuffGroupName Field_1_68; // 0x110
	::MoleMole::Config::HitForwardType Field_1_97; // 0x114
	::System::Boolean Field_1_34; // 0x118
	::System::Boolean Field_1_19; // 0x119
	::System::Boolean Field_1_87; // 0x11A
	::System::Boolean Field_1_60; // 0x11B
	::System::Single Field_1_136; // 0x11C
	::System::Single Field_1_77; // 0x120
	::System::Single Field_1_1; // 0x124
	::System::Int32 Field_1_16; // 0x128
	::System::Double Field_1_120; // 0x130
	::System::Double Field_1_128; // 0x138
	::System::Double Field_1_122; // 0x140
	::MoleMole::Config::EntityType Field_1_5; // 0x148
	::System::Int32 Field_1_17; // 0x14C
	::System::Single Field_1_41; // 0x150
	::System::Single Field_1_40; // 0x154
	::System::UInt32 Field_1_130; // 0x158
	::System::Boolean Field_1_47; // 0x15C
	::System::Boolean Field_1_46; // 0x15D
	::System::Boolean Field_1_134; // 0x15E
	::System::Boolean Field_1_37; // 0x15F
	::System::Single Field_1_11; // 0x160
	::Enum_3_6D02A7ACA469A7C7 Field_1_35; // 0x164
	::System::Single Field_1_2; // 0x168
	::System::Single Field_1_63; // 0x16C
	::Class_1_EA1FEF8121ADE963_Enum_3_F6FE0300C1074A6F Field_1_105; // 0x170
	::System::Single Field_1_126; // 0x174
	::System::Single Field_1_131; // 0x178
	::System::Single Field_1_9; // 0x17C
	::System::Single Field_1_8; // 0x180
	::MoleMole::Config::HitDataType Field_1_95; // 0x184
	::System::Boolean Field_1_91; // 0x188
	::System::Boolean Field_1_53; // 0x189
	::System::Boolean Field_1_48; // 0x18A
	::System::Boolean Field_1_94; // 0x18B
	::System::Int32 Field_1_99; // 0x18C
	::System::Single Field_1_116; // 0x190
	::System::Single Field_1_121; // 0x194
	::System::Int32 Field_1_20; // 0x198
	::System::Single Field_1_125; // 0x19C
	::MoleMole::Config::DamageHitType Field_1_67; // 0x1A0
	::System::Single Field_1_129; // 0x1A4
	::System::Single Field_1_138; // 0x1A8
	::MoleMole::Config::SpecialDamageTextType Field_1_59; // 0x1AC
	::MoleMole::Config::SpecialDamageTextType Field_1_61; // 0x1B0
	::System::Single Field_1_10; // 0x1B4
	::System::Int32 Field_1_21; // 0x1B8
	::System::Int32 Field_1_24; // 0x1BC
	::System::Int32 Field_1_23; // 0x1C0
	::System::Single Field_1_74; // 0x1C4
	::System::Single Field_1_110; // 0x1C8
	::System::Single Field_1_119; // 0x1CC
	::MoleMole::Config::HitAnimDirectionType Field_1_96; // 0x1D0
	::System::Single Field_1_42; // 0x1D4
	::System::Single Field_1_58; // 0x1D8
	::System::Single Field_1_139; // 0x1DC
	::System::Single Field_1_108; // 0x1E0
	::System::Single Field_1_115; // 0x1E4
	::System::Int32 Field_1_65; // 0x1E8
	::System::Int32 Field_1_15; // 0x1EC
	::System::Single Field_1_117; // 0x1F0
	::System::Int32 Field_1_93; // 0x1F4
	::System::Boolean Field_1_26; // 0x1F8
	::System::Boolean Field_1_66; // 0x1F9
	::Class_1_EA1FEF8121ADE963_Enum_3_B70C9FC819B54A14 Field_1_73; // 0x1FA
	::System::Boolean Field_1_85; // 0x1FB
	::System::Single Field_1_118; // 0x1FC
	::System::Boolean Field_1_29; // 0x200
	::System::Boolean Field_1_18; // 0x201
	::System::Boolean Field_1_83; // 0x202
	::System::Boolean Field_1_43; // 0x203
	::System::Int32 Field_1_39; // 0x204
	::MoleMole::Config::DamageElementType Field_1_56; // 0x208
	::System::Single Field_1_109; // 0x20C
	::System::Int32 Field_1_90; // 0x210
	::System::Int32 Field_1_7; // 0x214
	::System::Single Field_1_12; // 0x218
	::System::Int32 Field_1_57; // 0x21C
	::System::Single Field_1_44; // 0x220
	::System::Double Field_1_127; // 0x228
	::System::UInt32 Field_1_25; // 0x230
	::System::Single Field_1_64; // 0x234
	::System::Single Field_1_80; // 0x238
	::System::Single Field_1_81; // 0x23C
	::MoleMole::Config::CharacterAliveState Field_1_89; // 0x240
	::System::Boolean Field_1_137; // 0x244
	::System::Boolean Field_1_30; // 0x245
	::System::Boolean Field_1_84; // 0x246
	::System::Boolean Field_1_143; // 0x247
	::Enum_3_9B96ACE49506217C Field_1_98; // 0x248
	::System::Int32 Field_1_14; // 0x24C
	::System::Int32 Field_1_36; // 0x250
	::System::Single Field_1_114; // 0x254
	::System::Single Field_1_78; // 0x258
	::System::Boolean Field_1_92; // 0x25C
	::System::Boolean Field_1_13; // 0x25D
	::System::Boolean Field_1_28; // 0x25E
	::System::Boolean Field_1_49; // 0x25F
	::System::Single Field_1_75; // 0x260
	::Enum_3_7CF6DCCA0AF3DB5F Field_1_144; // 0x264

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963__CCTOR_OFFSET))();
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	static ::System::Void Method_1_B897C8703A29D609(::Class_1_EA1FEF8121ADE963* a1)
	{
		return ((::System::Void(*)(::Class_1_EA1FEF8121ADE963*))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_B897C8703A29D609_OFFSET))(a1);
	}

	::System::Single Method_1_C7B7DE5291230DD6(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_C7B7DE5291230DD6_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::Enum_3_018E10D1FF758986 Method_1_0EB1DFF81E150C87()
	{
		return ((::Enum_3_018E10D1FF758986(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_0EB1DFF81E150C87_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_1_A6544B958241856F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_A6544B958241856F_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_8633AE51B23EBDFD_OFFSET))(this, a1);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_9990763B5163E37F(::Enum_3_7DA580CB619A9E71 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_7DA580CB619A9E71, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_9990763B5163E37F_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_5323F2DF46A044DA_1_OFFSET))(this);
	}

	::MoleMole::Config::SpecialDamageTextType Method_1_B59CA0E1A81AD6A3()
	{
		return ((::MoleMole::Config::SpecialDamageTextType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_B59CA0E1A81AD6A3_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_5323F2DF46A044DA_2_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA_3()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_5323F2DF46A044DA_3_OFFSET))(this);
	}

	::System::Single Method_1_38E30E6A6CA1E1CF(::System::String* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_38E30E6A6CA1E1CF_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_D2F5EC9A721C1561(::Class_1_EA1FEF8121ADE963* a1)
	{
		return ((::System::Void(*)(::Class_1_EA1FEF8121ADE963*))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_D2F5EC9A721C1561_OFFSET))(a1);
	}

	::System::Void Method_1_8633AE51B23EBDFD_1(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_8633AE51B23EBDFD_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_205A14011EEBDE57(::Enum_3_4C6BF0F5CE68C510 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_4C6BF0F5CE68C510))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_205A14011EEBDE57_OFFSET))(this, a1);
	}

	::System::Void Method_1_8633AE51B23EBDFD_2(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_8633AE51B23EBDFD_2_OFFSET))(this, a1);
	}

	::System::Double Method_1_C229FF62B898C0B2()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_C229FF62B898C0B2_OFFSET))(this);
	}

	::System::Void Method_1_77E3CF907BA6F8B7(::Enum_3_4C6BF0F5CE68C510 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_4C6BF0F5CE68C510))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_77E3CF907BA6F8B7_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_205A14011EEBDE57_1(::Enum_3_7DA580CB619A9E71 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_7DA580CB619A9E71))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_205A14011EEBDE57_1_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA_4()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_5323F2DF46A044DA_4_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Method_1_E729CA49C1C1FBD1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_E729CA49C1C1FBD1_OFFSET))(this);
	}

	::System::Void Method_1_AFC15F6B93E33EF3(::Class_1_EA1FEF8121ADE963_Class_1_FD175DAB7C350E4D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EA1FEF8121ADE963_Class_1_FD175DAB7C350E4D*))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_AFC15F6B93E33EF3_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Method_1_6D3A4546382BD733()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_6D3A4546382BD733_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD_2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_E7F1AECA7CFF8AAD_2_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA_5()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_5323F2DF46A044DA_5_OFFSET))(this);
	}

	::System::Double Method_1_C229FF62B898C0B2_1()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_C229FF62B898C0B2_1_OFFSET))(this);
	}

	::System::Double Method_1_C229FF62B898C0B2_2()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_C229FF62B898C0B2_2_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD_3(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_E7F1AECA7CFF8AAD_3_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA_6()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_5323F2DF46A044DA_6_OFFSET))(this);
	}

	::System::Void Method_1_1F2C7BFE0C311F4F(::MoleMole::Config::SpecialDamageTextType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::SpecialDamageTextType))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_1F2C7BFE0C311F4F_OFFSET))(this, a1);
	}

	static ::Class_1_EA1FEF8121ADE963* Method_1_358A144584A5DBFC()
	{
		return ((::Class_1_EA1FEF8121ADE963*(*)())((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_358A144584A5DBFC_OFFSET))();
	}

	::System::Double Method_1_C229FF62B898C0B2_3()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_C229FF62B898C0B2_3_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_9F3B9DEDBB200991(::BinaryTracingCore::Source::TracingTools::LogTagDefine_DisableLogTag a1)
	{
		return ((::System::Void(*)(::PVOID, ::BinaryTracingCore::Source::TracingTools::LogTagDefine_DisableLogTag))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_9F3B9DEDBB200991_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA_7()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_5323F2DF46A044DA_7_OFFSET))(this);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_A3FAE12D7B6ACD62_1_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD_4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_E7F1AECA7CFF8AAD_4_OFFSET))(this, a1);
	}

	::Class_1_EA1FEF8121ADE963_Class_1_FD175DAB7C350E4D* Method_1_6B4F1BA536F1DB6A()
	{
		return ((::Class_1_EA1FEF8121ADE963_Class_1_FD175DAB7C350E4D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_6B4F1BA536F1DB6A_OFFSET))(this);
	}

	::System::Void Method_1_CF11FE5AC51B3A61(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_CF11FE5AC51B3A61_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C22D01F87E245F4D(::BinaryTracingCore::Source::TracingTools::LogTagDefine_LogTag* a1)
	{
		return ((::System::Void(*)(::PVOID, ::BinaryTracingCore::Source::TracingTools::LogTagDefine_LogTag*))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_C22D01F87E245F4D_OFFSET))(this, a1);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD_5(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_E7F1AECA7CFF8AAD_5_OFFSET))(this, a1);
	}

	::System::Void Method_1_F69D40EA1B4B8CA1(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_F69D40EA1B4B8CA1_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_DEA6ACF0B96986BD(::Class_1_EA1FEF8121ADE963* a1)
	{
		return ((::System::Void(*)(::Class_1_EA1FEF8121ADE963*))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_DEA6ACF0B96986BD_OFFSET))(a1);
	}

	::MoleMole::EntityHandle Method_1_413472096512A213()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_413472096512A213_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD_6(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_E7F1AECA7CFF8AAD_6_OFFSET))(this, a1);
	}

	::System::Void Method_1_9D455FE4693966A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_9D455FE4693966A8_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD_7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_E7F1AECA7CFF8AAD_7_OFFSET))(this, a1);
	}

	::MoleMole::Config::DamageElementType Method_1_69A21B8D5A946488()
	{
		return ((::MoleMole::Config::DamageElementType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_69A21B8D5A946488_OFFSET))(this);
	}

	::MoleMole::Config::BuffGroupName Method_1_41F8B8ACD2DFAAFE()
	{
		return ((::MoleMole::Config::BuffGroupName(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_41F8B8ACD2DFAAFE_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD_3(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_EA1FEF8121ADE963_METHOD_1_8633AE51B23EBDFD_3_OFFSET))(this, a1);
	}
};
