#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class PRDConfig; }
namespace System { class Action; }

#define CLASS_1_6FEFAA894241BC28_CLASS_1_7DA62C8DB126AED4_METHOD_1_CB0B43190580F69E_OFFSET UNITYSDK_OFFSET(0xB61FD20)
#define CLASS_1_6FEFAA894241BC28_CLASS_1_7DA62C8DB126AED4__CTOR_OFFSET UNITYSDK_OFFSET(0xB61FD10)

inline static constexpr unsigned int Class_1_6FEFAA894241BC28_Class_1_7DA62C8DB126AED4_TypeDefinitionIndex = 72347;

class Class_1_6FEFAA894241BC28_Class_1_7DA62C8DB126AED4 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FEFAA894241BC28_CLASS_1_7DA62C8DB126AED4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CB0B43190580F69E(::MoleMole::Config::PRDConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::PRDConfig*))((::PBYTE)hIl2Cpp + CLASS_1_6FEFAA894241BC28_CLASS_1_7DA62C8DB126AED4_METHOD_1_CB0B43190580F69E_OFFSET))(this, a1);
	}
};
