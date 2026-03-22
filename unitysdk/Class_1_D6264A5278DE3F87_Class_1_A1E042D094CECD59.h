#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigIndicatedLights; }
namespace System { class Action; }

#define CLASS_1_D6264A5278DE3F87_CLASS_1_A1E042D094CECD59_METHOD_1_C376EDD3C6B3377E_OFFSET UNITYSDK_OFFSET(0x6C67220)
#define CLASS_1_D6264A5278DE3F87_CLASS_1_A1E042D094CECD59__CTOR_OFFSET UNITYSDK_OFFSET(0x6C67210)

inline static constexpr unsigned int Class_1_D6264A5278DE3F87_Class_1_A1E042D094CECD59_TypeDefinitionIndex = 72151;

class Class_1_D6264A5278DE3F87_Class_1_A1E042D094CECD59 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::Foundation::AssetPath Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6264A5278DE3F87_CLASS_1_A1E042D094CECD59__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C376EDD3C6B3377E(::MoleMole::Config::ConfigIndicatedLights* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigIndicatedLights*))((::PBYTE)hIl2Cpp + CLASS_1_D6264A5278DE3F87_CLASS_1_A1E042D094CECD59_METHOD_1_C376EDD3C6B3377E_OFFSET))(this, a1);
	}
};
