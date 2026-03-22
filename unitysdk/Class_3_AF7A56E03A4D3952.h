#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_AF7A56E03A4D3952_Enum_3_5B468D3B4D74DA40.h"
#include "unitysdk/Class_3_AF7A56E03A4D3952_Struct_2_1596B20CDEDE3C29.h"
#include "unitysdk/Class_3_AF7A56E03A4D3952_Struct_2_3A8D9C555F9C80C1.h"
#include "unitysdk/Class_3_AF7A56E03A4D3952_Struct_2_70DCF23F0AA5A74A.h"
#include "unitysdk/Class_3_AF7A56E03A4D3952_Struct_2_9EF7231D09D4C0A9.h"
#include "unitysdk/Class_3_AF7A56E03A4D3952_Struct_2_B3931940C76432D7_1.h"
#include "unitysdk/Enum_3_CE3B674D22BBFC73.h"
#include "unitysdk/MoleMole/Battle/CurveMoveComponent_Config_MoveType.h"
#include "unitysdk/MoleMole/Battle/CurveMoveComponent_Config_SpeedMode.h"
#include "unitysdk/MoleMole/Battle/CurveMove_CurvySplineIndex.h"
#include "unitysdk/MoleMole/Battle/CurveMove_GamePlayIndex.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_7734F33592BF49F6_4.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_438;
class Class_3_9D59A2B00711B552_1;
class Class_3_AF7A56E03A4D3952_Class_1_6CB027CB4EE890F3;
namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace MoleMole::Battle { class CurveMoveComponent_Config; }
namespace MoleMole::Battle { class CurveMoveComponent_TriggerConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define CLASS_3_AF7A56E03A4D3952_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x93BF9B0)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_13D78D8CCC5186FB_OFFSET UNITYSDK_OFFSET(0x7566D90)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_14B208BC8BAFAB72_OFFSET UNITYSDK_OFFSET(0x75668B0)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_1C409C2CC83887DC_OFFSET UNITYSDK_OFFSET(0x7566640)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_1CF853AC8F764434_OFFSET UNITYSDK_OFFSET(0x7566060)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_208CCBFF1B8F62A7_OFFSET UNITYSDK_OFFSET(0x7568CC0)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_364BBA224DBE13B9_OFFSET UNITYSDK_OFFSET(0x93C0180)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_41AA181104E03F2C_OFFSET UNITYSDK_OFFSET(0x7566440)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_4F4018519B20BBDD_OFFSET UNITYSDK_OFFSET(0x7567F90)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_64914350C49C927D_1_OFFSET UNITYSDK_OFFSET(0x7568170)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_64914350C49C927D_OFFSET UNITYSDK_OFFSET(0x7567090)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_6F0FCA5B214EDB6E_OFFSET UNITYSDK_OFFSET(0x7566CE0)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_7043B9A9D77FB306_1_OFFSET UNITYSDK_OFFSET(0x75673B0)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_7043B9A9D77FB306_OFFSET UNITYSDK_OFFSET(0x7568490)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_861970C5F2C21AB2_1_OFFSET UNITYSDK_OFFSET(0x7568DF0)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_861970C5F2C21AB2_OFFSET UNITYSDK_OFFSET(0x7565E80)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_88252A6D69D6544B_OFFSET UNITYSDK_OFFSET(0x93C0350)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_8FD747E33B53F3FC_OFFSET UNITYSDK_OFFSET(0x7567530)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_93D3C239C19BFDF2_OFFSET UNITYSDK_OFFSET(0x7566100)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_958CD41C79BEFBD0_OFFSET UNITYSDK_OFFSET(0x7566BC0)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_97F8E0A6BA1950FE_OFFSET UNITYSDK_OFFSET(0x7567AF0)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_9876BEA27A0B4DC1_1_OFFSET UNITYSDK_OFFSET(0x7567610)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_9876BEA27A0B4DC1_OFFSET UNITYSDK_OFFSET(0x7567880)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_9D8EF9AD3B13BD0E_OFFSET UNITYSDK_OFFSET(0x7568CF0)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_9FF9293B31203D6F_OFFSET UNITYSDK_OFFSET(0x7568B40)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x7568BC0)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_A8F6F688241E6DBC_OFFSET UNITYSDK_OFFSET(0x7568610)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_AEFF5CC7FD61CA78_OFFSET UNITYSDK_OFFSET(0x93C0030)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_BC0FA8C838B766A1_OFFSET UNITYSDK_OFFSET(0x75687E0)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_BCF6754C2E01AD87_OFFSET UNITYSDK_OFFSET(0x93BFD30)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_BDB014C4E3C92B50_OFFSET UNITYSDK_OFFSET(0x7566180)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x7568C20)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_D0EE81B3FDA3E65D_OFFSET UNITYSDK_OFFSET(0x75663D0)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_DFD49FDE07F1A120_OFFSET UNITYSDK_OFFSET(0x7567DE0)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_E9F89C1986E596DD_OFFSET UNITYSDK_OFFSET(0x93C00A0)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x7567080)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_F75A8ECE5CAA5D87_OFFSET UNITYSDK_OFFSET(0x75688E0)
#define CLASS_3_AF7A56E03A4D3952_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x93BF820)
#define CLASS_3_AF7A56E03A4D3952__CCTOR_OFFSET UNITYSDK_OFFSET(0x93BFA10)
#define CLASS_3_AF7A56E03A4D3952__CTOR_OFFSET UNITYSDK_OFFSET(0x93BFA90)

