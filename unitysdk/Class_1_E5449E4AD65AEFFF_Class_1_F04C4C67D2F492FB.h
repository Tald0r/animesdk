#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIFont; }
namespace System { class Action; }

#define CLASS_1_E5449E4AD65AEFFF_CLASS_1_F04C4C67D2F492FB_METHOD_1_7C9569FD32312965_OFFSET UNITYSDK_OFFSET(0x7E54A10)
#define CLASS_1_E5449E4AD65AEFFF_CLASS_1_F04C4C67D2F492FB__CTOR_OFFSET UNITYSDK_OFFSET(0x7E54A00)

inline static constexpr unsigned int Class_1_E5449E4AD65AEFFF_Class_1_F04C4C67D2F492FB_TypeDefinitionIndex = 63745;

class Class_1_E5449E4AD65AEFFF_Class_1_F04C4C67D2F492FB : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5449E4AD65AEFFF_CLASS_1_F04C4C67D2F492FB__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7C9569FD32312965(::MoleMole::Config::ConfigUIFont* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIFont*))((::PBYTE)hIl2Cpp + CLASS_1_E5449E4AD65AEFFF_CLASS_1_F04C4C67D2F492FB_METHOD_1_7C9569FD32312965_OFFSET))(this, a1);
	}
};
