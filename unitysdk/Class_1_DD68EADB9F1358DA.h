#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2F7C2AEE59AF1408_Struct_2_CEA3583D515FCB73.h"
#include "unitysdk/Enum_3_65BB655811A73E3A.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/Share/EAvatarShowWeaponType.h"
#include "unitysdk/Share/EAvatarSkillType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_339;
class Class_1_15CCFE77B9E12299;
class Class_1_9B8A28A306558B7F;
class Class_1_F71087F8ABFB27A0;
class Class_2_887FFAFAD45457B2;
namespace MoleMole { class InLevelBuddyDataItem; }
namespace MoleMole { class MonoEntity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DD68EADB9F1358DA_METHOD_1_01C504FCECDF1A71_OFFSET UNITYSDK_OFFSET(0x9B68360)
#define CLASS_1_DD68EADB9F1358DA_METHOD_1_0A7C75AE549C5CCF_OFFSET UNITYSDK_OFFSET(0x9B68060)
#define CLASS_1_DD68EADB9F1358DA_METHOD_1_0F26F6C53D5E7BC4_OFFSET UNITYSDK_OFFSET(0x9B69770)
#define CLASS_1_DD68EADB9F1358DA_METHOD_1_1748C166285C54BB_OFFSET UNITYSDK_OFFSET(0x9B69050)
#define CLASS_1_DD68EADB9F1358DA_METHOD_1_1E2C6B0C63D10A14_OFFSET UNITYSDK_OFFSET(0x9B68370)
#define CLASS_1_DD68EADB9F1358DA_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x9B69A40)
#define CLASS_1_DD68EADB9F1358DA_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x9B68850)
#define CLASS_1_DD68EADB9F1358DA_METHOD_1_47C3CAE5A665F05B_OFFSET UNITYSDK_OFFSET(0x9B69820)
#define CLASS_1_DD68EADB9F1358DA_METHOD_1_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0x9B69A50)
#define CLASS_1_DD68EADB9F1358DA_METHOD_1_5114C13C2B29BC1E_OFFSET UNITYSDK_OFFSET(0x9B67A90)
#define CLASS_1_DD68EADB9F1358DA_METHOD_1_5D060AEFC9F7D9B8_OFFSET UNITYSDK_OFFSET(0x9B67D00)
#define CLASS_1_DD68EADB9F1358DA_METHOD_1_8561DC94F25586C3_OFFSET UNITYSDK_OFFSET(0x9B69A60)
#define CLASS_1_DD68EADB9F1358DA_METHOD_1_88EC24EBAAE67376_OFFSET UNITYSDK_OFFSET(0x9B68690)
#define CLASS_1_DD68EADB9F1358DA_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x9B69640)
#define CLASS_1_DD68EADB9F1358DA_METHOD_1_AD7F986F030ECF85_OFFSET UNITYSDK_OFFSET(0x9B69650)
#define CLASS_1_DD68EADB9F1358DA_METHOD_1_B3D694523B5FB519_OFFSET UNITYSDK_OFFSET(0x9B68860)
#define CLASS_1_DD68EADB9F1358DA_METHOD_1_BC9B837DC247FF88_OFFSET UNITYSDK_OFFSET(0x9B69420)
#define CLASS_1_DD68EADB9F1358DA_METHOD_1_CE2ED70997982B38_OFFSET UNITYSDK_OFFSET(0x9B684B0)
#define CLASS_1_DD68EADB9F1358DA_METHOD_1_D949672D5BA5D778_OFFSET UNITYSDK_OFFSET(0x9B67D10)
#define CLASS_1_DD68EADB9F1358DA_METHOD_1_DD1B4D9E21FDBBF8_OFFSET UNITYSDK_OFFSET(0x9B69220)
#define CLASS_1_DD68EADB9F1358DA_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x9B687E0)
#define CLASS_1_DD68EADB9F1358DA_METHOD_1_ED51C46008DA43B8_OFFSET UNITYSDK_OFFSET(0x9B69F10)
#define CLASS_1_DD68EADB9F1358DA_METHOD_1_FE560B53910DB35F_OFFSET UNITYSDK_OFFSET(0x9B67940)
#define CLASS_1_DD68EADB9F1358DA__CTOR_OFFSET UNITYSDK_OFFSET(0x9B67850)

inline static constexpr unsigned int Class_1_DD68EADB9F1358DA_TypeDefinitionIndex = 43129;

class Class_1_DD68EADB9F1358DA : public ::System::Object
{
public:
	::Class_1_9B8A28A306558B7F* Field_1_0; // 0x10
	::Class_1_15CCFE77B9E12299* Field_1_2; // 0x18
	::System::Action_1<::System::UInt32>* Field_1_5; // 0x20
	::System::Action_1<::System::UInt32>* Field_1_6; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_15CCFE77B9E12299*>* Field_1_1; // 0x30
	::System::Collections::Generic::List_1<::Class_1_15CCFE77B9E12299*>* Field_1_3; // 0x38
	::System::UInt32 Field_1_4; // 0x40

