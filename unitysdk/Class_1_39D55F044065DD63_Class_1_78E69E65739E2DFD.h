#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigGhostEffects; }
namespace System { class Action; }

#define CLASS_1_39D55F044065DD63_CLASS_1_78E69E65739E2DFD_METHOD_1_D5CF287342E97F66_OFFSET UNITYSDK_OFFSET(0x645E740)
#define CLASS_1_39D55F044065DD63_CLASS_1_78E69E65739E2DFD__CTOR_OFFSET UNITYSDK_OFFSET(0x645E730)

inline static constexpr unsigned int Class_1_39D55F044065DD63_Class_1_78E69E65739E2DFD_TypeDefinitionIndex = 52738;

class Class_1_39D55F044065DD63_Class_1_78E69E65739E2DFD : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::Foundation::AssetPath Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_39D55F044065DD63_CLASS_1_78E69E65739E2DFD__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D5CF287342E97F66(::MoleMole::Config::ConfigGhostEffects* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigGhostEffects*))((::PBYTE)hIl2Cpp + CLASS_1_39D55F044065DD63_CLASS_1_78E69E65739E2DFD_METHOD_1_D5CF287342E97F66_OFFSET))(this, a1);
	}
};
