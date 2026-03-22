#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define MOLEMOLE_TIMELINE_RENDERING_RENDERINGSETTING_METHOD_1_99053D1AE5A59190_1_OFFSET UNITYSDK_OFFSET(0x8A9C190)
#define MOLEMOLE_TIMELINE_RENDERING_RENDERINGSETTING_METHOD_1_99053D1AE5A59190_OFFSET UNITYSDK_OFFSET(0x8A9BE00)
#define MOLEMOLE_TIMELINE_RENDERING_RENDERINGSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x8A9BDF0)

namespace MoleMole::Timeline::Rendering
{
	inline static constexpr unsigned int RenderingSetting_TypeDefinitionIndex = 39535;

	class RenderingSetting : public ::System::Object
	{
	public:
		::UnityEngine::Vector4 hizParams; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RENDERING_RENDERINGSETTING__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_99053D1AE5A59190()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RENDERING_RENDERINGSETTING_METHOD_1_99053D1AE5A59190_OFFSET))(this);
		}

		::System::Void Method_1_99053D1AE5A59190_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RENDERING_RENDERINGSETTING_METHOD_1_99053D1AE5A59190_1_OFFSET))(this);
		}
	};
}
