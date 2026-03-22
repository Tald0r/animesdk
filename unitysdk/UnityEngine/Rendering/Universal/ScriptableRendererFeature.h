#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace UnityEngine::Rendering::Universal { class ScriptableRenderer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERERFEATURE_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x16DC2E20)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERERFEATURE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x16DC2E30)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERERFEATURE_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x16DC2E80)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERERFEATURE_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x16DC2ED0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERERFEATURE__CTOR_OFFSET UNITYSDK_OFFSET(0x16DC2F20)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ScriptableRendererFeature_TypeDefinitionIndex = 28751;

	class ScriptableRendererFeature : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Boolean m_Active; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERERFEATURE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_isActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERERFEATURE_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERERFEATURE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERERFEATURE_ONVALIDATE_OFFSET))(this);
		}

		::System::Void SetActive(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERERFEATURE_SETACTIVE_OFFSET))(this, active);
		}
	};
}
