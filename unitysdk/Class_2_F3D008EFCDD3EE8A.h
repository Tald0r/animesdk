#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910.h"
#include "unitysdk/MoleMole/Config/AnimatorEvent.h"

class Class_3_F33F9DC5F4112336;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AnimatorEventEntry; }
namespace System { class String; }

#define CLASS_2_F3D008EFCDD3EE8A_METHOD_2_0589B5E7626E6766_OFFSET UNITYSDK_OFFSET(0xADA29E0)
#define CLASS_2_F3D008EFCDD3EE8A_METHOD_2_1DC6353CC430B0D1_OFFSET UNITYSDK_OFFSET(0xADA24A0)
#define CLASS_2_F3D008EFCDD3EE8A_METHOD_2_337684FA3C4C6AC9_OFFSET UNITYSDK_OFFSET(0xADA2690)
#define CLASS_2_F3D008EFCDD3EE8A_METHOD_2_CF21266699CA54AF_OFFSET UNITYSDK_OFFSET(0xADA2740)
#define CLASS_2_F3D008EFCDD3EE8A_METHOD_2_DE8FDF9C87F3AA65_OFFSET UNITYSDK_OFFSET(0xADA2900)
#define CLASS_2_F3D008EFCDD3EE8A_METHOD_2_FB6392A8F30862C7_OFFSET UNITYSDK_OFFSET(0xADA2980)
#define CLASS_2_F3D008EFCDD3EE8A__CTOR_OFFSET UNITYSDK_OFFSET(0xADA28F0)

inline static constexpr unsigned int Class_2_F3D008EFCDD3EE8A_TypeDefinitionIndex = 40126;

class Class_2_F3D008EFCDD3EE8A : public ::MoleMole::Config::AnimatorEvent
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3D008EFCDD3EE8A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_1DC6353CC430B0D1(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910 a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + CLASS_2_F3D008EFCDD3EE8A_METHOD_2_1DC6353CC430B0D1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::MoleMole::Config::AnimatorEventEntry* Method_2_337684FA3C4C6AC9()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3D008EFCDD3EE8A_METHOD_2_337684FA3C4C6AC9_OFFSET))(this);
	}

	::System::Void Method_2_CF21266699CA54AF(::MoleMole::Config::AnimatorEventEntry* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_F3D008EFCDD3EE8A_METHOD_2_CF21266699CA54AF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_DE8FDF9C87F3AA65(::MoleMole::Config::AnimatorEventEntry* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_F3D008EFCDD3EE8A_METHOD_2_DE8FDF9C87F3AA65_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::Config::AnimatorEventEntry* Method_2_FB6392A8F30862C7()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3D008EFCDD3EE8A_METHOD_2_FB6392A8F30862C7_OFFSET))(this);
	}

	::System::Void Method_2_0589B5E7626E6766(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910 a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + CLASS_2_F3D008EFCDD3EE8A_METHOD_2_0589B5E7626E6766_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}
};
