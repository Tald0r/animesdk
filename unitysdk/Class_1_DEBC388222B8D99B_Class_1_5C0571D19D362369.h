#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_DEBC388222B8D99B_Class_1_8B04BC1159D82A1F;
namespace MoleMole::Config { class ConfigCameraStretchs; }

#define CLASS_1_DEBC388222B8D99B_CLASS_1_5C0571D19D362369_METHOD_1_1A1C199D4B6A5D0F_OFFSET UNITYSDK_OFFSET(0xCB1B8E0)
#define CLASS_1_DEBC388222B8D99B_CLASS_1_5C0571D19D362369__CTOR_OFFSET UNITYSDK_OFFSET(0xCB1B8D0)

inline static constexpr unsigned int Class_1_DEBC388222B8D99B_Class_1_5C0571D19D362369_TypeDefinitionIndex = 59261;

class Class_1_DEBC388222B8D99B_Class_1_5C0571D19D362369 : public ::System::Object
{
public:
	::Class_1_DEBC388222B8D99B_Class_1_8B04BC1159D82A1F* Field_1_1; // 0x10
	::Foundation::AssetPath Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DEBC388222B8D99B_CLASS_1_5C0571D19D362369__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1A1C199D4B6A5D0F(::MoleMole::Config::ConfigCameraStretchs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraStretchs*))((::PBYTE)hIl2Cpp + CLASS_1_DEBC388222B8D99B_CLASS_1_5C0571D19D362369_METHOD_1_1A1C199D4B6A5D0F_OFFSET))(this, a1);
	}
};
