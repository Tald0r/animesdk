#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910.h"
#include "unitysdk/MoleMole/Config/AnimatorEvent.h"
#include "unitysdk/MoleMole/Config/AnimatorEventWriteAIParamEntry_ParaType.h"

class Class_3_F33F9DC5F4112336;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AnimatorEventEntry; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTWRITEAIPARAM_METHOD_2_0589B5E7626E6766_OFFSET UNITYSDK_OFFSET(0xBAE0500)
#define MOLEMOLE_CONFIG_ANIMATOREVENTWRITEAIPARAM_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0xBAE0690)
#define MOLEMOLE_CONFIG_ANIMATOREVENTWRITEAIPARAM_METHOD_2_6D71E792B81E5A0F_OFFSET UNITYSDK_OFFSET(0xBAE02F0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTWRITEAIPARAM_METHOD_2_ABF27A10B1089912_OFFSET UNITYSDK_OFFSET(0xBAE0200)
#define MOLEMOLE_CONFIG_ANIMATOREVENTWRITEAIPARAM_METHOD_2_DE8FDF9C87F3AA65_OFFSET UNITYSDK_OFFSET(0xBAE05B0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTWRITEAIPARAM_METHOD_2_ED5F2F1B855D8245_OFFSET UNITYSDK_OFFSET(0xBADFE40)
#define MOLEMOLE_CONFIG_ANIMATOREVENTWRITEAIPARAM_METHOD_2_FB6392A8F30862C7_OFFSET UNITYSDK_OFFSET(0xBAE0630)
#define MOLEMOLE_CONFIG_ANIMATOREVENTWRITEAIPARAM_TOSTRING_OFFSET UNITYSDK_OFFSET(0xBADFD30)
#define MOLEMOLE_CONFIG_ANIMATOREVENTWRITEAIPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xBAE04F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventWriteAIParam_TypeDefinitionIndex = 67474;

	class AnimatorEventWriteAIParam : public ::MoleMole::Config::AnimatorEvent
	{
	public:
		::MoleMole::Config::AnimatorEventWriteAIParamEntry_ParaType paraType; // 0x50
		::System::String* paramName; // 0x58
		::System::Single floatParamValue; // 0x60
		::System::Int32 intParamValue; // 0x64
		::System::String* stringParamValue; // 0x68
		::System::Boolean boolParamValue; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTWRITEAIPARAM__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTWRITEAIPARAM_TOSTRING_OFFSET))(this);
		}

		::System::Void Method_2_ED5F2F1B855D8245(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910 a6)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTWRITEAIPARAM_METHOD_2_ED5F2F1B855D8245_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::MoleMole::Config::AnimatorEventEntry* Method_2_ABF27A10B1089912()
		{
			return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTWRITEAIPARAM_METHOD_2_ABF27A10B1089912_OFFSET))(this);
		}

		::System::Void Method_2_6D71E792B81E5A0F(::MoleMole::Config::AnimatorEventEntry* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTWRITEAIPARAM_METHOD_2_6D71E792B81E5A0F_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_2_0589B5E7626E6766(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910 a6)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTWRITEAIPARAM_METHOD_2_0589B5E7626E6766_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void Method_2_DE8FDF9C87F3AA65(::MoleMole::Config::AnimatorEventEntry* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTWRITEAIPARAM_METHOD_2_DE8FDF9C87F3AA65_OFFSET))(this, a1, a2, a3);
		}

		::MoleMole::Config::AnimatorEventEntry* Method_2_FB6392A8F30862C7()
		{
			return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTWRITEAIPARAM_METHOD_2_FB6392A8F30862C7_OFFSET))(this);
		}

		::System::String* Method_2_128774387667156B()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTWRITEAIPARAM_METHOD_2_128774387667156B_OFFSET))(this);
		}
	};
}
