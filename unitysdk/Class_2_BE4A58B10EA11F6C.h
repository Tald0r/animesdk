#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1CDA382D823F8E80_Enum_3_FECCDB56D27A84FD.h"
#include "unitysdk/Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910.h"
#include "unitysdk/MoleMole/Config/AnimatorEvent.h"

class Class_3_F33F9DC5F4112336;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AnimatorEventEntry; }
namespace System { class String; }

#define CLASS_2_BE4A58B10EA11F6C_METHOD_2_0589B5E7626E6766_1_OFFSET UNITYSDK_OFFSET(0xB7F0830)
#define CLASS_2_BE4A58B10EA11F6C_METHOD_2_0589B5E7626E6766_2_OFFSET UNITYSDK_OFFSET(0xB7F08E0)
#define CLASS_2_BE4A58B10EA11F6C_METHOD_2_0589B5E7626E6766_OFFSET UNITYSDK_OFFSET(0xB7F03B0)
#define CLASS_2_BE4A58B10EA11F6C_METHOD_2_5FB5C7B7B80DA409_OFFSET UNITYSDK_OFFSET(0xB7EFFB0)
#define CLASS_2_BE4A58B10EA11F6C_METHOD_2_73FDD6535B769A1D_OFFSET UNITYSDK_OFFSET(0xB7F0460)
#define CLASS_2_BE4A58B10EA11F6C_METHOD_2_B3F5E1D97B62C5A8_OFFSET UNITYSDK_OFFSET(0xB7F00A0)
#define CLASS_2_BE4A58B10EA11F6C_METHOD_2_B851E995B6A69742_OFFSET UNITYSDK_OFFSET(0xB7F0570)
#define CLASS_2_BE4A58B10EA11F6C_METHOD_2_DE8FDF9C87F3AA65_OFFSET UNITYSDK_OFFSET(0xB7F07B0)
#define CLASS_2_BE4A58B10EA11F6C_METHOD_2_FB6392A8F30862C7_OFFSET UNITYSDK_OFFSET(0xB7F0990)
#define CLASS_2_BE4A58B10EA11F6C__CTOR_OFFSET UNITYSDK_OFFSET(0xB7F0790)

inline static constexpr unsigned int Class_2_BE4A58B10EA11F6C_TypeDefinitionIndex = 43072;

class Class_2_BE4A58B10EA11F6C : public ::MoleMole::Config::AnimatorEvent
{
public:
	::System::String* Field_2_0; // 0x50
	::Il2CppArray<::System::String*>* Field_2_1; // 0x58
	::Class_1_1CDA382D823F8E80_Enum_3_FECCDB56D27A84FD Field_2_2; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE4A58B10EA11F6C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5FB5C7B7B80DA409(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910 a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + CLASS_2_BE4A58B10EA11F6C_METHOD_2_5FB5C7B7B80DA409_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_0589B5E7626E6766(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910 a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + CLASS_2_BE4A58B10EA11F6C_METHOD_2_0589B5E7626E6766_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::MoleMole::Config::AnimatorEventEntry* Method_2_73FDD6535B769A1D()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE4A58B10EA11F6C_METHOD_2_73FDD6535B769A1D_OFFSET))(this);
	}

	::System::Void Method_2_B851E995B6A69742(::MoleMole::Config::AnimatorEventEntry* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_BE4A58B10EA11F6C_METHOD_2_B851E995B6A69742_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_B3F5E1D97B62C5A8(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910 a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + CLASS_2_BE4A58B10EA11F6C_METHOD_2_B3F5E1D97B62C5A8_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_DE8FDF9C87F3AA65(::MoleMole::Config::AnimatorEventEntry* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_BE4A58B10EA11F6C_METHOD_2_DE8FDF9C87F3AA65_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_0589B5E7626E6766_1(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910 a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + CLASS_2_BE4A58B10EA11F6C_METHOD_2_0589B5E7626E6766_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_0589B5E7626E6766_2(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910 a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + CLASS_2_BE4A58B10EA11F6C_METHOD_2_0589B5E7626E6766_2_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::MoleMole::Config::AnimatorEventEntry* Method_2_FB6392A8F30862C7()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE4A58B10EA11F6C_METHOD_2_FB6392A8F30862C7_OFFSET))(this);
	}
};
