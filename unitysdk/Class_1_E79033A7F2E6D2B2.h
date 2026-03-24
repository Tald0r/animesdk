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

class Class_0_16E4307DCC419505_219;
class Class_1_7A5F167CAAA013FB;
class Class_1_9B8A28A306558B7F;
class Class_1_F71087F8ABFB27A0;
class Class_2_637F8E06B7F1FFD3;
class Class_2_887FFAFAD45457B2;
namespace MoleMole { class InLevelBuddyDataItem; }
namespace MoleMole { class MonoEntity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E79033A7F2E6D2B2_METHOD_1_01C504FCECDF1A71_OFFSET UNITYSDK_OFFSET(0xB16BAC0)
#define CLASS_1_E79033A7F2E6D2B2_METHOD_1_06BC08B8CDE45121_OFFSET UNITYSDK_OFFSET(0xB16CA60)
#define CLASS_1_E79033A7F2E6D2B2_METHOD_1_0A7C75AE549C5CCF_OFFSET UNITYSDK_OFFSET(0xB16BC20)
#define CLASS_1_E79033A7F2E6D2B2_METHOD_1_0F26F6C53D5E7BC4_OFFSET UNITYSDK_OFFSET(0xB16C850)
#define CLASS_1_E79033A7F2E6D2B2_METHOD_1_1748C166285C54BB_OFFSET UNITYSDK_OFFSET(0xB16B190)
#define CLASS_1_E79033A7F2E6D2B2_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0xB16C900)
#define CLASS_1_E79033A7F2E6D2B2_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0xB16C0A0)
#define CLASS_1_E79033A7F2E6D2B2_METHOD_1_3A4D1A07B72CB683_OFFSET UNITYSDK_OFFSET(0xB16CF00)
#define CLASS_1_E79033A7F2E6D2B2_METHOD_1_3BE82FB474C9ED16_OFFSET UNITYSDK_OFFSET(0xB16BF20)
#define CLASS_1_E79033A7F2E6D2B2_METHOD_1_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0xB16C840)
#define CLASS_1_E79033A7F2E6D2B2_METHOD_1_4BED8FE6E19CFE0B_OFFSET UNITYSDK_OFFSET(0xB16B5D0)
#define CLASS_1_E79033A7F2E6D2B2_METHOD_1_5114C13C2B29BC1E_OFFSET UNITYSDK_OFFSET(0xB16D720)
#define CLASS_1_E79033A7F2E6D2B2_METHOD_1_58DC1BAB81FA579F_OFFSET UNITYSDK_OFFSET(0xB16B360)
#define CLASS_1_E79033A7F2E6D2B2_METHOD_1_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0xB16B860)
#define CLASS_1_E79033A7F2E6D2B2_METHOD_1_5D060AEFC9F7D9B8_OFFSET UNITYSDK_OFFSET(0xB16C910)
#define CLASS_1_E79033A7F2E6D2B2_METHOD_1_7EA51799FB399BB7_OFFSET UNITYSDK_OFFSET(0xB16DA00)
#define CLASS_1_E79033A7F2E6D2B2_METHOD_1_8561DC94F25586C3_OFFSET UNITYSDK_OFFSET(0xB16C330)
#define CLASS_1_E79033A7F2E6D2B2_METHOD_1_88EC24EBAAE67376_OFFSET UNITYSDK_OFFSET(0xB16DBB0)
#define CLASS_1_E79033A7F2E6D2B2_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0xB16DBA0)
#define CLASS_1_E79033A7F2E6D2B2_METHOD_1_8CB8B3DD3335EC58_OFFSET UNITYSDK_OFFSET(0xB16C0B0)
#define CLASS_1_E79033A7F2E6D2B2_METHOD_1_C852D972E8E4112C_OFFSET UNITYSDK_OFFSET(0xB16CE00)
#define CLASS_1_E79033A7F2E6D2B2_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0xB16D990)
#define CLASS_1_E79033A7F2E6D2B2_METHOD_1_ED51C46008DA43B8_OFFSET UNITYSDK_OFFSET(0xB16C920)
#define CLASS_1_E79033A7F2E6D2B2_METHOD_1_F913026D118533D7_OFFSET UNITYSDK_OFFSET(0xB16B8D0)
#define CLASS_1_E79033A7F2E6D2B2_METHOD_1_FE560B53910DB35F_OFFSET UNITYSDK_OFFSET(0xB16BAD0)
#define CLASS_1_E79033A7F2E6D2B2__CTOR_OFFSET UNITYSDK_OFFSET(0xB16B0A0)

inline static constexpr unsigned int Class_1_E79033A7F2E6D2B2_TypeDefinitionIndex = 69742;

class Class_1_E79033A7F2E6D2B2 : public ::System::Object
{
public:
	::System::Action_1<::System::UInt32>* Field_1_5; // 0x10
	::Class_1_9B8A28A306558B7F* Field_1_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_7A5F167CAAA013FB*>* Field_1_1; // 0x20
	::System::Collections::Generic::List_1<::Class_1_7A5F167CAAA013FB*>* Field_1_3; // 0x28
	::System::Action_1<::System::UInt32>* Field_1_6; // 0x30
	::Class_1_7A5F167CAAA013FB* Field_1_2; // 0x38
	::System::UInt32 Field_1_4; // 0x40

