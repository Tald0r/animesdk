#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E9C0DA902810772E_Enum_3_2EA03DA8096A1B80.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/Struct_2_B6A3FA7992F9F37E.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_B7E341C5F1A6F199;
class Class_2_D89CCC627A66D0AD;
class Class_2_F3CFF1AFF7EE7DCD;
class Class_3_5609242270A80DFB;
class Class_3_7E6E93381D39C718;
class Class_3_F97B015544BE936B;
namespace MoleMole { class TeamDataItem; }
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_F6BCF1258D8E9782_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x7988550)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_10F45F84D3E1152C_OFFSET UNITYSDK_OFFSET(0x79956B0)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_14AFBA2E8A242644_OFFSET UNITYSDK_OFFSET(0x798A250)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_1A7A8ACC077F0EA1_OFFSET UNITYSDK_OFFSET(0x7997390)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_1DC31F77FBFEB8FE_OFFSET UNITYSDK_OFFSET(0x7998240)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_2114B08EFA46C8E6_OFFSET UNITYSDK_OFFSET(0x79926E0)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_269E78E1CBDBD161_OFFSET UNITYSDK_OFFSET(0x798B510)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_27A7ABE664099E6C_OFFSET UNITYSDK_OFFSET(0x798B7A0)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_2833053B53AFEA39_OFFSET UNITYSDK_OFFSET(0x7992B30)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_2BC327A2B5DBFAD6_OFFSET UNITYSDK_OFFSET(0x798AC70)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_2C13F47305D47FC9_OFFSET UNITYSDK_OFFSET(0x7998680)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_2C52EA6479A8FBB9_OFFSET UNITYSDK_OFFSET(0x798CE00)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_2D58832A36FF5158_OFFSET UNITYSDK_OFFSET(0x7992FA0)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_30B62F5CDB9079BD_OFFSET UNITYSDK_OFFSET(0x79971A0)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_31DAF84A0D860A34_OFFSET UNITYSDK_OFFSET(0x7998940)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_387F08D16D59BE75_OFFSET UNITYSDK_OFFSET(0x7992280)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_39468678C9BF10F3_OFFSET UNITYSDK_OFFSET(0x7998530)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_3B94D5800FEBB847_OFFSET UNITYSDK_OFFSET(0x7994040)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_3BBA7F8FA5C53AA4_OFFSET UNITYSDK_OFFSET(0x798B900)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_40A6DDB78491ADAF_OFFSET UNITYSDK_OFFSET(0x798FB30)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_49BE4F7C717C6004_1_OFFSET UNITYSDK_OFFSET(0x798B720)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_49BE4F7C717C6004_OFFSET UNITYSDK_OFFSET(0x798B6A0)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_5006CB03D2C134A9_OFFSET UNITYSDK_OFFSET(0x798CD90)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x7996D50)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_5FAD56E9E208220A_OFFSET UNITYSDK_OFFSET(0x7997290)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_5FF084E7946F0BE2_OFFSET UNITYSDK_OFFSET(0x7992350)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_62FC2DCD2EF869D5_OFFSET UNITYSDK_OFFSET(0x798DE30)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_677DE49F185C2709_OFFSET UNITYSDK_OFFSET(0x798F260)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_67E519021630CA8E_1_OFFSET UNITYSDK_OFFSET(0x7996DB0)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_67E519021630CA8E_OFFSET UNITYSDK_OFFSET(0x7995650)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_70C8164B9A340D5F_OFFSET UNITYSDK_OFFSET(0x79897A0)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_74FE0F242303E029_OFFSET UNITYSDK_OFFSET(0x798DC90)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_75C03585B8D10FE3_1_OFFSET UNITYSDK_OFFSET(0x7997610)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_75C03585B8D10FE3_OFFSET UNITYSDK_OFFSET(0x7990400)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_7609049B3F91624E_1_OFFSET UNITYSDK_OFFSET(0x79969C0)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_7609049B3F91624E_OFFSET UNITYSDK_OFFSET(0x7996630)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_79D572573E1F9B29_OFFSET UNITYSDK_OFFSET(0x7990500)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_80EF5AFDA64852DC_OFFSET UNITYSDK_OFFSET(0x798DBA0)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_81259CEF1D3113A6_OFFSET UNITYSDK_OFFSET(0x798CCB0)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_8FB003E0B14E93DE_OFFSET UNITYSDK_OFFSET(0x7998740)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_90828A8C58E70242_OFFSET UNITYSDK_OFFSET(0x7997710)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_9CC631A3BDB2D8B4_OFFSET UNITYSDK_OFFSET(0x7990BD0)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_A11144519902A27F_1_OFFSET UNITYSDK_OFFSET(0x7993050)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_A11144519902A27F_OFFSET UNITYSDK_OFFSET(0x798EF30)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_A5C2309F3EB20ED4_OFFSET UNITYSDK_OFFSET(0x7997F90)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_AF1E2ABE9825B624_OFFSET UNITYSDK_OFFSET(0x7993250)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_B1065DE5A0D9350E_OFFSET UNITYSDK_OFFSET(0x79916A0)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_B34C1EF5D195AA30_OFFSET UNITYSDK_OFFSET(0x798B490)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x7988980)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_C305BEB6B47840FD_OFFSET UNITYSDK_OFFSET(0x798EFA0)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_C7BF9C1E6A78DCAB_OFFSET UNITYSDK_OFFSET(0x7989C00)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_D78AF06792F1AE92_OFFSET UNITYSDK_OFFSET(0x79889F0)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_E79DA4EE94477ECE_OFFSET UNITYSDK_OFFSET(0x7989AF0)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_E7F7C46AFF28952E_OFFSET UNITYSDK_OFFSET(0x7994E10)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_EB30CC757ECBA731_OFFSET UNITYSDK_OFFSET(0x7993AD0)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_EEED34E9AAC26D51_OFFSET UNITYSDK_OFFSET(0x79941B0)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_F47473D760C2FCEC_OFFSET UNITYSDK_OFFSET(0x79930C0)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_FA11FA6435D78FF7_OFFSET UNITYSDK_OFFSET(0x7996E10)
#define CLASS_3_F6BCF1258D8E9782__CTOR_OFFSET UNITYSDK_OFFSET(0x7988960)

