#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigMisc; }
namespace System { class Action; }

#define CLASS_1_05B748E45231F0DE_CLASS_1_20D49A36E6DE2E5B_METHOD_1_CB22660EA9E52608_OFFSET UNITYSDK_OFFSET(0xAB2AEF0)
#define CLASS_1_05B748E45231F0DE_CLASS_1_20D49A36E6DE2E5B__CTOR_OFFSET UNITYSDK_OFFSET(0xAB2AEE0)

inline static constexpr unsigned int Class_1_05B748E45231F0DE_Class_1_20D49A36E6DE2E5B_TypeDefinitionIndex = 49865;

class Class_1_05B748E45231F0DE_Class_1_20D49A36E6DE2E5B : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_05B748E45231F0DE_CLASS_1_20D49A36E6DE2E5B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CB22660EA9E52608(::MoleMole::Config::ConfigMisc* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMisc*))((::PBYTE)hIl2Cpp + CLASS_1_05B748E45231F0DE_CLASS_1_20D49A36E6DE2E5B_METHOD_1_CB22660EA9E52608_OFFSET))(this, a1);
	}
};
