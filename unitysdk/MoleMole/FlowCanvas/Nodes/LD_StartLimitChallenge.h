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

#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE_ONFINISH_OFFSET UNITYSDK_OFFSET(0xB5E5760)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE_ONFORCESUCCESSFINISH_OFFSET UNITYSDK_OFFSET(0xB5E5800)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE_ONPAUSE_OFFSET UNITYSDK_OFFSET(0xB5E58A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE_ONRESUME_OFFSET UNITYSDK_OFFSET(0xB5E5940)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE_ONSETSUBITEMPROGRESS_OFFSET UNITYSDK_OFFSET(0xB5E59E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE_ONSTART_OFFSET UNITYSDK_OFFSET(0xB5E5150)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0xB5E4C70)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE__CTOR_OFFSET UNITYSDK_OFFSET(0xB5E5BB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE__REGISTERPORTS_B__25_0_OFFSET UNITYSDK_OFFSET(0xB5E5C90)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE__REGISTERPORTS_B__25_1_OFFSET UNITYSDK_OFFSET(0xB5E5CA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE__REGISTERPORTS_B__25_2_OFFSET UNITYSDK_OFFSET(0xB5E5CB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE__REGISTERPORTS_B__25_3_OFFSET UNITYSDK_OFFSET(0xB5E5D40)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_StartLimitChallenge_TypeDefinitionIndex = 38463;

	class LD_StartLimitChallenge : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* StartOutput; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Boolean>* IsUseItem; // 0xB0
		::FlowCanvas::FlowInput* DoSetSubItemProgress; // 0xB8
		::FlowCanvas::FlowOutput* Out; // 0xC0
		::FlowCanvas::ValueInput_1<::System::Boolean>* SubSuccessTriggerSelfSuccess; // 0xC8
		::FlowCanvas::FlowInput* Resume; // 0xD0
		::FlowCanvas::FlowInput* DoFinish; // 0xD8
		::Class_3_DB10471F01974BCE* challengeItem; // 0xE0
		::FlowCanvas::ValueInput_1<::System::Boolean>* DisableTaimeScale; // 0xE8
		::FlowCanvas::FlowOutput* UpdateOutput; // 0xF0
		::System::Collections::Generic::HashSet_1<::MoleMole::Battle::ChallengeSubTypeItem*>* _sucessSubTypeItems; // 0xF8
		::FlowCanvas::ValueInput_1<::System::Int32>* ChallengeID; // 0x100
		::MoleMole::Battle::ChallengeSubTypeItem* _challengeSubTypeItem; // 0x108
		::FlowCanvas::ValueInput_1<::System::Single>* TotalTime; // 0x110
		::FlowCanvas::FlowOutput* FinishOutput; // 0x118
		::FlowCanvas::FlowInput* Start; // 0x120
		::FlowCanvas::FlowInput* ForceSuccessFinish; // 0x128
		::FlowCanvas::FlowOutput* SubSuccessOutput; // 0x130
		::FlowCanvas::ValueOutput_1<::System::Single>* NormalizedTime; // 0x138
		::MoleMole::Battle::ChallengeSubTypeItem* _lastSuccessChallengeSubTypeItem; // 0x140
		::FlowCanvas::ValueInput_1<::System::Boolean>* ReadFromServer; // 0x148
		::FlowCanvas::ValueInput_1<::System::Int32>* inputSubItemOffsetProgress; // 0x150
		::FlowCanvas::FlowInput* Pause; // 0x158
		::FlowCanvas::ValueOutput_1<::System::Single>* TimeLeft; // 0x160
		::FlowCanvas::FlowOutput* FailOutput; // 0x168
		::System::Int32 _challengeIDVar; // 0x170

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

		::MoleMole::Battle::ChallengeSubTypeItem* _RegisterPorts_b__25_0()
		{
			return ((::MoleMole::Battle::ChallengeSubTypeItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE__REGISTERPORTS_B__25_0_OFFSET))(this);
		}

		::MoleMole::Battle::ChallengeSubTypeItem* _RegisterPorts_b__25_1()
		{
			return ((::MoleMole::Battle::ChallengeSubTypeItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE__REGISTERPORTS_B__25_1_OFFSET))(this);
		}

		::System::Single _RegisterPorts_b__25_2()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE__REGISTERPORTS_B__25_2_OFFSET))(this);
		}

		::System::Single _RegisterPorts_b__25_3()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE__REGISTERPORTS_B__25_3_OFFSET))(this);
		}
	};
}
