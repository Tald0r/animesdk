#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_B51C9D0AAAA6A5F0.h"
#include "unitysdk/MoleMole/Battle/MonsterAlertInitParams.h"
#include "unitysdk/MoleMole/Config/EnterBattleState.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_8289F2785D9AA990;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigMonsterAlertItem; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_4_E2880458FFC7DD8C_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x7411080)
#define CLASS_4_E2880458FFC7DD8C_METHOD_4_02E6D83FCD64132D_OFFSET UNITYSDK_OFFSET(0x7411940)
#define CLASS_4_E2880458FFC7DD8C_METHOD_4_038943403FB56180_OFFSET UNITYSDK_OFFSET(0x74114D0)
#define CLASS_4_E2880458FFC7DD8C_METHOD_4_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x7411260)
#define CLASS_4_E2880458FFC7DD8C_METHOD_4_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x74112E0)
#define CLASS_4_E2880458FFC7DD8C_METHOD_4_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x74119A0)
#define CLASS_4_E2880458FFC7DD8C_METHOD_4_725DE75E7E1BEE17_OFFSET UNITYSDK_OFFSET(0x7411350)
#define CLASS_4_E2880458FFC7DD8C_METHOD_4_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x74112F0)
#define CLASS_4_E2880458FFC7DD8C_METHOD_4_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x7410850)
#define CLASS_4_E2880458FFC7DD8C_METHOD_4_AD23FDCC7576BB32_OFFSET UNITYSDK_OFFSET(0x7410E10)
#define CLASS_4_E2880458FFC7DD8C_METHOD_4_B1EADB0C880BE654_OFFSET UNITYSDK_OFFSET(0x74115B0)
#define CLASS_4_E2880458FFC7DD8C_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x7410920)
#define CLASS_4_E2880458FFC7DD8C__CCTOR_OFFSET UNITYSDK_OFFSET(0x74110E0)
#define CLASS_4_E2880458FFC7DD8C__CTOR_OFFSET UNITYSDK_OFFSET(0x7411160)

inline static constexpr unsigned int Class_4_E2880458FFC7DD8C_TypeDefinitionIndex = 68985;

class Class_4_E2880458FFC7DD8C : public ::Class_3_B51C9D0AAAA6A5F0
{
public:
	// static const ::System::Int32 Field_4_4 = 0x63; // 0x0
	// static const ::System::Int32 Field_4_28 = 0xBF; // 0x0
	::MoleMole::Config::ConfigMonsterAlertItem* Field_4_12; // 0x70
	::Class_1_8289F2785D9AA990* Field_4_0; // 0x78
	::Il2CppArray<::UnityEngine::RaycastHit>* Field_4_22; // 0x80
	::Class_1_8289F2785D9AA990* Field_4_2; // 0x88
	::UnityEngine::AnimationCurve* Field_4_26; // 0x90
	::Class_1_8289F2785D9AA990* Field_4_3; // 0x98
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EnterBattleState, ::System::Boolean>* Field_4_7; // 0xA0
	::System::Action_2<::Class_4_E2880458FFC7DD8C*, ::System::Boolean>* Field_4_11; // 0xA8
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EnterBattleState, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*>* Field_4_6; // 0xB0
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_4_15; // 0xB8
	::Class_1_8289F2785D9AA990* Field_4_1; // 0xC0
	::System::Int32 Field_4_27; // 0xC8
	::System::Single Field_4_14; // 0xCC
	::System::Boolean Field_4_5; // 0xD0
	::System::Boolean Field_4_8; // 0xD1
	::System::Boolean Field_4_10; // 0xD2
	::System::Boolean Field_4_17; // 0xD3
	::System::Boolean Field_4_20; // 0xD4
	::System::Boolean Field_4_24; // 0xD5
	::System::Int32 Field_4_23; // 0xD8
	::System::Boolean Field_4_18; // 0xDC
	::System::Boolean Field_4_16; // 0xDD
	::System::Boolean Field_4_19; // 0xDE
	::System::Boolean Field_4_9; // 0xDF
	::System::Single Field_4_13; // 0xE0
	::UnityEngine::Vector3 Field_4_25; // 0xE4
	::System::Int32 Field_4_21; // 0xF0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_E2880458FFC7DD8C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E2880458FFC7DD8C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_4_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E2880458FFC7DD8C_METHOD_4_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E2880458FFC7DD8C_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E2880458FFC7DD8C_GETCLASSID_OFFSET))(this);
	}

	::System::Boolean Method_4_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E2880458FFC7DD8C_METHOD_4_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Single Method_4_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E2880458FFC7DD8C_METHOD_4_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Int32 Method_4_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E2880458FFC7DD8C_METHOD_4_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_4_E2880458FFC7DD8C* Method_4_725DE75E7E1BEE17()
	{
		return ((::Class_4_E2880458FFC7DD8C*(*)())((::PBYTE)hIl2Cpp + CLASS_4_E2880458FFC7DD8C_METHOD_4_725DE75E7E1BEE17_OFFSET))();
	}

	::MoleMole::Battle::Entity* Method_4_038943403FB56180()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E2880458FFC7DD8C_METHOD_4_038943403FB56180_OFFSET))(this);
	}

	::System::Void Method_4_B1EADB0C880BE654(::MoleMole::Battle::MonsterAlertInitParams a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::MonsterAlertInitParams))((::PBYTE)hIl2Cpp + CLASS_4_E2880458FFC7DD8C_METHOD_4_B1EADB0C880BE654_OFFSET))(this, a1);
	}

	::MoleMole::Battle::Entity* Method_4_02E6D83FCD64132D()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E2880458FFC7DD8C_METHOD_4_02E6D83FCD64132D_OFFSET))(this);
	}

	::System::Void Method_4_AD23FDCC7576BB32(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_E2880458FFC7DD8C_METHOD_4_AD23FDCC7576BB32_OFFSET))(this, a1);
	}

	::System::Void Method_4_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E2880458FFC7DD8C_METHOD_4_56CE4AFC5339F746_OFFSET))(this);
	}
};
