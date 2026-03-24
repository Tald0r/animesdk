#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DE640DFFEF87126B.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/EntityHandle.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDPROCESSSTAGETWEEN_LOOKTWEENSTATE_OFFSET UNITYSDK_OFFSET(0xB17E6A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPROCESSSTAGETWEEN_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0xB17E740)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPROCESSSTAGETWEEN_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0xB17DA50)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPROCESSSTAGETWEEN_START_OFFSET UNITYSDK_OFFSET(0xB17DCC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPROCESSSTAGETWEEN__CTOR_OFFSET UNITYSDK_OFFSET(0xB17E7C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPROCESSSTAGETWEEN__REGISTERPORTS_B__6_0_OFFSET UNITYSDK_OFFSET(0xB17E7E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPROCESSSTAGETWEEN___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0xB17E810)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDProcessStageTween_TypeDefinitionIndex = 63678;

	class LDProcessStageTween : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::UnityEngine::Coroutine* listenHandle; // 0xA8
		::FlowCanvas::ValueInput_1<::MoleMole::EntityHandle>* entityValueInput; // 0xB0
		::FlowCanvas::ValueInput_1<::System::String*>* DatanameInput; // 0xB8
		::FlowCanvas::ValueInput_1<::Enum_3_DE640DFFEF87126B>* OperatorTypeInput; // 0xC0
		::FlowCanvas::FlowOutput* _output; // 0xC8
		::FlowCanvas::FlowOutput* _finishOutput; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPROCESSSTAGETWEEN__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPROCESSSTAGETWEEN_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPROCESSSTAGETWEEN_START_OFFSET))(this, f);
		}

		::System::Collections::IEnumerator* LookTweenState()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPROCESSSTAGETWEEN_LOOKTWEENSTATE_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPROCESSSTAGETWEEN_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__6_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPROCESSSTAGETWEEN__REGISTERPORTS_B__6_0_OFFSET))(this, f);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPROCESSSTAGETWEEN___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
