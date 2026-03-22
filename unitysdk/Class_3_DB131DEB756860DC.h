#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_DB131DEB756860DC_Struct_2_F7C243F317D8E44A_2.h"
#include "unitysdk/Enum_3_01BE6AEDF4C525EC.h"
#include "unitysdk/Enum_3_43F0D7493182CAAC.h"
#include "unitysdk/Enum_3_7BE7A0D08355D16D.h"
#include "unitysdk/Enum_3_B3E208AA3A944E42.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_1_8289F2785D9AA990;
class Class_1_B7637CFF22586878;
class Class_2_14986121AA61AD99;
class Class_3_28271F07DD4A0D2E_3;
class Class_3_A084F32577FD196A;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityAnimEvent; }
namespace MoleMole::MonoEffectContrllerModule { class MonoEffectPluginController_Class_1_E5308BE9EEBA8B55; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define CLASS_3_DB131DEB756860DC_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xA112FF0)
#define CLASS_3_DB131DEB756860DC_METHOD_3_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xA114730)
#define CLASS_3_DB131DEB756860DC_METHOD_3_1B8E3398489047B6_OFFSET UNITYSDK_OFFSET(0xA1136B0)
#define CLASS_3_DB131DEB756860DC_METHOD_3_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0xA113920)
#define CLASS_3_DB131DEB756860DC_METHOD_3_1D4018D4200358D0_2_OFFSET UNITYSDK_OFFSET(0xA1146B0)
#define CLASS_3_DB131DEB756860DC_METHOD_3_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xA1137D0)
#define CLASS_3_DB131DEB756860DC_METHOD_3_1DABFF6E9BF0807C_OFFSET UNITYSDK_OFFSET(0xA114830)
#define CLASS_3_DB131DEB756860DC_METHOD_3_35EA095E1AFDD9C8_1_OFFSET UNITYSDK_OFFSET(0xA113600)
#define CLASS_3_DB131DEB756860DC_METHOD_3_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0xA1134D0)
#define CLASS_3_DB131DEB756860DC_METHOD_3_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0xA1135F0)
#define CLASS_3_DB131DEB756860DC_METHOD_3_53C3816B62869547_1_OFFSET UNITYSDK_OFFSET(0xA114630)
#define CLASS_3_DB131DEB756860DC_METHOD_3_53C3816B62869547_OFFSET UNITYSDK_OFFSET(0xA113870)
#define CLASS_3_DB131DEB756860DC_METHOD_3_6F4D6B72A1BA6DB1_OFFSET UNITYSDK_OFFSET(0xA113A40)
#define CLASS_3_DB131DEB756860DC_METHOD_3_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0xA113450)
#define CLASS_3_DB131DEB756860DC_METHOD_3_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xA113570)
#define CLASS_3_DB131DEB756860DC_METHOD_3_99A99487F3F93C93_OFFSET UNITYSDK_OFFSET(0xA1133D0)
#define CLASS_3_DB131DEB756860DC_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xA114530)
#define CLASS_3_DB131DEB756860DC_METHOD_3_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0xA1136A0)
#define CLASS_3_DB131DEB756860DC_METHOD_3_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0xA1139B0)
#define CLASS_3_DB131DEB756860DC_METHOD_3_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0xA113A30)
#define CLASS_3_DB131DEB756860DC_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0xA1139A0)
#define CLASS_3_DB131DEB756860DC_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0xA114590)
#define CLASS_3_DB131DEB756860DC_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xA113860)
#define CLASS_3_DB131DEB756860DC_METHOD_3_F0E307B84478A272_1_OFFSET UNITYSDK_OFFSET(0xA1149E0)
#define CLASS_3_DB131DEB756860DC_METHOD_3_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0xA1138F0)
#define CLASS_3_DB131DEB756860DC_METHOD_3_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0xA1147B0)
#define CLASS_3_DB131DEB756860DC_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xA1128D0)
#define CLASS_3_DB131DEB756860DC__CCTOR_OFFSET UNITYSDK_OFFSET(0xA113050)
#define CLASS_3_DB131DEB756860DC__CTOR_OFFSET UNITYSDK_OFFSET(0xA1130E0)

inline static constexpr unsigned int Class_3_DB131DEB756860DC_TypeDefinitionIndex = 56486;

