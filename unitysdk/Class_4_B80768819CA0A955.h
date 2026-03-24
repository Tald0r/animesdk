#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_8A1950E927A803DD.h"
#include "unitysdk/MoleMole/Config/EnterBattleState.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_B7E341C5F1A6F199;
class Class_2_131E282CCAEB876E;
class Class_3_F35B080B137ECC46;
class Class_4_E2880458FFC7DD8C;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigMonsterAlertDetection; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Collider; }

#define CLASS_4_B80768819CA0A955_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xDA01730)
#define CLASS_4_B80768819CA0A955_METHOD_4_03C9F92555B4ECA5_OFFSET UNITYSDK_OFFSET(0xDA051A0)
#define CLASS_4_B80768819CA0A955_METHOD_4_07260E158E16F5C8_OFFSET UNITYSDK_OFFSET(0xDA02FB0)
#define CLASS_4_B80768819CA0A955_METHOD_4_1B69949CC96F3222_OFFSET UNITYSDK_OFFSET(0xDA041B0)
#define CLASS_4_B80768819CA0A955_METHOD_4_2E5577B45C3A6331_OFFSET UNITYSDK_OFFSET(0xDA039F0)
#define CLASS_4_B80768819CA0A955_METHOD_4_2FF3B28B819291CC_OFFSET UNITYSDK_OFFSET(0xDA04E80)
#define CLASS_4_B80768819CA0A955_METHOD_4_3D0534AA2D432BB1_OFFSET UNITYSDK_OFFSET(0xDA05F70)
#define CLASS_4_B80768819CA0A955_METHOD_4_3DE07625623E7642_OFFSET UNITYSDK_OFFSET(0xDA03310)
#define CLASS_4_B80768819CA0A955_METHOD_4_428C26F6CE7DEA86_OFFSET UNITYSDK_OFFSET(0xDA06CB0)
#define CLASS_4_B80768819CA0A955_METHOD_4_42D59398E65EF6BC_OFFSET UNITYSDK_OFFSET(0xDA01DA0)
#define CLASS_4_B80768819CA0A955_METHOD_4_439D48CD85F60940_OFFSET UNITYSDK_OFFSET(0xDA072B0)
#define CLASS_4_B80768819CA0A955_METHOD_4_453C30DBA4890F13_OFFSET UNITYSDK_OFFSET(0xDA054F0)
#define CLASS_4_B80768819CA0A955_METHOD_4_471A648E99DD9744_OFFSET UNITYSDK_OFFSET(0xDA06700)
#define CLASS_4_B80768819CA0A955_METHOD_4_4E7E61ED60588CD1_OFFSET UNITYSDK_OFFSET(0xDA05BB0)
#define CLASS_4_B80768819CA0A955_METHOD_4_52F4D764A2B78DA1_OFFSET UNITYSDK_OFFSET(0xDA04A10)
#define CLASS_4_B80768819CA0A955_METHOD_4_5BC7A534F7CBA368_OFFSET UNITYSDK_OFFSET(0xDA01EF0)
#define CLASS_4_B80768819CA0A955_METHOD_4_5ED71F4369726644_OFFSET UNITYSDK_OFFSET(0xDA034A0)
#define CLASS_4_B80768819CA0A955_METHOD_4_64D6A528AE399C90_OFFSET UNITYSDK_OFFSET(0xDA02E40)
#define CLASS_4_B80768819CA0A955_METHOD_4_7008438461B29FF7_OFFSET UNITYSDK_OFFSET(0xDA057C0)
#define CLASS_4_B80768819CA0A955_METHOD_4_706D8145C9D4A5BB_OFFSET UNITYSDK_OFFSET(0xDA04F90)
#define CLASS_4_B80768819CA0A955_METHOD_4_8426FA9F1F30370F_1_OFFSET UNITYSDK_OFFSET(0xDA06EC0)
#define CLASS_4_B80768819CA0A955_METHOD_4_8426FA9F1F30370F_OFFSET UNITYSDK_OFFSET(0xDA06790)
#define CLASS_4_B80768819CA0A955_METHOD_4_985496D5F8D75979_OFFSET UNITYSDK_OFFSET(0xDA07210)
#define CLASS_4_B80768819CA0A955_METHOD_4_A832EF2AAF65C233_OFFSET UNITYSDK_OFFSET(0xDA04130)
#define CLASS_4_B80768819CA0A955_METHOD_4_AEFBC2A58B360B6C_OFFSET UNITYSDK_OFFSET(0xDA03C30)
#define CLASS_4_B80768819CA0A955_METHOD_4_B08381E23A67004A_OFFSET UNITYSDK_OFFSET(0xDA05E10)
#define CLASS_4_B80768819CA0A955_METHOD_4_B83F1E7CDFC3D4E4_OFFSET UNITYSDK_OFFSET(0xDA05A90)
#define CLASS_4_B80768819CA0A955_METHOD_4_B8478F2533DF8175_OFFSET UNITYSDK_OFFSET(0xDA07400)
#define CLASS_4_B80768819CA0A955_METHOD_4_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0xDA07820)
#define CLASS_4_B80768819CA0A955_METHOD_4_BB89B5B63C3D548B_OFFSET UNITYSDK_OFFSET(0xDA03900)
#define CLASS_4_B80768819CA0A955_METHOD_4_BCE0870E24CB5A0E_OFFSET UNITYSDK_OFFSET(0xDA03ED0)
#define CLASS_4_B80768819CA0A955_METHOD_4_BE108B521C65CF79_OFFSET UNITYSDK_OFFSET(0xDA02B70)
#define CLASS_4_B80768819CA0A955_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xDA06FD0)
#define CLASS_4_B80768819CA0A955_METHOD_4_D1C1A181C07AE800_OFFSET UNITYSDK_OFFSET(0xDA033D0)
#define CLASS_4_B80768819CA0A955_METHOD_4_D37EF3105C37A448_OFFSET UNITYSDK_OFFSET(0xDA06F60)
#define CLASS_4_B80768819CA0A955_METHOD_4_DD38D2554F3D0693_OFFSET UNITYSDK_OFFSET(0xDA06820)
#define CLASS_4_B80768819CA0A955_METHOD_4_DEE311D4B72C5B6A_OFFSET UNITYSDK_OFFSET(0xDA07030)
#define CLASS_4_B80768819CA0A955_METHOD_4_E2ABCE88E4210F30_OFFSET UNITYSDK_OFFSET(0xDA03CA0)
#define CLASS_4_B80768819CA0A955_METHOD_4_E5929A4045C7BEE2_OFFSET UNITYSDK_OFFSET(0xDA061C0)
#define CLASS_4_B80768819CA0A955_UPDATE_OFFSET UNITYSDK_OFFSET(0xDA01C00)
#define CLASS_4_B80768819CA0A955__CTOR_OFFSET UNITYSDK_OFFSET(0xDA01D80)

