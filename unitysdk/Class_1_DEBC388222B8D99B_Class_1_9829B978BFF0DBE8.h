#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_DEBC388222B8D99B_Class_1_F6CF446D65DF58A2_5;
namespace MoleMole::Cameras { class ConfigCameraOverrideTrack; }

#define CLASS_1_DEBC388222B8D99B_CLASS_1_9829B978BFF0DBE8_METHOD_1_37882FE0279716E6_OFFSET UNITYSDK_OFFSET(0xB0E52E0)
#define CLASS_1_DEBC388222B8D99B_CLASS_1_9829B978BFF0DBE8__CTOR_OFFSET UNITYSDK_OFFSET(0xB0E52D0)

inline static constexpr unsigned int Class_1_DEBC388222B8D99B_Class_1_9829B978BFF0DBE8_TypeDefinitionIndex = 59269;

class Class_1_DEBC388222B8D99B_Class_1_9829B978BFF0DBE8 : public ::System::Object
{
public:
	::Class_1_DEBC388222B8D99B_Class_1_F6CF446D65DF58A2_5* Field_1_1; // 0x10
	::Foundation::AssetPath Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DEBC388222B8D99B_CLASS_1_9829B978BFF0DBE8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_37882FE0279716E6(::MoleMole::Cameras::ConfigCameraOverrideTrack* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::ConfigCameraOverrideTrack*))((::PBYTE)hIl2Cpp + CLASS_1_DEBC388222B8D99B_CLASS_1_9829B978BFF0DBE8_METHOD_1_37882FE0279716E6_OFFSET))(this, a1);
	}
};
