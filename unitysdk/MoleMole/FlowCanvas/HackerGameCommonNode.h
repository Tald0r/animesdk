#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/FlowNode.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class Object; }

#define MOLEMOLE_FLOWCANVAS_HACKERGAMECOMMONNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0xF1993D0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMECOMMONNODE_START_OFFSET UNITYSDK_OFFSET(0xF199520)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMECOMMONNODE_UPDATE_OFFSET UNITYSDK_OFFSET(0xF1995A0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMECOMMONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0xF199600)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMECOMMONNODE__REGISTERPORTS_B__8_0_OFFSET UNITYSDK_OFFSET(0xF199620)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameCommonNode_TypeDefinitionIndex = 55057;

	class HackerGameCommonNode : public ::FlowCanvas::FlowNode
	{
	public:
		::System::Object* _runtimeInfo; // 0xA8
		::FlowCanvas::FlowInput* _start; // 0xB0
		::FlowCanvas::FlowOutput* _invoke2; // 0xB8
		::FlowCanvas::Flow _flow; // 0xC0
		::FlowCanvas::ValueInput_1<::System::Int32>* _extraArg; // 0xE8
		::FlowCanvas::ValueInput_1<::System::Object*>* _args; // 0xF0
		::FlowCanvas::FlowOutput* _invoke1; // 0xF8
		::System::Int32 _extraInfo; // 0x100

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMECOMMONNODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMECOMMONNODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMECOMMONNODE_START_OFFSET))(this, flow);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMECOMMONNODE_UPDATE_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__8_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMECOMMONNODE__REGISTERPORTS_B__8_0_OFFSET))(this, f);
		}
	};
}
