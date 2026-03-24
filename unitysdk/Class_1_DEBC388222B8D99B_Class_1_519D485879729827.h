#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_DEBC388222B8D99B_Class_1_85A7C7D1D1F4E919;
namespace MoleMole::Config { class ConfigCameraZooms; }

#define CLASS_1_DEBC388222B8D99B_CLASS_1_519D485879729827_METHOD_1_39D97F5BF0FDBD93_OFFSET UNITYSDK_OFFSET(0xBDA5F10)
#define CLASS_1_DEBC388222B8D99B_CLASS_1_519D485879729827__CTOR_OFFSET UNITYSDK_OFFSET(0xBDA5F00)

inline static constexpr unsigned int Class_1_DEBC388222B8D99B_Class_1_519D485879729827_TypeDefinitionIndex = 68340;

class Class_1_DEBC388222B8D99B_Class_1_519D485879729827 : public ::System::Object
{
public:
	::Foundation::AssetPath Field_1_0; // 0x10
	::Class_1_DEBC388222B8D99B_Class_1_85A7C7D1D1F4E919* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DEBC388222B8D99B_CLASS_1_519D485879729827__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_39D97F5BF0FDBD93(::MoleMole::Config::ConfigCameraZooms* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraZooms*))((::PBYTE)hIl2Cpp + CLASS_1_DEBC388222B8D99B_CLASS_1_519D485879729827_METHOD_1_39D97F5BF0FDBD93_OFFSET))(this, a1);
	}
};
