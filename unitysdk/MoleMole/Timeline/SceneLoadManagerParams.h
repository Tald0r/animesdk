#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_TIMELINE_SCENELOADMANAGERPARAMS_METHOD_1_37D3D9A3F3244B90_OFFSET UNITYSDK_OFFSET(0xB3E3670)
#define MOLEMOLE_TIMELINE_SCENELOADMANAGERPARAMS_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xB3E3610)
#define MOLEMOLE_TIMELINE_SCENELOADMANAGERPARAMS_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB3E35B0)
#define MOLEMOLE_TIMELINE_SCENELOADMANAGERPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0xB3E35A0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int SceneLoadManagerParams_TypeDefinitionIndex = 76226;

	class SceneLoadManagerParams : public ::System::Object
	{
	public:
		::System::Boolean LoadSmallObject; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCENELOADMANAGERPARAMS__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCENELOADMANAGERPARAMS_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_1_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCENELOADMANAGERPARAMS_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_1_37D3D9A3F3244B90()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCENELOADMANAGERPARAMS_METHOD_1_37D3D9A3F3244B90_OFFSET))(this);
		}
	};
}
