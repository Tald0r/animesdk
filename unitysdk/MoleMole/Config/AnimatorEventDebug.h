#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910.h"
#include "unitysdk/MoleMole/Config/AnimatorEvent.h"

class Class_3_F33F9DC5F4112336;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AnimatorEventEntry; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTDEBUG_METHOD_2_0589B5E7626E6766_1_OFFSET UNITYSDK_OFFSET(0x9CE9540)
#define MOLEMOLE_CONFIG_ANIMATOREVENTDEBUG_METHOD_2_0589B5E7626E6766_OFFSET UNITYSDK_OFFSET(0x9CE9080)
#define MOLEMOLE_CONFIG_ANIMATOREVENTDEBUG_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x9CE9420)
#define MOLEMOLE_CONFIG_ANIMATOREVENTDEBUG_METHOD_2_59F8859A496FF84A_OFFSET UNITYSDK_OFFSET(0x9CE9210)
#define MOLEMOLE_CONFIG_ANIMATOREVENTDEBUG_METHOD_2_C88F257407FB5C09_OFFSET UNITYSDK_OFFSET(0x9CE9130)
#define MOLEMOLE_CONFIG_ANIMATOREVENTDEBUG_METHOD_2_DE8FDF9C87F3AA65_OFFSET UNITYSDK_OFFSET(0x9CE9460)
#define MOLEMOLE_CONFIG_ANIMATOREVENTDEBUG_METHOD_2_FB6392A8F30862C7_OFFSET UNITYSDK_OFFSET(0x9CE94E0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTDEBUG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9CE8FD0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTDEBUG__CTOR_OFFSET UNITYSDK_OFFSET(0x9CE9410)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventDebug_TypeDefinitionIndex = 50588;

	class AnimatorEventDebug : public ::MoleMole::Config::AnimatorEvent
	{
	public:
		::System::String* message; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTDEBUG__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTDEBUG_TOSTRING_OFFSET))(this);
		}

		::System::Void Method_2_0589B5E7626E6766(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910 a6)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTDEBUG_METHOD_2_0589B5E7626E6766_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::MoleMole::Config::AnimatorEventEntry* Method_2_C88F257407FB5C09()
		{
			return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTDEBUG_METHOD_2_C88F257407FB5C09_OFFSET))(this);
		}

		::System::Void Method_2_59F8859A496FF84A(::MoleMole::Config::AnimatorEventEntry* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTDEBUG_METHOD_2_59F8859A496FF84A_OFFSET))(this, a1, a2, a3);
		}

		::System::String* Method_2_128774387667156B()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTDEBUG_METHOD_2_128774387667156B_OFFSET))(this);
		}

		::System::Void Method_2_DE8FDF9C87F3AA65(::MoleMole::Config::AnimatorEventEntry* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTDEBUG_METHOD_2_DE8FDF9C87F3AA65_OFFSET))(this, a1, a2, a3);
		}

		::MoleMole::Config::AnimatorEventEntry* Method_2_FB6392A8F30862C7()
		{
			return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTDEBUG_METHOD_2_FB6392A8F30862C7_OFFSET))(this);
		}

		::System::Void Method_2_0589B5E7626E6766_1(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910 a6)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTDEBUG_METHOD_2_0589B5E7626E6766_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}
	};
}
