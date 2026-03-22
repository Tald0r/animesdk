#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

class Class_3_DB10471F01974BCE;
namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace MoleMole::Battle { class ChallengeSubTypeItem; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE_ONFINISH_OFFSET UNITYSDK_OFFSET(0x6AF64D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE_ONFORCESUCCESSFINISH_OFFSET UNITYSDK_OFFSET(0x6AF6570)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x6AF6610)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE_ONRESUME_OFFSET UNITYSDK_OFFSET(0x6AF66B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE_ONSETSUBITEMPROGRESS_OFFSET UNITYSDK_OFFSET(0x6AF6750)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE_ONSTART_OFFSET UNITYSDK_OFFSET(0x6AF5F00)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x6AF5A90)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE__CTOR_OFFSET UNITYSDK_OFFSET(0x6AF6920)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE__REGISTERPORTS_B__22_0_OFFSET UNITYSDK_OFFSET(0x6AF6A00)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE__REGISTERPORTS_B__22_1_OFFSET UNITYSDK_OFFSET(0x6AF6A10)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE__REGISTERPORTS_B__22_2_OFFSET UNITYSDK_OFFSET(0x6AF6A20)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE__REGISTERPORTS_B__22_3_OFFSET UNITYSDK_OFFSET(0x6AF6AB0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_StartLimitChallenge_TypeDefinitionIndex = 42033;

	class LD_StartLimitChallenge : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowInput* Pause; // 0xA8
		::FlowCanvas::FlowOutput* StartOutput; // 0xB0
		::MoleMole::Battle::ChallengeSubTypeItem* _challengeSubTypeItem; // 0xB8
		::FlowCanvas::FlowOutput* UpdateOutput; // 0xC0
		::FlowCanvas::FlowOutput* FailOutput; // 0xC8
		::Class_3_DB10471F01974BCE* challengeItem; // 0xD0
		::FlowCanvas::FlowInput* Resume; // 0xD8
		::System::Collections::Generic::HashSet_1<::MoleMole::Battle::ChallengeSubTypeItem*>* _sucessSubTypeItems; // 0xE0
		::FlowCanvas::FlowOutput* FinishOutput; // 0xE8
		::FlowCanvas::ValueOutput_1<::System::Single>* NormalizedTime; // 0xF0
		::FlowCanvas::ValueInput_1<::System::Single>* TotalTime; // 0xF8
		::FlowCanvas::ValueInput_1<::System::Int32>* inputSubItemOffsetProgress; // 0x100
		::FlowCanvas::ValueInput_1<::System::Boolean>* IsUseItem; // 0x108
		::FlowCanvas::FlowInput* ForceSuccessFinish; // 0x110
		::FlowCanvas::FlowInput* DoFinish; // 0x118
		::FlowCanvas::FlowInput* DoSetSubItemProgress; // 0x120
		::FlowCanvas::ValueOutput_1<::System::Single>* TimeLeft; // 0x128
		::FlowCanvas::FlowInput* Start; // 0x130
		::FlowCanvas::FlowOutput* SubSuccessOutput; // 0x138
		::FlowCanvas::ValueInput_1<::System::Int32>* ChallengeID; // 0x140
		::FlowCanvas::ValueInput_1<::System::Boolean>* ReadFromServer; // 0x148
		::MoleMole::Battle::ChallengeSubTypeItem* _lastSuccessChallengeSubTypeItem; // 0x150
		::System::Int32 _challengeIDVar; // 0x158

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void OnStart(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE_ONSTART_OFFSET))(this, f);
		}

		::System::Void OnFinish(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE_ONFINISH_OFFSET))(this, f);
		}

		::System::Void OnForceSuccessFinish(::FlowCanvas::Flow ff)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE_ONFORCESUCCESSFINISH_OFFSET))(this, ff);
		}

		::System::Void OnPause(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE_ONPAUSE_OFFSET))(this, f);
		}

		::System::Void OnResume(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE_ONRESUME_OFFSET))(this, f);
		}

		::System::Void OnSetSubItemProgress(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE_ONSETSUBITEMPROGRESS_OFFSET))(this, f);
		}

		::MoleMole::Battle::ChallengeSubTypeItem* _RegisterPorts_b__22_0()
		{
			return ((::MoleMole::Battle::ChallengeSubTypeItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE__REGISTERPORTS_B__22_0_OFFSET))(this);
		}

		::MoleMole::Battle::ChallengeSubTypeItem* _RegisterPorts_b__22_1()
		{
			return ((::MoleMole::Battle::ChallengeSubTypeItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE__REGISTERPORTS_B__22_1_OFFSET))(this);
		}

		::System::Single _RegisterPorts_b__22_2()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE__REGISTERPORTS_B__22_2_OFFSET))(this);
		}

		::System::Single _RegisterPorts_b__22_3()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE__REGISTERPORTS_B__22_3_OFFSET))(this);
		}
	};
}
