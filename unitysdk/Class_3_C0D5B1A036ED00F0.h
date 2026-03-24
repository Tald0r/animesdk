#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Enum_3_9BDB9B3460BCD57E.h"
#include "unitysdk/MoleMole/Config/AidAttackType.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/MoleMole/Config/InlevelCameraState.h"
#include "unitysdk/Struct_2_23357730042A2DE8.h"
#include "unitysdk/Struct_2_5887222B9AE38D34_1.h"
#include "unitysdk/Struct_2_616C3DBF123B7844.h"
#include "unitysdk/Struct_2_F2A7939F5DFF18C1_1.h"

class Class_0_16E4307DCC419505_214;
class Class_1_C62B2C2422470B0C;
class Class_2_0206DD479BB5C906;
class Class_2_208CC9941471731A_8;
class Class_2_208CC9941471731A_996;
namespace MoleMole { class SkillCharacterScriptConfig; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_C0D5B1A036ED00F0_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x926F920)
#define CLASS_3_C0D5B1A036ED00F0_METHOD_3_14045882BC5C6CA9_OFFSET UNITYSDK_OFFSET(0x9271A60)
#define CLASS_3_C0D5B1A036ED00F0_METHOD_3_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x9271510)
#define CLASS_3_C0D5B1A036ED00F0_METHOD_3_1FDE3BA9363A99B1_OFFSET UNITYSDK_OFFSET(0x9271690)
#define CLASS_3_C0D5B1A036ED00F0_METHOD_3_20ACDE8068764F23_OFFSET UNITYSDK_OFFSET(0x9270320)
#define CLASS_3_C0D5B1A036ED00F0_METHOD_3_3845AD389B8E1E47_OFFSET UNITYSDK_OFFSET(0x92717F0)
#define CLASS_3_C0D5B1A036ED00F0_METHOD_3_77577333B4681208_OFFSET UNITYSDK_OFFSET(0x9271C80)
#define CLASS_3_C0D5B1A036ED00F0_METHOD_3_8E1799689C0F60E2_OFFSET UNITYSDK_OFFSET(0x9271370)
#define CLASS_3_C0D5B1A036ED00F0_METHOD_3_8F059A365E90744C_OFFSET UNITYSDK_OFFSET(0x9270E20)
#define CLASS_3_C0D5B1A036ED00F0_METHOD_3_96E3159279ADB646_OFFSET UNITYSDK_OFFSET(0x9270C80)
#define CLASS_3_C0D5B1A036ED00F0_METHOD_3_98121C0EE45630C0_OFFSET UNITYSDK_OFFSET(0x9271910)
#define CLASS_3_C0D5B1A036ED00F0_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x9270F20)
#define CLASS_3_C0D5B1A036ED00F0_METHOD_3_C621B85C09719AD2_OFFSET UNITYSDK_OFFSET(0x92705A0)
#define CLASS_3_C0D5B1A036ED00F0_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9271620)
#define CLASS_3_C0D5B1A036ED00F0_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x9271580)
#define CLASS_3_C0D5B1A036ED00F0_METHOD_3_D63735FB49794316_OFFSET UNITYSDK_OFFSET(0x926FC30)
#define CLASS_3_C0D5B1A036ED00F0_METHOD_3_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x9270580)
#define CLASS_3_C0D5B1A036ED00F0_METHOD_3_F9E939D4E9AAE0E2_OFFSET UNITYSDK_OFFSET(0x926FDF0)
#define CLASS_3_C0D5B1A036ED00F0_METHOD_3_FF7B2911BBACA4A9_1_OFFSET UNITYSDK_OFFSET(0x9270F80)
#define CLASS_3_C0D5B1A036ED00F0_METHOD_3_FF7B2911BBACA4A9_2_OFFSET UNITYSDK_OFFSET(0x92710D0)
#define CLASS_3_C0D5B1A036ED00F0_METHOD_3_FF7B2911BBACA4A9_3_OFFSET UNITYSDK_OFFSET(0x9271220)
#define CLASS_3_C0D5B1A036ED00F0_METHOD_3_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x9270430)
#define CLASS_3_C0D5B1A036ED00F0_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x926F2A0)
#define CLASS_3_C0D5B1A036ED00F0__CCTOR_OFFSET UNITYSDK_OFFSET(0x926F980)
#define CLASS_3_C0D5B1A036ED00F0__CTOR_OFFSET UNITYSDK_OFFSET(0x926FA00)

inline static constexpr unsigned int Class_3_C0D5B1A036ED00F0_TypeDefinitionIndex = 39968;

