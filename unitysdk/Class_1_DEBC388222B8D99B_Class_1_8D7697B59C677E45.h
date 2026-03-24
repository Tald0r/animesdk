#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_DEBC388222B8D99B_Class_1_F6CF446D65DF58A2_6;
namespace MoleMole::Cameras { class ConfigCameraBangbooAdjustment; }

#define CLASS_1_DEBC388222B8D99B_CLASS_1_8D7697B59C677E45_METHOD_1_9FDC491578C71DB8_OFFSET UNITYSDK_OFFSET(0x909BA10)
#define CLASS_1_DEBC388222B8D99B_CLASS_1_8D7697B59C677E45__CTOR_OFFSET UNITYSDK_OFFSET(0x909BA00)

inline static constexpr unsigned int Class_1_DEBC388222B8D99B_Class_1_8D7697B59C677E45_TypeDefinitionIndex = 68330;

class Class_1_DEBC388222B8D99B_Class_1_8D7697B59C677E45 : public ::System::Object
{
public:
	::Class_1_DEBC388222B8D99B_Class_1_F6CF446D65DF58A2_6* Field_1_1; // 0x10
	::Foundation::AssetPath Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DEBC388222B8D99B_CLASS_1_8D7697B59C677E45__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9FDC491578C71DB8(::MoleMole::Cameras::ConfigCameraBangbooAdjustment* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::ConfigCameraBangbooAdjustment*))((::PBYTE)hIl2Cpp + CLASS_1_DEBC388222B8D99B_CLASS_1_8D7697B59C677E45_METHOD_1_9FDC491578C71DB8_OFFSET))(this, a1);
	}
};
