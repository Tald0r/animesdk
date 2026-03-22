#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { class ValueInput; }
namespace FlowCanvas::Nodes { class CustomFunctionEvent; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class WeakReference_1; }

#define FLOWCANVAS_NODES_CUSTOMFUNCTIONCALL_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x19748DD0)
#define FLOWCANVAS_NODES_CUSTOMFUNCTIONCALL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x19748D30)
#define FLOWCANVAS_NODES_CUSTOMFUNCTIONCALL_GET_SOURCEFUNCTIONUID_OFFSET UNITYSDK_OFFSET(0x19748BB0)
#define FLOWCANVAS_NODES_CUSTOMFUNCTIONCALL_GET_SOURCEFUNCTION_OFFSET UNITYSDK_OFFSET(0x19748BD0)
#define FLOWCANVAS_NODES_CUSTOMFUNCTIONCALL_INVOKE_OFFSET UNITYSDK_OFFSET(0x197492B0)
#define FLOWCANVAS_NODES_CUSTOMFUNCTIONCALL_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x19748FA0)
#define FLOWCANVAS_NODES_CUSTOMFUNCTIONCALL_SETFUNCTION_OFFSET UNITYSDK_OFFSET(0x19748EB0)
#define FLOWCANVAS_NODES_CUSTOMFUNCTIONCALL_SET_SOURCEFUNCTIONUID_OFFSET UNITYSDK_OFFSET(0x19748BC0)
#define FLOWCANVAS_NODES_CUSTOMFUNCTIONCALL__CTOR_OFFSET UNITYSDK_OFFSET(0x197494C0)
#define FLOWCANVAS_NODES_CUSTOMFUNCTIONCALL__GET_SOURCEFUNCTION_B__9_0_OFFSET UNITYSDK_OFFSET(0x197494E0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int CustomFunctionCall_TypeDefinitionIndex = 26717;

	class CustomFunctionCall : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::Il2CppArray<::FlowCanvas::ValueInput*>* portArgs; // 0xA8
		::System::String* _sourceOutputUID; // 0xB0
		::Il2CppArray<::System::Object*>* objectArgs; // 0xB8
		::FlowCanvas::FlowOutput* fOut; // 0xC0
		::System::WeakReference_1<::FlowCanvas::Nodes::CustomFunctionEvent*>* _sourceFunctionRef; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CUSTOMFUNCTIONCALL__CTOR_OFFSET))(this);
		}

		::System::String* get_sourceFunctionUID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CUSTOMFUNCTIONCALL_GET_SOURCEFUNCTIONUID_OFFSET))(this);
		}

		::System::Void set_sourceFunctionUID(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CUSTOMFUNCTIONCALL_SET_SOURCEFUNCTIONUID_OFFSET))(this, value);
		}

		::FlowCanvas::Nodes::CustomFunctionEvent* get_sourceFunction()
		{
			return ((::FlowCanvas::Nodes::CustomFunctionEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CUSTOMFUNCTIONCALL_GET_SOURCEFUNCTION_OFFSET))(this);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CUSTOMFUNCTIONCALL_GET_NAME_OFFSET))(this);
		}

		::System::String* get_description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CUSTOMFUNCTIONCALL_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::Void SetFunction(::FlowCanvas::Nodes::CustomFunctionEvent* func)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Nodes::CustomFunctionEvent*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CUSTOMFUNCTIONCALL_SETFUNCTION_OFFSET))(this, func);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CUSTOMFUNCTIONCALL_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Invoke(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CUSTOMFUNCTIONCALL_INVOKE_OFFSET))(this, f);
		}

		::System::Boolean _get_sourceFunction_b__9_0(::FlowCanvas::Nodes::CustomFunctionEvent* i)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlowCanvas::Nodes::CustomFunctionEvent*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CUSTOMFUNCTIONCALL__GET_SOURCEFUNCTION_B__9_0_OFFSET))(this, i);
		}
	};
}
