#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"
#include "unitysdk/Class_3_1A58F01F41846A1D_Enum_3_FA2CFBB30A448266.h"
#include "unitysdk/Enum_3_38416882F63DED4D.h"
#include "unitysdk/Enum_3_BEFF987CF595F64B.h"
#include "unitysdk/Enum_3_EE55B142EAFB18C0.h"
#include "unitysdk/MoleMole/Battle/BuddyMoveStatus.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/OverlapResult.h"
#include "unitysdk/UnityEngine/PhysicsScene.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_B7E341C5F1A6F199;
class Class_3_1A58F01F41846A1D;
class Class_3_757A5862D4BBEE41;
class Class_3_883E597458B91E77;
class Class_3_C2A6EC2B1ECF6022_Class_1_113EABE7C56E227F;
class Class_3_F33F9DC5F4112336;
class Class_3_F35B080B137ECC46;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigAvatarGround; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Collision; }

#define CLASS_3_C2A6EC2B1ECF6022_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xB9326E0)
#define CLASS_3_C2A6EC2B1ECF6022_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xB932EB0)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_0318F919EC7DFBDE_1_OFFSET UNITYSDK_OFFSET(0xB93CDB0)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_0318F919EC7DFBDE_OFFSET UNITYSDK_OFFSET(0xB93B8C0)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_087A8BE6308E9FE5_OFFSET UNITYSDK_OFFSET(0xB93A430)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_0BE6FDF166C4D824_OFFSET UNITYSDK_OFFSET(0xB93D5F0)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_0C2DADBA8F7CC36C_OFFSET UNITYSDK_OFFSET(0xB93CE60)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_0D5367F7E93649BA_OFFSET UNITYSDK_OFFSET(0xB93FB80)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_1084A456970E883C_OFFSET UNITYSDK_OFFSET(0xB936D90)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_12ABD2062307A0A9_OFFSET UNITYSDK_OFFSET(0xB93CB50)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_13A34547B1DC709B_OFFSET UNITYSDK_OFFSET(0xB942780)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_1C078AB832754D33_OFFSET UNITYSDK_OFFSET(0xB9377A0)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_1E2D4507FCC745F8_OFFSET UNITYSDK_OFFSET(0xB9350B0)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_1FDCAD104C28218E_OFFSET UNITYSDK_OFFSET(0xB946BA0)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_291D463BB1648C58_OFFSET UNITYSDK_OFFSET(0xB9407C0)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_2A52AA7966660572_OFFSET UNITYSDK_OFFSET(0xB93DA80)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_2A6341C84F595DB3_OFFSET UNITYSDK_OFFSET(0xB93D2E0)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xB932C00)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_34A582166C77DCBB_OFFSET UNITYSDK_OFFSET(0xB93EA00)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_35B285B9666F04CB_OFFSET UNITYSDK_OFFSET(0xB93CA50)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_3682AD6D9AEB9F85_OFFSET UNITYSDK_OFFSET(0xB934520)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_3AEA291E33834540_OFFSET UNITYSDK_OFFSET(0xB937AF0)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_3EC5F2E1E30EBF5F_OFFSET UNITYSDK_OFFSET(0xB9343D0)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_40177B0654BE4D03_OFFSET UNITYSDK_OFFSET(0xB93A650)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_4236AE1ACE1003A7_OFFSET UNITYSDK_OFFSET(0xB93F100)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_4565DD8F7DA0A533_OFFSET UNITYSDK_OFFSET(0xB942B20)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_49581DC19BD3C45B_OFFSET UNITYSDK_OFFSET(0xB9406F0)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_4BF127356512DD4C_OFFSET UNITYSDK_OFFSET(0xB945940)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_4C4EB20CE29E4247_OFFSET UNITYSDK_OFFSET(0xB9393A0)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_4D0B1E3DEB3809A6_OFFSET UNITYSDK_OFFSET(0xB945FD0)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_4EC9D1393B1E1853_OFFSET UNITYSDK_OFFSET(0xB9337C0)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_504E0203274C6958_OFFSET UNITYSDK_OFFSET(0xB93A860)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_58723AF19337DFD2_OFFSET UNITYSDK_OFFSET(0xB933120)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_5DD938090F912A75_OFFSET UNITYSDK_OFFSET(0xB936BD0)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_6B2BC02998B71E49_1_OFFSET UNITYSDK_OFFSET(0xB946E80)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_6B2BC02998B71E49_OFFSET UNITYSDK_OFFSET(0xB934000)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_6DC37033BBE0C893_OFFSET UNITYSDK_OFFSET(0xB936440)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_6F5F34C2E846F653_OFFSET UNITYSDK_OFFSET(0xB93D3B0)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_7139E2CEF26A631E_OFFSET UNITYSDK_OFFSET(0xB93B970)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_7613189810C6E4A8_OFFSET UNITYSDK_OFFSET(0xB93E360)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0xB933560)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_7BC681DC2FE82F9C_OFFSET UNITYSDK_OFFSET(0xB934920)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_81222F7907B5351F_OFFSET UNITYSDK_OFFSET(0xB93B540)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_838A7B6FC3359269_OFFSET UNITYSDK_OFFSET(0xB934170)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_875728A138257253_OFFSET UNITYSDK_OFFSET(0xB93E050)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_894CD90FDD8E5A51_OFFSET UNITYSDK_OFFSET(0xB939270)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_90A57515CF8DC3E6_OFFSET UNITYSDK_OFFSET(0xB93D790)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_9517A06641DAD79D_OFFSET UNITYSDK_OFFSET(0xB935710)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_99939C8D3855E987_OFFSET UNITYSDK_OFFSET(0xB940860)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_A05CB6C8CA2F1F8C_OFFSET UNITYSDK_OFFSET(0xB935510)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_B2AF81294D9C69C7_OFFSET UNITYSDK_OFFSET(0xB940030)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_B95ADEEB20B0DCB9_OFFSET UNITYSDK_OFFSET(0xB93AE40)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_BA23ABBCB438F911_1_OFFSET UNITYSDK_OFFSET(0xB93FC90)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_BA23ABBCB438F911_OFFSET UNITYSDK_OFFSET(0xB93D530)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0xB936B00)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_C4047CEDBF80BA43_OFFSET UNITYSDK_OFFSET(0xB93FD50)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_C7DE1AF11678E6C9_OFFSET UNITYSDK_OFFSET(0xB93DCE0)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xB942720)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB93DC80)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_CD4B42E9FB3B4664_OFFSET UNITYSDK_OFFSET(0xB9467E0)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_CDF7A47540D58A1F_OFFSET UNITYSDK_OFFSET(0xB938CF0)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_CE4018127FC7CA29_OFFSET UNITYSDK_OFFSET(0xB946590)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_CE742D772F61C581_OFFSET UNITYSDK_OFFSET(0xB940240)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_CF5CACF693399788_OFFSET UNITYSDK_OFFSET(0xB93B6F0)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_D2A77B0E8639B02F_OFFSET UNITYSDK_OFFSET(0xB933BD0)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_DA58DB5EBDA55489_OFFSET UNITYSDK_OFFSET(0xB942460)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_DCCF6971A34E254B_OFFSET UNITYSDK_OFFSET(0xB93F850)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_DF0A1C927249667E_OFFSET UNITYSDK_OFFSET(0xB934650)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_E00BE8BA45FD2F07_OFFSET UNITYSDK_OFFSET(0xB93E2A0)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_F0E307B84478A272_1_OFFSET UNITYSDK_OFFSET(0xB936B70)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_F0E307B84478A272_2_OFFSET UNITYSDK_OFFSET(0xB934110)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0xB933FA0)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_F62A43E9F5116F27_OFFSET UNITYSDK_OFFSET(0xB93D1D0)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_FACC359C557FA106_OFFSET UNITYSDK_OFFSET(0xB93D700)
#define CLASS_3_C2A6EC2B1ECF6022_METHOD_3_FBE20055716EA59C_OFFSET UNITYSDK_OFFSET(0xB934300)
#define CLASS_3_C2A6EC2B1ECF6022_UPDATE_OFFSET UNITYSDK_OFFSET(0xB932D30)
#define CLASS_3_C2A6EC2B1ECF6022__CCTOR_OFFSET UNITYSDK_OFFSET(0xB9336F0)
#define CLASS_3_C2A6EC2B1ECF6022__CTOR_OFFSET UNITYSDK_OFFSET(0xB9336D0)

