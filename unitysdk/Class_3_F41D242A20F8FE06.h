#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Enum_3_1458C7B62FA3FC72.h"
#include "unitysdk/MoleMole/Battle/AbilityEventMaskList_1.h"
#include "unitysdk/MoleMole/Config/BuffGroupName.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_3A83F3B65F412502.h"
#include "unitysdk/Struct_2_4C8453486C91E3A1_11.h"
#include "unitysdk/Struct_2_CD17D37138E13AA3.h"
#include "unitysdk/Struct_2_DEEA0ABDF25E6D55.h"

class Class_1_41557767124BA48C;
class Class_1_5CAB9AA46D466E98;
class Class_1_61587F018E03A222;
class Class_1_7F58229BE40473D2;
class Class_1_8289F2785D9AA990;
class Class_1_87283A6158188D15;
class Class_1_939F4CF9E3ADB3C5;
class Class_1_B7E341C5F1A6F199;
class Class_2_0206DD479BB5C906;
class Class_2_14986121AA61AD99;
class Class_2_8CAD669444D1F6DE;
class Class_2_EA1C4A1A308E269F;
class Class_2_ED3A4C9D24155278;
namespace MoleMole { template <typename T1, typename T2, typename T3> class ThreeDiffValue_3; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityAttackProperty; }
namespace MoleMole::Config { class ConfigHitEffect; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Tuple_4; }
namespace System { template <typename T1, typename T2, typename T3> class Tuple_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_1_B1329E63DD5C289B;

#define CLASS_3_F41D242A20F8FE06_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x9D10B90)
#define CLASS_3_F41D242A20F8FE06_METHOD_3_24C7A1D76381B35D_OFFSET UNITYSDK_OFFSET(0x9D117D0)
#define CLASS_3_F41D242A20F8FE06_METHOD_3_283228DCA08F69C7_OFFSET UNITYSDK_OFFSET(0x9D128F0)
#define CLASS_3_F41D242A20F8FE06_METHOD_3_3D78D2E0F9F95F07_OFFSET UNITYSDK_OFFSET(0x9D115C0)
#define CLASS_3_F41D242A20F8FE06_METHOD_3_3ED63ACB246FDFAE_1_OFFSET UNITYSDK_OFFSET(0x9D11A00)
#define CLASS_3_F41D242A20F8FE06_METHOD_3_3ED63ACB246FDFAE_OFFSET UNITYSDK_OFFSET(0x9D11670)
#define CLASS_3_F41D242A20F8FE06_METHOD_3_6AB1B76F40F49C93_OFFSET UNITYSDK_OFFSET(0x9D11B60)
#define CLASS_3_F41D242A20F8FE06_METHOD_3_9891F66946E94FFC_OFFSET UNITYSDK_OFFSET(0x9D12AA0)
#define CLASS_3_F41D242A20F8FE06_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x9D122A0)
#define CLASS_3_F41D242A20F8FE06_METHOD_3_B9EC3F44C1BFC5EF_1_OFFSET UNITYSDK_OFFSET(0x9D129F0)
#define CLASS_3_F41D242A20F8FE06_METHOD_3_B9EC3F44C1BFC5EF_OFFSET UNITYSDK_OFFSET(0x9D11890)
#define CLASS_3_F41D242A20F8FE06_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x9D115B0)
#define CLASS_3_F41D242A20F8FE06_METHOD_3_CB613A5EF970C11B_OFFSET UNITYSDK_OFFSET(0x9D11940)
#define CLASS_3_F41D242A20F8FE06_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x9D115D0)
#define CLASS_3_F41D242A20F8FE06_METHOD_3_D5959613025900E6_OFFSET UNITYSDK_OFFSET(0x9D12300)
#define CLASS_3_F41D242A20F8FE06_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x9D11880)
#define CLASS_3_F41D242A20F8FE06_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x9D0FA00)
#define CLASS_3_F41D242A20F8FE06__CCTOR_OFFSET UNITYSDK_OFFSET(0x9D10BF0)
#define CLASS_3_F41D242A20F8FE06__CTOR_OFFSET UNITYSDK_OFFSET(0x9D10C70)

inline static constexpr unsigned int Class_3_F41D242A20F8FE06_TypeDefinitionIndex = 78733;

class Class_3_F41D242A20F8FE06 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_59 = 0x4; // 0x0
	::System::Collections::Generic::List_1<::Class_1_5CAB9AA46D466E98*>* Field_3_4; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_4C8453486C91E3A1_11>* Field_3_58; // 0x50
	::System::Collections::Generic::List_1<::System::Tuple_4<::Class_2_8CAD669444D1F6DE*, ::Class_1_8289F2785D9AA990*, ::Class_1_41557767124BA48C*, ::Class_1_61587F018E03A222*>*>* Field_3_19; // 0x58
	::System::Action_1<::System::String*>* Field_3_49; // 0x60
	::Class_2_0206DD479BB5C906* Field_3_43; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Field_3_29; // 0x70
	::System::Collections::Generic::List_1<::Class_2_14986121AA61AD99*>* Field_3_10; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*>* Field_3_24; // 0x80
	::Struct_2_DEEA0ABDF25E6D55 Field_3_57; // 0x88
	::System::Collections::Generic::List_1<::System::Tuple_3<::Class_2_8CAD669444D1F6DE*, ::Class_1_8289F2785D9AA990*, ::Class_1_61587F018E03A222*>*>* Field_3_17; // 0x90
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::EntityHandle>* Field_3_28; // 0x98
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BuffGroupName, ::System::Collections::Generic::List_1<::System::Int32>*>* Field_3_23; // 0xA0
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BuffGroupName, ::MoleMole::Config::ConfigHitEffect*>* Field_3_7; // 0xA8
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_EA1C4A1A308E269F*>* Field_3_20; // 0xB0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_B1329E63DD5C289B<::System::String*>*>* Field_3_16; // 0xB8
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::String*>*>* Field_3_55; // 0xC0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_B1329E63DD5C289B<::System::Int32>*>* Field_3_15; // 0xC8
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_6; // 0xD0
	::System::Collections::Generic::List_1<::Class_2_8CAD669444D1F6DE*>* Field_3_12; // 0xD8
	::System::Collections::Generic::List_1<::Class_2_8CAD669444D1F6DE*>* Field_3_11; // 0xE0
	::Class_1_939F4CF9E3ADB3C5* Field_3_47; // 0xE8
	::System::Action_1<::System::String*>* Field_3_50; // 0xF0
	::System::Collections::Generic::HashSet_1<::Class_2_14986121AA61AD99*>* Field_3_31; // 0xF8
	::MoleMole::Battle::AbilityEventMaskList_1<::Class_2_8CAD669444D1F6DE*> Field_3_3; // 0x100
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_B1329E63DD5C289B<::System::Single>*>* Field_3_13; // 0x138
	::System::Action_1<::System::Int32>* Field_3_51; // 0x140
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ThreeDiffValue_3<::MoleMole::Config::ConfigEntityAttackProperty*, ::System::Int32, ::System::String*>*>* Field_3_44; // 0x148
	::System::Action_1<::Class_2_8CAD669444D1F6DE*>* Field_3_53; // 0x150
	::System::Action_1<::System::Int32>* Field_3_52; // 0x158
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Field_3_21; // 0x160
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::String*>*>* Field_3_54; // 0x168
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_87283A6158188D15*>* Field_3_22; // 0x170
	::Class_2_0206DD479BB5C906* Field_3_34; // 0x178
	::System::Collections::Generic::List_1<::System::Tuple_4<::Class_2_8CAD669444D1F6DE*, ::Class_1_8289F2785D9AA990*, ::Class_1_7F58229BE40473D2*, ::Class_1_61587F018E03A222*>*>* Field_3_18; // 0x180
	::System::Collections::Generic::List_1<::System::String*>* Field_3_25; // 0x188
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_26; // 0x190
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_B1329E63DD5C289B<::System::Boolean>*>* Field_3_14; // 0x198
	::Class_1_939F4CF9E3ADB3C5* Field_3_46; // 0x1A0
	::System::Collections::Generic::List_1<::Class_2_ED3A4C9D24155278*>* Field_3_56; // 0x1A8
	::MoleMole::Battle::AbilityEventMaskList_1<::Class_2_14986121AA61AD99*> Field_3_2; // 0x1B0
	::System::Collections::Generic::Dictionary_2<::Struct_2_CD17D37138E13AA3, ::Class_2_EA1C4A1A308E269F*>* Field_3_27; // 0x1E8
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_3_33; // 0x1F0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::EntityHandle>* Field_3_30; // 0x1F8
	::System::Int32 Field_3_32; // 0x200
	::System::Boolean Field_3_1; // 0x204
	::System::Boolean Field_3_9; // 0x205
	::System::Boolean Field_3_8; // 0x206
	::System::Boolean Field_3_40; // 0x207
	::System::Int32 Field_3_37; // 0x208
	::System::Boolean Field_3_39; // 0x20C
	::System::Boolean Field_3_42; // 0x20D
	::System::Boolean Field_3_41; // 0x20E
	::System::Boolean Field_3_35; // 0x20F
	::System::Int32 Field_3_45; // 0x210
	::System::Boolean Field_3_5; // 0x214
	::System::Boolean Field_3_38; // 0x215
	::Struct_2_3A83F3B65F412502 Field_3_0; // 0x218
	::System::Single Field_3_36; // 0x358
	::System::Int32 Field_3_48; // 0x35C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F41D242A20F8FE06__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F41D242A20F8FE06__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F41D242A20F8FE06_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F41D242A20F8FE06_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F41D242A20F8FE06_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::Struct_2_DEEA0ABDF25E6D55& Method_3_3D78D2E0F9F95F07()
	{
		return ((::Struct_2_DEEA0ABDF25E6D55&(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F41D242A20F8FE06_METHOD_3_3D78D2E0F9F95F07_OFFSET))(this);
	}

	static ::Class_3_F41D242A20F8FE06* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_F41D242A20F8FE06*(*)())((::PBYTE)hIl2Cpp + CLASS_3_F41D242A20F8FE06_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::Enum_3_1458C7B62FA3FC72 Method_3_3ED63ACB246FDFAE(::Class_2_14986121AA61AD99* a1)
	{
		return ((::Enum_3_1458C7B62FA3FC72(*)(::PVOID, ::Class_2_14986121AA61AD99*))((::PBYTE)hIl2Cpp + CLASS_3_F41D242A20F8FE06_METHOD_3_3ED63ACB246FDFAE_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F41D242A20F8FE06_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_3_B9EC3F44C1BFC5EF(::Class_2_14986121AA61AD99* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_14986121AA61AD99*))((::PBYTE)hIl2Cpp + CLASS_3_F41D242A20F8FE06_METHOD_3_B9EC3F44C1BFC5EF_OFFSET))(this, a1);
	}

	::Enum_3_1458C7B62FA3FC72 Method_3_24C7A1D76381B35D(::Struct_2_3A83F3B65F412502& a1)
	{
		return ((::Enum_3_1458C7B62FA3FC72(*)(::PVOID, ::Struct_2_3A83F3B65F412502&))((::PBYTE)hIl2Cpp + CLASS_3_F41D242A20F8FE06_METHOD_3_24C7A1D76381B35D_OFFSET))(this, a1);
	}

	::System::Void Method_3_CB613A5EF970C11B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_F41D242A20F8FE06_METHOD_3_CB613A5EF970C11B_OFFSET))(this, a1);
	}

	::Enum_3_1458C7B62FA3FC72 Method_3_3ED63ACB246FDFAE_1(::Class_2_8CAD669444D1F6DE* a1)
	{
		return ((::Enum_3_1458C7B62FA3FC72(*)(::PVOID, ::Class_2_8CAD669444D1F6DE*))((::PBYTE)hIl2Cpp + CLASS_3_F41D242A20F8FE06_METHOD_3_3ED63ACB246FDFAE_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_6AB1B76F40F49C93(::Struct_2_3A83F3B65F412502& a1, ::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* a2, ::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* a3, ::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* a4, ::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* a5, ::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* a6)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3A83F3B65F412502&, ::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>*, ::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>*, ::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>*, ::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>*, ::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_3_F41D242A20F8FE06_METHOD_3_6AB1B76F40F49C93_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F41D242A20F8FE06_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::Enum_3_1458C7B62FA3FC72 Method_3_D5959613025900E6(::Struct_2_3A83F3B65F412502& a1)
	{
		return ((::Enum_3_1458C7B62FA3FC72(*)(::PVOID, ::Struct_2_3A83F3B65F412502&))((::PBYTE)hIl2Cpp + CLASS_3_F41D242A20F8FE06_METHOD_3_D5959613025900E6_OFFSET))(this, a1);
	}

	::System::Void Method_3_283228DCA08F69C7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_F41D242A20F8FE06_METHOD_3_283228DCA08F69C7_OFFSET))(this, a1);
	}

	::System::Void Method_3_B9EC3F44C1BFC5EF_1(::Class_2_8CAD669444D1F6DE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_8CAD669444D1F6DE*))((::PBYTE)hIl2Cpp + CLASS_3_F41D242A20F8FE06_METHOD_3_B9EC3F44C1BFC5EF_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_9891F66946E94FFC(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* a4, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a5, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* a6, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_3_F41D242A20F8FE06_METHOD_3_9891F66946E94FFC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}
};