	::System::Void _ctor(::Class_1_9B8A28A306558B7F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9B8A28A306558B7F*))((::PBYTE)hIl2Cpp + CLASS_1_E79033A7F2E6D2B2__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_1748C166285C54BB(::System::UInt32 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::MoleMole::Config::CampType a4, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* a5, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a6, ::System::Int32 a7, ::MoleMole::Config::CampType a8)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::System::Single, ::MoleMole::Config::CampType, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Int32, ::MoleMole::Config::CampType))((::PBYTE)hIl2Cpp + CLASS_1_E79033A7F2E6D2B2_METHOD_1_1748C166285C54BB_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::UInt32 Method_1_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E79033A7F2E6D2B2_METHOD_1_5CEC4607322705E5_OFFSET))(this);
	}

	::System::Boolean Method_1_F913026D118533D7(::Class_1_7A5F167CAAA013FB* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7A5F167CAAA013FB*))((::PBYTE)hIl2Cpp + CLASS_1_E79033A7F2E6D2B2_METHOD_1_F913026D118533D7_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_7A5F167CAAA013FB*>* Method_1_01C504FCECDF1A71()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_7A5F167CAAA013FB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E79033A7F2E6D2B2_METHOD_1_01C504FCECDF1A71_OFFSET))(this);
	}

	::System::Void Method_1_FE560B53910DB35F(::System::UInt32 a1, ::Class_1_7A5F167CAAA013FB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_7A5F167CAAA013FB*))((::PBYTE)hIl2Cpp + CLASS_1_E79033A7F2E6D2B2_METHOD_1_FE560B53910DB35F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0A7C75AE549C5CCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E79033A7F2E6D2B2_METHOD_1_0A7C75AE549C5CCF_OFFSET))(this);
	}

	::System::UInt32 Method_1_3BE82FB474C9ED16(::MoleMole::MonoEntity* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::MoleMole::MonoEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E79033A7F2E6D2B2_METHOD_1_3BE82FB474C9ED16_OFFSET))(this, a1);
	}

	::Class_1_9B8A28A306558B7F* Method_1_24748FC20F375725()
	{
		return ((::Class_1_9B8A28A306558B7F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E79033A7F2E6D2B2_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::Class_2_887FFAFAD45457B2* Method_1_8CB8B3DD3335EC58(::MoleMole::InLevelBuddyDataItem* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::MoleMole::Config::CampType a4, ::System::Collections::Generic::HashSet_1<::System::Int32>* a5, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* a6, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* a7, ::System::Int32 a8)
	{
		return ((::Class_2_887FFAFAD45457B2*(*)(::PVOID, ::MoleMole::InLevelBuddyDataItem*, ::UnityEngine::Vector3, ::System::Single, ::MoleMole::Config::CampType, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E79033A7F2E6D2B2_METHOD_1_8CB8B3DD3335EC58_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::UInt32 Method_1_8561DC94F25586C3(::Enum_3_65BB655811A73E3A a1, ::System::UInt32 a2, ::System::Int32 a3, ::UnityEngine::Vector3 a4, ::System::Single a5, ::MoleMole::Config::CampType a6, ::System::Collections::Generic::HashSet_1<::System::String*>* a7, ::System::Collections::Generic::HashSet_1<::System::Int32>* a8, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* a9, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* a10, ::System::Int32 a11)
	{
		return ((::System::UInt32(*)(::PVOID, ::Enum_3_65BB655811A73E3A, ::System::UInt32, ::System::Int32, ::UnityEngine::Vector3, ::System::Single, ::MoleMole::Config::CampType, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E79033A7F2E6D2B2_METHOD_1_8561DC94F25586C3_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
	}

	::System::Collections::Generic::List_1<::Class_1_7A5F167CAAA013FB*>* Method_1_4993EDAE54425105()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_7A5F167CAAA013FB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E79033A7F2E6D2B2_METHOD_1_4993EDAE54425105_OFFSET))(this);
	}

	::Class_1_7A5F167CAAA013FB* Method_1_0F26F6C53D5E7BC4(::System::UInt32 a1)
	{
		return ((::Class_1_7A5F167CAAA013FB*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E79033A7F2E6D2B2_METHOD_1_0F26F6C53D5E7BC4_OFFSET))(this, a1);
	}

	::Class_1_7A5F167CAAA013FB* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_7A5F167CAAA013FB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E79033A7F2E6D2B2_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_5D060AEFC9F7D9B8(::System::Collections::Generic::List_1<::Class_1_7A5F167CAAA013FB*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_7A5F167CAAA013FB*>*))((::PBYTE)hIl2Cpp + CLASS_1_E79033A7F2E6D2B2_METHOD_1_5D060AEFC9F7D9B8_OFFSET))(this, a1);
	}

	::System::Void Method_1_ED51C46008DA43B8(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E79033A7F2E6D2B2_METHOD_1_ED51C46008DA43B8_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_4BED8FE6E19CFE0B(::System::UInt32 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* a4, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a5, ::System::Int32 a6, ::MoleMole::Config::CampType a7)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::System::Single, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Int32, ::MoleMole::Config::CampType))((::PBYTE)hIl2Cpp + CLASS_1_E79033A7F2E6D2B2_METHOD_1_4BED8FE6E19CFE0B_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::UInt32 Method_1_06BC08B8CDE45121(::Class_1_2F7C2AEE59AF1408_Struct_2_CEA3583D515FCB73 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::MoleMole::Config::CampType a4, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* a5, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a6, ::MoleMole::Config::CampType a7)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_1_2F7C2AEE59AF1408_Struct_2_CEA3583D515FCB73, ::UnityEngine::Vector3, ::System::Single, ::MoleMole::Config::CampType, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::MoleMole::Config::CampType))((::PBYTE)hIl2Cpp + CLASS_1_E79033A7F2E6D2B2_METHOD_1_06BC08B8CDE45121_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::Class_2_637F8E06B7F1FFD3* Method_1_C852D972E8E4112C()
	{
		return ((::Class_2_637F8E06B7F1FFD3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E79033A7F2E6D2B2_METHOD_1_C852D972E8E4112C_OFFSET))(this);
	}

	::System::UInt32 Method_1_3A4D1A07B72CB683(::Enum_3_65BB655811A73E3A a1, ::System::UInt32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Collections::Generic::Dictionary_2<::Share::EAvatarSkillType, ::System::Byte>* a6, ::UnityEngine::Vector3 a7, ::System::Single a8, ::MoleMole::Config::CampType a9, ::System::Collections::Generic::HashSet_1<::System::String*>* a10, ::System::Collections::Generic::HashSet_1<::System::Int32>* a11, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* a12, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* a13, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* a14, ::Class_0_16E4307DCC419505_219* a15, ::Share::EAvatarShowWeaponType a16, ::System::Int32 a17)
	{
		return ((::System::UInt32(*)(::PVOID, ::Enum_3_65BB655811A73E3A, ::System::UInt32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::Share::EAvatarSkillType, ::System::Byte>*, ::UnityEngine::Vector3, ::System::Single, ::MoleMole::Config::CampType, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::Class_0_16E4307DCC419505_219*, ::Share::EAvatarShowWeaponType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E79033A7F2E6D2B2_METHOD_1_3A4D1A07B72CB683_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
	}

	::Class_1_7A5F167CAAA013FB* Method_1_5114C13C2B29BC1E(::System::UInt32 a1)
	{
		return ((::Class_1_7A5F167CAAA013FB*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E79033A7F2E6D2B2_METHOD_1_5114C13C2B29BC1E_OFFSET))(this, a1);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_7A5F167CAAA013FB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7A5F167CAAA013FB*))((::PBYTE)hIl2Cpp + CLASS_1_E79033A7F2E6D2B2_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_7EA51799FB399BB7(::Class_1_F71087F8ABFB27A0* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_1_F71087F8ABFB27A0*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E79033A7F2E6D2B2_METHOD_1_7EA51799FB399BB7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_7A5F167CAAA013FB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7A5F167CAAA013FB*))((::PBYTE)hIl2Cpp + CLASS_1_E79033A7F2E6D2B2_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_58DC1BAB81FA579F(::System::UInt32 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::MoleMole::Config::CampType a4, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* a5, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a6, ::System::Int32 a7, ::System::Int32 a8, ::MoleMole::Config::CampType a9)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::System::Single, ::MoleMole::Config::CampType, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Int32, ::System::Int32, ::MoleMole::Config::CampType))((::PBYTE)hIl2Cpp + CLASS_1_E79033A7F2E6D2B2_METHOD_1_58DC1BAB81FA579F_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_1_88EC24EBAAE67376(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E79033A7F2E6D2B2_METHOD_1_88EC24EBAAE67376_OFFSET))(this, a1);
	}
};
