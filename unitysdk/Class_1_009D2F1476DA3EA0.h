#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EntitySkillType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class SkillTypeToAttackTagsConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_009D2F1476DA3EA0_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0x9B1E590)
#define CLASS_1_009D2F1476DA3EA0_METHOD_1_365D788DE9F4AEF1_OFFSET UNITYSDK_OFFSET(0x9B1E980)
#define CLASS_1_009D2F1476DA3EA0_METHOD_1_4DE69B2713405262_OFFSET UNITYSDK_OFFSET(0x9B1E7F0)
#define CLASS_1_009D2F1476DA3EA0_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0x9B1E830)
#define CLASS_1_009D2F1476DA3EA0_METHOD_1_E8F9C3A437374F8C_OFFSET UNITYSDK_OFFSET(0x9B1E940)

inline static constexpr unsigned int Class_1_009D2F1476DA3EA0_TypeDefinitionIndex = 57858;

class Class_1_009D2F1476DA3EA0 : public ::System::Object
{
public:
	static ::MoleMole::Config::SkillTypeToAttackTagsConfig** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::SkillTypeToAttackTagsConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_009D2F1476DA3EA0_TypeDefinitionIndex)->GetStaticField(0x30CC0);
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_009D2F1476DA3EA0_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4DE69B2713405262(::MoleMole::Config::SkillTypeToAttackTagsConfig* a1)
	{
		return ((::System::Void(*)(::MoleMole::Config::SkillTypeToAttackTagsConfig*))((::PBYTE)hIl2Cpp + CLASS_1_009D2F1476DA3EA0_METHOD_1_4DE69B2713405262_OFFSET))(a1);
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_009D2F1476DA3EA0_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Config::SkillTypeToAttackTagsConfig* Method_1_E8F9C3A437374F8C()
	{
		return ((::MoleMole::Config::SkillTypeToAttackTagsConfig*(*)())((::PBYTE)hIl2Cpp + CLASS_1_009D2F1476DA3EA0_METHOD_1_E8F9C3A437374F8C_OFFSET))();
	}

	static ::System::Boolean Method_1_365D788DE9F4AEF1(::System::Collections::Generic::List_1<::System::String*>* a1, ::MoleMole::Config::EntitySkillType& a2)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::String*>*, ::MoleMole::Config::EntitySkillType&))((::PBYTE)hIl2Cpp + CLASS_1_009D2F1476DA3EA0_METHOD_1_365D788DE9F4AEF1_OFFSET))(a1, a2);
	}
};
