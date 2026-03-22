#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_DEBC388222B8D99B_Class_1_4D37EE27A5EF72F4;
namespace MoleMole::Config { class ConfigCameraCutscenes; }

#define CLASS_1_DEBC388222B8D99B_CLASS_1_E4CD0D6DBE0E3372_METHOD_1_3D635B34C51B25CE_OFFSET UNITYSDK_OFFSET(0xDDEBFC0)
#define CLASS_1_DEBC388222B8D99B_CLASS_1_E4CD0D6DBE0E3372__CTOR_OFFSET UNITYSDK_OFFSET(0xDDEBFB0)

inline static constexpr unsigned int Class_1_DEBC388222B8D99B_Class_1_E4CD0D6DBE0E3372_TypeDefinitionIndex = 59268;

class Class_1_DEBC388222B8D99B_Class_1_E4CD0D6DBE0E3372 : public ::System::Object
{
public:
	::Foundation::AssetPath Field_1_0; // 0x10
	::Class_1_DEBC388222B8D99B_Class_1_4D37EE27A5EF72F4* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DEBC388222B8D99B_CLASS_1_E4CD0D6DBE0E3372__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3D635B34C51B25CE(::MoleMole::Config::ConfigCameraCutscenes* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraCutscenes*))((::PBYTE)hIl2Cpp + CLASS_1_DEBC388222B8D99B_CLASS_1_E4CD0D6DBE0E3372_METHOD_1_3D635B34C51B25CE_OFFSET))(this, a1);
	}
};
