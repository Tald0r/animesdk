#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace MoleMole::Cameras { class AsistantCameraEffect; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RenderTexture; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATELEVELZEROSPECIALEFFECT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x990B7A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATELEVELZEROSPECIALEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x990BC10)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATELEVELZEROSPECIALEFFECT__DOLOAD_OFFSET UNITYSDK_OFFSET(0x990BA00)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATELEVELZEROSPECIALEFFECT__REGISTERPORTS_B__18_0_OFFSET UNITYSDK_OFFSET(0x990BC30)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATELEVELZEROSPECIALEFFECT__REGISTERPORTS_B__18_1_OFFSET UNITYSDK_OFFSET(0x990BC40)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATELEVELZEROSPECIALEFFECT__UPDATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x990B960)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_CreateLevelZeroSpecialEffect_TypeDefinitionIndex = 56290;

	class LD_CreateLevelZeroSpecialEffect : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* onFinish; // 0xA8
		::UnityEngine::GameObject* _effGo; // 0xB0
		::FlowCanvas::FlowOutput* output; // 0xB8
		::MoleMole::Cameras::AsistantCameraEffect* _effInstance; // 0xC0
		::System::String* RTKey; // 0xC8
		::FlowCanvas::ValueInput_1<::System::String*>* extractXYZ; // 0xD0
		::FlowCanvas::ValueOutput_1<::MoleMole::Cameras::AsistantCameraEffect*>* outputEffIns; // 0xD8
		::FlowCanvas::ValueInput_1<::System::String*>* effectPath; // 0xE0
		::FlowCanvas::ValueInput_1<::UnityEngine::RenderTexture*>* inTexture; // 0xE8
		::System::String* effectInsKey; // 0xF0
		::System::String* ValKey; // 0xF8
		::System::Boolean _isInProgress; // 0x100
		::System::Boolean AttachMainCamera; // 0x101
		::System::Boolean isClearAfterDuration; // 0x102
		::System::Single delayTime; // 0x104
		::System::Single _dt; // 0x108
		::System::Single effectDuration; // 0x10C
		::UnityEngine::Vector2 rangeValue; // 0x110
		::UnityEngine::Vector3 offset; // 0x118

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATELEVELZEROSPECIALEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATELEVELZEROSPECIALEFFECT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Collections::IEnumerator* _UpdateInternal()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATELEVELZEROSPECIALEFFECT__UPDATEINTERNAL_OFFSET))(this);
		}

		::System::Void _DoLoad()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATELEVELZEROSPECIALEFFECT__DOLOAD_OFFSET))(this);
		}

		::MoleMole::Cameras::AsistantCameraEffect* _RegisterPorts_b__18_0()
		{
			return ((::MoleMole::Cameras::AsistantCameraEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATELEVELZEROSPECIALEFFECT__REGISTERPORTS_B__18_0_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__18_1(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATELEVELZEROSPECIALEFFECT__REGISTERPORTS_B__18_1_OFFSET))(this, flow);
		}
	};
}
