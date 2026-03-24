#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigTempleLevelUp; }
namespace System { class Action; }

#define CLASS_1_D10A8F352BB9A7EB_CLASS_1_9DF79E170BD599E2_METHOD_1_51D72B05EFA9A908_OFFSET UNITYSDK_OFFSET(0xBB92EB0)
#define CLASS_1_D10A8F352BB9A7EB_CLASS_1_9DF79E170BD599E2__CTOR_OFFSET UNITYSDK_OFFSET(0xBB92EA0)

inline static constexpr unsigned int Class_1_D10A8F352BB9A7EB_Class_1_9DF79E170BD599E2_TypeDefinitionIndex = 55159;

class Class_1_D10A8F352BB9A7EB_Class_1_9DF79E170BD599E2 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D10A8F352BB9A7EB_CLASS_1_9DF79E170BD599E2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_51D72B05EFA9A908(::MoleMole::ConfigTempleLevelUp* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigTempleLevelUp*))((::PBYTE)hIl2Cpp + CLASS_1_D10A8F352BB9A7EB_CLASS_1_9DF79E170BD599E2_METHOD_1_51D72B05EFA9A908_OFFSET))(this, a1);
	}
};
