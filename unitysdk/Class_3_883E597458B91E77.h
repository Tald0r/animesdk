#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Enum_3_9CBBB791D0978B97_1.h"
#include "unitysdk/Enum_3_D76E08F309AE15EC.h"
#include "unitysdk/Enum_3_E58B687031ED39B8.h"
#include "unitysdk/Foundation/Tuple_2.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneMuteAnimatorVelocityInCollision_VelocityType.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/CollisionDetectionMode.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_DC33B6615579E69F;
class Class_1_EB84615A56CD66EB;
class Class_2_7A1F9B1E855D33CF;
class Class_2_E088D84C0136926D;
class Class_2_EE4AD6D436A033D5;
namespace MoleMole::Config { class ConfigHitData; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Rigidbody; }
template <typename T> class Class_1_1C41F7826211BE9D;

#define CLASS_3_883E597458B91E77_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xCEF1630)
#define CLASS_3_883E597458B91E77_METHOD_3_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0xCEF1E60)
#define CLASS_3_883E597458B91E77_METHOD_3_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xCEF2310)
#define CLASS_3_883E597458B91E77_METHOD_3_3C5F3505AB0C09CC_OFFSET UNITYSDK_OFFSET(0xCEF1960)
#define CLASS_3_883E597458B91E77_METHOD_3_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0xCEF1FC0)
#define CLASS_3_883E597458B91E77_METHOD_3_4E8DF6F8A37B229A_1_OFFSET UNITYSDK_OFFSET(0xCEF1A90)
#define CLASS_3_883E597458B91E77_METHOD_3_4E8DF6F8A37B229A_2_OFFSET UNITYSDK_OFFSET(0xCEF2390)
#define CLASS_3_883E597458B91E77_METHOD_3_4E8DF6F8A37B229A_OFFSET UNITYSDK_OFFSET(0xCEF1A30)
#define CLASS_3_883E597458B91E77_METHOD_3_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0xCEF1E50)
#define CLASS_3_883E597458B91E77_METHOD_3_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0xCEF1E30)
#define CLASS_3_883E597458B91E77_METHOD_3_5B16CE6076826CE6_OFFSET UNITYSDK_OFFSET(0xCEF1B90)
#define CLASS_3_883E597458B91E77_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xCEF2220)
#define CLASS_3_883E597458B91E77_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xCEF1F20)
#define CLASS_3_883E597458B91E77_METHOD_3_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0xCEF1930)
#define CLASS_3_883E597458B91E77_METHOD_3_BAAB9076F0C745E3_OFFSET UNITYSDK_OFFSET(0xCEF2080)
#define CLASS_3_883E597458B91E77_METHOD_3_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0xCEF1EF0)
#define CLASS_3_883E597458B91E77_METHOD_3_C74E50CBD41F0264_2_OFFSET UNITYSDK_OFFSET(0xCEF1FA0)
#define CLASS_3_883E597458B91E77_METHOD_3_C74E50CBD41F0264_3_OFFSET UNITYSDK_OFFSET(0xCEF1FB0)
#define CLASS_3_883E597458B91E77_METHOD_3_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0xCEF1E20)
#define CLASS_3_883E597458B91E77_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0xCEF1FD0)
#define CLASS_3_883E597458B91E77_METHOD_3_CF8BA38996D09531_OFFSET UNITYSDK_OFFSET(0xCEF1AC0)
#define CLASS_3_883E597458B91E77_METHOD_3_CFC95121222309BD_OFFSET UNITYSDK_OFFSET(0xCEF23B0)
#define CLASS_3_883E597458B91E77_METHOD_3_D37FAD0A6AA04B25_1_OFFSET UNITYSDK_OFFSET(0xCEF1A70)
#define CLASS_3_883E597458B91E77_METHOD_3_D37FAD0A6AA04B25_2_OFFSET UNITYSDK_OFFSET(0xCEF24D0)
#define CLASS_3_883E597458B91E77_METHOD_3_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0xCEF1A50)
#define CLASS_3_883E597458B91E77_METHOD_3_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0xCEF24C0)
#define CLASS_3_883E597458B91E77_METHOD_3_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0xCEF1F90)
#define CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0xCEF1950)
#define CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0xCEF1AB0)
#define CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0xCEF1E40)
#define CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_4_OFFSET UNITYSDK_OFFSET(0xCEF1F00)
#define CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_5_OFFSET UNITYSDK_OFFSET(0xCEF1F10)
#define CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_6_OFFSET UNITYSDK_OFFSET(0xCEF1F80)
#define CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_7_OFFSET UNITYSDK_OFFSET(0xCEF2070)
#define CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xCEF1940)
#define CLASS_3_883E597458B91E77_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xCEF10D0)
#define CLASS_3_883E597458B91E77__CCTOR_OFFSET UNITYSDK_OFFSET(0xCEF1690)
#define CLASS_3_883E597458B91E77__CTOR_OFFSET UNITYSDK_OFFSET(0xCEF1710)

