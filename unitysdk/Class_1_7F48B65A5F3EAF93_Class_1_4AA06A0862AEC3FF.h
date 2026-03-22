#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigMultiplayer; }
namespace System { class Action; }

#define CLASS_1_7F48B65A5F3EAF93_CLASS_1_4AA06A0862AEC3FF_METHOD_1_1B331ED4208C3558_OFFSET UNITYSDK_OFFSET(0x719D100)
#define CLASS_1_7F48B65A5F3EAF93_CLASS_1_4AA06A0862AEC3FF__CTOR_OFFSET UNITYSDK_OFFSET(0x719D0F0)

inline static constexpr unsigned int Class_1_7F48B65A5F3EAF93_Class_1_4AA06A0862AEC3FF_TypeDefinitionIndex = 69451;

class Class_1_7F48B65A5F3EAF93_Class_1_4AA06A0862AEC3FF : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::Foundation::AssetPath Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F48B65A5F3EAF93_CLASS_1_4AA06A0862AEC3FF__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1B331ED4208C3558(::MoleMole::Config::ConfigMultiplayer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMultiplayer*))((::PBYTE)hIl2Cpp + CLASS_1_7F48B65A5F3EAF93_CLASS_1_4AA06A0862AEC3FF_METHOD_1_1B331ED4208C3558_OFFSET))(this, a1);
	}
};
