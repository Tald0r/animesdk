#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGLEVELRESULTPERFORM__CTOR_OFFSET UNITYSDK_OFFSET(0xC349120)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLevelResultPerform_TypeDefinitionIndex = 64108;

	class ConfigLevelResultPerform : public ::System::Object
	{
	public:
		::System::String* ScriptableAnimation; // 0x10
		::System::String* StartVideoUrl; // 0x18
		::System::String* LoopVideoUrl; // 0x20
		::System::String* EndVideoUrl; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELRESULTPERFORM__CTOR_OFFSET))(this);
		}
	};
}