inline static constexpr unsigned int Class_3_883E597458B91E77_TypeDefinitionIndex = 36558;

class Class_3_883E597458B91E77 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_75 = 0x1F; // 0x0
	::System::Collections::Generic::List_1<::Foundation::Tuple_2<::UnityEngine::Collider*, ::UnityEngine::GameObject*>>* Field_3_57; // 0x48
	::UnityEngine::Rigidbody* Field_3_19; // 0x50
	::Class_2_E088D84C0136926D* Field_3_74; // 0x58
	::Class_1_DC33B6615579E69F* Field_3_32; // 0x60
	::Class_2_7A1F9B1E855D33CF* Field_3_28; // 0x68
	::System::Collections::Generic::List_1<::System::UInt32>* Field_3_58; // 0x70
	::Class_2_7A1F9B1E855D33CF* Field_3_1; // 0x78
	::Class_2_EE4AD6D436A033D5* Field_3_45; // 0x80
	::System::Action_4<::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorStateInfo, ::System::Int32, ::System::Boolean>* Field_3_72; // 0x88
	::System::String* Field_3_7; // 0x90
	::MoleMole::Config::ConfigHitData* Field_3_44; // 0x98
	::System::Action* Field_3_27; // 0xA0
	::Class_1_1C41F7826211BE9D<::System::Single>* Field_3_26; // 0xA8
	::System::Action_2<::System::Single, ::System::Boolean>* Field_3_73; // 0xB0
	::System::Action_4<::System::Single, ::System::Int32, ::System::Single, ::System::Int32>* Field_3_71; // 0xB8
	::System::Action_1<::UnityEngine::Vector3>* Field_3_10; // 0xC0
	::Class_2_7A1F9B1E855D33CF* Field_3_31; // 0xC8
	::System::Collections::Generic::Dictionary_2<::Enum_3_D76E08F309AE15EC, ::System::Int32>* Field_3_53; // 0xD0
	::System::Collections::Generic::List_1<::Class_1_EB84615A56CD66EB*>* Field_3_0; // 0xD8
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_56; // 0xE0
	::UnityEngine::Vector3 Field_3_2; // 0xE8
	::Enum_3_9CBBB791D0978B97_1 Field_3_33; // 0xF4
	::System::Boolean Field_3_61; // 0xF8
	::System::Boolean Field_3_18; // 0xF9
	::System::Byte Field_3_17; // 0xFA
	::System::Boolean Field_3_23; // 0xFB
	::UnityEngine::Vector3 Field_3_4; // 0xFC
	::UnityEngine::CollisionDetectionMode Field_3_22; // 0x108
	::UnityEngine::CollisionDetectionMode Field_3_21; // 0x10C
	::System::Single Field_3_68; // 0x110
	::System::UInt32 Field_3_59; // 0x114
	::System::Boolean Field_3_63; // 0x118
	::System::Boolean Field_3_3; // 0x119
	::System::Boolean Field_3_48; // 0x11A
	::System::Boolean Field_3_5; // 0x11B
	::MoleMole::Config::AnimatorZoneMuteAnimatorVelocityInCollision_VelocityType Field_3_65; // 0x11C
	::System::Single Field_3_13; // 0x120
	::System::Boolean Field_3_50; // 0x124
	::System::Boolean Field_3_6; // 0x125
	::System::Boolean Field_3_35; // 0x126
	::System::Boolean Field_3_20; // 0x127
	::System::Boolean Field_3_16; // 0x128
	::System::Boolean Field_3_62; // 0x129
	::System::Boolean Field_3_64; // 0x12A
	::System::Boolean Field_3_34; // 0x12B
	::System::Single Field_3_15; // 0x12C
	::System::Int32 Field_3_52; // 0x130
	::System::Boolean Field_3_51; // 0x134
	::System::Boolean Field_3_12; // 0x135
	::System::Boolean Field_3_47; // 0x136
	::System::Boolean Field_3_40; // 0x137
	::UnityEngine::Vector3 Field_3_42; // 0x138
	::System::Int32 Field_3_29; // 0x144
	::System::Int32 Field_3_9; // 0x148
	::UnityEngine::Quaternion Field_3_8; // 0x14C
	::System::Single Field_3_38; // 0x15C
	::System::Boolean Field_3_39; // 0x160
	::System::Boolean Field_3_36; // 0x161
	::System::Boolean Field_3_49; // 0x162
	::Enum_3_E58B687031ED39B8 Field_3_43; // 0x163
	::System::Boolean Field_3_54; // 0x164
	::System::Boolean Field_3_60; // 0x165
	::System::Boolean Field_3_69; // 0x166
	::System::Boolean Field_3_25; // 0x167
	::UnityEngine::Vector3 Field_3_46; // 0x168
	::UnityEngine::Vector3 Field_3_67; // 0x174
	::System::Single Field_3_24; // 0x180
	::System::Int32 Field_3_14; // 0x184
	::UnityEngine::Vector3 Field_3_30; // 0x188
	::System::Single Field_3_11; // 0x194
	::System::Single Field_3_70; // 0x198
	::System::Int32 Field_3_55; // 0x19C
	::UnityEngine::Vector3 Field_3_66; // 0x1A0
	::System::Single Field_3_37; // 0x1AC
	::System::Single Field_3_41; // 0x1B0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_GETCLASSID_OFFSET))(this);
	}

	::Enum_3_E58B687031ED39B8 Method_3_A96DCA30C6927810()
	{
		return ((::Enum_3_E58B687031ED39B8(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_3_3C5F3505AB0C09CC(::UnityEngine::Rigidbody* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rigidbody*))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_3C5F3505AB0C09CC_OFFSET))(this, a1);
	}

	::System::Void Method_3_4E8DF6F8A37B229A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_4E8DF6F8A37B229A_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_3_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_D37FAD0A6AA04B25_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_D37FAD0A6AA04B25_1_OFFSET))(this);
	}

	::System::Void Method_3_4E8DF6F8A37B229A_1(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_4E8DF6F8A37B229A_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Boolean Method_3_CF8BA38996D09531()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_CF8BA38996D09531_OFFSET))(this);
	}

	::System::Void Method_3_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Single Method_3_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_3_OFFSET))(this);
	}

	::System::Single Method_3_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_5323F2DF46A044DA_1_OFFSET))(this);
	}

	::System::Void Method_3_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_3_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_4_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_5()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_5_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_6_OFFSET))(this);
	}

	::System::Void Method_3_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::Void Method_3_C74E50CBD41F0264_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_C74E50CBD41F0264_2_OFFSET))(this, a1);
	}

	::System::Void Method_3_C74E50CBD41F0264_3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_C74E50CBD41F0264_3_OFFSET))(this, a1);
	}

	::UnityEngine::Rigidbody* Method_3_5B16CE6076826CE6()
	{
		return ((::UnityEngine::Rigidbody*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_5B16CE6076826CE6_OFFSET))(this);
	}

	::System::Void Method_3_3DACC45AC8150727(::Enum_3_E58B687031ED39B8 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E58B687031ED39B8))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_3DACC45AC8150727_OFFSET))(this, a1);
	}

	static ::Class_3_883E597458B91E77* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_883E597458B91E77*(*)())((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Boolean Method_3_F0088C88851A7DFB_7()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_7_OFFSET))(this);
	}

	::System::Single Method_3_BAAB9076F0C745E3()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_BAAB9076F0C745E3_OFFSET))(this);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Boolean Method_3_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_3_4E8DF6F8A37B229A_2(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_4E8DF6F8A37B229A_2_OFFSET))(this, a1);
	}

	::System::Void Method_3_CFC95121222309BD(::Class_1_DC33B6615579E69F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DC33B6615579E69F*))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_CFC95121222309BD_OFFSET))(this, a1);
	}

	::System::Void Method_3_E7F1AECA7CFF8AAD_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_3_D37FAD0A6AA04B25_2()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_D37FAD0A6AA04B25_2_OFFSET))(this);
	}
};
