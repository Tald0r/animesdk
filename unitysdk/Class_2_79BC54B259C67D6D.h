#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/MoleMole/Config/BuffGroupName.h"

class Class_1_1CDA382D823F8E80;
class Class_1_30670D995B76EFF5;
class Class_1_55FB143FAD52FF89;
class Class_1_817E737241BDC0A2;
class Class_1_CF48627CAF5E8573;
class Class_2_14986121AA61AD99;
class Class_3_F41D242A20F8FE06;
class Class_3_F97B015544BE936B;
namespace MoleMole { class SkillCharacterScriptConfig; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityAnimEvent; }
namespace MoleMole::Config { class ConfigEntityAttackProperty; }
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_2_79BC54B259C67D6D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x623D400)
#define CLASS_2_79BC54B259C67D6D_METHOD_2_01BEC92F3CDF67C6_OFFSET UNITYSDK_OFFSET(0x623E7C0)
#define CLASS_2_79BC54B259C67D6D_METHOD_2_0F8D6364B34C7195_OFFSET UNITYSDK_OFFSET(0x6243D50)
#define CLASS_2_79BC54B259C67D6D_METHOD_2_18C9879C9C5D4F0B_OFFSET UNITYSDK_OFFSET(0x6242870)
#define CLASS_2_79BC54B259C67D6D_METHOD_2_1FBE1BC317C91624_OFFSET UNITYSDK_OFFSET(0x6241B30)
#define CLASS_2_79BC54B259C67D6D_METHOD_2_28ED4F9D61A20A4C_OFFSET UNITYSDK_OFFSET(0x6241FE0)
#define CLASS_2_79BC54B259C67D6D_METHOD_2_2DFC332AF3EA3B47_OFFSET UNITYSDK_OFFSET(0x6240F10)
#define CLASS_2_79BC54B259C67D6D_METHOD_2_35D2E84278E299F3_OFFSET UNITYSDK_OFFSET(0x62406A0)
#define CLASS_2_79BC54B259C67D6D_METHOD_2_46B847DE7D0F18F6_OFFSET UNITYSDK_OFFSET(0x623EBE0)
#define CLASS_2_79BC54B259C67D6D_METHOD_2_505979F89E070861_1_OFFSET UNITYSDK_OFFSET(0x6241030)
#define CLASS_2_79BC54B259C67D6D_METHOD_2_505979F89E070861_OFFSET UNITYSDK_OFFSET(0x6240400)
#define CLASS_2_79BC54B259C67D6D_METHOD_2_5B0F764397729E59_OFFSET UNITYSDK_OFFSET(0x623E290)
#define CLASS_2_79BC54B259C67D6D_METHOD_2_61DDB8B626D4C8FE_OFFSET UNITYSDK_OFFSET(0x6240570)
#define CLASS_2_79BC54B259C67D6D_METHOD_2_62EB8A8631CE15AC_1_OFFSET UNITYSDK_OFFSET(0x6240950)
#define CLASS_2_79BC54B259C67D6D_METHOD_2_62EB8A8631CE15AC_2_OFFSET UNITYSDK_OFFSET(0x6241EA0)
#define CLASS_2_79BC54B259C67D6D_METHOD_2_62EB8A8631CE15AC_3_OFFSET UNITYSDK_OFFSET(0x6241F40)
#define CLASS_2_79BC54B259C67D6D_METHOD_2_62EB8A8631CE15AC_OFFSET UNITYSDK_OFFSET(0x62409F0)
#define CLASS_2_79BC54B259C67D6D_METHOD_2_6470C29EE6B96237_1_OFFSET UNITYSDK_OFFSET(0x6241CB0)
#define CLASS_2_79BC54B259C67D6D_METHOD_2_6470C29EE6B96237_OFFSET UNITYSDK_OFFSET(0x6241540)
#define CLASS_2_79BC54B259C67D6D_METHOD_2_66A97676FB4B50FC_OFFSET UNITYSDK_OFFSET(0x6243110)
#define CLASS_2_79BC54B259C67D6D_METHOD_2_7A3B606C32BB45E5_OFFSET UNITYSDK_OFFSET(0x6243B70)
#define CLASS_2_79BC54B259C67D6D_METHOD_2_80DA9825FC248417_OFFSET UNITYSDK_OFFSET(0x6241850)
#define CLASS_2_79BC54B259C67D6D_METHOD_2_881DDC7CD8F2F05C_OFFSET UNITYSDK_OFFSET(0x6240A90)
#define CLASS_2_79BC54B259C67D6D_METHOD_2_8A9C6FBD87B4DB57_OFFSET UNITYSDK_OFFSET(0x6243430)
#define CLASS_2_79BC54B259C67D6D_METHOD_2_8BE39AEBE9B3A072_OFFSET UNITYSDK_OFFSET(0x6241700)
#define CLASS_2_79BC54B259C67D6D_METHOD_2_90F114565A141F94_OFFSET UNITYSDK_OFFSET(0x6243280)
#define CLASS_2_79BC54B259C67D6D_METHOD_2_9D0C546A3B6DD1D6_OFFSET UNITYSDK_OFFSET(0x623E8C0)
#define CLASS_2_79BC54B259C67D6D_METHOD_2_A3DBCD6CB0E318DF_OFFSET UNITYSDK_OFFSET(0x623E600)
#define CLASS_2_79BC54B259C67D6D_METHOD_2_BC3A38BA9E6576BD_1_OFFSET UNITYSDK_OFFSET(0x6241D60)
#define CLASS_2_79BC54B259C67D6D_METHOD_2_BC3A38BA9E6576BD_OFFSET UNITYSDK_OFFSET(0x6240810)
#define CLASS_2_79BC54B259C67D6D_METHOD_2_C3DF63E1D727999C_OFFSET UNITYSDK_OFFSET(0x62421C0)
#define CLASS_2_79BC54B259C67D6D_METHOD_2_C6843992E5B2B49B_OFFSET UNITYSDK_OFFSET(0x62415F0)
#define CLASS_2_79BC54B259C67D6D_METHOD_2_C9EA1454E752AD91_1_OFFSET UNITYSDK_OFFSET(0x62425D0)
#define CLASS_2_79BC54B259C67D6D_METHOD_2_C9EA1454E752AD91_OFFSET UNITYSDK_OFFSET(0x6240150)
#define CLASS_2_79BC54B259C67D6D_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x623D3A0)
#define CLASS_2_79BC54B259C67D6D_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x623D340)
#define CLASS_2_79BC54B259C67D6D_METHOD_2_CC7B466FC35141CF_OFFSET UNITYSDK_OFFSET(0x62404F0)
#define CLASS_2_79BC54B259C67D6D_METHOD_2_FC00F58C63A06B2F_OFFSET UNITYSDK_OFFSET(0x6241120)
#define CLASS_2_79BC54B259C67D6D_ONCREATE_OFFSET UNITYSDK_OFFSET(0x623D210)
#define CLASS_2_79BC54B259C67D6D__CTOR_OFFSET UNITYSDK_OFFSET(0x623E430)

