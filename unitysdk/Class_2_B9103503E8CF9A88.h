#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910.h"
#include "unitysdk/MoleMole/Config/AnimatorEvent.h"

class Class_3_F33F9DC5F4112336;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AnimatorEventEntry; }
namespace System { class String; }

#define CLASS_2_B9103503E8CF9A88_METHOD_2_0589B5E7626E6766_OFFSET UNITYSDK_OFFSET(0x6B807D0)
#define CLASS_2_B9103503E8CF9A88_METHOD_2_0784450B41D8BC55_OFFSET UNITYSDK_OFFSET(0x6B7FE30)
#define CLASS_2_B9103503E8CF9A88_METHOD_2_ABF27A10B1089912_OFFSET UNITYSDK_OFFSET(0x6B7FD30)
#define CLASS_2_B9103503E8CF9A88_METHOD_2_B906FA30C624844A_OFFSET UNITYSDK_OFFSET(0x6B80040)
#define CLASS_2_B9103503E8CF9A88_METHOD_2_DE8FDF9C87F3AA65_OFFSET UNITYSDK_OFFSET(0x6B80880)
#define CLASS_2_B9103503E8CF9A88_METHOD_2_FB6392A8F30862C7_OFFSET UNITYSDK_OFFSET(0x6B80900)
#define CLASS_2_B9103503E8CF9A88__CTOR_OFFSET UNITYSDK_OFFSET(0x6B807B0)

inline static constexpr unsigned int Class_2_B9103503E8CF9A88_TypeDefinitionIndex = 47767;

class Class_2_B9103503E8CF9A88 : public ::MoleMole::Config::AnimatorEvent
{
public:
	::System::String* Field_2_1; // 0x50
	::System::String* Field_2_2; // 0x58
	::System::Single Field_2_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B9103503E8CF9A88__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::AnimatorEventEntry* Method_2_ABF27A10B1089912()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B9103503E8CF9A88_METHOD_2_ABF27A10B1089912_OFFSET))(this);
	}

	::System::Void Method_2_0784450B41D8BC55(::MoleMole::Config::AnimatorEventEntry* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B9103503E8CF9A88_METHOD_2_0784450B41D8BC55_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_B906FA30C624844A(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910 a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + CLASS_2_B9103503E8CF9A88_METHOD_2_B906FA30C624844A_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_0589B5E7626E6766(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910 a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + CLASS_2_B9103503E8CF9A88_METHOD_2_0589B5E7626E6766_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_DE8FDF9C87F3AA65(::MoleMole::Config::AnimatorEventEntry* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B9103503E8CF9A88_METHOD_2_DE8FDF9C87F3AA65_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::Config::AnimatorEventEntry* Method_2_FB6392A8F30862C7()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B9103503E8CF9A88_METHOD_2_FB6392A8F30862C7_OFFSET))(this);
	}
};
