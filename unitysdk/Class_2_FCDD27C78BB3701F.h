#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/Enum_3_486190703084CEB1.h"

namespace MoleMole::Config { class ConfigEntitySkill; }
namespace System { class String; }

#define CLASS_2_FCDD27C78BB3701F_METHOD_2_1369AE2827BC0DF2_OFFSET UNITYSDK_OFFSET(0xF4621A0)
#define CLASS_2_FCDD27C78BB3701F_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0xF4620F0)
#define CLASS_2_FCDD27C78BB3701F_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xF462220)
#define CLASS_2_FCDD27C78BB3701F__CCTOR_OFFSET UNITYSDK_OFFSET(0xF462070)
#define CLASS_2_FCDD27C78BB3701F__CTOR_OFFSET UNITYSDK_OFFSET(0xF4620E0)

inline static constexpr unsigned int Class_2_FCDD27C78BB3701F_TypeDefinitionIndex = 66087;

class Class_2_FCDD27C78BB3701F : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_3 = 0xD7; // 0x0
	::MoleMole::Config::ConfigEntitySkill* Field_2_1; // 0x20
	::System::String* Field_2_0; // 0x28
	::Enum_3_486190703084CEB1 Field_2_2; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_FCDD27C78BB3701F__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FCDD27C78BB3701F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FCDD27C78BB3701F_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_1369AE2827BC0DF2(::System::String* a1, ::MoleMole::Config::ConfigEntitySkill* a2, ::Enum_3_486190703084CEB1 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntitySkill*, ::Enum_3_486190703084CEB1))((::PBYTE)hIl2Cpp + CLASS_2_FCDD27C78BB3701F_METHOD_2_1369AE2827BC0DF2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FCDD27C78BB3701F_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
