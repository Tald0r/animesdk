#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_5E43193B7E7BBE0F_Class_1_E0F441AF0A75A238;
namespace MoleMole::Config { class ConfigEntitySharedAnimEvents; }

#define CLASS_1_5E43193B7E7BBE0F_CLASS_1_BDD4207FA6E55746_METHOD_1_3B6022BC55171A20_OFFSET UNITYSDK_OFFSET(0x9AE4080)
#define CLASS_1_5E43193B7E7BBE0F_CLASS_1_BDD4207FA6E55746__CTOR_OFFSET UNITYSDK_OFFSET(0x9AE4070)

inline static constexpr unsigned int Class_1_5E43193B7E7BBE0F_Class_1_BDD4207FA6E55746_TypeDefinitionIndex = 57378;

class Class_1_5E43193B7E7BBE0F_Class_1_BDD4207FA6E55746 : public ::System::Object
{
public:
	::Foundation::AssetPath Field_1_0; // 0x10
	::Class_1_5E43193B7E7BBE0F_Class_1_E0F441AF0A75A238* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E43193B7E7BBE0F_CLASS_1_BDD4207FA6E55746__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3B6022BC55171A20(::MoleMole::Config::ConfigEntitySharedAnimEvents* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntitySharedAnimEvents*))((::PBYTE)hIl2Cpp + CLASS_1_5E43193B7E7BBE0F_CLASS_1_BDD4207FA6E55746_METHOD_1_3B6022BC55171A20_OFFSET))(this, a1);
	}
};
