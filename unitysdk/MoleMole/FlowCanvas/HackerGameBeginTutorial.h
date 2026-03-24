#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNodeBase.h"

namespace FlowCanvas { class FlowNode; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class EventArgs; }

#define MOLEMOLE_FLOWCANVAS_HACKERGAMEBEGINTUTORIAL_INVOKE_OFFSET UNITYSDK_OFFSET(0xC262960)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEBEGINTUTORIAL_ONFINISH_OFFSET UNITYSDK_OFFSET(0xC262C00)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEBEGINTUTORIAL_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0xC2625E0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEBEGINTUTORIAL_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0xC2627A0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEBEGINTUTORIAL_ONREGISTERPORTS_OFFSET UNITYSDK_OFFSET(0xC262480)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEBEGINTUTORIAL__CTOR_OFFSET UNITYSDK_OFFSET(0xC262CA0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEBEGINTUTORIAL___BASE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0xC262CB0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEBEGINTUTORIAL___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0xC262CC0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameBeginTutorial_TypeDefinitionIndex = 69095;

	class HackerGameBeginTutorial : public ::FlowCanvas::Nodes::CallableActionNodeBase
	{
	public:
		::FlowCanvas::Flow _flow; // 0x30
		::FlowCanvas::ValueInput_1<::System::Int32>* groupId; // 0x58
		::FlowCanvas::FlowOutput* onFinish; // 0x60
		::System::Boolean _isActive; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEBEGINTUTORIAL__CTOR_OFFSET))(this);
		}

		::System::Void OnRegisterPorts(::FlowCanvas::FlowNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowNode*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEBEGINTUTORIAL_ONREGISTERPORTS_OFFSET))(this, node);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEBEGINTUTORIAL_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEBEGINTUTORIAL_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 groupID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEBEGINTUTORIAL_INVOKE_OFFSET))(this, groupID);
		}

		::System::Void OnFinish(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEBEGINTUTORIAL_ONFINISH_OFFSET))(this, args);
		}

		::System::Void __base_OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEBEGINTUTORIAL___BASE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEBEGINTUTORIAL___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
