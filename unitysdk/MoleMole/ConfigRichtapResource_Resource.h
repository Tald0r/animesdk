#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/ConfigRichtapResource_RichTapResourceType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIGRICHTAPRESOURCE_RESOURCE_GETAMPLITUDE_OFFSET UNITYSDK_OFFSET(0xB482A20)
#define MOLEMOLE_CONFIGRICHTAPRESOURCE_RESOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0xB482B80)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigRichtapResource_Resource_TypeDefinitionIndex = 66728;

	class ConfigRichtapResource_Resource : public ::System::Object
	{
	public:
		::System::String* relativePath; // 0x10
		::Foundation::AssetPath assetPath; // 0x18
		::System::Int32 durationMs; // 0x28
		::MoleMole::ConfigRichtapResource_RichTapResourceType resourceType; // 0x2C
		::System::UInt32 hashId; // 0x30
		::System::Int32 priority; // 0x34
		::System::Single amplitude; // 0x38
		::System::Boolean autoStop; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGRICHTAPRESOURCE_RESOURCE__CTOR_OFFSET))(this);
		}

		::System::Single GetAmplitude()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGRICHTAPRESOURCE_RESOURCE_GETAMPLITUDE_OFFSET))(this);
		}
	};
}
