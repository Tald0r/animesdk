#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_AF7A56E03A4D3952_Enum_3_5B468D3B4D74DA40.h"
#include "unitysdk/Class_3_AF7A56E03A4D3952_Struct_2_1596B20CDEDE3C29.h"
#include "unitysdk/Class_3_AF7A56E03A4D3952_Struct_2_3A8D9C555F9C80C1.h"
#include "unitysdk/Class_3_AF7A56E03A4D3952_Struct_2_70DCF23F0AA5A74A.h"
#include "unitysdk/Class_3_AF7A56E03A4D3952_Struct_2_9EF7231D09D4C0A9.h"
#include "unitysdk/Class_3_AF7A56E03A4D3952_Struct_2_B3931940C76432D7.h"
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

class Class_0_16E4307DCC419505_428;
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

#define CLASS_3_AF7A56E03A4D3952_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xE989590)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_13D78D8CCC5186FB_OFFSET UNITYSDK_OFFSET(0xE98B2D0)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_14B208BC8BAFAB72_OFFSET UNITYSDK_OFFSET(0xE98A140)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_1C409C2CC83887DC_OFFSET UNITYSDK_OFFSET(0xE98A5B0)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_1CF853AC8F764434_OFFSET UNITYSDK_OFFSET(0xE98AF90)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_208CCBFF1B8F62A7_OFFSET UNITYSDK_OFFSET(0xE98C650)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_364BBA224DBE13B9_OFFSET UNITYSDK_OFFSET(0xE98CF50)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_41AA181104E03F2C_OFFSET UNITYSDK_OFFSET(0xE98B5C0)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_4F4018519B20BBDD_OFFSET UNITYSDK_OFFSET(0xE98BE60)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_64914350C49C927D_1_OFFSET UNITYSDK_OFFSET(0xE98C030)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_64914350C49C927D_OFFSET UNITYSDK_OFFSET(0xE98C340)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_6F0FCA5B214EDB6E_OFFSET UNITYSDK_OFFSET(0xE98B220)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_7043B9A9D77FB306_1_OFFSET UNITYSDK_OFFSET(0xE98D120)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_7043B9A9D77FB306_OFFSET UNITYSDK_OFFSET(0xE989910)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_88252A6D69D6544B_OFFSET UNITYSDK_OFFSET(0xE98ABA0)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_8FD747E33B53F3FC_OFFSET UNITYSDK_OFFSET(0xE98C760)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_93D3C239C19BFDF2_OFFSET UNITYSDK_OFFSET(0xE98CEC0)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_958CD41C79BEFBD0_OFFSET UNITYSDK_OFFSET(0xE98AA80)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_97F8E0A6BA1950FE_OFFSET UNITYSDK_OFFSET(0xE98B7C0)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_9876BEA27A0B4DC1_1_OFFSET UNITYSDK_OFFSET(0xE989DF0)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_9876BEA27A0B4DC1_OFFSET UNITYSDK_OFFSET(0xE98C840)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_9D8EF9AD3B13BD0E_OFFSET UNITYSDK_OFFSET(0xE98BD60)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_9FF9293B31203D6F_OFFSET UNITYSDK_OFFSET(0xE98A0C0)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xE98A450)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_A8F6F688241E6DBC_OFFSET UNITYSDK_OFFSET(0xE98CAA0)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_AEFF5CC7FD61CA78_OFFSET UNITYSDK_OFFSET(0xE98A050)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_BC0FA8C838B766A1_OFFSET UNITYSDK_OFFSET(0xE98A4B0)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_BCF6754C2E01AD87_OFFSET UNITYSDK_OFFSET(0xE989B00)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_BDB014C4E3C92B50_OFFSET UNITYSDK_OFFSET(0xE98CC70)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0xE98BCC0)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_D0EE81B3FDA3E65D_OFFSET UNITYSDK_OFFSET(0xE989A90)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_DFD49FDE07F1A120_OFFSET UNITYSDK_OFFSET(0xE98ADD0)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_E9F89C1986E596DD_OFFSET UNITYSDK_OFFSET(0xE98C680)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xE98CF40)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_F75A8ECE5CAA5D87_OFFSET UNITYSDK_OFFSET(0xE98A820)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_FAE9C4050544FE63_1_OFFSET UNITYSDK_OFFSET(0xE98BAB0)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_FAE9C4050544FE63_OFFSET UNITYSDK_OFFSET(0xE98B030)
#define CLASS_3_AF7A56E03A4D3952_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xE989400)
#define CLASS_3_AF7A56E03A4D3952__CCTOR_OFFSET UNITYSDK_OFFSET(0xE9895F0)
#define CLASS_3_AF7A56E03A4D3952__CTOR_OFFSET UNITYSDK_OFFSET(0xE989670)

inline static constexpr unsigned int Class_3_AF7A56E03A4D3952_TypeDefinitionIndex = 48750;

