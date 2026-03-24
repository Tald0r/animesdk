#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDSceneMoveResetPositionNode___c__DisplayClass7_0.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVERESETPOSITIONNODE_BEIGIN_OFFSET UNITYSDK_OFFSET(0xBA0AC00)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVERESETPOSITIONNODE_DOPRELOAD_OFFSET UNITYSDK_OFFSET(0xBA0ABA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVERESETPOSITIONNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0xBA0AA40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVERESETPOSITIONNODE_RESETPOSITION_OFFSET UNITYSDK_OFFSET(0xBA0AFB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVERESETPOSITIONNODE__BEIGIN_G__FINISH_7_0_OFFSET UNITYSDK_OFFSET(0xBA0AF60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVERESETPOSITIONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0xBA0B500)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVERESETPOSITIONNODE__REGISTERPORTS_B__5_0_OFFSET UNITYSDK_OFFSET(0xBA0B520)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVERESETPOSITIONNODE__REGISTERPORTS_B__5_1_OFFSET UNITYSDK_OFFSET(0xBA0B550)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVERESETPOSITIONNODE___BASE_DOPRELOAD_OFFSET UNITYSDK_OFFSET(0xBA0B560)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSceneMoveResetPositionNode_TypeDefinitionIndex = 50835;

	class LDSceneMoveResetPositionNode : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowInput* input; // 0xA8
		::FlowCanvas::FlowOutput* output; // 0xB0
		::FlowCanvas::ValueInput_1<::System::String*>* keyInput; // 0xB8
		::System::String* groupKey; // 0xC0
		::FlowCanvas::ValueOutput_1<::System::String*>* groupKeyOutput; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVERESETPOSITIONNODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVERESETPOSITIONNODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void DoPreload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVERESETPOSITIONNODE_DOPRELOAD_OFFSET))(this);
		}

		::System::Void Beigin(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVERESETPOSITIONNODE_BEIGIN_OFFSET))(this, f);
		}

		::System::Void ResetPosition(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVERESETPOSITIONNODE_RESETPOSITION_OFFSET))(this, key);
		}

		::System::Void _RegisterPorts_b__5_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVERESETPOSITIONNODE__REGISTERPORTS_B__5_0_OFFSET))(this, f);
		}

		::System::String* _RegisterPorts_b__5_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVERESETPOSITIONNODE__REGISTERPORTS_B__5_1_OFFSET))(this);
		}

		::System::Void _Beigin_g__Finish_7_0(::MoleMole::FlowCanvas::Nodes::LDSceneMoveResetPositionNode___c__DisplayClass7_0& a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::LDSceneMoveResetPositionNode___c__DisplayClass7_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVERESETPOSITIONNODE__BEIGIN_G__FINISH_7_0_OFFSET))(this, a1);
		}

		::System::Void __base_DoPreload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVERESETPOSITIONNODE___BASE_DOPRELOAD_OFFSET))(this);
		}
	};
}
