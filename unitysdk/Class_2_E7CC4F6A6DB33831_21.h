#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910.h"
#include "unitysdk/MoleMole/Config/AnimatorEvent.h"

class Class_3_F33F9DC5F4112336;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AnimatorEventEntry; }
namespace System { class String; }

#define CLASS_2_E7CC4F6A6DB33831_21_METHOD_2_0589B5E7626E6766_OFFSET UNITYSDK_OFFSET(0xAA5E900)
#define CLASS_2_E7CC4F6A6DB33831_21_METHOD_2_161ABBAFC53CF7DF_OFFSET UNITYSDK_OFFSET(0xAA5E660)
#define CLASS_2_E7CC4F6A6DB33831_21_METHOD_2_98EA67A29F021283_OFFSET UNITYSDK_OFFSET(0xAA5E7A0)
#define CLASS_2_E7CC4F6A6DB33831_21_METHOD_2_DE8FDF9C87F3AA65_OFFSET UNITYSDK_OFFSET(0xAA5E9B0)
#define CLASS_2_E7CC4F6A6DB33831_21__CTOR_OFFSET UNITYSDK_OFFSET(0xAA5E8F0)

inline static constexpr unsigned int Class_2_E7CC4F6A6DB33831_21_TypeDefinitionIndex = 72839;

class Class_2_E7CC4F6A6DB33831_21 : public ::MoleMole::Config::AnimatorEvent
{
public:
	::System::String* Field_2_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7CC4F6A6DB33831_21__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_161ABBAFC53CF7DF(::MoleMole::Config::AnimatorEventEntry* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_E7CC4F6A6DB33831_21_METHOD_2_161ABBAFC53CF7DF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_98EA67A29F021283(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910 a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + CLASS_2_E7CC4F6A6DB33831_21_METHOD_2_98EA67A29F021283_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_0589B5E7626E6766(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910 a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + CLASS_2_E7CC4F6A6DB33831_21_METHOD_2_0589B5E7626E6766_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_DE8FDF9C87F3AA65(::MoleMole::Config::AnimatorEventEntry* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_E7CC4F6A6DB33831_21_METHOD_2_DE8FDF9C87F3AA65_OFFSET))(this, a1, a2, a3);
	}
};
