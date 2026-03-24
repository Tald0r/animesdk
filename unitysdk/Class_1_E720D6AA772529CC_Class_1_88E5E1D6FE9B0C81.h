#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ScenePerformConfig; }
namespace System { class Action; }

#define CLASS_1_E720D6AA772529CC_CLASS_1_88E5E1D6FE9B0C81_METHOD_1_ED93200F059F89DB_OFFSET UNITYSDK_OFFSET(0x9CB6D90)
#define CLASS_1_E720D6AA772529CC_CLASS_1_88E5E1D6FE9B0C81__CTOR_OFFSET UNITYSDK_OFFSET(0x9CB6D80)

inline static constexpr unsigned int Class_1_E720D6AA772529CC_Class_1_88E5E1D6FE9B0C81_TypeDefinitionIndex = 58667;

class Class_1_E720D6AA772529CC_Class_1_88E5E1D6FE9B0C81 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E720D6AA772529CC_CLASS_1_88E5E1D6FE9B0C81__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_ED93200F059F89DB(::MoleMole::Config::ScenePerformConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ScenePerformConfig*))((::PBYTE)hIl2Cpp + CLASS_1_E720D6AA772529CC_CLASS_1_88E5E1D6FE9B0C81_METHOD_1_ED93200F059F89DB_OFFSET))(this, a1);
	}
};
