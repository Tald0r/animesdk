#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910.h"
#include "unitysdk/MoleMole/Config/AnimatorEvent.h"

class Class_3_F33F9DC5F4112336;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AnimatorEventEntry; }
namespace System { class String; }

#define CLASS_2_D9E1B05316AD0FE1_5_METHOD_2_0589B5E7626E6766_OFFSET UNITYSDK_OFFSET(0xB85DDC0)
#define CLASS_2_D9E1B05316AD0FE1_5_METHOD_2_952E114EDAB71650_OFFSET UNITYSDK_OFFSET(0xB85D9B0)
#define CLASS_2_D9E1B05316AD0FE1_5_METHOD_2_C7CC8F2DD77ED5E1_OFFSET UNITYSDK_OFFSET(0xB85DC50)
#define CLASS_2_D9E1B05316AD0FE1_5_METHOD_2_C88F257407FB5C09_OFFSET UNITYSDK_OFFSET(0xB85DB70)
#define CLASS_2_D9E1B05316AD0FE1_5_METHOD_2_DE8FDF9C87F3AA65_OFFSET UNITYSDK_OFFSET(0xB85DE70)
#define CLASS_2_D9E1B05316AD0FE1_5_METHOD_2_FB6392A8F30862C7_OFFSET UNITYSDK_OFFSET(0xB85DD60)
#define CLASS_2_D9E1B05316AD0FE1_5__CTOR_OFFSET UNITYSDK_OFFSET(0xB85DD50)

inline static constexpr unsigned int Class_2_D9E1B05316AD0FE1_5_TypeDefinitionIndex = 58484;

class Class_2_D9E1B05316AD0FE1_5 : public ::MoleMole::Config::AnimatorEvent
{
public:
	::System::String* Field_2_0; // 0x50
	::System::Boolean Field_2_1; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9E1B05316AD0FE1_5__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_952E114EDAB71650(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910 a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + CLASS_2_D9E1B05316AD0FE1_5_METHOD_2_952E114EDAB71650_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::MoleMole::Config::AnimatorEventEntry* Method_2_C88F257407FB5C09()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9E1B05316AD0FE1_5_METHOD_2_C88F257407FB5C09_OFFSET))(this);
	}

	::System::Void Method_2_C7CC8F2DD77ED5E1(::MoleMole::Config::AnimatorEventEntry* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_D9E1B05316AD0FE1_5_METHOD_2_C7CC8F2DD77ED5E1_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::Config::AnimatorEventEntry* Method_2_FB6392A8F30862C7()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9E1B05316AD0FE1_5_METHOD_2_FB6392A8F30862C7_OFFSET))(this);
	}

	::System::Void Method_2_0589B5E7626E6766(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910 a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + CLASS_2_D9E1B05316AD0FE1_5_METHOD_2_0589B5E7626E6766_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_DE8FDF9C87F3AA65(::MoleMole::Config::AnimatorEventEntry* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_D9E1B05316AD0FE1_5_METHOD_2_DE8FDF9C87F3AA65_OFFSET))(this, a1, a2, a3);
	}
};