inline static constexpr unsigned int Class_4_B80768819CA0A955_TypeDefinitionIndex = 76676;

class Class_4_B80768819CA0A955 : public ::Class_3_8A1950E927A803DD
{
public:
	::Nap::NapECS::EcsFilter* Field_4_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_UPDATE_OFFSET))(this);
	}

	::System::Void Method_4_42D59398E65EF6BC(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_42D59398E65EF6BC_OFFSET))(this, a1);
	}

	static ::System::Void Method_4_5BC7A534F7CBA368(::Class_4_E2880458FFC7DD8C* a1, ::Class_3_F35B080B137ECC46* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::Class_4_E2880458FFC7DD8C*, ::Class_3_F35B080B137ECC46*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_5BC7A534F7CBA368_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_4_D1C1A181C07AE800(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_D1C1A181C07AE800_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_5ED71F4369726644(::System::Single a1, ::Class_4_E2880458FFC7DD8C* a2)
	{
		return ((::System::Void(*)(::System::Single, ::Class_4_E2880458FFC7DD8C*))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_5ED71F4369726644_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_AEFBC2A58B360B6C(::System::Single a1, ::Class_4_E2880458FFC7DD8C* a2)
	{
		return ((::System::Void(*)(::System::Single, ::Class_4_E2880458FFC7DD8C*))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_AEFBC2A58B360B6C_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_4_E2ABCE88E4210F30(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::EnterBattleState a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::EnterBattleState))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_E2ABCE88E4210F30_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_4_BB89B5B63C3D548B(::Class_4_E2880458FFC7DD8C* a1)
	{
		return ((::System::Boolean(*)(::Class_4_E2880458FFC7DD8C*))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_BB89B5B63C3D548B_OFFSET))(a1);
	}

	static ::System::Void Method_4_BCE0870E24CB5A0E(::MoleMole::Battle::Entity* a1, ::Class_2_131E282CCAEB876E* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_2_131E282CCAEB876E*))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_BCE0870E24CB5A0E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_A832EF2AAF65C233(::Class_4_E2880458FFC7DD8C* a1)
	{
		return ((::System::Void(*)(::Class_4_E2880458FFC7DD8C*))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_A832EF2AAF65C233_OFFSET))(a1);
	}

	static ::System::Boolean Method_4_1B69949CC96F3222(::Class_4_E2880458FFC7DD8C* a1, ::Class_3_F35B080B137ECC46* a2, ::MoleMole::Battle::Entity* a3, ::MoleMole::Config::ConfigMonsterAlertDetection* a4)
	{
		return ((::System::Boolean(*)(::Class_4_E2880458FFC7DD8C*, ::Class_3_F35B080B137ECC46*, ::MoleMole::Battle::Entity*, ::MoleMole::Config::ConfigMonsterAlertDetection*))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_1B69949CC96F3222_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_4_64D6A528AE399C90(::Class_4_E2880458FFC7DD8C* a1, ::Class_3_F35B080B137ECC46* a2, ::MoleMole::Battle::Entity* a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::Class_4_E2880458FFC7DD8C*, ::Class_3_F35B080B137ECC46*, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_64D6A528AE399C90_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_4_52F4D764A2B78DA1(::Class_4_E2880458FFC7DD8C* a1, ::Class_3_F35B080B137ECC46* a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Boolean(*)(::Class_4_E2880458FFC7DD8C*, ::Class_3_F35B080B137ECC46*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_52F4D764A2B78DA1_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_4_07260E158E16F5C8(::System::Collections::Generic::Dictionary_2<::System::Single, ::System::Single>* a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::System::Collections::Generic::Dictionary_2<::System::Single, ::System::Single>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_07260E158E16F5C8_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_4_3DE07625623E7642(::Class_4_E2880458FFC7DD8C* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Boolean(*)(::Class_4_E2880458FFC7DD8C*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_3DE07625623E7642_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_4_2FF3B28B819291CC(::System::Collections::Generic::HashSet_1<::UnityEngine::LayerMask>* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::HashSet_1<::UnityEngine::LayerMask>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_2FF3B28B819291CC_OFFSET))(a1, a2);
	}

	::System::Void Method_4_03C9F92555B4ECA5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_03C9F92555B4ECA5_OFFSET))(this, a1);
	}

	static ::System::Void Method_4_453C30DBA4890F13(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::EnterBattleState a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::EnterBattleState, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_453C30DBA4890F13_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_4_B83F1E7CDFC3D4E4(::Class_4_E2880458FFC7DD8C* a1, ::Class_3_F35B080B137ECC46* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::Class_4_E2880458FFC7DD8C*, ::Class_3_F35B080B137ECC46*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_B83F1E7CDFC3D4E4_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_4_7008438461B29FF7(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::EnterBattleState a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::EnterBattleState))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_7008438461B29FF7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_3D0534AA2D432BB1(::Class_4_E2880458FFC7DD8C* a1, ::Class_3_F35B080B137ECC46* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::Class_4_E2880458FFC7DD8C*, ::Class_3_F35B080B137ECC46*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_3D0534AA2D432BB1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_4_471A648E99DD9744(::System::Single a1, ::Class_4_E2880458FFC7DD8C* a2)
	{
		return ((::System::Void(*)(::System::Single, ::Class_4_E2880458FFC7DD8C*))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_471A648E99DD9744_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_4_B08381E23A67004A(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::EnterBattleState a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::EnterBattleState))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_B08381E23A67004A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_8426FA9F1F30370F(::Class_4_E2880458FFC7DD8C* a1)
	{
		return ((::System::Void(*)(::Class_4_E2880458FFC7DD8C*))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_8426FA9F1F30370F_OFFSET))(a1);
	}

	static ::System::Void Method_4_DD38D2554F3D0693(::MoleMole::Battle::Entity* a1, ::Class_2_131E282CCAEB876E* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_2_131E282CCAEB876E*))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_DD38D2554F3D0693_OFFSET))(a1, a2);
	}

	::System::Void Method_4_428C26F6CE7DEA86(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_428C26F6CE7DEA86_OFFSET))(this, a1);
	}

	static ::System::Void Method_4_8426FA9F1F30370F_1(::Class_4_E2880458FFC7DD8C* a1)
	{
		return ((::System::Void(*)(::Class_4_E2880458FFC7DD8C*))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_8426FA9F1F30370F_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_4_BE108B521C65CF79(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_BE108B521C65CF79_OFFSET))(a1);
	}

	static ::System::Void Method_4_D37EF3105C37A448(::Class_4_E2880458FFC7DD8C* a1)
	{
		return ((::System::Void(*)(::Class_4_E2880458FFC7DD8C*))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_D37EF3105C37A448_OFFSET))(a1);
	}

	::System::Void Method_4_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_4_DEE311D4B72C5B6A(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_DEE311D4B72C5B6A_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_4_985496D5F8D75979(::Class_4_E2880458FFC7DD8C* a1)
	{
		return ((::System::Boolean(*)(::Class_4_E2880458FFC7DD8C*))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_985496D5F8D75979_OFFSET))(a1);
	}

	static ::System::Void Method_4_439D48CD85F60940(::Class_4_E2880458FFC7DD8C* a1, ::Class_3_F35B080B137ECC46* a2, ::MoleMole::Battle::Entity* a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::Class_4_E2880458FFC7DD8C*, ::Class_3_F35B080B137ECC46*, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_439D48CD85F60940_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_4_706D8145C9D4A5BB(::UnityEngine::Collider* a1, ::System::Collections::Generic::HashSet_1<::System::String*>* a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Collider*, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_706D8145C9D4A5BB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_B8478F2533DF8175(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::EnterBattleState a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::EnterBattleState, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_B8478F2533DF8175_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_4_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_4_2E5577B45C3A6331(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_2E5577B45C3A6331_OFFSET))(a1);
	}

	static ::System::Void Method_4_4E7E61ED60588CD1(::System::Single a1, ::Class_4_E2880458FFC7DD8C* a2)
	{
		return ((::System::Void(*)(::System::Single, ::Class_4_E2880458FFC7DD8C*))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_4E7E61ED60588CD1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_E5929A4045C7BEE2(::Class_4_E2880458FFC7DD8C* a1, ::Class_3_F35B080B137ECC46* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::Class_4_E2880458FFC7DD8C*, ::Class_3_F35B080B137ECC46*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_E5929A4045C7BEE2_OFFSET))(a1, a2, a3);
	}
};
