#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_816015CAFD8353F7_Enum_3_0B84E5DBBA1CA2B0.h"
#include "unitysdk/Enum_3_B7E66D8760FABD1A.h"
#include "unitysdk/Enum_3_C2761E57EE0B71AF.h"
#include "unitysdk/Enum_3_C6C58EFCBBBAFDFC.h"
#include "unitysdk/Enum_3_D2BFB44AC6DE1FD1.h"
#include "unitysdk/MoleMole/Config/AidAttackType.h"
#include "unitysdk/Struct_2_5887222B9AE38D34_2.h"
#include "unitysdk/Struct_2_A80C7074D9B7D776.h"
#include "unitysdk/Struct_2_D18F1D061EEF5E67_1.h"
#include "unitysdk/Struct_2_F2A7939F5DFF18C1.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_8289F2785D9AA990;
class Class_1_BBDCDD7F93208E26;
class Class_2_173A804088F98FDA;
namespace MoleMole::Battle { class AnimatorParamControl; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class BoxCollider; }

#define CLASS_3_816015CAFD8353F7_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xB801A80)
#define CLASS_3_816015CAFD8353F7_METHOD_3_1808E1CF7A125519_1_OFFSET UNITYSDK_OFFSET(0xB802760)
#define CLASS_3_816015CAFD8353F7_METHOD_3_1808E1CF7A125519_2_OFFSET UNITYSDK_OFFSET(0xB803440)
#define CLASS_3_816015CAFD8353F7_METHOD_3_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xB802BD0)
#define CLASS_3_816015CAFD8353F7_METHOD_3_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0xB8034D0)
#define CLASS_3_816015CAFD8353F7_METHOD_3_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xB8023C0)
#define CLASS_3_816015CAFD8353F7_METHOD_3_2E47F09A457E7E05_OFFSET UNITYSDK_OFFSET(0xB803C60)
#define CLASS_3_816015CAFD8353F7_METHOD_3_52FB29FB5E593F19_OFFSET UNITYSDK_OFFSET(0xB803430)
#define CLASS_3_816015CAFD8353F7_METHOD_3_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0xB803550)
#define CLASS_3_816015CAFD8353F7_METHOD_3_5EAB2C5E0D76A6B7_OFFSET UNITYSDK_OFFSET(0xB802910)
#define CLASS_3_816015CAFD8353F7_METHOD_3_83F9AA70898125AA_OFFSET UNITYSDK_OFFSET(0xB802C60)
#define CLASS_3_816015CAFD8353F7_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xB802D10)
#define CLASS_3_816015CAFD8353F7_METHOD_3_A9805CA46D68009E_OFFSET UNITYSDK_OFFSET(0xB802E80)
#define CLASS_3_816015CAFD8353F7_METHOD_3_BFBBE8A6FE167A6A_OFFSET UNITYSDK_OFFSET(0xB803030)
#define CLASS_3_816015CAFD8353F7_METHOD_3_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0xB803C50)
#define CLASS_3_816015CAFD8353F7_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0xB8031E0)
#define CLASS_3_816015CAFD8353F7_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0xB803280)
#define CLASS_3_816015CAFD8353F7_METHOD_3_DB2B44FABAA6A6B5_OFFSET UNITYSDK_OFFSET(0xB802320)
#define CLASS_3_816015CAFD8353F7_METHOD_3_DB7BBBE46B17C2F3_OFFSET UNITYSDK_OFFSET(0xB803560)
#define CLASS_3_816015CAFD8353F7_METHOD_3_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0xB802AA0)
#define CLASS_3_816015CAFD8353F7_METHOD_3_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0xB802BC0)
#define CLASS_3_816015CAFD8353F7_METHOD_3_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0xB8027F0)
#define CLASS_3_816015CAFD8353F7_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xB802310)
#define CLASS_3_816015CAFD8353F7_METHOD_3_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0xB8031F0)
#define CLASS_3_816015CAFD8353F7_METHOD_3_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0xB802730)
#define CLASS_3_816015CAFD8353F7_METHOD_3_FC21B103930CA6DE_OFFSET UNITYSDK_OFFSET(0xB802440)
#define CLASS_3_816015CAFD8353F7_METHOD_3_FE3C2A09ADE8A2F8_OFFSET UNITYSDK_OFFSET(0xB803320)
#define CLASS_3_816015CAFD8353F7_METHOD_3_FF7B2911BBACA4A9_1_OFFSET UNITYSDK_OFFSET(0xB802800)
#define CLASS_3_816015CAFD8353F7_METHOD_3_FF7B2911BBACA4A9_2_OFFSET UNITYSDK_OFFSET(0xB802AB0)
#define CLASS_3_816015CAFD8353F7_METHOD_3_FF7B2911BBACA4A9_3_OFFSET UNITYSDK_OFFSET(0xB802D70)
#define CLASS_3_816015CAFD8353F7_METHOD_3_FF7B2911BBACA4A9_4_OFFSET UNITYSDK_OFFSET(0xB8030D0)
#define CLASS_3_816015CAFD8353F7_METHOD_3_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0xB802200)
#define CLASS_3_816015CAFD8353F7_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xB8011D0)
#define CLASS_3_816015CAFD8353F7__CCTOR_OFFSET UNITYSDK_OFFSET(0xB801AE0)
#define CLASS_3_816015CAFD8353F7__CTOR_OFFSET UNITYSDK_OFFSET(0xB801BB0)