	::System::Void _ctor(::Class_1_9B8A28A306558B7F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9B8A28A306558B7F*))((::PBYTE)hIl2Cpp + CLASS_1_DD68EADB9F1358DA__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_FE560B53910DB35F(::System::UInt32 a1, ::Class_1_15CCFE77B9E12299* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_15CCFE77B9E12299*))((::PBYTE)hIl2Cpp + CLASS_1_DD68EADB9F1358DA_METHOD_1_FE560B53910DB35F_OFFSET))(this, a1, a2);
	}

	::Class_1_15CCFE77B9E12299* Method_1_5114C13C2B29BC1E(::System::UInt32 a1)
	{
		return ((::Class_1_15CCFE77B9E12299*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DD68EADB9F1358DA_METHOD_1_5114C13C2B29BC1E_OFFSET))(this, a1);
	}

	::System::Void Method_1_5D060AEFC9F7D9B8(::System::Collections::Generic::List_1<::Class_1_15CCFE77B9E12299*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_15CCFE77B9E12299*>*))((::PBYTE)hIl2Cpp + CLASS_1_DD68EADB9F1358DA_METHOD_1_5D060AEFC9F7D9B8_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_D949672D5BA5D778(::Class_1_2F7C2AEE59AF1408_Struct_2_CEA3583D515FCB73 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::MoleMole::Config::CampType a4, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* a5, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a6, ::MoleMole::Config::CampType a7)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_1_2F7C2AEE59AF1408_Struct_2_CEA3583D515FCB73, ::UnityEngine::Vector3, ::System::Single, ::MoleMole::Config::CampType, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::MoleMole::Config::CampType))((::PBYTE)hIl2Cpp + CLASS_1_DD68EADB9F1358DA_METHOD_1_D949672D5BA5D778_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_0A7C75AE549C5CCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD68EADB9F1358DA_METHOD_1_0A7C75AE549C5CCF_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_15CCFE77B9E12299*>* Method_1_01C504FCECDF1A71()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_15CCFE77B9E12299*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD68EADB9F1358DA_METHOD_1_01C504FCECDF1A71_OFFSET))(this);
	}

	::System::UInt32 Method_1_1E2C6B0C63D10A14(::Class_1_F71087F8ABFB27A0* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_1_F71087F8ABFB27A0*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DD68EADB9F1358DA_METHOD_1_1E2C6B0C63D10A14_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_CE2ED70997982B38(::Class_1_15CCFE77B9E12299* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_15CCFE77B9E12299*))((::PBYTE)hIl2Cpp + CLASS_1_DD68EADB9F1358DA_METHOD_1_CE2ED70997982B38_OFFSET))(this, a1);
	}

	::System::Void Method_1_88EC24EBAAE67376(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DD68EADB9F1358DA_METHOD_1_88EC24EBAAE67376_OFFSET))(this, a1);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_15CCFE77B9E12299* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_15CCFE77B9E12299*))((::PBYTE)hIl2Cpp + CLASS_1_DD68EADB9F1358DA_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::Class_1_9B8A28A306558B7F* Method_1_24748FC20F375725()
	{
		return ((::Class_1_9B8A28A306558B7F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD68EADB9F1358DA_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::UInt32 Method_1_B3D694523B5FB519(::Enum_3_65BB655811A73E3A a1, ::System::UInt32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Collections::Generic::Dictionary_2<::Share::EAvatarSkillType, ::System::Byte>* a6, ::UnityEngine::Vector3 a7, ::System::Single a8, ::MoleMole::Config::CampType a9, ::System::Collections::Generic::HashSet_1<::System::String*>* a10, ::System::Collections::Generic::HashSet_1<::System::Int32>* a11, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* a12, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* a13, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* a14, ::Class_0_16E4307DCC419505_339* a15, ::Share::EAvatarShowWeaponType a16, ::System::Int32 a17)
	{
		return ((::System::UInt32(*)(::PVOID, ::Enum_3_65BB655811A73E3A, ::System::UInt32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::Share::EAvatarSkillType, ::System::Byte>*, ::UnityEngine::Vector3, ::System::Single, ::MoleMole::Config::CampType, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::Class_0_16E4307DCC419505_339*, ::Share::EAvatarShowWeaponType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DD68EADB9F1358DA_METHOD_1_B3D694523B5FB519_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
	}

	::System::UInt32 Method_1_1748C166285C54BB(::System::UInt32 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::MoleMole::Config::CampType a4, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* a5, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a6, ::System::Int32 a7, ::MoleMole::Config::CampType a8)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::System::Single, ::MoleMole::Config::CampType, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Int32, ::MoleMole::Config::CampType))((::PBYTE)hIl2Cpp + CLASS_1_DD68EADB9F1358DA_METHOD_1_1748C166285C54BB_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_15CCFE77B9E12299* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_15CCFE77B9E12299*))((::PBYTE)hIl2Cpp + CLASS_1_DD68EADB9F1358DA_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_AD7F986F030ECF85(::MoleMole::MonoEntity* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::MoleMole::MonoEntity*))((::PBYTE)hIl2Cpp + CLASS_1_DD68EADB9F1358DA_METHOD_1_AD7F986F030ECF85_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_DD1B4D9E21FDBBF8(::System::UInt32 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::MoleMole::Config::CampType a4, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* a5, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a6, ::System::Int32 a7, ::System::Int32 a8, ::MoleMole::Config::CampType a9)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::System::Single, ::MoleMole::Config::CampType, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Int32, ::System::Int32, ::MoleMole::Config::CampType))((::PBYTE)hIl2Cpp + CLASS_1_DD68EADB9F1358DA_METHOD_1_DD1B4D9E21FDBBF8_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::Class_1_15CCFE77B9E12299* Method_1_0F26F6C53D5E7BC4(::System::UInt32 a1)
	{
		return ((::Class_1_15CCFE77B9E12299*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DD68EADB9F1358DA_METHOD_1_0F26F6C53D5E7BC4_OFFSET))(this, a1);
	}

	::Class_2_887FFAFAD45457B2* Method_1_47C3CAE5A665F05B(::MoleMole::InLevelBuddyDataItem* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::MoleMole::Config::CampType a4, ::System::Collections::Generic::HashSet_1<::System::Int32>* a5, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* a6, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* a7, ::System::Int32 a8)
	{
		return ((::Class_2_887FFAFAD45457B2*(*)(::PVOID, ::MoleMole::InLevelBuddyDataItem*, ::UnityEngine::Vector3, ::System::Single, ::MoleMole::Config::CampType, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DD68EADB9F1358DA_METHOD_1_47C3CAE5A665F05B_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::UInt32 Method_1_BC9B837DC247FF88(::System::UInt32 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* a4, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a5, ::System::Int32 a6, ::MoleMole::Config::CampType a7)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::System::Single, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Int32, ::MoleMole::Config::CampType))((::PBYTE)hIl2Cpp + CLASS_1_DD68EADB9F1358DA_METHOD_1_BC9B837DC247FF88_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::Class_1_15CCFE77B9E12299* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_15CCFE77B9E12299*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD68EADB9F1358DA_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_15CCFE77B9E12299*>* Method_1_4993EDAE54425105()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_15CCFE77B9E12299*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD68EADB9F1358DA_METHOD_1_4993EDAE54425105_OFFSET))(this);
	}

	::System::UInt32 Method_1_8561DC94F25586C3(::Enum_3_65BB655811A73E3A a1, ::System::UInt32 a2, ::System::Int32 a3, ::UnityEngine::Vector3 a4, ::System::Single a5, ::MoleMole::Config::CampType a6, ::System::Collections::Generic::HashSet_1<::System::String*>* a7, ::System::Collections::Generic::HashSet_1<::System::Int32>* a8, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* a9, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* a10, ::System::Int32 a11)
	{
		return ((::System::UInt32(*)(::PVOID, ::Enum_3_65BB655811A73E3A, ::System::UInt32, ::System::Int32, ::UnityEngine::Vector3, ::System::Single, ::MoleMole::Config::CampType, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DD68EADB9F1358DA_METHOD_1_8561DC94F25586C3_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
	}

	::System::Void Method_1_ED51C46008DA43B8(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DD68EADB9F1358DA_METHOD_1_ED51C46008DA43B8_OFFSET))(this, a1);
	}
};
