#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_CONFIGPAGECAMERABASE__CTOR_OFFSET UNITYSDK_OFFSET(0xCDAF760)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPageCameraBase_TypeDefinitionIndex = 78884;

	class ConfigPageCameraBase : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPAGECAMERABASE__CTOR_OFFSET))(this);
		}
	};
}
