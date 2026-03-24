#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_DEBC388222B8D99B_Class_1_255548A0B71F6309;
namespace MoleMole::Config { class ConfigCameraScreenOffsetDatas; }

#define CLASS_1_DEBC388222B8D99B_CLASS_1_5C7BB4633AFFF93F_METHOD_1_F6C7A213AF0C352B_OFFSET UNITYSDK_OFFSET(0xD62EC30)
#define CLASS_1_DEBC388222B8D99B_CLASS_1_5C7BB4633AFFF93F__CTOR_OFFSET UNITYSDK_OFFSET(0xD62EC20)

inline static constexpr unsigned int Class_1_DEBC388222B8D99B_Class_1_5C7BB4633AFFF93F_TypeDefinitionIndex = 68337;

class Class_1_DEBC388222B8D99B_Class_1_5C7BB4633AFFF93F : public ::System::Object
{
public:
	::Class_1_DEBC388222B8D99B_Class_1_255548A0B71F6309* Field_1_1; // 0x10
	::Foundation::AssetPath Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DEBC388222B8D99B_CLASS_1_5C7BB4633AFFF93F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F6C7A213AF0C352B(::MoleMole::Config::ConfigCameraScreenOffsetDatas* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraScreenOffsetDatas*))((::PBYTE)hIl2Cpp + CLASS_1_DEBC388222B8D99B_CLASS_1_5C7BB4633AFFF93F_METHOD_1_F6C7A213AF0C352B_OFFSET))(this, a1);
	}
};
