#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigTriggerCaches; }
namespace System { class Action; }

#define CLASS_1_7A6E8680968BC407_CLASS_1_3CEC242FAFB4D4DE_METHOD_1_52CCF1AB1E0884A9_OFFSET UNITYSDK_OFFSET(0x68097D0)
#define CLASS_1_7A6E8680968BC407_CLASS_1_3CEC242FAFB4D4DE__CTOR_OFFSET UNITYSDK_OFFSET(0x68097C0)

inline static constexpr unsigned int Class_1_7A6E8680968BC407_Class_1_3CEC242FAFB4D4DE_TypeDefinitionIndex = 50020;

class Class_1_7A6E8680968BC407_Class_1_3CEC242FAFB4D4DE : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A6E8680968BC407_CLASS_1_3CEC242FAFB4D4DE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_52CCF1AB1E0884A9(::MoleMole::Config::ConfigTriggerCaches* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTriggerCaches*))((::PBYTE)hIl2Cpp + CLASS_1_7A6E8680968BC407_CLASS_1_3CEC242FAFB4D4DE_METHOD_1_52CCF1AB1E0884A9_OFFSET))(this, a1);
	}
};
