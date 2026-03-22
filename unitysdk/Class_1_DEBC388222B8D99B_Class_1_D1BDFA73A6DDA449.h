#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigCameraStoryDatas; }
namespace System { class Action; }

#define CLASS_1_DEBC388222B8D99B_CLASS_1_D1BDFA73A6DDA449_METHOD_1_A32417EE24CF8660_OFFSET UNITYSDK_OFFSET(0xF47C010)
#define CLASS_1_DEBC388222B8D99B_CLASS_1_D1BDFA73A6DDA449__CTOR_OFFSET UNITYSDK_OFFSET(0xF47C000)

inline static constexpr unsigned int Class_1_DEBC388222B8D99B_Class_1_D1BDFA73A6DDA449_TypeDefinitionIndex = 59260;

class Class_1_DEBC388222B8D99B_Class_1_D1BDFA73A6DDA449 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::Foundation::AssetPath Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DEBC388222B8D99B_CLASS_1_D1BDFA73A6DDA449__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A32417EE24CF8660(::MoleMole::Config::ConfigCameraStoryDatas* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraStoryDatas*))((::PBYTE)hIl2Cpp + CLASS_1_DEBC388222B8D99B_CLASS_1_D1BDFA73A6DDA449_METHOD_1_A32417EE24CF8660_OFFSET))(this, a1);
	}
};
