#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class EffectPatternInfoConfig; }
namespace System { class Action; }

#define CLASS_1_0F1C0A22A54565B8_CLASS_1_18EE75B4197A1985_METHOD_1_57057F814C31C49B_OFFSET UNITYSDK_OFFSET(0xF498480)
#define CLASS_1_0F1C0A22A54565B8_CLASS_1_18EE75B4197A1985__CTOR_OFFSET UNITYSDK_OFFSET(0xF498470)

inline static constexpr unsigned int Class_1_0F1C0A22A54565B8_Class_1_18EE75B4197A1985_TypeDefinitionIndex = 52901;

class Class_1_0F1C0A22A54565B8_Class_1_18EE75B4197A1985 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F1C0A22A54565B8_CLASS_1_18EE75B4197A1985__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_57057F814C31C49B(::MoleMole::Config::EffectPatternInfoConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::EffectPatternInfoConfig*))((::PBYTE)hIl2Cpp + CLASS_1_0F1C0A22A54565B8_CLASS_1_18EE75B4197A1985_METHOD_1_57057F814C31C49B_OFFSET))(this, a1);
	}
};
