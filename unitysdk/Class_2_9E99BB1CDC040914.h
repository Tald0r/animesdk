#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910.h"
#include "unitysdk/MoleMole/Config/AnimatorEvent.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"

class Class_3_F33F9DC5F4112336;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AnimatorEventEntry; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class String; }

#define CLASS_2_9E99BB1CDC040914_METHOD_2_0589B5E7626E6766_OFFSET UNITYSDK_OFFSET(0x8AC75A0)
#define CLASS_2_9E99BB1CDC040914_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x8AC7730)
#define CLASS_2_9E99BB1CDC040914_METHOD_2_ABF27A10B1089912_OFFSET UNITYSDK_OFFSET(0x8AC72C0)
#define CLASS_2_9E99BB1CDC040914_METHOD_2_C40E1A2235F2AEBA_OFFSET UNITYSDK_OFFSET(0x8AC70B0)
#define CLASS_2_9E99BB1CDC040914_METHOD_2_D5669A4232C93F53_OFFSET UNITYSDK_OFFSET(0x8AC73A0)
#define CLASS_2_9E99BB1CDC040914_METHOD_2_DE8FDF9C87F3AA65_OFFSET UNITYSDK_OFFSET(0x8AC76B0)
#define CLASS_2_9E99BB1CDC040914_METHOD_2_FB6392A8F30862C7_OFFSET UNITYSDK_OFFSET(0x8AC7650)
#define CLASS_2_9E99BB1CDC040914_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8AC6FB0)
#define CLASS_2_9E99BB1CDC040914__CTOR_OFFSET UNITYSDK_OFFSET(0x8AC7590)

inline static constexpr unsigned int Class_2_9E99BB1CDC040914_TypeDefinitionIndex = 64320;

class Class_2_9E99BB1CDC040914 : public ::MoleMole::Config::AnimatorEvent
{
public:
	::System::String* Field_2_3; // 0x50
	::System::String* Field_2_1; // 0x58
	::MoleMole::Config::ConfigPosRot* Field_2_4; // 0x60
	::MoleMole::Config::ScreenEffectType Field_2_0; // 0x68
	::System::Boolean Field_2_5; // 0x6C
	::System::Boolean Field_2_2; // 0x6D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E99BB1CDC040914__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E99BB1CDC040914_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_2_C40E1A2235F2AEBA(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910 a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + CLASS_2_9E99BB1CDC040914_METHOD_2_C40E1A2235F2AEBA_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::MoleMole::Config::AnimatorEventEntry* Method_2_ABF27A10B1089912()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E99BB1CDC040914_METHOD_2_ABF27A10B1089912_OFFSET))(this);
	}

	::System::Void Method_2_D5669A4232C93F53(::MoleMole::Config::AnimatorEventEntry* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_9E99BB1CDC040914_METHOD_2_D5669A4232C93F53_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_0589B5E7626E6766(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910 a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + CLASS_2_9E99BB1CDC040914_METHOD_2_0589B5E7626E6766_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::MoleMole::Config::AnimatorEventEntry* Method_2_FB6392A8F30862C7()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E99BB1CDC040914_METHOD_2_FB6392A8F30862C7_OFFSET))(this);
	}

	::System::Void Method_2_DE8FDF9C87F3AA65(::MoleMole::Config::AnimatorEventEntry* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_9E99BB1CDC040914_METHOD_2_DE8FDF9C87F3AA65_OFFSET))(this, a1, a2, a3);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E99BB1CDC040914_METHOD_2_128774387667156B_OFFSET))(this);
	}
};
