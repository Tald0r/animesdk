#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910.h"
#include "unitysdk/MoleMole/Config/AnimatorEvent.h"

class Class_3_F33F9DC5F4112336;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AnimatorEventEntry; }
namespace System { class String; }

#define CLASS_2_E7CC4F6A6DB33831_13_METHOD_2_0589B5E7626E6766_OFFSET UNITYSDK_OFFSET(0xB979EF0)
#define CLASS_2_E7CC4F6A6DB33831_13_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0xB979FA0)
#define CLASS_2_E7CC4F6A6DB33831_13_METHOD_2_79CADA76D5D49495_OFFSET UNITYSDK_OFFSET(0xB979A40)
#define CLASS_2_E7CC4F6A6DB33831_13_METHOD_2_ABF27A10B1089912_OFFSET UNITYSDK_OFFSET(0xB979BE0)
#define CLASS_2_E7CC4F6A6DB33831_13_METHOD_2_D5669A4232C93F53_OFFSET UNITYSDK_OFFSET(0xB979C90)
#define CLASS_2_E7CC4F6A6DB33831_13_METHOD_2_DE8FDF9C87F3AA65_OFFSET UNITYSDK_OFFSET(0xB979E70)
#define CLASS_2_E7CC4F6A6DB33831_13_METHOD_2_FB6392A8F30862C7_OFFSET UNITYSDK_OFFSET(0xB979FE0)
#define CLASS_2_E7CC4F6A6DB33831_13_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB979990)
#define CLASS_2_E7CC4F6A6DB33831_13__CTOR_OFFSET UNITYSDK_OFFSET(0xB979E60)

inline static constexpr unsigned int Class_2_E7CC4F6A6DB33831_13_TypeDefinitionIndex = 65566;

class Class_2_E7CC4F6A6DB33831_13 : public ::MoleMole::Config::AnimatorEvent
{
public:
	::System::String* Field_2_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7CC4F6A6DB33831_13__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7CC4F6A6DB33831_13_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_2_79CADA76D5D49495(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910 a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + CLASS_2_E7CC4F6A6DB33831_13_METHOD_2_79CADA76D5D49495_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::MoleMole::Config::AnimatorEventEntry* Method_2_ABF27A10B1089912()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7CC4F6A6DB33831_13_METHOD_2_ABF27A10B1089912_OFFSET))(this);
	}

	::System::Void Method_2_D5669A4232C93F53(::MoleMole::Config::AnimatorEventEntry* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_E7CC4F6A6DB33831_13_METHOD_2_D5669A4232C93F53_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_DE8FDF9C87F3AA65(::MoleMole::Config::AnimatorEventEntry* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_E7CC4F6A6DB33831_13_METHOD_2_DE8FDF9C87F3AA65_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_0589B5E7626E6766(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910 a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + CLASS_2_E7CC4F6A6DB33831_13_METHOD_2_0589B5E7626E6766_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7CC4F6A6DB33831_13_METHOD_2_128774387667156B_OFFSET))(this);
	}

	::MoleMole::Config::AnimatorEventEntry* Method_2_FB6392A8F30862C7()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7CC4F6A6DB33831_13_METHOD_2_FB6392A8F30862C7_OFFSET))(this);
	}
};