class Class_3_AF7A56E03A4D3952 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	static ::Enum_3_CE3B674D22BBFC73* StaticGet_Field_3_0()
	{
		return (::Enum_3_CE3B674D22BBFC73*)Il2CppClass::FromTypeDefinitionIndex(Class_3_AF7A56E03A4D3952_TypeDefinitionIndex)->GetStaticField(0xF110);
	}
	// static const ::System::Int32 Field_3_54 = 0x30; // 0x0
	::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* Field_3_9; // 0x48
	::System::Collections::Generic::Dictionary_2<::MoleMole::EntityHandle, ::Class_3_AF7A56E03A4D3952_Struct_2_B3931940C76432D7>* Field_3_10; // 0x50
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_428*>* Field_3_52; // 0x58
	::MoleMole::Battle::CurveMoveComponent_Config* Field_3_2; // 0x60
	::Class_3_AF7A56E03A4D3952_Struct_2_3A8D9C555F9C80C1 Field_3_7; // 0x68
	::UnityEngine::Rigidbody* Field_3_29; // 0x78
	::Class_3_AF7A56E03A4D3952_Class_1_6CB027CB4EE890F3* Field_3_46; // 0x80
	::Il2CppArray<::System::String*>* Field_3_50; // 0x88
	::MoleMole::Battle::CurveMoveComponent_TriggerConfig* Field_3_5; // 0x90
	::Class_3_AF7A56E03A4D3952_Class_1_6CB027CB4EE890F3* Field_3_45; // 0x98
	::Struct_2_7734F33592BF49F6_4 Field_3_11; // 0xA0
	::Class_3_AF7A56E03A4D3952_Class_1_6CB027CB4EE890F3* Field_3_43; // 0xC0
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_428*>* Field_3_51; // 0xC8
	::System::Object* Field_3_20; // 0xD0
	::System::Collections::Generic::List_1<::Class_3_9D59A2B00711B552_1*>* Field_3_12; // 0xD8
	::Class_3_AF7A56E03A4D3952_Class_1_6CB027CB4EE890F3* Field_3_44; // 0xE0
	::UnityEngine::Transform* Field_3_30; // 0xE8
	::UnityEngine::Vector3 Field_3_33; // 0xF0
	::System::Single Field_3_16; // 0xFC
	::UnityEngine::Vector3 Field_3_14; // 0x100
	::MoleMole::Battle::CurveMove_GamePlayIndex Field_3_26; // 0x10C
	::System::Single Field_3_17; // 0x110
	::Class_3_AF7A56E03A4D3952_Enum_3_5B468D3B4D74DA40 Field_3_18; // 0x114
	::System::Single Field_3_21; // 0x118
	::UnityEngine::Quaternion Field_3_41; // 0x11C
	::UnityEngine::Quaternion Field_3_15; // 0x12C
	::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode Field_3_4; // 0x13C
	::UnityEngine::Vector3 Field_3_31; // 0x140
	::UnityEngine::Vector3 Field_3_36; // 0x14C
	::System::Boolean Field_3_42; // 0x158
	::System::Boolean Field_3_13; // 0x159
	::System::Single Field_3_22; // 0x15C
	::System::Nullable_1<::System::Single> Field_3_35; // 0x160
	::System::Single Field_3_37; // 0x168
	::MoleMole::Battle::CurveMove_GamePlayIndex Field_3_27; // 0x16C
	::UnityEngine::Vector3 Field_3_48; // 0x170
	::MoleMole::Battle::CurveMoveComponent_Config_MoveType Field_3_28; // 0x17C
	::UnityEngine::Vector3 Field_3_34; // 0x180
	::MoleMole::Battle::CurveMove_CurvySplineIndex Field_3_25; // 0x18C
	::MoleMole::Battle::CurveMove_CurvySplineIndex Field_3_24; // 0x190
	::System::Boolean Field_3_6; // 0x194
	::System::Boolean Field_3_53; // 0x195
	::System::Boolean Field_3_3; // 0x196
	::System::Boolean Field_3_19; // 0x197
	::Class_3_AF7A56E03A4D3952_Struct_2_1596B20CDEDE3C29 Field_3_40; // 0x198
	::System::Nullable_1<::Class_3_AF7A56E03A4D3952_Struct_2_9EF7231D09D4C0A9> Field_3_8; // 0x19C
	::UnityEngine::Vector3 Field_3_47; // 0x1B4
	::Class_3_AF7A56E03A4D3952_Struct_2_70DCF23F0AA5A74A Field_3_39; // 0x1C0
	::UnityEngine::Vector3 Field_3_32; // 0x1C8
	::UnityEngine::Vector3 Field_3_49; // 0x1D4
	::Enum_3_CE3B674D22BBFC73 Field_3_1; // 0x1E0
	::System::Single Field_3_23; // 0x1E4
	::System::Single Field_3_38; // 0x1E8

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

	::System::Single Method_3_7043B9A9D77FB306()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_7043B9A9D77FB306_OFFSET))(this);
	}

	::System::Void Method_3_AEFF5CC7FD61CA78(::MoleMole::Battle::CurveMoveComponent_TriggerConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::CurveMoveComponent_TriggerConfig*))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_AEFF5CC7FD61CA78_OFFSET))(this, a1);
	}

	::System::Void Method_3_9FF9293B31203D6F(::MoleMole::Battle::CurveMoveComponent_Config* a1, ::Il2CppArray<::System::String*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::CurveMoveComponent_Config*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_9FF9293B31203D6F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_14B208BC8BAFAB72(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_14B208BC8BAFAB72_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_BC0FA8C838B766A1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_BC0FA8C838B766A1_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_3_958CD41C79BEFBD0()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_958CD41C79BEFBD0_OFFSET))(this);
	}

	::UnityEngine::Rigidbody* Method_3_88252A6D69D6544B()
	{
		return ((::UnityEngine::Rigidbody*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_88252A6D69D6544B_OFFSET))(this);
	}

	::System::Void Method_3_DFD49FDE07F1A120(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_DFD49FDE07F1A120_OFFSET))(this, a1);
	}

	::System::Single Method_3_FAE9C4050544FE63()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_FAE9C4050544FE63_OFFSET))(this);
	}

	::System::Void Method_3_6F0FCA5B214EDB6E(::MoleMole::Battle::CurveMoveComponent_Config* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::CurveMoveComponent_Config*))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_6F0FCA5B214EDB6E_OFFSET))(this, a1);
	}

	::System::Single Method_3_97F8E0A6BA1950FE()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_97F8E0A6BA1950FE_OFFSET))(this);
	}

	::System::Single Method_3_FAE9C4050544FE63_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_FAE9C4050544FE63_1_OFFSET))(this);
	}

	::System::Single Method_3_BCF6754C2E01AD87()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_BCF6754C2E01AD87_OFFSET))(this);
	}

	static ::Class_3_AF7A56E03A4D3952* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_AF7A56E03A4D3952*(*)())((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Void Method_3_9D8EF9AD3B13BD0E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_9D8EF9AD3B13BD0E_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_3_4F4018519B20BBDD()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_4F4018519B20BBDD_OFFSET))(this);
	}

	::System::Single Method_3_208CCBFF1B8F62A7()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_208CCBFF1B8F62A7_OFFSET))(this);
	}

	::System::Single Method_3_9876BEA27A0B4DC1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_9876BEA27A0B4DC1_OFFSET))(this);
	}

	::System::Void Method_3_13D78D8CCC5186FB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_13D78D8CCC5186FB_OFFSET))(this, a1);
	}

	::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode Method_3_1CF853AC8F764434()
	{
		return ((::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_1CF853AC8F764434_OFFSET))(this);
	}

	::FluffyUnderware::Curvy::CurvySpline* Method_3_D0EE81B3FDA3E65D()
	{
		return ((::FluffyUnderware::Curvy::CurvySpline*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_D0EE81B3FDA3E65D_OFFSET))(this);
	}

	::System::Boolean Method_3_A8F6F688241E6DBC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_A8F6F688241E6DBC_OFFSET))(this);
	}

	::System::Single Method_3_E9F89C1986E596DD()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_E9F89C1986E596DD_OFFSET))(this);
	}

	::System::Single Method_3_BDB014C4E3C92B50()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_BDB014C4E3C92B50_OFFSET))(this);
	}

	::System::Void Method_3_1C409C2CC83887DC(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_1C409C2CC83887DC_OFFSET))(this, a1);
	}

	::System::Void Method_3_41AA181104E03F2C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_41AA181104E03F2C_OFFSET))(this);
	}

	::System::Void Method_3_F75A8ECE5CAA5D87(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_F75A8ECE5CAA5D87_OFFSET))(this, a1);
	}

	::System::Void Method_3_93D3C239C19BFDF2(::Class_3_AF7A56E03A4D3952_Struct_2_3A8D9C555F9C80C1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_AF7A56E03A4D3952_Struct_2_3A8D9C555F9C80C1))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_93D3C239C19BFDF2_OFFSET))(this, a1);
	}

	::System::Single Method_3_8FD747E33B53F3FC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_8FD747E33B53F3FC_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_64914350C49C927D()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_64914350C49C927D_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_3_364BBA224DBE13B9()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_364BBA224DBE13B9_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_64914350C49C927D_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_64914350C49C927D_1_OFFSET))(this);
	}

	::System::Single Method_3_7043B9A9D77FB306_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_7043B9A9D77FB306_1_OFFSET))(this);
	}

	::System::Single Method_3_9876BEA27A0B4DC1_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_9876BEA27A0B4DC1_1_OFFSET))(this);
	}
};
