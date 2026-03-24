#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Component; }
namespace UnityEngine::UI { class Graphic; }

#define COFFEE_UISOFTMASK_GRAPHICCONNECTOREXTENSION_SETMATERIALDIRTYEX_OFFSET UNITYSDK_OFFSET(0x1B477570)
#define COFFEE_UISOFTMASK_GRAPHICCONNECTOREXTENSION_SETVERTICESDIRTYEX_OFFSET UNITYSDK_OFFSET(0x1B477510)

namespace Coffee::UISoftMask
{
	inline static constexpr unsigned int GraphicConnectorExtension_TypeDefinitionIndex = 83194;

	class GraphicConnectorExtension : public ::System::Object
	{
	public:
		static ::System::Void SetVerticesDirtyEx(::UnityEngine::UI::Graphic* graphic)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Graphic*))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_GRAPHICCONNECTOREXTENSION_SETVERTICESDIRTYEX_OFFSET))(graphic);
		}

		static ::System::Void SetMaterialDirtyEx(::UnityEngine::UI::Graphic* graphic)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Graphic*))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_GRAPHICCONNECTOREXTENSION_SETMATERIALDIRTYEX_OFFSET))(graphic);
		}
	};
}