inline static constexpr unsigned int Class_2_79BC54B259C67D6D_TypeDefinitionIndex = 78187;

class Class_2_79BC54B259C67D6D : public ::Foundation::SingletonDisposable_1<::Class_2_79BC54B259C67D6D*>
{
public:
	::System::Collections::Generic::Queue_1<::Class_1_CF48627CAF5E8573*>* Field_2_2; // 0x10
	::System::Collections::Generic::Queue_1<::Class_1_55FB143FAD52FF89*>* Field_2_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_55FB143FAD52FF89*>* Field_2_6; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_2_5; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_CF48627CAF5E8573*>*>* Field_2_3; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_CF48627CAF5E8573*>*>* Field_2_4; // 0x38
	::System::UInt32 Field_2_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_79BC54B259C67D6D__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_79BC54B259C67D6D_ONCREATE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_79BC54B259C67D6D_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_79BC54B259C67D6D_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_79BC54B259C67D6D_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_A3DBCD6CB0E318DF(::Class_3_F41D242A20F8FE06* a1, ::Class_3_F97B015544BE936B* a2, ::Class_1_CF48627CAF5E8573* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_3_F97B015544BE936B*, ::Class_1_CF48627CAF5E8573*))((::PBYTE)hIl2Cpp + CLASS_2_79BC54B259C67D6D_METHOD_2_A3DBCD6CB0E318DF_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_C9EA1454E752AD91(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_79BC54B259C67D6D_METHOD_2_C9EA1454E752AD91_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_505979F89E070861(::Class_1_55FB143FAD52FF89* a1, ::Class_3_F41D242A20F8FE06* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_55FB143FAD52FF89*, ::Class_3_F41D242A20F8FE06*))((::PBYTE)hIl2Cpp + CLASS_2_79BC54B259C67D6D_METHOD_2_505979F89E070861_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_CC7B466FC35141CF(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_79BC54B259C67D6D_METHOD_2_CC7B466FC35141CF_OFFSET))(this, a1);
	}

	::System::Void Method_2_35D2E84278E299F3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_79BC54B259C67D6D_METHOD_2_35D2E84278E299F3_OFFSET))(this, a1);
	}

	::System::Void Method_2_BC3A38BA9E6576BD(::Class_1_55FB143FAD52FF89* a1, ::Class_3_F97B015544BE936B* a2, ::MoleMole::Config::ConfigEntityAnimEvent* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_55FB143FAD52FF89*, ::Class_3_F97B015544BE936B*, ::MoleMole::Config::ConfigEntityAnimEvent*))((::PBYTE)hIl2Cpp + CLASS_2_79BC54B259C67D6D_METHOD_2_BC3A38BA9E6576BD_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_55FB143FAD52FF89* Method_2_881DDC7CD8F2F05C(::System::UInt32 a1, ::MoleMole::Config::ConfigEntityAttackProperty* a2, ::Class_2_14986121AA61AD99* a3, ::System::String* a4)
	{
		return ((::Class_1_55FB143FAD52FF89*(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::ConfigEntityAttackProperty*, ::Class_2_14986121AA61AD99*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_79BC54B259C67D6D_METHOD_2_881DDC7CD8F2F05C_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_2DFC332AF3EA3B47(::Class_1_55FB143FAD52FF89* a1, ::Class_3_F41D242A20F8FE06* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_55FB143FAD52FF89*, ::Class_3_F41D242A20F8FE06*))((::PBYTE)hIl2Cpp + CLASS_2_79BC54B259C67D6D_METHOD_2_2DFC332AF3EA3B47_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5B0F764397729E59(::Class_1_CF48627CAF5E8573* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CF48627CAF5E8573*))((::PBYTE)hIl2Cpp + CLASS_2_79BC54B259C67D6D_METHOD_2_5B0F764397729E59_OFFSET))(this, a1);
	}

	::System::Void Method_2_FC00F58C63A06B2F(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_79BC54B259C67D6D_METHOD_2_FC00F58C63A06B2F_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_61DDB8B626D4C8FE(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_79BC54B259C67D6D_METHOD_2_61DDB8B626D4C8FE_OFFSET))(this, a1);
	}

	::System::Void Method_2_6470C29EE6B96237(::Class_1_55FB143FAD52FF89* a1, ::Class_1_817E737241BDC0A2* a2, ::Class_3_F97B015544BE936B* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_55FB143FAD52FF89*, ::Class_1_817E737241BDC0A2*, ::Class_3_F97B015544BE936B*))((::PBYTE)hIl2Cpp + CLASS_2_79BC54B259C67D6D_METHOD_2_6470C29EE6B96237_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_55FB143FAD52FF89* Method_2_C6843992E5B2B49B(::System::UInt32 a1)
	{
		return ((::Class_1_55FB143FAD52FF89*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_79BC54B259C67D6D_METHOD_2_C6843992E5B2B49B_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_8BE39AEBE9B3A072(::Class_3_F41D242A20F8FE06* a1, ::Class_3_F97B015544BE936B* a2, ::MoleMole::SkillCharacterScriptConfig* a3, ::MoleMole::Config::ConfigEntityAttackProperty* a4, ::Class_2_14986121AA61AD99* a5, ::System::String* a6)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_3_F97B015544BE936B*, ::MoleMole::SkillCharacterScriptConfig*, ::MoleMole::Config::ConfigEntityAttackProperty*, ::Class_2_14986121AA61AD99*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_79BC54B259C67D6D_METHOD_2_8BE39AEBE9B3A072_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_1FBE1BC317C91624(::Class_1_55FB143FAD52FF89* a1, ::Class_1_817E737241BDC0A2* a2, ::Class_3_F97B015544BE936B* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_55FB143FAD52FF89*, ::Class_1_817E737241BDC0A2*, ::Class_3_F97B015544BE936B*))((::PBYTE)hIl2Cpp + CLASS_2_79BC54B259C67D6D_METHOD_2_1FBE1BC317C91624_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_62EB8A8631CE15AC(::Class_1_55FB143FAD52FF89* a1, ::Class_3_F97B015544BE936B* a2, ::MoleMole::Config::ConfigEntityAnimEvent* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_55FB143FAD52FF89*, ::Class_3_F97B015544BE936B*, ::MoleMole::Config::ConfigEntityAnimEvent*))((::PBYTE)hIl2Cpp + CLASS_2_79BC54B259C67D6D_METHOD_2_62EB8A8631CE15AC_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_BC3A38BA9E6576BD_1(::Class_1_55FB143FAD52FF89* a1, ::Class_3_F97B015544BE936B* a2, ::MoleMole::Config::ConfigEntityAnimEvent* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_55FB143FAD52FF89*, ::Class_3_F97B015544BE936B*, ::MoleMole::Config::ConfigEntityAnimEvent*))((::PBYTE)hIl2Cpp + CLASS_2_79BC54B259C67D6D_METHOD_2_BC3A38BA9E6576BD_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_505979F89E070861_1(::Class_1_55FB143FAD52FF89* a1, ::Class_3_F41D242A20F8FE06* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_55FB143FAD52FF89*, ::Class_3_F41D242A20F8FE06*))((::PBYTE)hIl2Cpp + CLASS_2_79BC54B259C67D6D_METHOD_2_505979F89E070861_1_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_28ED4F9D61A20A4C(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::MoleMole::Config::DynamicInt* a3)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::MoleMole::Config::DynamicInt*))((::PBYTE)hIl2Cpp + CLASS_2_79BC54B259C67D6D_METHOD_2_28ED4F9D61A20A4C_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_2_80DA9825FC248417(::Class_3_F41D242A20F8FE06* a1, ::Class_3_F97B015544BE936B* a2, ::MoleMole::SkillCharacterScriptConfig* a3, ::MoleMole::Config::ConfigEntityAttackProperty* a4, ::Class_2_14986121AA61AD99* a5, ::Class_1_1CDA382D823F8E80* a6, ::Class_1_55FB143FAD52FF89* a7)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_3_F97B015544BE936B*, ::MoleMole::SkillCharacterScriptConfig*, ::MoleMole::Config::ConfigEntityAttackProperty*, ::Class_2_14986121AA61AD99*, ::Class_1_1CDA382D823F8E80*, ::Class_1_55FB143FAD52FF89*))((::PBYTE)hIl2Cpp + CLASS_2_79BC54B259C67D6D_METHOD_2_80DA9825FC248417_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_2_C3DF63E1D727999C(::Class_1_30670D995B76EFF5* a1, ::System::UInt32 a2, ::MoleMole::Config::BuffGroupName a3, ::System::Int32 a4, ::System::Boolean a5, ::Class_3_F41D242A20F8FE06* a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_30670D995B76EFF5*, ::System::UInt32, ::MoleMole::Config::BuffGroupName, ::System::Int32, ::System::Boolean, ::Class_3_F41D242A20F8FE06*))((::PBYTE)hIl2Cpp + CLASS_2_79BC54B259C67D6D_METHOD_2_C3DF63E1D727999C_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_62EB8A8631CE15AC_1(::Class_1_55FB143FAD52FF89* a1, ::Class_3_F97B015544BE936B* a2, ::MoleMole::Config::ConfigEntityAnimEvent* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_55FB143FAD52FF89*, ::Class_3_F97B015544BE936B*, ::MoleMole::Config::ConfigEntityAnimEvent*))((::PBYTE)hIl2Cpp + CLASS_2_79BC54B259C67D6D_METHOD_2_62EB8A8631CE15AC_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_C9EA1454E752AD91_1(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_79BC54B259C67D6D_METHOD_2_C9EA1454E752AD91_1_OFFSET))(this, a1, a2);
	}

	::MoleMole::Config::ConfigEntityAnimEvent* Method_2_9D0C546A3B6DD1D6(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::MoleMole::Config::ConfigEntityAnimEvent*(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_79BC54B259C67D6D_METHOD_2_9D0C546A3B6DD1D6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_62EB8A8631CE15AC_2(::Class_1_55FB143FAD52FF89* a1, ::Class_3_F97B015544BE936B* a2, ::MoleMole::Config::ConfigEntityAnimEvent* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_55FB143FAD52FF89*, ::Class_3_F97B015544BE936B*, ::MoleMole::Config::ConfigEntityAnimEvent*))((::PBYTE)hIl2Cpp + CLASS_2_79BC54B259C67D6D_METHOD_2_62EB8A8631CE15AC_2_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_2_18C9879C9C5D4F0B(::Class_3_F41D242A20F8FE06* a1, ::Class_3_F97B015544BE936B* a2, ::MoleMole::SkillCharacterScriptConfig* a3, ::System::String* a4, ::Class_2_14986121AA61AD99* a5)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_3_F97B015544BE936B*, ::MoleMole::SkillCharacterScriptConfig*, ::System::String*, ::Class_2_14986121AA61AD99*))((::PBYTE)hIl2Cpp + CLASS_2_79BC54B259C67D6D_METHOD_2_18C9879C9C5D4F0B_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_62EB8A8631CE15AC_3(::Class_1_55FB143FAD52FF89* a1, ::Class_3_F97B015544BE936B* a2, ::MoleMole::Config::ConfigEntityAnimEvent* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_55FB143FAD52FF89*, ::Class_3_F97B015544BE936B*, ::MoleMole::Config::ConfigEntityAnimEvent*))((::PBYTE)hIl2Cpp + CLASS_2_79BC54B259C67D6D_METHOD_2_62EB8A8631CE15AC_3_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_55FB143FAD52FF89* Method_2_66A97676FB4B50FC(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::Class_1_55FB143FAD52FF89*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_79BC54B259C67D6D_METHOD_2_66A97676FB4B50FC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_46B847DE7D0F18F6(::Class_3_F41D242A20F8FE06* a1, ::Class_3_F97B015544BE936B* a2, ::Class_1_55FB143FAD52FF89* a3, ::MoleMole::Config::ConfigEntityAttackProperty* a4, ::Class_2_14986121AA61AD99* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_3_F97B015544BE936B*, ::Class_1_55FB143FAD52FF89*, ::MoleMole::Config::ConfigEntityAttackProperty*, ::Class_2_14986121AA61AD99*))((::PBYTE)hIl2Cpp + CLASS_2_79BC54B259C67D6D_METHOD_2_46B847DE7D0F18F6_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::UInt32 Method_2_8A9C6FBD87B4DB57(::System::UInt32 a1, ::Class_2_14986121AA61AD99* a2, ::MoleMole::Config::ConfigEntityAttackProperty* a3, ::System::String* a4)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::Class_2_14986121AA61AD99*, ::MoleMole::Config::ConfigEntityAttackProperty*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_79BC54B259C67D6D_METHOD_2_8A9C6FBD87B4DB57_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_7A3B606C32BB45E5(::System::UInt32 a1, ::Class_1_55FB143FAD52FF89* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_55FB143FAD52FF89*))((::PBYTE)hIl2Cpp + CLASS_2_79BC54B259C67D6D_METHOD_2_7A3B606C32BB45E5_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_90F114565A141F94(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::MoleMole::Config::DynamicFloat* a3)
	{
		return ((::System::Single(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::MoleMole::Config::DynamicFloat*))((::PBYTE)hIl2Cpp + CLASS_2_79BC54B259C67D6D_METHOD_2_90F114565A141F94_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_6470C29EE6B96237_1(::Class_1_55FB143FAD52FF89* a1, ::Class_1_817E737241BDC0A2* a2, ::Class_3_F97B015544BE936B* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_55FB143FAD52FF89*, ::Class_1_817E737241BDC0A2*, ::Class_3_F97B015544BE936B*))((::PBYTE)hIl2Cpp + CLASS_2_79BC54B259C67D6D_METHOD_2_6470C29EE6B96237_1_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_2_0F8D6364B34C7195(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_79BC54B259C67D6D_METHOD_2_0F8D6364B34C7195_OFFSET))(this, a1);
	}

	::Class_1_55FB143FAD52FF89* Method_2_01BEC92F3CDF67C6()
	{
		return ((::Class_1_55FB143FAD52FF89*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_79BC54B259C67D6D_METHOD_2_01BEC92F3CDF67C6_OFFSET))(this);
	}
};
