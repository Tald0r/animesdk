#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigEffectSound; }
namespace MoleMole { class ConfigEnvironmentSound; }
namespace MoleMole { class ConfigLevelSound; }
namespace MoleMole { class ConfigRichtapSound; }
namespace System { class Action; }

#define CLASS_1_E2D9DD08809B0F48_CLASS_1_690EC716E4100CBE_METHOD_1_03D4B0E910BDDA71_OFFSET UNITYSDK_OFFSET(0xB016320)
#define CLASS_1_E2D9DD08809B0F48_CLASS_1_690EC716E4100CBE_METHOD_1_5BA76A9EF70C7C47_OFFSET UNITYSDK_OFFSET(0xB016240)
#define CLASS_1_E2D9DD08809B0F48_CLASS_1_690EC716E4100CBE_METHOD_1_9CBD69B766F856C2_OFFSET UNITYSDK_OFFSET(0xB016390)
#define CLASS_1_E2D9DD08809B0F48_CLASS_1_690EC716E4100CBE_METHOD_1_FF1E27AE824E0FD9_OFFSET UNITYSDK_OFFSET(0xB0162B0)
#define CLASS_1_E2D9DD08809B0F48_CLASS_1_690EC716E4100CBE__CTOR_OFFSET UNITYSDK_OFFSET(0xB016230)

inline static constexpr unsigned int Class_1_E2D9DD08809B0F48_Class_1_690EC716E4100CBE_TypeDefinitionIndex = 62696;

class Class_1_E2D9DD08809B0F48_Class_1_690EC716E4100CBE : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2D9DD08809B0F48_CLASS_1_690EC716E4100CBE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5BA76A9EF70C7C47(::MoleMole::ConfigRichtapSound* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigRichtapSound*))((::PBYTE)hIl2Cpp + CLASS_1_E2D9DD08809B0F48_CLASS_1_690EC716E4100CBE_METHOD_1_5BA76A9EF70C7C47_OFFSET))(this, a1);
	}

	::System::Void Method_1_FF1E27AE824E0FD9(::MoleMole::ConfigEnvironmentSound* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigEnvironmentSound*))((::PBYTE)hIl2Cpp + CLASS_1_E2D9DD08809B0F48_CLASS_1_690EC716E4100CBE_METHOD_1_FF1E27AE824E0FD9_OFFSET))(this, a1);
	}

	::System::Void Method_1_03D4B0E910BDDA71(::MoleMole::ConfigEffectSound* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigEffectSound*))((::PBYTE)hIl2Cpp + CLASS_1_E2D9DD08809B0F48_CLASS_1_690EC716E4100CBE_METHOD_1_03D4B0E910BDDA71_OFFSET))(this, a1);
	}

	::System::Void Method_1_9CBD69B766F856C2(::MoleMole::ConfigLevelSound* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigLevelSound*))((::PBYTE)hIl2Cpp + CLASS_1_E2D9DD08809B0F48_CLASS_1_690EC716E4100CBE_METHOD_1_9CBD69B766F856C2_OFFSET))(this, a1);
	}
};