inline static constexpr unsigned int Class_3_AF7A56E03A4D3952_TypeDefinitionIndex = 47732;

class Class_3_AF7A56E03A4D3952 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	static ::Enum_3_CE3B674D22BBFC73* StaticGet_Field_3_0()
	{
		return (::Enum_3_CE3B674D22BBFC73*)Il2CppClass::FromTypeDefinitionIndex(Class_3_AF7A56E03A4D3952_TypeDefinitionIndex)->GetStaticField(0x104A0);
	}
	// static const ::System::Int32 Field_3_53 = 0x30; // 0x0
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_438*>* Field_3_50; // 0x48
	::Struct_2_7734F33592BF49F6_4 Field_3_11; // 0x50
	::Class_3_AF7A56E03A4D3952_Class_1_6CB027CB4EE890F3* Field_3_45; // 0x70
	::MoleMole::Battle::CurveMoveComponent_Config* Field_3_2; // 0x78
	::Class_3_AF7A56E03A4D3952_Class_1_6CB027CB4EE890F3* Field_3_43; // 0x80
	::MoleMole::Battle::CurveMoveComponent_TriggerConfig* Field_3_5; // 0x88
	::UnityEngine::Transform* Field_3_29; // 0x90
	::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* Field_3_9; // 0x98
	::Il2CppArray<::System::String*>* Field_3_49; // 0xA0
	::Class_3_AF7A56E03A4D3952_Class_1_6CB027CB4EE890F3* Field_3_44; // 0xA8
	::System::Collections::Generic::List_1<::Class_3_9D59A2B00711B552_1*>* Field_3_12; // 0xB0
	::System::Collections::Generic::Dictionary_2<::MoleMole::EntityHandle, ::Class_3_AF7A56E03A4D3952_Struct_2_B3931940C76432D7_1>* Field_3_10; // 0xB8
	::Class_3_AF7A56E03A4D3952_Class_1_6CB027CB4EE890F3* Field_3_42; // 0xC0
	::Class_3_AF7A56E03A4D3952_Struct_2_3A8D9C555F9C80C1 Field_3_7; // 0xC8
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_438*>* Field_3_51; // 0xD8
	::UnityEngine::Rigidbody* Field_3_28; // 0xE0
	::System::Object* Field_3_19; // 0xE8
	::Class_3_AF7A56E03A4D3952_Struct_2_70DCF23F0AA5A74A Field_3_38; // 0xF0
	::UnityEngine::Quaternion Field_3_15; // 0xF8
	::Class_3_AF7A56E03A4D3952_Struct_2_1596B20CDEDE3C29 Field_3_39; // 0x108
	::Class_3_AF7A56E03A4D3952_Enum_3_5B468D3B4D74DA40 Field_3_18; // 0x10C
	::MoleMole::Battle::CurveMove_GamePlayIndex Field_3_25; // 0x110
	::UnityEngine::Vector3 Field_3_47; // 0x114
	::UnityEngine::Vector3 Field_3_32; // 0x120
	::System::Nullable_1<::System::Single> Field_3_34; // 0x12C
	::MoleMole::Battle::CurveMove_CurvySplineIndex Field_3_24; // 0x134
	::System::Nullable_1<::Class_3_AF7A56E03A4D3952_Struct_2_9EF7231D09D4C0A9> Field_3_8; // 0x138
	::MoleMole::Battle::CurveMove_CurvySplineIndex Field_3_23; // 0x150
	::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode Field_3_4; // 0x154
	::System::Single Field_3_22; // 0x158
	::System::Single Field_3_36; // 0x15C
	::System::Single Field_3_37; // 0x160
	::MoleMole::Battle::CurveMove_GamePlayIndex Field_3_26; // 0x164
	::System::Boolean Field_3_13; // 0x168
	::System::Boolean Field_3_52; // 0x169
	::System::Boolean Field_3_41; // 0x16A
	::UnityEngine::Vector3 Field_3_46; // 0x16C
	::Enum_3_CE3B674D22BBFC73 Field_3_1; // 0x178
	::UnityEngine::Vector3 Field_3_33; // 0x17C
	::UnityEngine::Vector3 Field_3_31; // 0x188
	::UnityEngine::Vector3 Field_3_35; // 0x194
	::System::Single Field_3_17; // 0x1A0
	::UnityEngine::Quaternion Field_3_40; // 0x1A4
	::System::Boolean Field_3_3; // 0x1B4
	::System::Boolean Field_3_6; // 0x1B5
	::System::Single Field_3_21; // 0x1B8
	::MoleMole::Battle::CurveMoveComponent_Config_MoveType Field_3_27; // 0x1BC
	::UnityEngine::Vector3 Field_3_48; // 0x1C0
	::System::Single Field_3_20; // 0x1CC
	::System::Single Field_3_16; // 0x1D0
	::UnityEngine::Vector3 Field_3_14; // 0x1D4
	::UnityEngine::Vector3 Field_3_30; // 0x1E0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_GETCLASSID_OFFSET))(this);
	}

	::System::Single Method_3_BCF6754C2E01AD87()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_BCF6754C2E01AD87_OFFSET))(this);
	}

	::System::Void Method_3_AEFF5CC7FD61CA78(::MoleMole::Battle::CurveMoveComponent_TriggerConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::CurveMoveComponent_TriggerConfig*))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_AEFF5CC7FD61CA78_OFFSET))(this, a1);
	}

	::System::Single Method_3_E9F89C1986E596DD()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_E9F89C1986E596DD_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_3_364BBA224DBE13B9()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_364BBA224DBE13B9_OFFSET))(this);
	}

	::UnityEngine::Rigidbody* Method_3_88252A6D69D6544B()
	{
		return ((::UnityEngine::Rigidbody*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_88252A6D69D6544B_OFFSET))(this);
	}

	::System::Single Method_3_861970C5F2C21AB2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_861970C5F2C21AB2_OFFSET))(this);
	}

	::System::Void Method_3_93D3C239C19BFDF2(::Class_3_AF7A56E03A4D3952_Struct_2_3A8D9C555F9C80C1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_AF7A56E03A4D3952_Struct_2_3A8D9C555F9C80C1))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_93D3C239C19BFDF2_OFFSET))(this, a1);
	}

	::System::Single Method_3_BDB014C4E3C92B50()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_BDB014C4E3C92B50_OFFSET))(this);
	}

	::System::Void Method_3_41AA181104E03F2C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_41AA181104E03F2C_OFFSET))(this);
	}

	::System::Void Method_3_1C409C2CC83887DC(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_1C409C2CC83887DC_OFFSET))(this, a1);
	}

	::System::Void Method_3_14B208BC8BAFAB72(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_14B208BC8BAFAB72_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_3_958CD41C79BEFBD0()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_958CD41C79BEFBD0_OFFSET))(this);
	}

	::System::Void Method_3_6F0FCA5B214EDB6E(::MoleMole::Battle::CurveMoveComponent_Config* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::CurveMoveComponent_Config*))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_6F0FCA5B214EDB6E_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_64914350C49C927D()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_64914350C49C927D_OFFSET))(this);
	}

	::System::Single Method_3_8FD747E33B53F3FC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_8FD747E33B53F3FC_OFFSET))(this);
	}

	::System::Single Method_3_9876BEA27A0B4DC1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_9876BEA27A0B4DC1_OFFSET))(this);
	}

	::System::Single Method_3_97F8E0A6BA1950FE()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_97F8E0A6BA1950FE_OFFSET))(this);
	}

	::System::Void Method_3_DFD49FDE07F1A120(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_DFD49FDE07F1A120_OFFSET))(this, a1);
	}

	::System::Single Method_3_9876BEA27A0B4DC1_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_9876BEA27A0B4DC1_1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_4F4018519B20BBDD()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_4F4018519B20BBDD_OFFSET))(this);
	}

	::System::Single Method_3_7043B9A9D77FB306()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_7043B9A9D77FB306_OFFSET))(this);
	}

	::System::Single Method_3_7043B9A9D77FB306_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_7043B9A9D77FB306_1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_64914350C49C927D_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_64914350C49C927D_1_OFFSET))(this);
	}

	::System::Boolean Method_3_A8F6F688241E6DBC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_A8F6F688241E6DBC_OFFSET))(this);
	}

	::FluffyUnderware::Curvy::CurvySpline* Method_3_D0EE81B3FDA3E65D()
	{
		return ((::FluffyUnderware::Curvy::CurvySpline*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_D0EE81B3FDA3E65D_OFFSET))(this);
	}

	::System::Void Method_3_BC0FA8C838B766A1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_BC0FA8C838B766A1_OFFSET))(this, a1);
	}

	::System::Void Method_3_9FF9293B31203D6F(::MoleMole::Battle::CurveMoveComponent_Config* a1, ::Il2CppArray<::System::String*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::CurveMoveComponent_Config*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_9FF9293B31203D6F_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode Method_3_1CF853AC8F764434()
	{
		return ((::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_1CF853AC8F764434_OFFSET))(this);
	}

	static ::Class_3_AF7A56E03A4D3952* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_AF7A56E03A4D3952*(*)())((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Single Method_3_208CCBFF1B8F62A7()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_208CCBFF1B8F62A7_OFFSET))(this);
	}

	::System::Void Method_3_F75A8ECE5CAA5D87(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_F75A8ECE5CAA5D87_OFFSET))(this, a1);
	}

	::System::Void Method_3_9D8EF9AD3B13BD0E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_9D8EF9AD3B13BD0E_OFFSET))(this, a1);
	}

	::System::Single Method_3_861970C5F2C21AB2_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_861970C5F2C21AB2_1_OFFSET))(this);
	}

	::System::Void Method_3_13D78D8CCC5186FB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_13D78D8CCC5186FB_OFFSET))(this, a1);
	}
};
