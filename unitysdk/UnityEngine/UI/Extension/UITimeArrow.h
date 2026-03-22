#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/UI/BaseMeshEffect.h"

namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_EXTENSION_UITIMEARROW_CANVASADDITIONALCHANNEL_OFFSET UNITYSDK_OFFSET(0x1664D950)
#define UNITYENGINE_UI_EXTENSION_UITIMEARROW_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0x1664DBF0)
#define UNITYENGINE_UI_EXTENSION_UITIMEARROW_START_OFFSET UNITYSDK_OFFSET(0x1664DA00)
#define UNITYENGINE_UI_EXTENSION_UITIMEARROW_UPDATE_OFFSET UNITYSDK_OFFSET(0x1664DAA0)
#define UNITYENGINE_UI_EXTENSION_UITIMEARROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1664D8D0)
#define UNITYENGINE_UI_EXTENSION_UITIMEARROW___BASE_START_OFFSET UNITYSDK_OFFSET(0x1664DEB0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITimeArrow_TypeDefinitionIndex = 61811;

	class UITimeArrow : public ::UnityEngine::UI::BaseMeshEffect
	{
	public:
		::UnityEngine::Quaternion _lastRotation; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEARROW__CTOR_OFFSET))(this);
		}

		::System::Void CanvasAdditionalChannel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEARROW_CANVASADDITIONALCHANNEL_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEARROW_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEARROW_UPDATE_OFFSET))(this);
		}

		::System::Void ModifyMesh(::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEARROW_MODIFYMESH_OFFSET))(this, vh);
		}

		::System::Void __base_Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEARROW___BASE_START_OFFSET))(this);
		}
	};
}