inline static constexpr unsigned int Class_3_C2A6EC2B1ECF6022_TypeDefinitionIndex = 59823;

class Class_3_C2A6EC2B1ECF6022 : public ::Class_2_F33340E023067DAF
{
public:
	static ::Class_3_C2A6EC2B1ECF6022_Class_1_113EABE7C56E227F** StaticGet_Field_3_2()
	{
		return (::Class_3_C2A6EC2B1ECF6022_Class_1_113EABE7C56E227F**)Il2CppClass::FromTypeDefinitionIndex(Class_3_C2A6EC2B1ECF6022_TypeDefinitionIndex)->GetStaticField(0x311C0);
	}
	static ::System::Int32* StaticGet_Field_3_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_C2A6EC2B1ECF6022_TypeDefinitionIndex)->GetStaticField(0xC0D0);
	}
	static ::System::Boolean* StaticGet_Field_3_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_C2A6EC2B1ECF6022_TypeDefinitionIndex)->GetStaticField(0xC0D4);
	}
	static ::System::Boolean* StaticGet_Field_3_10()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_C2A6EC2B1ECF6022_TypeDefinitionIndex)->GetStaticField(0xC0D5);
	}
	static ::System::Boolean* StaticGet_Field_3_8()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_C2A6EC2B1ECF6022_TypeDefinitionIndex)->GetStaticField(0xC0D6);
	}
	static ::UnityEngine::PhysicsScene* StaticGet_Field_3_5()
	{
		return (::UnityEngine::PhysicsScene*)Il2CppClass::FromTypeDefinitionIndex(Class_3_C2A6EC2B1ECF6022_TypeDefinitionIndex)->GetStaticField(0xC0D8);
	}
	static ::System::Single* StaticGet_Field_3_6()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_C2A6EC2B1ECF6022_TypeDefinitionIndex)->GetStaticField(0xC0DC);
	}
	static ::Unity::Jobs::JobHandle* StaticGet_Field_3_7()
	{
		return (::Unity::Jobs::JobHandle*)Il2CppClass::FromTypeDefinitionIndex(Class_3_C2A6EC2B1ECF6022_TypeDefinitionIndex)->GetStaticField(0xC0E0);
	}
	// static const ::System::Single Field_3_4; // 0x0
	::Nap::NapECS::EcsFilter* Field_3_9; // 0x20
	::System::Action_4<::Class_3_F35B080B137ECC46*, ::Class_3_1A58F01F41846A1D*, ::Class_3_F33F9DC5F4112336*, ::Class_3_883E597458B91E77*>* Field_3_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_UPDATE_OFFSET))(this);
	}

	::System::Void FixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_FIXEDUPDATE_OFFSET))(this);
	}

	static ::System::Boolean Method_3_4EC9D1393B1E1853(::Class_3_F35B080B137ECC46* a1, ::UnityEngine::RaycastHit& a2)
	{
		return ((::System::Boolean(*)(::Class_3_F35B080B137ECC46*, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_4EC9D1393B1E1853_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_F0E307B84478A272_OFFSET))();
	}

	static ::System::Boolean Method_3_6B2BC02998B71E49(::Class_3_1A58F01F41846A1D* a1)
	{
		return ((::System::Boolean(*)(::Class_3_1A58F01F41846A1D*))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_6B2BC02998B71E49_OFFSET))(a1);
	}

	static ::System::Void Method_3_838A7B6FC3359269(::Class_3_1A58F01F41846A1D* a1)
	{
		return ((::System::Void(*)(::Class_3_1A58F01F41846A1D*))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_838A7B6FC3359269_OFFSET))(a1);
	}

	static ::System::Void Method_3_3EC5F2E1E30EBF5F(::Class_3_F35B080B137ECC46* a1, ::Class_3_1A58F01F41846A1D* a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::Class_3_F35B080B137ECC46*, ::Class_3_1A58F01F41846A1D*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_3EC5F2E1E30EBF5F_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_DF0A1C927249667E(::UnityEngine::Collider* a1, ::System::String* a2, ::Class_3_1A58F01F41846A1D_Enum_3_FA2CFBB30A448266 a3)
	{
		return ((::System::Boolean(*)(::UnityEngine::Collider*, ::System::String*, ::Class_3_1A58F01F41846A1D_Enum_3_FA2CFBB30A448266))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_DF0A1C927249667E_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_7BC681DC2FE82F9C(::Class_3_1A58F01F41846A1D* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::Class_3_1A58F01F41846A1D*, ::Class_3_F33F9DC5F4112336*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_7BC681DC2FE82F9C_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_1E2D4507FCC745F8(::Class_3_1A58F01F41846A1D* a1, ::Class_3_F35B080B137ECC46* a2)
	{
		return ((::System::Void(*)(::Class_3_1A58F01F41846A1D*, ::Class_3_F35B080B137ECC46*))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_1E2D4507FCC745F8_OFFSET))(a1, a2);
	}

	::System::Boolean Method_3_58723AF19337DFD2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_58723AF19337DFD2_OFFSET))(this);
	}

	static ::System::Void Method_3_6DC37033BBE0C893(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_6DC37033BBE0C893_OFFSET))(a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_F0E307B84478A272_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_F0E307B84478A272_1_OFFSET))();
	}

	static ::System::Boolean Method_3_5DD938090F912A75(::Il2CppArray<::UnityEngine::RaycastHit>* a1, ::System::Int32 a2, ::System::Int32& a3)
	{
		return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_5DD938090F912A75_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_1084A456970E883C(::UnityEngine::Collider* a1, ::UnityEngine::Collider* a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Collider*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_1084A456970E883C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_1C078AB832754D33(::Class_3_F35B080B137ECC46* a1, ::Class_3_1A58F01F41846A1D* a2)
	{
		return ((::System::Void(*)(::Class_3_F35B080B137ECC46*, ::Class_3_1A58F01F41846A1D*))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_1C078AB832754D33_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_CDF7A47540D58A1F(::MoleMole::Battle::Entity* a1, ::System::Int32 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::Int32 a5, ::UnityEngine::PhysicsScene a6, ::Il2CppArray<::UnityEngine::RaycastHit>* a7)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32, ::UnityEngine::PhysicsScene, ::Il2CppArray<::UnityEngine::RaycastHit>*))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_CDF7A47540D58A1F_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void Method_3_894CD90FDD8E5A51(::Class_3_1A58F01F41846A1D* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_1A58F01F41846A1D*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_894CD90FDD8E5A51_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_4C4EB20CE29E4247(::Class_3_F35B080B137ECC46* a1, ::Class_3_1A58F01F41846A1D* a2)
	{
		return ((::System::Void(*)(::Class_3_F35B080B137ECC46*, ::Class_3_1A58F01F41846A1D*))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_4C4EB20CE29E4247_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_087A8BE6308E9FE5(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_087A8BE6308E9FE5_OFFSET))(a1);
	}

	static ::System::Void Method_3_40177B0654BE4D03(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_40177B0654BE4D03_OFFSET))(a1);
	}

	static ::System::Void Method_3_B95ADEEB20B0DCB9(::Class_3_F35B080B137ECC46* a1, ::Class_3_1A58F01F41846A1D* a2, ::Class_3_F33F9DC5F4112336* a3, ::Class_3_883E597458B91E77* a4)
	{
		return ((::System::Void(*)(::Class_3_F35B080B137ECC46*, ::Class_3_1A58F01F41846A1D*, ::Class_3_F33F9DC5F4112336*, ::Class_3_883E597458B91E77*))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_B95ADEEB20B0DCB9_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_CF5CACF693399788(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_CF5CACF693399788_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_A05CB6C8CA2F1F8C(::Class_3_1A58F01F41846A1D* a1)
	{
		return ((::System::Void(*)(::Class_3_1A58F01F41846A1D*))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_A05CB6C8CA2F1F8C_OFFSET))(a1);
	}

	static ::System::Void Method_3_0318F919EC7DFBDE(::Class_3_1A58F01F41846A1D* a1, ::UnityEngine::Collision* a2)
	{
		return ((::System::Void(*)(::Class_3_1A58F01F41846A1D*, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_0318F919EC7DFBDE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_35B285B9666F04CB(::Class_3_1A58F01F41846A1D* a1, ::MoleMole::Battle::BuddyMoveStatus a2)
	{
		return ((::System::Void(*)(::Class_3_1A58F01F41846A1D*, ::MoleMole::Battle::BuddyMoveStatus))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_35B285B9666F04CB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_0318F919EC7DFBDE_1(::Class_3_1A58F01F41846A1D* a1, ::UnityEngine::Collision* a2)
	{
		return ((::System::Void(*)(::Class_3_1A58F01F41846A1D*, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_0318F919EC7DFBDE_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_0C2DADBA8F7CC36C(::Class_3_1A58F01F41846A1D* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_1A58F01F41846A1D*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_0C2DADBA8F7CC36C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9517A06641DAD79D(::Class_3_1A58F01F41846A1D* a1, ::Class_3_757A5862D4BBEE41* a2, ::Class_3_F35B080B137ECC46* a3, ::Enum_3_EE55B142EAFB18C0 a4)
	{
		return ((::System::Void(*)(::Class_3_1A58F01F41846A1D*, ::Class_3_757A5862D4BBEE41*, ::Class_3_F35B080B137ECC46*, ::Enum_3_EE55B142EAFB18C0))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_9517A06641DAD79D_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_79830F666EE579C0()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_79830F666EE579C0_OFFSET))();
	}

	static ::System::Single Method_3_F62A43E9F5116F27(::Enum_3_EE55B142EAFB18C0 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Single(*)(::Enum_3_EE55B142EAFB18C0, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_F62A43E9F5116F27_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_3_BA23ABBCB438F911(::Class_3_1A58F01F41846A1D* a1)
	{
		return ((::System::Single(*)(::Class_3_1A58F01F41846A1D*))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_BA23ABBCB438F911_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_0BE6FDF166C4D824(::System::Int32 a1, ::Il2CppArray<::UnityEngine::OverlapResult>* a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::Il2CppArray<::UnityEngine::OverlapResult>*))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_0BE6FDF166C4D824_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7139E2CEF26A631E(::Class_3_1A58F01F41846A1D* a1, ::UnityEngine::Collision* a2, ::Enum_3_BEFF987CF595F64B a3)
	{
		return ((::System::Void(*)(::Class_3_1A58F01F41846A1D*, ::UnityEngine::Collision*, ::Enum_3_BEFF987CF595F64B))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_7139E2CEF26A631E_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_FACC359C557FA106(::Class_3_1A58F01F41846A1D* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_1A58F01F41846A1D*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_FACC359C557FA106_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_90A57515CF8DC3E6(::Class_3_1A58F01F41846A1D* a1)
	{
		return ((::System::Void(*)(::Class_3_1A58F01F41846A1D*))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_90A57515CF8DC3E6_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_3_2A6341C84F595DB3(::Enum_3_EE55B142EAFB18C0 a1, ::System::Single a2)
	{
		return ((::UnityEngine::Vector3(*)(::Enum_3_EE55B142EAFB18C0, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_2A6341C84F595DB3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_6F5F34C2E846F653(::Class_3_1A58F01F41846A1D* a1, ::Enum_3_EE55B142EAFB18C0 a2)
	{
		return ((::System::Void(*)(::Class_3_1A58F01F41846A1D*, ::Enum_3_EE55B142EAFB18C0))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_6F5F34C2E846F653_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_2A52AA7966660572(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_2A52AA7966660572_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Boolean Method_3_C7DE1AF11678E6C9(::System::Single a1, ::Class_3_1A58F01F41846A1D* a2, ::UnityEngine::RaycastHit a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::System::Single, ::Class_3_1A58F01F41846A1D*, ::UnityEngine::RaycastHit, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_C7DE1AF11678E6C9_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_E00BE8BA45FD2F07()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_E00BE8BA45FD2F07_OFFSET))();
	}

	static ::System::Void Method_3_7613189810C6E4A8(::Class_3_1A58F01F41846A1D* a1)
	{
		return ((::System::Void(*)(::Class_3_1A58F01F41846A1D*))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_7613189810C6E4A8_OFFSET))(a1);
	}

	static ::System::Void Method_3_34A582166C77DCBB(::Class_3_1A58F01F41846A1D* a1, ::Class_3_F35B080B137ECC46* a2, ::UnityEngine::RaycastHit& a3, ::System::Single& a4, ::System::Single& a5)
	{
		return ((::System::Void(*)(::Class_3_1A58F01F41846A1D*, ::Class_3_F35B080B137ECC46*, ::UnityEngine::RaycastHit&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_34A582166C77DCBB_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Int32 Method_3_DCCF6971A34E254B(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::Il2CppArray<::UnityEngine::RaycastHit>* a4, ::System::Single a5, ::System::Int32 a6)
	{
		return ((::System::Int32(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_DCCF6971A34E254B_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Boolean Method_3_D2A77B0E8639B02F(::Il2CppArray<::UnityEngine::RaycastHit>* a1, ::System::Int32 a2, ::System::Int32& a3, ::System::String* a4)
	{
		return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Int32, ::System::Int32&, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_D2A77B0E8639B02F_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single Method_3_BA23ABBCB438F911_1(::Class_3_1A58F01F41846A1D* a1)
	{
		return ((::System::Single(*)(::Class_3_1A58F01F41846A1D*))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_BA23ABBCB438F911_1_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_3_C4047CEDBF80BA43(::Class_3_F35B080B137ECC46* a1)
	{
		return ((::UnityEngine::Vector3(*)(::Class_3_F35B080B137ECC46*))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_C4047CEDBF80BA43_OFFSET))(a1);
	}

	static ::System::Void Method_3_B2AF81294D9C69C7()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_B2AF81294D9C69C7_OFFSET))();
	}

	::System::Void Method_3_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	static ::System::Boolean Method_3_4236AE1ACE1003A7(::Class_3_F35B080B137ECC46* a1, ::UnityEngine::RaycastHit& a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Boolean(*)(::Class_3_F35B080B137ECC46*, ::UnityEngine::RaycastHit&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_4236AE1ACE1003A7_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_CE742D772F61C581(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_CE742D772F61C581_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_49581DC19BD3C45B(::Class_3_F35B080B137ECC46* a1)
	{
		return ((::System::Boolean(*)(::Class_3_F35B080B137ECC46*))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_49581DC19BD3C45B_OFFSET))(a1);
	}

	static ::System::Void Method_3_291D463BB1648C58(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_291D463BB1648C58_OFFSET))(a1);
	}

	static ::System::Void Method_3_99939C8D3855E987(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_99939C8D3855E987_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	static ::System::Void Method_3_81222F7907B5351F(::Class_3_F35B080B137ECC46* a1, ::Class_3_1A58F01F41846A1D* a2)
	{
		return ((::System::Void(*)(::Class_3_F35B080B137ECC46*, ::Class_3_1A58F01F41846A1D*))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_81222F7907B5351F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_13A34547B1DC709B(::Class_3_1A58F01F41846A1D* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_1A58F01F41846A1D*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_13A34547B1DC709B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_4565DD8F7DA0A533(::Class_3_F35B080B137ECC46* a1, ::Class_3_1A58F01F41846A1D* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_3_F35B080B137ECC46*, ::Class_3_1A58F01F41846A1D*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_4565DD8F7DA0A533_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_4D0B1E3DEB3809A6(::Class_3_1A58F01F41846A1D* a1, ::UnityEngine::Collider* a2)
	{
		return ((::System::Void(*)(::Class_3_1A58F01F41846A1D*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_4D0B1E3DEB3809A6_OFFSET))(a1, a2);
	}

	static ::Class_3_1A58F01F41846A1D_Enum_3_FA2CFBB30A448266 Method_3_0D5367F7E93649BA(::System::String* a1, ::System::Boolean a2)
	{
		return ((::Class_3_1A58F01F41846A1D_Enum_3_FA2CFBB30A448266(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_0D5367F7E93649BA_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_3_CE4018127FC7CA29(::UnityEngine::Vector3 a1, ::System::Single a2, ::Il2CppArray<::UnityEngine::Collider*>* a3, ::System::Int32 a4)
	{
		return ((::System::Int32(*)(::UnityEngine::Vector3, ::System::Single, ::Il2CppArray<::UnityEngine::Collider*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_CE4018127FC7CA29_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_3AEA291E33834540(::Class_3_F35B080B137ECC46* a1, ::Class_3_1A58F01F41846A1D* a2)
	{
		return ((::System::Void(*)(::Class_3_F35B080B137ECC46*, ::Class_3_1A58F01F41846A1D*))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_3AEA291E33834540_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_6B2BC02998B71E49_1(::Class_3_1A58F01F41846A1D* a1)
	{
		return ((::System::Boolean(*)(::Class_3_1A58F01F41846A1D*))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_6B2BC02998B71E49_1_OFFSET))(a1);
	}

	static ::System::Void Method_3_1FDCAD104C28218E(::Class_3_1A58F01F41846A1D* a1)
	{
		return ((::System::Void(*)(::Class_3_1A58F01F41846A1D*))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_1FDCAD104C28218E_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_4BF127356512DD4C(::MoleMole::Battle::Entity* a1, ::UnityEngine::Collider* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::Int32 a5)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::UnityEngine::Collider*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_4BF127356512DD4C_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_504E0203274C6958(::Class_3_1A58F01F41846A1D* a1)
	{
		return ((::System::Void(*)(::Class_3_1A58F01F41846A1D*))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_504E0203274C6958_OFFSET))(a1);
	}

	static ::System::Void Method_3_CD4B42E9FB3B4664(::Class_3_F35B080B137ECC46* a1, ::Class_3_1A58F01F41846A1D* a2, ::UnityEngine::RaycastHit a3, ::MoleMole::Config::ConfigAvatarGround* a4)
	{
		return ((::System::Void(*)(::Class_3_F35B080B137ECC46*, ::Class_3_1A58F01F41846A1D*, ::UnityEngine::RaycastHit, ::MoleMole::Config::ConfigAvatarGround*))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_CD4B42E9FB3B4664_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_FBE20055716EA59C(::Class_3_1A58F01F41846A1D* a1, ::Enum_3_38416882F63DED4D a2)
	{
		return ((::System::Void(*)(::Class_3_1A58F01F41846A1D*, ::Enum_3_38416882F63DED4D))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_FBE20055716EA59C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_12ABD2062307A0A9(::Class_3_1A58F01F41846A1D* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_1A58F01F41846A1D*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_12ABD2062307A0A9_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_DA58DB5EBDA55489(::Il2CppArray<::UnityEngine::RaycastHit>* a1, ::System::Int32 a2, ::System::Int32& a3, ::System::Int32 a4)
	{
		return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Int32, ::System::Int32&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_DA58DB5EBDA55489_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_3_F0E307B84478A272_2()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_F0E307B84478A272_2_OFFSET))();
	}

	static ::UnityEngine::Vector3 Method_3_875728A138257253(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_875728A138257253_OFFSET))(a1);
	}

	static ::System::Void Method_3_3682AD6D9AEB9F85(::Class_3_1A58F01F41846A1D* a1, ::MoleMole::Battle::BuddyMoveStatus a2)
	{
		return ((::System::Void(*)(::Class_3_1A58F01F41846A1D*, ::MoleMole::Battle::BuddyMoveStatus))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_METHOD_3_3682AD6D9AEB9F85_OFFSET))(a1, a2);
	}
};
