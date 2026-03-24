#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ItemDropEffectScriptConfig; }
namespace System { class Action; }

#define CLASS_1_28851412A7E17093_CLASS_1_B96B6270FBD593E3_METHOD_1_D2470E98F5D5F575_OFFSET UNITYSDK_OFFSET(0xDA3D9B0)
#define CLASS_1_28851412A7E17093_CLASS_1_B96B6270FBD593E3__CTOR_OFFSET UNITYSDK_OFFSET(0xDA3D9A0)

inline static constexpr unsigned int Class_1_28851412A7E17093_Class_1_B96B6270FBD593E3_TypeDefinitionIndex = 54742;

class Class_1_28851412A7E17093_Class_1_B96B6270FBD593E3 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28851412A7E17093_CLASS_1_B96B6270FBD593E3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D2470E98F5D5F575(::MoleMole::Config::ItemDropEffectScriptConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ItemDropEffectScriptConfig*))((::PBYTE)hIl2Cpp + CLASS_1_28851412A7E17093_CLASS_1_B96B6270FBD593E3_METHOD_1_D2470E98F5D5F575_OFFSET))(this, a1);
	}
};
