#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class SkillCharacterScriptConfig; }
namespace MoleMole::Config { class AnimatorEventPattern; }
namespace MoleMole::Config { class ConfigAnimatorEventPattern; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BC8B3F44D806899C_METHOD_1_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0xC9FC310)
#define CLASS_1_BC8B3F44D806899C_METHOD_1_546E1E770BA6E537_OFFSET UNITYSDK_OFFSET(0xC9FBC90)
#define CLASS_1_BC8B3F44D806899C_METHOD_1_8698864D7CE4D9D4_OFFSET UNITYSDK_OFFSET(0xC9FBF20)
#define CLASS_1_BC8B3F44D806899C_METHOD_1_A784F8108FC3A63B_OFFSET UNITYSDK_OFFSET(0xC9FD0E0)
#define CLASS_1_BC8B3F44D806899C_METHOD_1_BC0D62BCBFDA9D60_OFFSET UNITYSDK_OFFSET(0xC9FC8E0)
#define CLASS_1_BC8B3F44D806899C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC9FBB70)

inline static constexpr unsigned int Class_1_BC8B3F44D806899C_TypeDefinitionIndex = 73036;

class Class_1_BC8B3F44D806899C : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorEventPattern*>*>*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorEventPattern*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BC8B3F44D806899C_TypeDefinitionIndex)->GetStaticField(0x42BE0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::SortedList_2<::System::String*, ::MoleMole::Config::AnimatorEventPattern*>*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::SortedList_2<::System::String*, ::MoleMole::Config::AnimatorEventPattern*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BC8B3F44D806899C_TypeDefinitionIndex)->GetStaticField(0x42BE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BC8B3F44D806899C__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorEventPattern*>* Method_1_546E1E770BA6E537(::MoleMole::SkillCharacterScriptConfig* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorEventPattern*>*(*)(::MoleMole::SkillCharacterScriptConfig*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BC8B3F44D806899C_METHOD_1_546E1E770BA6E537_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_3CCA0B8A31B650A8()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BC8B3F44D806899C_METHOD_1_3CCA0B8A31B650A8_OFFSET))();
	}

	static ::System::Void Method_1_BC0D62BCBFDA9D60(::MoleMole::SkillCharacterScriptConfig* a1)
	{
		return ((::System::Void(*)(::MoleMole::SkillCharacterScriptConfig*))((::PBYTE)hIl2Cpp + CLASS_1_BC8B3F44D806899C_METHOD_1_BC0D62BCBFDA9D60_OFFSET))(a1);
	}

	static ::System::Void Method_1_8698864D7CE4D9D4(::MoleMole::SkillCharacterScriptConfig* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::MoleMole::SkillCharacterScriptConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BC8B3F44D806899C_METHOD_1_8698864D7CE4D9D4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A784F8108FC3A63B(::MoleMole::Config::ConfigAnimatorEventPattern* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigAnimatorEventPattern*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BC8B3F44D806899C_METHOD_1_A784F8108FC3A63B_OFFSET))(a1, a2, a3);
	}
};