class Class_3_C0D5B1A036ED00F0 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::String* Field_3_33; // 0x0
	// static const ::System::Int32 Field_3_44 = 0x15; // 0x0
	::Class_1_C62B2C2422470B0C* Field_3_7; // 0x48
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::AidAttackType, ::System::Int32>* Field_3_19; // 0x50
	::System::Collections::Generic::List_1<::System::String*>* Field_3_6; // 0x58
	::System::Collections::Generic::List_1<::Struct_2_616C3DBF123B7844>* Field_3_36; // 0x60
	::System::Collections::Generic::List_1<::Struct_2_23357730042A2DE8>* Field_3_32; // 0x68
	::System::Collections::Generic::List_1<::System::String*>* Field_3_9; // 0x70
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::DamageElementType, ::System::Int32>* Field_3_13; // 0x78
	::System::Collections::Generic::List_1<::Struct_2_5887222B9AE38D34_1>* Field_3_38; // 0x80
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::InlevelCameraState, ::System::Single>* Field_3_10; // 0x88
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_3_43; // 0x90
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::AidAttackType, ::System::Single>* Field_3_20; // 0x98
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::AidAttackType, ::MoleMole::Config::ConfigPosRot*>* Field_3_18; // 0xA0
	::System::Collections::Generic::List_1<::Struct_2_F2A7939F5DFF18C1_1>* Field_3_35; // 0xA8
	::Class_2_0206DD479BB5C906* Field_3_5; // 0xB0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_C62B2C2422470B0C*>* Field_3_8; // 0xB8
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::DamageElementType, ::System::Int32>* Field_3_12; // 0xC0
	::Class_2_208CC9941471731A_8* Field_3_2; // 0xC8
	::MoleMole::SkillCharacterScriptConfig* Field_3_3; // 0xD0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_3_37; // 0xD8
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_3_42; // 0xE0
	::System::String* Field_3_22; // 0xE8
	::Class_0_16E4307DCC419505_214* Field_3_1; // 0xF0
	::System::Int32 Field_3_14; // 0xF8
	::MoleMole::Config::EntityType Field_3_0; // 0xFC
	::System::Single Field_3_29; // 0x100
	::System::Single Field_3_30; // 0x104
	::System::Single Field_3_28; // 0x108
	::System::Int32 Field_3_17; // 0x10C
	::System::Int32 Field_3_16; // 0x110
	::System::Boolean Field_3_41; // 0x114
	::System::Boolean Field_3_40; // 0x115
	::System::Boolean Field_3_26; // 0x116
	::System::Boolean Field_3_4; // 0x117
	::System::Boolean Field_3_21; // 0x118
	::System::Boolean Field_3_25; // 0x119
	::System::Boolean Field_3_39; // 0x11A
	::System::Boolean Field_3_34; // 0x11B
	::System::Int32 Field_3_15; // 0x11C
	::System::Boolean Field_3_24; // 0x120
	::System::Boolean Field_3_23; // 0x121
	::System::Single Field_3_27; // 0x124
	::Enum_3_9BDB9B3460BCD57E Field_3_11; // 0x128
	::System::Single Field_3_31; // 0x12C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C0D5B1A036ED00F0__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C0D5B1A036ED00F0__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C0D5B1A036ED00F0_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C0D5B1A036ED00F0_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_D63735FB49794316(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_C0D5B1A036ED00F0_METHOD_3_D63735FB49794316_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_F9E939D4E9AAE0E2(::Class_2_208CC9941471731A_996* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_996*))((::PBYTE)hIl2Cpp + CLASS_3_C0D5B1A036ED00F0_METHOD_3_F9E939D4E9AAE0E2_OFFSET))(this, a1);
	}

	::MoleMole::Config::InlevelCameraState Method_3_20ACDE8068764F23()
	{
		return ((::MoleMole::Config::InlevelCameraState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C0D5B1A036ED00F0_METHOD_3_20ACDE8068764F23_OFFSET))(this);
	}

	::System::Single Method_3_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C0D5B1A036ED00F0_METHOD_3_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Boolean Method_3_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C0D5B1A036ED00F0_METHOD_3_F0E307B84478A272_OFFSET))(this);
	}

	::System::Void Method_3_C621B85C09719AD2(::Class_0_16E4307DCC419505_214* a1, ::MoleMole::SkillCharacterScriptConfig* a2, ::System::Boolean a3, ::Class_2_208CC9941471731A_8* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_214*, ::MoleMole::SkillCharacterScriptConfig*, ::System::Boolean, ::Class_2_208CC9941471731A_8*))((::PBYTE)hIl2Cpp + CLASS_3_C0D5B1A036ED00F0_METHOD_3_C621B85C09719AD2_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_96E3159279ADB646(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_C0D5B1A036ED00F0_METHOD_3_96E3159279ADB646_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_8F059A365E90744C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C0D5B1A036ED00F0_METHOD_3_8F059A365E90744C_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C0D5B1A036ED00F0_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Single Method_3_FF7B2911BBACA4A9_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C0D5B1A036ED00F0_METHOD_3_FF7B2911BBACA4A9_1_OFFSET))(this);
	}

	::System::Single Method_3_FF7B2911BBACA4A9_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C0D5B1A036ED00F0_METHOD_3_FF7B2911BBACA4A9_2_OFFSET))(this);
	}

	::System::Single Method_3_FF7B2911BBACA4A9_3()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C0D5B1A036ED00F0_METHOD_3_FF7B2911BBACA4A9_3_OFFSET))(this);
	}

	::System::Boolean Method_3_8E1799689C0F60E2(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_C0D5B1A036ED00F0_METHOD_3_8E1799689C0F60E2_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C0D5B1A036ED00F0_METHOD_3_1808E1CF7A125519_OFFSET))(this);
	}

	static ::Class_3_C0D5B1A036ED00F0* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_C0D5B1A036ED00F0*(*)())((::PBYTE)hIl2Cpp + CLASS_3_C0D5B1A036ED00F0_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C0D5B1A036ED00F0_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Single Method_3_1FDE3BA9363A99B1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C0D5B1A036ED00F0_METHOD_3_1FDE3BA9363A99B1_OFFSET))(this);
	}

	::System::Boolean Method_3_3845AD389B8E1E47()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C0D5B1A036ED00F0_METHOD_3_3845AD389B8E1E47_OFFSET))(this);
	}

	::System::Single Method_3_98121C0EE45630C0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C0D5B1A036ED00F0_METHOD_3_98121C0EE45630C0_OFFSET))(this);
	}

	::System::Void Method_3_14045882BC5C6CA9(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_C0D5B1A036ED00F0_METHOD_3_14045882BC5C6CA9_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_77577333B4681208()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C0D5B1A036ED00F0_METHOD_3_77577333B4681208_OFFSET))(this);
	}
};
