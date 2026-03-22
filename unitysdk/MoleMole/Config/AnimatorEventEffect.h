#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910.h"
#include "unitysdk/MoleMole/Config/AnimatorEvent.h"

class Class_3_F33F9DC5F4112336;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AnimatorEventEntry; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class EffectAutoDynamicValue; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTEFFECT_METHOD_2_0589B5E7626E6766_1_OFFSET UNITYSDK_OFFSET(0x96F6A90)
#define MOLEMOLE_CONFIG_ANIMATOREVENTEFFECT_METHOD_2_0589B5E7626E6766_OFFSET UNITYSDK_OFFSET(0x96F69E0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTEFFECT_METHOD_2_0CB78D18DF0CAB65_OFFSET UNITYSDK_OFFSET(0x96F6650)
#define MOLEMOLE_CONFIG_ANIMATOREVENTEFFECT_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x96F6B40)
#define MOLEMOLE_CONFIG_ANIMATOREVENTEFFECT_METHOD_2_85D42686D64E46D3_OFFSET UNITYSDK_OFFSET(0x96F5C50)
#define MOLEMOLE_CONFIG_ANIMATOREVENTEFFECT_METHOD_2_8EE4EE50D709F862_OFFSET UNITYSDK_OFFSET(0x96F5E70)
#define MOLEMOLE_CONFIG_ANIMATOREVENTEFFECT_METHOD_2_A6BB830C0B18021B_OFFSET UNITYSDK_OFFSET(0x96F6550)
#define MOLEMOLE_CONFIG_ANIMATOREVENTEFFECT_METHOD_2_CC205ACED071A76F_1_OFFSET UNITYSDK_OFFSET(0x96F6890)
#define MOLEMOLE_CONFIG_ANIMATOREVENTEFFECT_METHOD_2_CC205ACED071A76F_OFFSET UNITYSDK_OFFSET(0x96F5BE0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTEFFECT_METHOD_2_DE8FDF9C87F3AA65_OFFSET UNITYSDK_OFFSET(0x96F6960)
#define MOLEMOLE_CONFIG_ANIMATOREVENTEFFECT_METHOD_2_E9FBE64559D486D2_OFFSET UNITYSDK_OFFSET(0x96F5D60)
#define MOLEMOLE_CONFIG_ANIMATOREVENTEFFECT_METHOD_2_FB6392A8F30862C7_OFFSET UNITYSDK_OFFSET(0x96F6900)
#define MOLEMOLE_CONFIG_ANIMATOREVENTEFFECT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x96F5AD0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x96F6880)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventEffect_TypeDefinitionIndex = 38554;

	class AnimatorEventEffect : public ::MoleMole::Config::AnimatorEvent
	{
	public:
		::System::String* EffectPatternName; // 0x50
		::System::String* AttachPointName; // 0x58
		::MoleMole::Config::ConfigPosRot* EffectConfigPosRot; // 0x60
		::System::Single OverrideScaleX; // 0x68
		::System::Single OverrideScaleY; // 0x6C
		::System::Single OverrideScaleZ; // 0x70
		::MoleMole::Config::EffectAutoDynamicValue* EffectAutoDynamic; // 0x78
		::System::Int32 effectPatternHash; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTEFFECT__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTEFFECT_TOSTRING_OFFSET))(this);
		}

		::System::Void Method_2_CC205ACED071A76F(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTEFFECT_METHOD_2_CC205ACED071A76F_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_85D42686D64E46D3(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910 a6)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTEFFECT_METHOD_2_85D42686D64E46D3_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void Method_2_E9FBE64559D486D2(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910 a6)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTEFFECT_METHOD_2_E9FBE64559D486D2_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::MoleMole::Config::AnimatorEventEntry* Method_2_A6BB830C0B18021B()
		{
			return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTEFFECT_METHOD_2_A6BB830C0B18021B_OFFSET))(this);
		}

		::System::Void Method_2_0CB78D18DF0CAB65(::MoleMole::Config::AnimatorEventEntry* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTEFFECT_METHOD_2_0CB78D18DF0CAB65_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_2_CC205ACED071A76F_1(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTEFFECT_METHOD_2_CC205ACED071A76F_1_OFFSET))(this, a1, a2);
		}

		::MoleMole::Config::AnimatorEventEntry* Method_2_FB6392A8F30862C7()
		{
			return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTEFFECT_METHOD_2_FB6392A8F30862C7_OFFSET))(this);
		}

		::System::Void Method_2_8EE4EE50D709F862(::MoleMole::Battle::Entity* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTEFFECT_METHOD_2_8EE4EE50D709F862_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_DE8FDF9C87F3AA65(::MoleMole::Config::AnimatorEventEntry* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTEFFECT_METHOD_2_DE8FDF9C87F3AA65_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_2_0589B5E7626E6766(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910 a6)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTEFFECT_METHOD_2_0589B5E7626E6766_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void Method_2_0589B5E7626E6766_1(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910 a6)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTEFFECT_METHOD_2_0589B5E7626E6766_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::String* Method_2_128774387667156B()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTEFFECT_METHOD_2_128774387667156B_OFFSET))(this);
		}
	};
}
