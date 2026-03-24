#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

class Class_1_510AA82C8B8CAF1E_Class_1_61CF71413B6AF5CC;
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class EventArgs; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ENTERNEXTHADALROOM_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x6E88F90)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ENTERNEXTHADALROOM__CTOR_OFFSET UNITYSDK_OFFSET(0x6E89F70)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ENTERNEXTHADALROOM__ONNEWAVATARCREATED_OFFSET UNITYSDK_OFFSET(0x6E89D00)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ENTERNEXTHADALROOM__ONNEXTROOMLOADFINISHEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x6E890F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ENTERNEXTHADALROOM__REGISTERPORTS_B__6_0_OFFSET UNITYSDK_OFFSET(0x6E89F90)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ENTERNEXTHADALROOM__REGISTERPORTS_B__6_1_OFFSET UNITYSDK_OFFSET(0x6E89FF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ENTERNEXTHADALROOM__TRYHANDLEBUDDYSTATUS_OFFSET UNITYSDK_OFFSET(0x6E89380)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ENTERNEXTHADALROOM__TRYLOADNEXTHADALROOM_OFFSET UNITYSDK_OFFSET(0x6E89910)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ENTERNEXTHADALROOM__TRYREFRESHHUD_OFFSET UNITYSDK_OFFSET(0x6E89B30)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ENTERNEXTHADALROOM___ONNEXTROOMLOADFINISHEDCALLBACK_B__7_0_OFFSET UNITYSDK_OFFSET(0x6E8A090)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ENTERNEXTHADALROOM___TRYLOADNEXTHADALROOM_B__9_0_OFFSET UNITYSDK_OFFSET(0x6E8A0D0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_EnterNextHadalRoom_TypeDefinitionIndex = 63885;

	class LD_EnterNextHadalRoom : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Boolean>* _isAutoTransit; // 0xA8
		::FlowCanvas::FlowOutput* _onRoomLoadedOutput; // 0xB0
		::FlowCanvas::FlowOutput* _output; // 0xB8
		::System::Boolean _hasTransitAvatar; // 0xC0
		::System::Boolean _isExecuted; // 0xC1
		::System::Single delayRealLoadDuration; // 0xC4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ENTERNEXTHADALROOM__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ENTERNEXTHADALROOM_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _OnNextRoomLoadFinishedCallback(::System::Boolean isSameStage)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ENTERNEXTHADALROOM__ONNEXTROOMLOADFINISHEDCALLBACK_OFFSET))(this, isSameStage);
		}

		::System::Void _TryHandleBuddyStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ENTERNEXTHADALROOM__TRYHANDLEBUDDYSTATUS_OFFSET))(this);
		}

		::System::Void _TryLoadNextHadalRoom(::System::Boolean isLastRoom)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ENTERNEXTHADALROOM__TRYLOADNEXTHADALROOM_OFFSET))(this, isLastRoom);
		}

		::System::Void _TryRefreshHUD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ENTERNEXTHADALROOM__TRYREFRESHHUD_OFFSET))(this);
		}

		::System::Void _OnNewAvatarCreated(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ENTERNEXTHADALROOM__ONNEWAVATARCREATED_OFFSET))(this, args);
		}

		::System::Void _RegisterPorts_b__6_0(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ENTERNEXTHADALROOM__REGISTERPORTS_B__6_0_OFFSET))(this, flow);
		}

		::System::Void _RegisterPorts_b__6_1(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ENTERNEXTHADALROOM__REGISTERPORTS_B__6_1_OFFSET))(this, flow);
		}

		::System::Void __OnNextRoomLoadFinishedCallback_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ENTERNEXTHADALROOM___ONNEXTROOMLOADFINISHEDCALLBACK_B__7_0_OFFSET))(this);
		}

		::System::Void __TryLoadNextHadalRoom_b__9_0(::Class_1_510AA82C8B8CAF1E_Class_1_61CF71413B6AF5CC* tctx)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_510AA82C8B8CAF1E_Class_1_61CF71413B6AF5CC*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ENTERNEXTHADALROOM___TRYLOADNEXTHADALROOM_B__9_0_OFFSET))(this, tctx);
		}
	};
}