class Class_3_DB131DEB756860DC : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	static ::System::Single* StaticGet_Field_3_1()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_DB131DEB756860DC_TypeDefinitionIndex)->GetStaticField(0x102E0);
	}
	static ::System::Int32* StaticGet_Field_3_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_DB131DEB756860DC_TypeDefinitionIndex)->GetStaticField(0x102E4);
	}
	// static const ::System::Int32 Field_3_67 = 0xB; // 0x0
	::MoleMole::Config::ConfigEntityAnimEvent* Field_3_63; // 0x48
	::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* Field_3_66; // 0x50
	::System::Collections::Generic::HashSet_1<::UnityEngine::Collider*>* Field_3_60; // 0x58
	::MoleMole::EntityHandle Field_3_54; // 0x60
	::MoleMole::Config::ConfigEntityAnimEvent* Field_3_50; // 0x70
	::MoleMole::Config::ConfigEntityAnimEvent* Field_3_15; // 0x78
	::System::String* Field_3_16; // 0x80
	::Class_2_14986121AA61AD99* Field_3_18; // 0x88
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_3_57; // 0x90
	::Class_3_A084F32577FD196A* Field_3_55; // 0x98
	::System::String* Field_3_19; // 0xA0
	::System::String* Field_3_51; // 0xA8
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_3_13; // 0xB0
	::System::Collections::Generic::Dictionary_2<::MoleMole::Battle::Entity*, ::System::Single>* Field_3_11; // 0xB8
	::System::Collections::Generic::HashSet_1<::MoleMole::EntityHandle>* Field_3_59; // 0xC0
	::Class_1_8289F2785D9AA990* Field_3_6; // 0xC8
	::Class_3_28271F07DD4A0D2E_3* Field_3_17; // 0xD0
	::MoleMole::Config::ConfigEntityAnimEvent* Field_3_62; // 0xD8
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_DB131DEB756860DC_Struct_2_F7C243F317D8E44A_2>* Field_3_12; // 0xE0
	::System::Collections::Generic::List_1<::Class_1_B7637CFF22586878*>* Field_3_56; // 0xE8
	::Class_1_8289F2785D9AA990* Field_3_5; // 0xF0
	::MoleMole::Battle::Entity* Field_3_2; // 0xF8
	::MoleMole::Config::EntityType Field_3_4; // 0x100
	::System::Int32 Field_3_34; // 0x104
	::System::Int32 Field_3_30; // 0x108
	::System::Int32 Field_3_29; // 0x10C
	::System::Int32 Field_3_9; // 0x110
	::System::Int32 Field_3_26; // 0x114
	::System::Boolean Field_3_42; // 0x118
	::System::Boolean Field_3_52; // 0x119
	::System::UInt32 Field_3_21; // 0x11C
	::System::Int32 Field_3_32; // 0x120
	::MoleMole::Config::CampType Field_3_20; // 0x124
	::System::Boolean Field_3_24; // 0x128
	::System::Boolean Field_3_39; // 0x129
	::System::Boolean Field_3_37; // 0x12A
	::System::Boolean Field_3_58; // 0x12B
	::Enum_3_43F0D7493182CAAC Field_3_65; // 0x12C
	::System::Int32 Field_3_48; // 0x130
	::System::Int32 Field_3_45; // 0x134
	::System::Boolean Field_3_44; // 0x138
	::System::Boolean Field_3_43; // 0x139
	::System::Boolean Field_3_38; // 0x13A
	::System::Boolean Field_3_36; // 0x13B
	::System::Int32 Field_3_46; // 0x13C
	::System::Int32 Field_3_31; // 0x140
	::System::Int32 Field_3_28; // 0x144
	::System::Single Field_3_10; // 0x148
	::System::Int32 Field_3_27; // 0x14C
	::System::Int32 Field_3_64; // 0x150
	::System::Int32 Field_3_25; // 0x154
	::System::Single Field_3_23; // 0x158
	::System::Int32 Field_3_47; // 0x15C
	::System::Int32 Field_3_33; // 0x160
	::System::UInt32 Field_3_3; // 0x164
	::Enum_3_01BE6AEDF4C525EC Field_3_8; // 0x168
	::System::UInt32 Field_3_22; // 0x16C
	::Enum_3_7BE7A0D08355D16D Field_3_49; // 0x170
	::System::Int32 Field_3_35; // 0x174
	::System::Single Field_3_7; // 0x178
	::System::Boolean Field_3_53; // 0x17C
	::System::Boolean Field_3_41; // 0x17D
	::System::Boolean Field_3_61; // 0x17E
	::System::Boolean Field_3_40; // 0x17F
	::Enum_3_B3E208AA3A944E42 Field_3_14; // 0x180

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_DB131DEB756860DC__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB131DEB756860DC__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB131DEB756860DC_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB131DEB756860DC_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_99A99487F3F93C93(::Enum_3_43F0D7493182CAAC a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_43F0D7493182CAAC, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_DB131DEB756860DC_METHOD_3_99A99487F3F93C93_OFFSET))(this, a1, a2);
	}

	::System::String* Method_3_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB131DEB756860DC_METHOD_3_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::String* Method_3_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB131DEB756860DC_METHOD_3_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::System::Int32 Method_3_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB131DEB756860DC_METHOD_3_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Void Method_3_3DACC45AC8150727(::Enum_3_43F0D7493182CAAC a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_43F0D7493182CAAC))((::PBYTE)hIl2Cpp + CLASS_3_DB131DEB756860DC_METHOD_3_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::String* Method_3_35EA095E1AFDD9C8_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB131DEB756860DC_METHOD_3_35EA095E1AFDD9C8_1_OFFSET))(this);
	}

	::Enum_3_43F0D7493182CAAC Method_3_A96DCA30C6927810()
	{
		return ((::Enum_3_43F0D7493182CAAC(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB131DEB756860DC_METHOD_3_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_3_1B8E3398489047B6(::Class_3_28271F07DD4A0D2E_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_28271F07DD4A0D2E_3*))((::PBYTE)hIl2Cpp + CLASS_3_DB131DEB756860DC_METHOD_3_1B8E3398489047B6_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB131DEB756860DC_METHOD_3_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB131DEB756860DC_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::MoleMole::Config::ConfigEntityAnimEvent* Method_3_53C3816B62869547()
	{
		return ((::MoleMole::Config::ConfigEntityAnimEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB131DEB756860DC_METHOD_3_53C3816B62869547_OFFSET))(this);
	}

	::System::Boolean Method_3_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB131DEB756860DC_METHOD_3_F0E307B84478A272_OFFSET))(this);
	}

	::System::Boolean Method_3_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB131DEB756860DC_METHOD_3_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB131DEB756860DC_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::UInt32 Method_3_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB131DEB756860DC_METHOD_3_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::Void Method_3_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_DB131DEB756860DC_METHOD_3_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Void Method_3_6F4D6B72A1BA6DB1(::MoleMole::Battle::Entity* a1, ::System::Single a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::Enum_3_B3E208AA3A944E42 a7, ::Enum_3_01BE6AEDF4C525EC a8, ::System::Int32 a9, ::System::Single a10, ::Enum_3_7BE7A0D08355D16D a11, ::System::Boolean a12, ::System::Boolean a13, ::System::Boolean a14, ::System::Boolean a15, ::MoleMole::Config::ConfigEntityAnimEvent* a16, ::MoleMole::Config::ConfigEntityAnimEvent* a17, ::System::String* a18, ::System::String* a19, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* a20, ::System::Collections::Generic::List_1<::System::String*>* a21, ::System::Collections::Generic::IList_1<::MoleMole::EntityHandle>* a22, ::System::Boolean a23)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::Enum_3_B3E208AA3A944E42, ::Enum_3_01BE6AEDF4C525EC, ::System::Int32, ::System::Single, ::Enum_3_7BE7A0D08355D16D, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::MoleMole::Config::ConfigEntityAnimEvent*, ::MoleMole::Config::ConfigEntityAnimEvent*, ::System::String*, ::System::String*, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::IList_1<::MoleMole::EntityHandle>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_DB131DEB756860DC_METHOD_3_6F4D6B72A1BA6DB1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB131DEB756860DC_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_DB131DEB756860DC* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_DB131DEB756860DC*(*)())((::PBYTE)hIl2Cpp + CLASS_3_DB131DEB756860DC_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::MoleMole::Config::ConfigEntityAnimEvent* Method_3_53C3816B62869547_1()
	{
		return ((::MoleMole::Config::ConfigEntityAnimEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB131DEB756860DC_METHOD_3_53C3816B62869547_1_OFFSET))(this);
	}

	::System::Boolean Method_3_1D4018D4200358D0_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB131DEB756860DC_METHOD_3_1D4018D4200358D0_2_OFFSET))(this);
	}

	::System::Boolean Method_3_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB131DEB756860DC_METHOD_3_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Single Method_3_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB131DEB756860DC_METHOD_3_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Void Method_3_1DABFF6E9BF0807C(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_DB131DEB756860DC_METHOD_3_1DABFF6E9BF0807C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_F0E307B84478A272_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB131DEB756860DC_METHOD_3_F0E307B84478A272_1_OFFSET))(this);
	}
};
