#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910.h"
#include "unitysdk/MoleMole/Config/AnimatorEvent.h"

class Class_3_F33F9DC5F4112336;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AnimatorEventEntry; }
namespace MoleMole::Config { class AnimatorEventTriggerAbilityEntry_AbilitySpecialValueEntry; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_E87BE9B89EC302AA_METHOD_2_0589B5E7626E6766_1_OFFSET UNITYSDK_OFFSET(0x64B3150)
#define CLASS_2_E87BE9B89EC302AA_METHOD_2_0589B5E7626E6766_OFFSET UNITYSDK_OFFSET(0x64B2FC0)
#define CLASS_2_E87BE9B89EC302AA_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x64B3200)
#define CLASS_2_E87BE9B89EC302AA_METHOD_2_1784AD14EF02A1CD_OFFSET UNITYSDK_OFFSET(0x64B25E0)
#define CLASS_2_E87BE9B89EC302AA_METHOD_2_A837BA1BA839DB0E_OFFSET UNITYSDK_OFFSET(0x64B2AE0)
#define CLASS_2_E87BE9B89EC302AA_METHOD_2_BD25195D8291B2E5_OFFSET UNITYSDK_OFFSET(0x64B24F0)
#define CLASS_2_E87BE9B89EC302AA_METHOD_2_DE8FDF9C87F3AA65_OFFSET UNITYSDK_OFFSET(0x64B30D0)
#define CLASS_2_E87BE9B89EC302AA_METHOD_2_F44FA02E4DEBAEF6_OFFSET UNITYSDK_OFFSET(0x64B2CC0)
#define CLASS_2_E87BE9B89EC302AA_METHOD_2_FB6392A8F30862C7_OFFSET UNITYSDK_OFFSET(0x64B3070)
#define CLASS_2_E87BE9B89EC302AA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x64B2440)
#define CLASS_2_E87BE9B89EC302AA__CTOR_OFFSET UNITYSDK_OFFSET(0x64B2FB0)

inline static constexpr unsigned int Class_2_E87BE9B89EC302AA_TypeDefinitionIndex = 66978;

class Class_2_E87BE9B89EC302AA : public ::MoleMole::Config::AnimatorEvent
{
public:
	::System::String* Field_2_0; // 0x50
	::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorEventTriggerAbilityEntry_AbilitySpecialValueEntry*>* Field_2_1; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E87BE9B89EC302AA__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E87BE9B89EC302AA_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_2_BD25195D8291B2E5(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910 a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + CLASS_2_E87BE9B89EC302AA_METHOD_2_BD25195D8291B2E5_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_1784AD14EF02A1CD(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910 a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + CLASS_2_E87BE9B89EC302AA_METHOD_2_1784AD14EF02A1CD_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::MoleMole::Config::AnimatorEventEntry* Method_2_A837BA1BA839DB0E()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E87BE9B89EC302AA_METHOD_2_A837BA1BA839DB0E_OFFSET))(this);
	}

	::System::Void Method_2_F44FA02E4DEBAEF6(::MoleMole::Config::AnimatorEventEntry* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_E87BE9B89EC302AA_METHOD_2_F44FA02E4DEBAEF6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_0589B5E7626E6766(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910 a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + CLASS_2_E87BE9B89EC302AA_METHOD_2_0589B5E7626E6766_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::MoleMole::Config::AnimatorEventEntry* Method_2_FB6392A8F30862C7()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E87BE9B89EC302AA_METHOD_2_FB6392A8F30862C7_OFFSET))(this);
	}

	::System::Void Method_2_DE8FDF9C87F3AA65(::MoleMole::Config::AnimatorEventEntry* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_E87BE9B89EC302AA_METHOD_2_DE8FDF9C87F3AA65_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_0589B5E7626E6766_1(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910 a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + CLASS_2_E87BE9B89EC302AA_METHOD_2_0589B5E7626E6766_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E87BE9B89EC302AA_METHOD_2_128774387667156B_OFFSET))(this);
	}
};
