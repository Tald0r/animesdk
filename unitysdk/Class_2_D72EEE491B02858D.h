#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910.h"
#include "unitysdk/MoleMole/Config/AnimatorEvent.h"

class Class_3_F33F9DC5F4112336;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AnimatorEventEntry; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_D72EEE491B02858D_METHOD_2_0589B5E7626E6766_OFFSET UNITYSDK_OFFSET(0xA452AD0)
#define CLASS_2_D72EEE491B02858D_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0xA452A90)
#define CLASS_2_D72EEE491B02858D_METHOD_2_83C6ACDE5C4AFE65_OFFSET UNITYSDK_OFFSET(0xA450F90)
#define CLASS_2_D72EEE491B02858D_METHOD_2_BDBE5967B111CE35_OFFSET UNITYSDK_OFFSET(0xA451DD0)
#define CLASS_2_D72EEE491B02858D_METHOD_2_DE8FDF9C87F3AA65_OFFSET UNITYSDK_OFFSET(0xA452A10)
#define CLASS_2_D72EEE491B02858D_METHOD_2_DF740F55EF0A93C2_OFFSET UNITYSDK_OFFSET(0xA4514F0)
#define CLASS_2_D72EEE491B02858D_METHOD_2_FB6392A8F30862C7_OFFSET UNITYSDK_OFFSET(0xA4529B0)
#define CLASS_2_D72EEE491B02858D_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA450E90)
#define CLASS_2_D72EEE491B02858D__CTOR_OFFSET UNITYSDK_OFFSET(0xA452800)

inline static constexpr unsigned int Class_2_D72EEE491B02858D_TypeDefinitionIndex = 66169;

class Class_2_D72EEE491B02858D : public ::MoleMole::Config::AnimatorEvent
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* Field_2_2; // 0x50
	::System::Collections::Generic::List_1<::System::String*>* Field_2_3; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_0; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Field_2_1; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D72EEE491B02858D__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D72EEE491B02858D_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_2_83C6ACDE5C4AFE65(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910 a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + CLASS_2_D72EEE491B02858D_METHOD_2_83C6ACDE5C4AFE65_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::MoleMole::Config::AnimatorEventEntry* Method_2_DF740F55EF0A93C2()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D72EEE491B02858D_METHOD_2_DF740F55EF0A93C2_OFFSET))(this);
	}

	::System::Void Method_2_BDBE5967B111CE35(::MoleMole::Config::AnimatorEventEntry* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_D72EEE491B02858D_METHOD_2_BDBE5967B111CE35_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::Config::AnimatorEventEntry* Method_2_FB6392A8F30862C7()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D72EEE491B02858D_METHOD_2_FB6392A8F30862C7_OFFSET))(this);
	}

	::System::Void Method_2_DE8FDF9C87F3AA65(::MoleMole::Config::AnimatorEventEntry* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_D72EEE491B02858D_METHOD_2_DE8FDF9C87F3AA65_OFFSET))(this, a1, a2, a3);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D72EEE491B02858D_METHOD_2_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_2_0589B5E7626E6766(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910 a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_7978B44050F39B5E_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + CLASS_2_D72EEE491B02858D_METHOD_2_0589B5E7626E6766_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}
};
