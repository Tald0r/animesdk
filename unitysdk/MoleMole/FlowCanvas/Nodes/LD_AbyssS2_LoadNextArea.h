#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

class Class_1_510AA82C8B8CAF1E_Class_1_61CF71413B6AF5CC;
class Class_1_B7E341C5F1A6F199;
namespace FlowCanvas { class FlowOutput; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LOADNEXTAREA_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0xB835B40)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LOADNEXTAREA_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0xB8357A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LOADNEXTAREA_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0xB835920)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LOADNEXTAREA_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0xB834AB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LOADNEXTAREA__ABYSSLOADNEXT_ALLFINISHEDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB8354B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LOADNEXTAREA__CCTOR_OFFSET UNITYSDK_OFFSET(0xB835DE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LOADNEXTAREA__CTOR_OFFSET UNITYSDK_OFFSET(0xB835DC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LOADNEXTAREA__EXECUTELOADNEXT_OFFSET UNITYSDK_OFFSET(0xB834BB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LOADNEXTAREA__HANDLELEVEL_AREAEND_OFFSET UNITYSDK_OFFSET(0xB834C70)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LOADNEXTAREA__REGISTERPORTS_B__5_0_OFFSET UNITYSDK_OFFSET(0xB835DF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LOADNEXTAREA__SENDEVENT_OFFSET UNITYSDK_OFFSET(0xB835170)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LOADNEXTAREA___BASE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0xB835EE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LOADNEXTAREA___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0xB835EF0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_LoadNextArea_TypeDefinitionIndex = 51225;

	class LD_AbyssS2_LoadNextArea : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		static ::System::Boolean* StaticGet_s_isReplayMsg()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(LD_AbyssS2_LoadNextArea_TypeDefinitionIndex)->GetStaticField(0xEC40);
		}
		// static const ::System::String* DEFAUL_STAGE_NAME; // 0x0
		// static const ::System::String* Key_ConfirmMap; // 0x0
		// static const ::System::String* Key_After_confirmMap; // 0x0
		::FlowCanvas::FlowOutput* output; // 0xA8
		::FlowCanvas::FlowOutput* onNextAreaLoadFinishedFlowOutput; // 0xB0
		::System::Boolean _hasExecuted; // 0xB8
		::System::Boolean _hasTransitAvatar; // 0xB9
		::System::Boolean DisableGM; // 0xBA

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LOADNEXTAREA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LOADNEXTAREA__CCTOR_OFFSET))();
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LOADNEXTAREA_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _ExecuteLoadNext(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LOADNEXTAREA__EXECUTELOADNEXT_OFFSET))(this, flow);
		}

		::System::Void _SendEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LOADNEXTAREA__SENDEVENT_OFFSET))(this);
		}

		::System::Void _HandleLevel_AreaEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LOADNEXTAREA__HANDLELEVEL_AREAEND_OFFSET))(this);
		}

		::System::Void _AbyssLoadNext_AllFinishedCallback(::Class_1_510AA82C8B8CAF1E_Class_1_61CF71413B6AF5CC* ctx)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_510AA82C8B8CAF1E_Class_1_61CF71413B6AF5CC*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LOADNEXTAREA__ABYSSLOADNEXT_ALLFINISHEDCALLBACK_OFFSET))(this, ctx);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LOADNEXTAREA_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LOADNEXTAREA_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Boolean OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* evt)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LOADNEXTAREA_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Void _RegisterPorts_b__5_0(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LOADNEXTAREA__REGISTERPORTS_B__5_0_OFFSET))(this, flow);
		}

		::System::Void __base_OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LOADNEXTAREA___BASE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LOADNEXTAREA___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
