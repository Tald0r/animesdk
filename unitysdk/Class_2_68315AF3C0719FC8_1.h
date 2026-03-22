#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910.h"
#include "unitysdk/MoleMole/Config/AnimatorEvent.h"

class Class_3_F33F9DC5F4112336;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AnimatorEventEntry; }
namespace System { class String; }

#define CLASS_2_68315AF3C0719FC8_1_METHOD_2_0589B5E7626E6766_OFFSET UNITYSDK_OFFSET(0xB3FB8D0)
#define CLASS_2_68315AF3C0719FC8_1_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0xB3FBA60)
#define CLASS_2_68315AF3C0719FC8_1_METHOD_2_59F8859A496FF84A_OFFSET UNITYSDK_OFFSET(0xB3FB6B0)
#define CLASS_2_68315AF3C0719FC8_1_METHOD_2_98EA67A29F021283_OFFSET UNITYSDK_OFFSET(0xB3FB360)
#define CLASS_2_68315AF3C0719FC8_1_METHOD_2_C88F257407FB5C09_OFFSET UNITYSDK_OFFSET(0xB3FB5C0)
#define CLASS_2_68315AF3C0719FC8_1_METHOD_2_DE8FDF9C87F3AA65_OFFSET UNITYSDK_OFFSET(0xB3FB9E0)
#define CLASS_2_68315AF3C0719FC8_1_METHOD_2_FB6392A8F30862C7_OFFSET UNITYSDK_OFFSET(0xB3FB980)
#define CLASS_2_68315AF3C0719FC8_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB3FB210)
#define CLASS_2_68315AF3C0719FC8_1__CTOR_OFFSET UNITYSDK_OFFSET(0xB3FB8C0)

inline static constexpr unsigned int Class_2_68315AF3C0719FC8_1_TypeDefinitionIndex = 49237;

class Class_2_68315AF3C0719FC8_1 : public ::MoleMole::Config::AnimatorEvent
{
public:
	::System::Single Field_2_0; // 0x50
	::System::Boolean Field_2_2; // 0x54
	::System::Single Field_2_1; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68315AF3C0719FC8_1__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68315AF3C0719FC8_1_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_2_98EA67A29F021283(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910 a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + CLASS_2_68315AF3C0719FC8_1_METHOD_2_98EA67A29F021283_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::MoleMole::Config::AnimatorEventEntry* Method_2_C88F257407FB5C09()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68315AF3C0719FC8_1_METHOD_2_C88F257407FB5C09_OFFSET))(this);
	}

	::System::Void Method_2_59F8859A496FF84A(::MoleMole::Config::AnimatorEventEntry* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_68315AF3C0719FC8_1_METHOD_2_59F8859A496FF84A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_0589B5E7626E6766(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910 a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + CLASS_2_68315AF3C0719FC8_1_METHOD_2_0589B5E7626E6766_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::MoleMole::Config::AnimatorEventEntry* Method_2_FB6392A8F30862C7()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68315AF3C0719FC8_1_METHOD_2_FB6392A8F30862C7_OFFSET))(this);
	}

	::System::Void Method_2_DE8FDF9C87F3AA65(::MoleMole::Config::AnimatorEventEntry* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_68315AF3C0719FC8_1_METHOD_2_DE8FDF9C87F3AA65_OFFSET))(this, a1, a2, a3);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68315AF3C0719FC8_1_METHOD_2_128774387667156B_OFFSET))(this);
	}
};
