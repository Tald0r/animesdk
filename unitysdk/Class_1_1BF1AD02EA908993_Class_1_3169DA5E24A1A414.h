#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSwitchTeamActivity; }
namespace System { class Action; }

#define CLASS_1_1BF1AD02EA908993_CLASS_1_3169DA5E24A1A414_METHOD_1_5ACD45F3A26C40C4_OFFSET UNITYSDK_OFFSET(0x66CED60)
#define CLASS_1_1BF1AD02EA908993_CLASS_1_3169DA5E24A1A414__CTOR_OFFSET UNITYSDK_OFFSET(0x66CED50)

inline static constexpr unsigned int Class_1_1BF1AD02EA908993_Class_1_3169DA5E24A1A414_TypeDefinitionIndex = 81094;

class Class_1_1BF1AD02EA908993_Class_1_3169DA5E24A1A414 : public ::System::Object
{
public:
	::Foundation::AssetPath Field_1_1; // 0x10
	::System::Action* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1BF1AD02EA908993_CLASS_1_3169DA5E24A1A414__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5ACD45F3A26C40C4(::MoleMole::Config::ConfigSwitchTeamActivity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSwitchTeamActivity*))((::PBYTE)hIl2Cpp + CLASS_1_1BF1AD02EA908993_CLASS_1_3169DA5E24A1A414_METHOD_1_5ACD45F3A26C40C4_OFFSET))(this, a1);
	}
};
