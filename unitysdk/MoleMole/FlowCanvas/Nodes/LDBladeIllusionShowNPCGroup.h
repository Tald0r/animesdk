#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"

class Class_1_DAB41DAFBDB7AAF8;
class Class_1_DAB41DAFBDB7AAF8_Class_3_50D343C44D28BEFB_3;
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole { class BladeIllusionNPCDisplayConfig; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDBLADEILLUSIONSHOWNPCGROUP_CLEARGRAPHNODE_OFFSET UNITYSDK_OFFSET(0x116475C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDBLADEILLUSIONSHOWNPCGROUP_HIDENPC_OFFSET UNITYSDK_OFFSET(0x11647370)
#define MOLEMOLE_FLOWCANVAS_NODES_LDBLADEILLUSIONSHOWNPCGROUP_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x11647700)
#define MOLEMOLE_FLOWCANVAS_NODES_LDBLADEILLUSIONSHOWNPCGROUP_ONNPCSHOWN_OFFSET UNITYSDK_OFFSET(0x11647140)
#define MOLEMOLE_FLOWCANVAS_NODES_LDBLADEILLUSIONSHOWNPCGROUP_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x11646EE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDBLADEILLUSIONSHOWNPCGROUP_UPDATECOROUTINE_OFFSET UNITYSDK_OFFSET(0x11647510)
#define MOLEMOLE_FLOWCANVAS_NODES_LDBLADEILLUSIONSHOWNPCGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x11647770)
#define MOLEMOLE_FLOWCANVAS_NODES_LDBLADEILLUSIONSHOWNPCGROUP__REGISTERPORTS_B__15_0_OFFSET UNITYSDK_OFFSET(0x11647790)
#define MOLEMOLE_FLOWCANVAS_NODES_LDBLADEILLUSIONSHOWNPCGROUP__REGISTERPORTS_B__15_1_OFFSET UNITYSDK_OFFSET(0x11647E60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDBLADEILLUSIONSHOWNPCGROUP__REGISTERPORTS_B__15_2_OFFSET UNITYSDK_OFFSET(0x11647FB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDBLADEILLUSIONSHOWNPCGROUP___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x11648000)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDBladeIllusionShowNPCGroup_TypeDefinitionIndex = 78120;

	class LDBladeIllusionShowNPCGroup : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		// static const ::System::String* ConfigPath; // 0x0
		::FlowCanvas::ValueInput_1<::System::Single>* _disappearDistanceFar; // 0xA8
		::FlowCanvas::FlowOutput* _out; // 0xB0
		::FlowCanvas::FlowOutput* _prepareOut; // 0xB8
		::Class_1_DAB41DAFBDB7AAF8* _showNpcGroup; // 0xC0
		::Foundation::AssetRequestHandle _displayConfigHandle; // 0xC8
		::FlowCanvas::ValueInput_1<::System::Single>* _appearAngle; // 0xE8
		::FlowCanvas::ValueInput_1<::System::Single>* _disappearDistanceNear; // 0xF0
		::FlowCanvas::ValueInput_1<::System::Boolean>* _doNotShowAfterHidden; // 0xF8
		::FlowCanvas::ValueInput_1<::System::Single>* _disappearAngle; // 0x100
		::FlowCanvas::FlowOutput* _clearOut; // 0x108
		::MoleMole::BladeIllusionNPCDisplayConfig* _displayConfig; // 0x110
		::FlowCanvas::ValueInput_1<::System::Single>* _appearDistance; // 0x118
		::UnityEngine::Coroutine* _updateCoroutine; // 0x120
		::System::Boolean _prepared; // 0x128

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDBLADEILLUSIONSHOWNPCGROUP__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDBLADEILLUSIONSHOWNPCGROUP_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void OnNpcShown(::UnityEngine::GameObject* gameObject)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDBLADEILLUSIONSHOWNPCGROUP_ONNPCSHOWN_OFFSET))(this, gameObject);
		}

		static ::System::Void HideNpc(::UnityEngine::GameObject* gameObject, ::Class_1_DAB41DAFBDB7AAF8_Class_3_50D343C44D28BEFB_3* ntf)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::Class_1_DAB41DAFBDB7AAF8_Class_3_50D343C44D28BEFB_3*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDBLADEILLUSIONSHOWNPCGROUP_HIDENPC_OFFSET))(gameObject, ntf);
		}

		::System::Collections::IEnumerator* UpdateCoroutine()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDBLADEILLUSIONSHOWNPCGROUP_UPDATECOROUTINE_OFFSET))(this);
		}

		::System::Void ClearGraphNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDBLADEILLUSIONSHOWNPCGROUP_CLEARGRAPHNODE_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDBLADEILLUSIONSHOWNPCGROUP_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__15_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDBLADEILLUSIONSHOWNPCGROUP__REGISTERPORTS_B__15_0_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__15_1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDBLADEILLUSIONSHOWNPCGROUP__REGISTERPORTS_B__15_1_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__15_2(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDBLADEILLUSIONSHOWNPCGROUP__REGISTERPORTS_B__15_2_OFFSET))(this, f);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDBLADEILLUSIONSHOWNPCGROUP___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
