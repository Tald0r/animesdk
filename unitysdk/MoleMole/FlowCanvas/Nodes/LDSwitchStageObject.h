#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

class Class_1_3361C09B71BDB2D5_Class_1_51CA10D8796CFF9F;
class Class_1_E16B0ED9C6ECEA5F;
namespace FlowCanvas { class FlowOutput; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSTAGEOBJECT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0xA5015D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSTAGEOBJECT__BEFORESWITCHHANDLE_OFFSET UNITYSDK_OFFSET(0xA501ED0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSTAGEOBJECT__CHANGESTAGEWEATHERANDTIME_OFFSET UNITYSDK_OFFSET(0xA5024A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSTAGEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0xA5027B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSTAGEOBJECT__DELAYCALLSTAGEFINISH_OFFSET UNITYSDK_OFFSET(0xA501FD0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSTAGEOBJECT__DOSWITCHGAMEWEATHERANDTIME_OFFSET UNITYSDK_OFFSET(0xA502430)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSTAGEOBJECT__HANDLEAVATARS_OFFSET UNITYSDK_OFFSET(0xA501F30)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSTAGEOBJECT__ONSTAGELOADEND_OFFSET UNITYSDK_OFFSET(0xA502070)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSTAGEOBJECT__REGISTERPORTS_B__10_0_OFFSET UNITYSDK_OFFSET(0xA5027D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSTAGEOBJECT__STARTLOAD_OFFSET UNITYSDK_OFFSET(0xA501760)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSTAGEOBJECT___STARTLOAD_B__11_0_OFFSET UNITYSDK_OFFSET(0xA5027E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSTAGEOBJECT___STARTLOAD_B__11_1_OFFSET UNITYSDK_OFFSET(0xA502910)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSTAGEOBJECT___STARTLOAD_B__11_2_OFFSET UNITYSDK_OFFSET(0xA502C40)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSwitchStageObject_TypeDefinitionIndex = 49483;

	class LDSwitchStageObject : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		// static const ::System::String* MUTE_TAG; // 0x0
		::FlowCanvas::FlowOutput* finishOutput; // 0xA8
		::Class_1_E16B0ED9C6ECEA5F* _infoObject; // 0xB0
		::FlowCanvas::FlowOutput* output; // 0xB8
		::System::String* currentStageName; // 0xC0
		::UnityEngine::Coroutine* _waitFadingAfterLoadFinishCo; // 0xC8
		::System::Single MAX_WAIT_TIME; // 0xD0
		::System::Boolean _isFinishStageLoading; // 0xD4
		::System::Boolean _isStartLoad; // 0xD5
		::System::Boolean IsSetBySubArea; // 0xD6

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSTAGEOBJECT__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSTAGEOBJECT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _StartLoad(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSTAGEOBJECT__STARTLOAD_OFFSET))(this, f);
		}

		::System::Void _BeforeSwitchHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSTAGEOBJECT__BEFORESWITCHHANDLE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* _HandleAvatars()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSTAGEOBJECT__HANDLEAVATARS_OFFSET))(this);
		}

		::System::Collections::IEnumerator* _DelayCallStageFinish()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSTAGEOBJECT__DELAYCALLSTAGEFINISH_OFFSET))(this);
		}

		::System::Void _OnStageLoadEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSTAGEOBJECT__ONSTAGELOADEND_OFFSET))(this);
		}

		::System::Void _DoSwitchGameWeatherAndTime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSTAGEOBJECT__DOSWITCHGAMEWEATHERANDTIME_OFFSET))(this);
		}

		::System::Void _ChangeStageWeatherAndTime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSTAGEOBJECT__CHANGESTAGEWEATHERANDTIME_OFFSET))(this);
		}

		::System::String* _RegisterPorts_b__10_0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSTAGEOBJECT__REGISTERPORTS_B__10_0_OFFSET))(this);
		}

		::System::Void __StartLoad_b__11_0(::Class_1_3361C09B71BDB2D5_Class_1_51CA10D8796CFF9F* o)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3361C09B71BDB2D5_Class_1_51CA10D8796CFF9F*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSTAGEOBJECT___STARTLOAD_B__11_0_OFFSET))(this, o);
		}

		::System::Void __StartLoad_b__11_1(::Class_1_3361C09B71BDB2D5_Class_1_51CA10D8796CFF9F* o)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3361C09B71BDB2D5_Class_1_51CA10D8796CFF9F*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSTAGEOBJECT___STARTLOAD_B__11_1_OFFSET))(this, o);
		}

		::System::Void __StartLoad_b__11_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSTAGEOBJECT___STARTLOAD_B__11_2_OFFSET))(this);
		}
	};
}
