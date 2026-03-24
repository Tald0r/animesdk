#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigBuddyMisc; }
namespace System { class Action; }

#define CLASS_1_E7D38BECDE1083DF_CLASS_1_A8E7B82C587200D8_METHOD_1_3BB195CDCBCCF12A_OFFSET UNITYSDK_OFFSET(0xC4A7CD0)
#define CLASS_1_E7D38BECDE1083DF_CLASS_1_A8E7B82C587200D8__CTOR_OFFSET UNITYSDK_OFFSET(0xC4A7CC0)

inline static constexpr unsigned int Class_1_E7D38BECDE1083DF_Class_1_A8E7B82C587200D8_TypeDefinitionIndex = 47730;

class Class_1_E7D38BECDE1083DF_Class_1_A8E7B82C587200D8 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::Foundation::AssetPath Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7D38BECDE1083DF_CLASS_1_A8E7B82C587200D8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3BB195CDCBCCF12A(::MoleMole::Config::ConfigBuddyMisc* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigBuddyMisc*))((::PBYTE)hIl2Cpp + CLASS_1_E7D38BECDE1083DF_CLASS_1_A8E7B82C587200D8_METHOD_1_3BB195CDCBCCF12A_OFFSET))(this, a1);
	}
};