inline static constexpr unsigned int Class_3_816015CAFD8353F7_TypeDefinitionIndex = 43409;

class Class_3_816015CAFD8353F7 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	static ::System::String** StaticGet_Field_3_65()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_3_816015CAFD8353F7_TypeDefinitionIndex)->GetStaticField(0x2AA50);
	}
	static ::Il2CppArray<::UnityEngine::BoxCollider*>** StaticGet_Field_3_3()
	{
		return (::Il2CppArray<::UnityEngine::BoxCollider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_816015CAFD8353F7_TypeDefinitionIndex)->GetStaticField(0x2AA58);
	}
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_Field_3_2()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_816015CAFD8353F7_TypeDefinitionIndex)->GetStaticField(0x2AA60);
	}
	static ::UnityEngine::RaycastHit* StaticGet_Field_3_1()
	{
		return (::UnityEngine::RaycastHit*)Il2CppClass::FromTypeDefinitionIndex(Class_3_816015CAFD8353F7_TypeDefinitionIndex)->GetStaticField(0x9740);
	}
	// static const ::System::String* Field_3_0; // 0x0
	// static const ::System::Int32 Field_3_88 = 0x71; // 0x0
	::System::Collections::Generic::List_1<::Struct_2_D18F1D061EEF5E67_1>* Field_3_67; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Field_3_69; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_3_61; // 0x58
	::System::Collections::Generic::List_1<::Struct_2_5887222B9AE38D34_2>* Field_3_54; // 0x60
	::System::Collections::Generic::List_1<::Class_1_BBDCDD7F93208E26*>* Field_3_56; // 0x68
	::Class_1_8289F2785D9AA990* Field_3_4; // 0x70
	::System::Collections::Generic::List_1<::Struct_2_F2A7939F5DFF18C1>* Field_3_66; // 0x78
	::System::Collections::Generic::List_1<::System::String*>* Field_3_78; // 0x80
	::MoleMole::Battle::AnimatorParamControl* Field_3_22; // 0x88
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_3_60; // 0x90
	::Class_1_8289F2785D9AA990* Field_3_46; // 0x98
	::Class_1_8289F2785D9AA990* Field_3_47; // 0xA0
	::System::String* Field_3_77; // 0xA8
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Struct_2_A80C7074D9B7D776>* Field_3_62; // 0xB0
	::System::Collections::Generic::List_1<::Class_1_BBDCDD7F93208E26*>* Field_3_58; // 0xB8
	::System::Action_1<::Class_3_816015CAFD8353F7_Enum_3_0B84E5DBBA1CA2B0>* Field_3_76; // 0xC0
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* Field_3_26; // 0xC8
	::System::Collections::Generic::List_1<::Class_1_BBDCDD7F93208E26*>* Field_3_57; // 0xD0
	::Class_1_8289F2785D9AA990* Field_3_45; // 0xD8
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* Field_3_27; // 0xE0
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_3_39; // 0xE8
	::MoleMole::Config::ConfigPosRot* Field_3_19; // 0xF0
	::System::Collections::Generic::List_1<::System::String*>* Field_3_64; // 0xF8
	::Class_1_8289F2785D9AA990* Field_3_80; // 0x100
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_3_59; // 0x108
	::Class_1_BBDCDD7F93208E26* Field_3_55; // 0x110
	::System::Action_2<::System::Int32, ::System::Int32>* Field_3_43; // 0x118
	::System::Collections::Generic::List_1<::System::String*>* Field_3_41; // 0x120
	::System::Collections::Generic::Dictionary_2<::Enum_3_D2BFB44AC6DE1FD1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*>* Field_3_9; // 0x128
	::System::String* Field_3_16; // 0x130
	::Class_1_8289F2785D9AA990* Field_3_44; // 0x138
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_3_40; // 0x140
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_3_38; // 0x148
	::MoleMole::Battle::AnimatorParamControl* Field_3_23; // 0x150
	::System::Collections::Generic::List_1<::Class_2_173A804088F98FDA*>* Field_3_87; // 0x158
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* Field_3_68; // 0x160
	::System::String* Field_3_21; // 0x168
	::MoleMole::Config::ConfigPosRot* Field_3_15; // 0x170
	::System::Boolean Field_3_18; // 0x178
	::System::Boolean Field_3_73; // 0x179
	::System::Boolean Field_3_83; // 0x17A
	::System::Boolean Field_3_13; // 0x17B
	::Enum_3_C6C58EFCBBBAFDFC Field_3_81; // 0x17C
	::System::Single Field_3_8; // 0x180
	::System::Single Field_3_30; // 0x184
	::System::Single Field_3_74; // 0x188
	::System::Single Field_3_72; // 0x18C
	::System::Int32 Field_3_6; // 0x190
	::System::Int32 Field_3_29; // 0x194
	::System::Single Field_3_7; // 0x198
	::System::Boolean Field_3_85; // 0x19C
	::System::Boolean Field_3_86; // 0x19D
	::System::Boolean Field_3_48; // 0x19E
	::System::Boolean Field_3_33; // 0x19F
	::System::UInt32 Field_3_79; // 0x1A0
	::Enum_3_C2761E57EE0B71AF Field_3_32; // 0x1A4
	::System::Single Field_3_31; // 0x1A8
	::System::Single Field_3_17; // 0x1AC
	::System::Single Field_3_5; // 0x1B0
	::MoleMole::Config::AidAttackType Field_3_34; // 0x1B4
	::System::Int32 Field_3_70; // 0x1B8
	::UnityEngine::Vector3 Field_3_20; // 0x1BC
	::System::UInt32 Field_3_82; // 0x1C8
	::System::UInt32 Field_3_84; // 0x1CC
	::System::Single Field_3_53; // 0x1D0
	::System::Int32 Field_3_24; // 0x1D4
	::System::Int32 Field_3_28; // 0x1D8
	::System::Int32 Field_3_25; // 0x1DC
	::System::Single Field_3_14; // 0x1E0
	::System::Boolean Field_3_11; // 0x1E4
	::System::Boolean Field_3_37; // 0x1E5
	::System::Boolean Field_3_50; // 0x1E6
	::System::Boolean Field_3_36; // 0x1E7
	::System::Boolean Field_3_52; // 0x1E8
	::System::Boolean Field_3_63; // 0x1E9
	::System::Int32 Field_3_10; // 0x1EC
	::System::Single Field_3_12; // 0x1F0
	::Enum_3_B7E66D8760FABD1A Field_3_35; // 0x1F4
	::System::Int32 Field_3_42; // 0x1F8
	::System::Int32 Field_3_71; // 0x1FC
	::System::Single Field_3_49; // 0x200
	::Class_3_816015CAFD8353F7_Enum_3_0B84E5DBBA1CA2B0 Field_3_75; // 0x204
	::System::Single Field_3_51; // 0x208

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_GETCLASSID_OFFSET))(this);
	}

	::System::Single Method_3_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Single Method_3_DB2B44FABAA6A6B5()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_DB2B44FABAA6A6B5_OFFSET))(this);
	}

	::System::Boolean Method_3_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_3_FC21B103930CA6DE(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_FC21B103930CA6DE_OFFSET))(this, a1);
	}

	::System::Single Method_3_FF7B2911BBACA4A9_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_FF7B2911BBACA4A9_1_OFFSET))(this);
	}

	::System::Void Method_3_5EAB2C5E0D76A6B7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_5EAB2C5E0D76A6B7_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Single Method_3_FF7B2911BBACA4A9_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_FF7B2911BBACA4A9_2_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Boolean Method_3_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_3_83F9AA70898125AA(::Class_3_816015CAFD8353F7_Enum_3_0B84E5DBBA1CA2B0 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_816015CAFD8353F7_Enum_3_0B84E5DBBA1CA2B0))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_83F9AA70898125AA_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Single Method_3_FF7B2911BBACA4A9_3()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_FF7B2911BBACA4A9_3_OFFSET))(this);
	}

	::System::Boolean Method_3_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_F0E307B84478A272_OFFSET))(this);
	}

	::System::Boolean Method_3_1808E1CF7A125519_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_1808E1CF7A125519_1_OFFSET))(this);
	}

	::System::Void Method_3_A9805CA46D68009E(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_A9805CA46D68009E_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_BFBBE8A6FE167A6A()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_BFBBE8A6FE167A6A_OFFSET))(this);
	}

	::System::Single Method_3_FF7B2911BBACA4A9_4()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_FF7B2911BBACA4A9_4_OFFSET))(this);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Int32 Method_3_F026F9F94BAA5E1F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_F026F9F94BAA5E1F_OFFSET))(this);
	}

	static ::Class_3_816015CAFD8353F7* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_816015CAFD8353F7*(*)())((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::MoleMole::Config::ConfigPosRot* Method_3_FE3C2A09ADE8A2F8()
	{
		return ((::MoleMole::Config::ConfigPosRot*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_FE3C2A09ADE8A2F8_OFFSET))(this);
	}

	::Class_3_816015CAFD8353F7_Enum_3_0B84E5DBBA1CA2B0 Method_3_52FB29FB5E593F19()
	{
		return ((::Class_3_816015CAFD8353F7_Enum_3_0B84E5DBBA1CA2B0(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_52FB29FB5E593F19_OFFSET))(this);
	}

	::System::Boolean Method_3_1808E1CF7A125519_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_1808E1CF7A125519_2_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_F0088C88851A7DFB_3_OFFSET))(this);
	}

	::System::Boolean Method_3_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Single Method_3_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_5323F2DF46A044DA_OFFSET))(this);
	}

	::Class_3_816015CAFD8353F7* Method_3_DB7BBBE46B17C2F3()
	{
		return ((::Class_3_816015CAFD8353F7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_DB7BBBE46B17C2F3_OFFSET))(this);
	}

	::System::Int32 Method_3_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::Void Method_3_2E47F09A457E7E05(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_2E47F09A457E7E05_OFFSET))(this, a1);
	}
};
