#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigCameraPitchPolars; }
namespace System { class Action; }

#define CLASS_1_DEBC388222B8D99B_CLASS_1_97FD1FB8E653E8B7_METHOD_1_02AA6F8A0E2B4E0F_OFFSET UNITYSDK_OFFSET(0x98EB4F0)
#define CLASS_1_DEBC388222B8D99B_CLASS_1_97FD1FB8E653E8B7__CTOR_OFFSET UNITYSDK_OFFSET(0x98EB4E0)

inline static constexpr unsigned int Class_1_DEBC388222B8D99B_Class_1_97FD1FB8E653E8B7_TypeDefinitionIndex = 68342;

class Class_1_DEBC388222B8D99B_Class_1_97FD1FB8E653E8B7 : public ::System::Object
{
public:
	::Foundation::AssetPath Field_1_1; // 0x10
	::System::Action* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DEBC388222B8D99B_CLASS_1_97FD1FB8E653E8B7__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_02AA6F8A0E2B4E0F(::MoleMole::Config::ConfigCameraPitchPolars* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraPitchPolars*))((::PBYTE)hIl2Cpp + CLASS_1_DEBC388222B8D99B_CLASS_1_97FD1FB8E653E8B7_METHOD_1_02AA6F8A0E2B4E0F_OFFSET))(this, a1);
	}
};
