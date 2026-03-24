#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7A5F167CAAA013FB.h"
#include "unitysdk/Enum_3_65BB655811A73E3A.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_9B8A28A306558B7F;
namespace MoleMole { class SkillCharacterScriptConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_5EC4EA0AC02A376B_METHOD_2_218124418542E081_OFFSET UNITYSDK_OFFSET(0xA264EE0)
#define CLASS_2_5EC4EA0AC02A376B_METHOD_2_2994A2B2674E91BA_OFFSET UNITYSDK_OFFSET(0xA264EF0)
#define CLASS_2_5EC4EA0AC02A376B_METHOD_2_34C43A55C54372ED_OFFSET UNITYSDK_OFFSET(0xA264ED0)
#define CLASS_2_5EC4EA0AC02A376B_METHOD_2_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0xA264D40)
#define CLASS_2_5EC4EA0AC02A376B_METHOD_2_F19312E721A06288_OFFSET UNITYSDK_OFFSET(0xA264F00)
#define CLASS_2_5EC4EA0AC02A376B__CTOR_OFFSET UNITYSDK_OFFSET(0xA264EC0)

inline static constexpr unsigned int Class_2_5EC4EA0AC02A376B_TypeDefinitionIndex = 74745;

class Class_2_5EC4EA0AC02A376B : public ::Class_1_7A5F167CAAA013FB
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_1; // 0xE8
	::MoleMole::SkillCharacterScriptConfig* Field_2_3; // 0xF0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Field_2_2; // 0xF8
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_0; // 0x100

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5EC4EA0AC02A376B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5EC4EA0AC02A376B_METHOD_2_EDFD49C942C75D6C_OFFSET))(this);
	}

	::MoleMole::SkillCharacterScriptConfig* Method_2_34C43A55C54372ED()
	{
		return ((::MoleMole::SkillCharacterScriptConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5EC4EA0AC02A376B_METHOD_2_34C43A55C54372ED_OFFSET))(this);
	}

	::System::Void Method_2_218124418542E081()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5EC4EA0AC02A376B_METHOD_2_218124418542E081_OFFSET))(this);
	}

	::System::Void Method_2_2994A2B2674E91BA(::MoleMole::SkillCharacterScriptConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SkillCharacterScriptConfig*))((::PBYTE)hIl2Cpp + CLASS_2_5EC4EA0AC02A376B_METHOD_2_2994A2B2674E91BA_OFFSET))(this, a1);
	}

	::System::Void Method_2_F19312E721A06288(::System::UInt32 a1, ::Class_1_9B8A28A306558B7F* a2, ::System::UInt32 a3, ::UnityEngine::Vector3 a4, ::System::Single a5, ::System::Int32 a6, ::Enum_3_65BB655811A73E3A a7, ::MoleMole::Config::CampType a8, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* a9, ::System::Collections::Generic::HashSet_1<::System::String*>* a10, ::System::Collections::Generic::HashSet_1<::System::Int32>* a11, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* a12, ::System::Int32 a13)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_9B8A28A306558B7F*, ::System::UInt32, ::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::Enum_3_65BB655811A73E3A, ::MoleMole::Config::CampType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_5EC4EA0AC02A376B_METHOD_2_F19312E721A06288_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
	}
};