inline static constexpr unsigned int Class_3_F6BCF1258D8E9782_TypeDefinitionIndex = 36546;

class Class_3_F6BCF1258D8E9782 : public ::Class_2_F33340E023067DAF
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20
	::Nap::NapECS::EcsFilter* Field_3_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_D78AF06792F1AE92(::System::Collections::Generic::List_1<::Class_2_D89CCC627A66D0AD*>* a1, ::System::Collections::Generic::List_1<::Class_3_5609242270A80DFB*>* a2, ::Struct_2_B6A3FA7992F9F37E a3, ::System::Action* a4, ::System::Action* a5, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*>* a6)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_2_D89CCC627A66D0AD*>*, ::System::Collections::Generic::List_1<::Class_3_5609242270A80DFB*>*, ::Struct_2_B6A3FA7992F9F37E, ::System::Action*, ::System::Action*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*>*))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_D78AF06792F1AE92_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Boolean Method_3_B34C1EF5D195AA30(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Boolean(*)(::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_B34C1EF5D195AA30_OFFSET))(a1);
	}

	static ::System::Void Method_3_269E78E1CBDBD161(::Class_3_F97B015544BE936B* a1, ::Class_3_F97B015544BE936B* a2)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::Class_3_F97B015544BE936B*))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_269E78E1CBDBD161_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_27A7ABE664099E6C()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_27A7ABE664099E6C_OFFSET))();
	}

	static ::System::Void Method_3_3BBA7F8FA5C53AA4(::Class_2_D89CCC627A66D0AD* a1, ::System::Int32 a2, ::Foundation::AssetPath a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Collections::Generic::List_1<::Class_2_F3CFF1AFF7EE7DCD*>* a7)
	{
		return ((::System::Void(*)(::Class_2_D89CCC627A66D0AD*, ::System::Int32, ::Foundation::AssetPath, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Collections::Generic::List_1<::Class_2_F3CFF1AFF7EE7DCD*>*))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_3BBA7F8FA5C53AA4_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void Method_3_62FC2DCD2EF869D5()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_62FC2DCD2EF869D5_OFFSET))();
	}

	::System::Void Method_3_A11144519902A27F(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_A11144519902A27F_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_C7BF9C1E6A78DCAB()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_C7BF9C1E6A78DCAB_OFFSET))();
	}

	::System::Void Method_3_C305BEB6B47840FD(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_C305BEB6B47840FD_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_5006CB03D2C134A9(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_5006CB03D2C134A9_OFFSET))(a1);
	}

	static ::System::Double Method_3_75C03585B8D10FE3(::Class_3_F97B015544BE936B* a1)
	{
		return ((::System::Double(*)(::Class_3_F97B015544BE936B*))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_75C03585B8D10FE3_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_79D572573E1F9B29(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_79D572573E1F9B29_OFFSET))(a1);
	}

	static ::System::Void Method_3_9CC631A3BDB2D8B4(::MoleMole::Battle::Entity* a1, ::Class_2_D89CCC627A66D0AD* a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_2_D89CCC627A66D0AD*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_9CC631A3BDB2D8B4_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_E79DA4EE94477ECE(::Struct_2_B6A3FA7992F9F37E a1)
	{
		return ((::System::Void(*)(::Struct_2_B6A3FA7992F9F37E))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_E79DA4EE94477ECE_OFFSET))(a1);
	}

	static ::System::Void Method_3_49BE4F7C717C6004(::Class_3_F97B015544BE936B* a1, ::Class_3_F97B015544BE936B* a2)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::Class_3_F97B015544BE936B*))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_49BE4F7C717C6004_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_677DE49F185C2709(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_677DE49F185C2709_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_2833053B53AFEA39(::System::Collections::Generic::List_1<::Class_2_D89CCC627A66D0AD*>* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::Class_2_D89CCC627A66D0AD*>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_2833053B53AFEA39_OFFSET))(a1, a2);
	}

	::System::Void Method_3_2D58832A36FF5158(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_2D58832A36FF5158_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_F47473D760C2FCEC(::Class_2_D89CCC627A66D0AD* a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::Class_2_D89CCC627A66D0AD*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_F47473D760C2FCEC_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_AF1E2ABE9825B624(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_AF1E2ABE9825B624_OFFSET))(a1);
	}

	static ::System::Void Method_3_EB30CC757ECBA731(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_EB30CC757ECBA731_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_3B94D5800FEBB847(::UnityEngine::Vector3& a1, ::System::Single& a2)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_3B94D5800FEBB847_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_74FE0F242303E029(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_74FE0F242303E029_OFFSET))(a1);
	}

	static ::System::Void Method_3_2114B08EFA46C8E6(::Class_3_F97B015544BE936B* a1, ::Class_3_F97B015544BE936B* a2, ::MoleMole::Config::BaseProperty a3)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::Class_3_F97B015544BE936B*, ::MoleMole::Config::BaseProperty))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_2114B08EFA46C8E6_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_EEED34E9AAC26D51()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_EEED34E9AAC26D51_OFFSET))();
	}

	static ::System::Void Method_3_E7F7C46AFF28952E(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2, ::System::Boolean a3, ::Class_2_E9C0DA902810772E_Enum_3_2EA03DA8096A1B80 a4)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::Class_2_E9C0DA902810772E_Enum_3_2EA03DA8096A1B80))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_E7F7C46AFF28952E_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_3_A11144519902A27F_1(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_A11144519902A27F_1_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_2BC327A2B5DBFAD6(::MoleMole::TeamDataItem* a1)
	{
		return ((::System::Void(*)(::MoleMole::TeamDataItem*))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_2BC327A2B5DBFAD6_OFFSET))(a1);
	}

	static ::System::Void Method_3_5FF084E7946F0BE2(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_5FF084E7946F0BE2_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_67E519021630CA8E()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_67E519021630CA8E_OFFSET))();
	}

	static ::System::Void Method_3_49BE4F7C717C6004_1(::Class_3_F97B015544BE936B* a1, ::Class_3_F97B015544BE936B* a2)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::Class_3_F97B015544BE936B*))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_49BE4F7C717C6004_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_80EF5AFDA64852DC(::Class_3_F97B015544BE936B* a1, ::System::Double a2)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_80EF5AFDA64852DC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_70C8164B9A340D5F(::Class_2_D89CCC627A66D0AD* a1, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*>* a2)
	{
		return ((::System::Void(*)(::Class_2_D89CCC627A66D0AD*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*>*))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_70C8164B9A340D5F_OFFSET))(a1, a2);
	}

	static ::MoleMole::Battle::Entity* Method_3_B1065DE5A0D9350E(::Class_2_D89CCC627A66D0AD* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::MoleMole::Battle::Entity* a4)
	{
		return ((::MoleMole::Battle::Entity*(*)(::Class_2_D89CCC627A66D0AD*, ::UnityEngine::Vector3, ::System::Single, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_B1065DE5A0D9350E_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_5790A55946AA509D_OFFSET))();
	}

	static ::System::Boolean Method_3_67E519021630CA8E_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_67E519021630CA8E_1_OFFSET))();
	}

	static ::System::Void Method_3_FA11FA6435D78FF7(::Class_3_7E6E93381D39C718* a1)
	{
		return ((::System::Void(*)(::Class_3_7E6E93381D39C718*))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_FA11FA6435D78FF7_OFFSET))(a1);
	}

	static ::System::Void Method_3_7609049B3F91624E(::Class_3_F97B015544BE936B* a1, ::System::Double a2)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_7609049B3F91624E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_30B62F5CDB9079BD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_30B62F5CDB9079BD_OFFSET))();
	}

	static ::System::Void Method_3_14AFBA2E8A242644()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_14AFBA2E8A242644_OFFSET))();
	}

	static ::System::Boolean Method_3_10F45F84D3E1152C(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_10F45F84D3E1152C_OFFSET))(a1);
	}

	static ::System::Void Method_3_5FAD56E9E208220A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_5FAD56E9E208220A_OFFSET))();
	}

	static ::System::Void Method_3_1A7A8ACC077F0EA1(::Class_2_D89CCC627A66D0AD* a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::Class_2_D89CCC627A66D0AD*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_1A7A8ACC077F0EA1_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Double Method_3_81259CEF1D3113A6(::Class_3_F97B015544BE936B* a1)
	{
		return ((::System::Double(*)(::Class_3_F97B015544BE936B*))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_81259CEF1D3113A6_OFFSET))(a1);
	}

	static ::System::Void Method_3_90828A8C58E70242(::Class_2_D89CCC627A66D0AD* a1)
	{
		return ((::System::Void(*)(::Class_2_D89CCC627A66D0AD*))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_90828A8C58E70242_OFFSET))(a1);
	}

	static ::MoleMole::Battle::Entity* Method_3_A5C2309F3EB20ED4(::System::UInt32 a1)
	{
		return ((::MoleMole::Battle::Entity*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_A5C2309F3EB20ED4_OFFSET))(a1);
	}

	static ::MoleMole::Battle::Entity* Method_3_2C52EA6479A8FBB9(::Class_2_D89CCC627A66D0AD* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::MoleMole::Battle::Entity* a4, ::Foundation::AssetPath a5, ::System::Collections::Generic::List_1<::Class_2_F3CFF1AFF7EE7DCD*>* a6)
	{
		return ((::MoleMole::Battle::Entity*(*)(::Class_2_D89CCC627A66D0AD*, ::UnityEngine::Vector3, ::System::Single, ::MoleMole::Battle::Entity*, ::Foundation::AssetPath, ::System::Collections::Generic::List_1<::Class_2_F3CFF1AFF7EE7DCD*>*))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_2C52EA6479A8FBB9_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_1DC31F77FBFEB8FE(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_1DC31F77FBFEB8FE_OFFSET))(a1, a2);
	}

	static ::MoleMole::Battle::Entity* Method_3_387F08D16D59BE75(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::MoleMole::Battle::Entity*(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_387F08D16D59BE75_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_40A6DDB78491ADAF(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_40A6DDB78491ADAF_OFFSET))(a1, a2);
	}

	::System::Void Method_3_39468678C9BF10F3(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_39468678C9BF10F3_OFFSET))(this, a1);
	}

	::System::Void Method_3_2C13F47305D47FC9(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_2C13F47305D47FC9_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_3_8FB003E0B14E93DE(::System::Int32 a1, ::Class_2_E9C0DA902810772E_Enum_3_2EA03DA8096A1B80 a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::Class_2_E9C0DA902810772E_Enum_3_2EA03DA8096A1B80))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_8FB003E0B14E93DE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7609049B3F91624E_1(::Class_3_F97B015544BE936B* a1, ::System::Double a2)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_7609049B3F91624E_1_OFFSET))(a1, a2);
	}

	static ::System::Double Method_3_75C03585B8D10FE3_1(::Class_3_F97B015544BE936B* a1)
	{
		return ((::System::Double(*)(::Class_3_F97B015544BE936B*))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_75C03585B8D10FE3_1_OFFSET))(a1);
	}

	static ::System::Void Method_3_31DAF84A0D860A34(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_31DAF84A0D860A34_OFFSET))(a1);
	}
};
