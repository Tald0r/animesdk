#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGDYNAMICATTACHITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x6243EA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynamicAttachItem_TypeDefinitionIndex = 40747;

	class ConfigDynamicAttachItem : public ::System::Object
	{
	public:
		::System::String* attachPointName; // 0x10
		::System::String* dynamicAssetPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICATTACHITEM__CTOR_OFFSET))(this);
		}
	};
}
