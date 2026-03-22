#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

class Class_3_060374069A831251;
namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace MoleMole { class LevelNodeEventTrigger; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_ATTACHEVENT_OFFSET UNITYSDK_OFFSET(0xCCE12C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_CHECKISALLAVATARIN_OFFSET UNITYSDK_OFFSET(0xCCE0C50)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_FLOWINPUTIN_OFFSET UNITYSDK_OFFSET(0xCCDEEA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_GETINTRIGGERAVATARLIST_OFFSET UNITYSDK_OFFSET(0xCCDFAF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_GETNOTINTRIGGERAVATARLIST_OFFSET UNITYSDK_OFFSET(0xCCE0070)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_GETTRIGGERAVATARCOUNT_OFFSET UNITYSDK_OFFSET(0xCCDFA80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_GETWAITTIME_OFFSET UNITYSDK_OFFSET(0xCCDFF30)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_GETWAITTRIGGERSEC_OFFSET UNITYSDK_OFFSET(0xCCE0000)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_INVOKE_OFFSET UNITYSDK_OFFSET(0xCCDF680)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_ISALLAVATARIN_OFFSET UNITYSDK_OFFSET(0xCCE16D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_ISAVATAR_OFFSET UNITYSDK_OFFSET(0xCCE14D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_ISDELAYTIMEOUT_OFFSET UNITYSDK_OFFSET(0xCCE05B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_ISSELFAVATAR_OFFSET UNITYSDK_OFFSET(0xCCE1F10)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_ONFINISHED_OFFSET UNITYSDK_OFFSET(0xCCE2300)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0xCCDEC20)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_ONHOSTCHANGED_OFFSET UNITYSDK_OFFSET(0xCCE2B90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_ONMPFCNODEEXECRECORD_OFFSET UNITYSDK_OFFSET(0xCCE0730)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_ONPEERDISCONNECTED_OFFSET UNITYSDK_OFFSET(0xCCE2960)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_ONPEERENTER_OFFSET UNITYSDK_OFFSET(0xCCE0B40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_ONPEEREXIT_OFFSET UNITYSDK_OFFSET(0xCCE0FC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_ONTRIGGERENTITYENTER_OFFSET UNITYSDK_OFFSET(0xCCE1AF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_ONTRIGGERENTITYEXIT_OFFSET UNITYSDK_OFFSET(0xCCE2410)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_ONTRIGGERENTITYSTAY_OFFSET UNITYSDK_OFFSET(0xCCE23A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_PROCALLRENTITYENTER_OFFSET UNITYSDK_OFFSET(0xCCE1090)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_PROCDELAYENTRY_OFFSET UNITYSDK_OFFSET(0xCCE1190)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_PROCTRIGGERENTITYENTER_OFFSET UNITYSDK_OFFSET(0xCCE2150)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_PROCTRIGGERENTITYEXIT_OFFSET UNITYSDK_OFFSET(0xCCE27B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0xCCDE880)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_START_OFFSET UNITYSDK_OFFSET(0xCCDF0A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_WAITCLIENTNOTIFYCOROUTINE_OFFSET UNITYSDK_OFFSET(0xCCE0510)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_WAITSERVERNOTIFYCOROUTINE_OFFSET UNITYSDK_OFFSET(0xCCE0470)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0xCCE2C90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER__REGISTERPORTS_B__30_0_OFFSET UNITYSDK_OFFSET(0xCCE2DC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0xCCE2DF0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDMpTrigger_TypeDefinitionIndex = 46393;

	class LDMpTrigger : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* triggerEnter; // 0xA8
		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* inTriggerAvatarList; // 0xB0
		::FlowCanvas::FlowOutput* output; // 0xB8
		::System::Collections::Generic::List_1<::System::UInt32>* inPeerIdList; // 0xC0
		::FlowCanvas::FlowOutput* delayEntry; // 0xC8
		::MoleMole::LevelNodeEventTrigger* levelTrigger; // 0xD0
		::FlowCanvas::ValueOutput_1<::System::Int32>* valueOutputTiggerAvatarCount; // 0xD8
		::FlowCanvas::FlowOutput* allTriggerStay; // 0xE0
		::FlowCanvas::ValueOutput_1<::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*>* valueOutputNotInTriggerAvatarList; // 0xE8
		::FlowCanvas::ValueInput_1<::System::String*>* spawnPointValueInput; // 0xF0
		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* notInTriggerAvatarList; // 0xF8
		::FlowCanvas::FlowOutput* selfEnter; // 0x100
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*>* curOnlineList; // 0x108
		::FlowCanvas::ValueInput_1<::System::Int32>* teamCount; // 0x110
		::UnityEngine::Coroutine* coroutine; // 0x118
		::FlowCanvas::FlowInput* input; // 0x120
		::FlowCanvas::ValueOutput_1<::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*>* valueOutputInTriggerAvatarList; // 0x128
		::FlowCanvas::ValueOutput_1<::System::Int32>* valueOutputCurrentTime; // 0x130
		::FlowCanvas::ValueOutput_1<::System::Int32>* valueOutputWaitTime; // 0x138
		::FlowCanvas::ValueInput_1<::System::Int32>* waitTime; // 0x140
		::FlowCanvas::FlowOutput* selfExit; // 0x148
		::FlowCanvas::FlowOutput* triggerExit; // 0x150
		::System::UInt32 lastExitPeerId; // 0x158
		::System::Boolean triggerCreate; // 0x15C
		::System::Boolean finished; // 0x15D
		::System::Boolean attachEvent; // 0x15E
		::System::Int32 waitTriggerSec; // 0x160
		::System::UInt32 lastEnterPeerId; // 0x164
		::System::Int64 startTimetamp; // 0x168

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void FlowInputIn(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_FLOWINPUTIN_OFFSET))(this, f);
		}

		::System::Int32 GetTriggerAvatarCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_GETTRIGGERAVATARCOUNT_OFFSET))(this);
		}

		::System::Int32 GetWaitTime()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_GETWAITTIME_OFFSET))(this);
		}

		::System::Int32 GetWaitTriggerSec()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_GETWAITTRIGGERSEC_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* GetInTriggerAvatarList()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_GETINTRIGGERAVATARLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* GetNotInTriggerAvatarList()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_GETNOTINTRIGGERAVATARLIST_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_START_OFFSET))(this);
		}

		::System::Collections::IEnumerator* WaitServerNotifyCoroutine()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_WAITSERVERNOTIFYCOROUTINE_OFFSET))(this);
		}

		::System::Boolean IsDelayTimeout()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_ISDELAYTIMEOUT_OFFSET))(this);
		}

		::System::Collections::IEnumerator* WaitClientNotifyCoroutine()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_WAITCLIENTNOTIFYCOROUTINE_OFFSET))(this);
		}

		::System::Void OnMpFcNodeExecRecord(::Class_3_060374069A831251* record)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_060374069A831251*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_ONMPFCNODEEXECRECORD_OFFSET))(this, record);
		}

		::System::Boolean Invoke(::System::String* point)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_INVOKE_OFFSET))(this, point);
		}

		::System::Void AttachEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_ATTACHEVENT_OFFSET))(this);
		}

		::System::Boolean IsAvatar(::MoleMole::Battle::Entity* ent)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_ISAVATAR_OFFSET))(this, ent);
		}

		::System::Boolean IsAllAvatarIn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_ISALLAVATARIN_OFFSET))(this);
		}

		::System::Void OnPeerEnter(::System::UInt32 peerId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_ONPEERENTER_OFFSET))(this, peerId);
		}

		::System::Void CheckIsAllAvatarIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_CHECKISALLAVATARIN_OFFSET))(this);
		}

		::System::Void OnTriggerEntityEnter(::MoleMole::Battle::Entity* ent)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_ONTRIGGERENTITYENTER_OFFSET))(this, ent);
		}

		::System::Void OnFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_ONFINISHED_OFFSET))(this);
		}

		::System::Void ProcAllrEntityEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_PROCALLRENTITYENTER_OFFSET))(this);
		}

		::System::Void ProcDelayEntry()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_PROCDELAYENTRY_OFFSET))(this);
		}

		::System::Void ProcTriggerEntityEnter(::MoleMole::Battle::Entity* ent)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_PROCTRIGGERENTITYENTER_OFFSET))(this, ent);
		}

		::System::Boolean isSelfAvatar(::MoleMole::Battle::Entity* ent)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_ISSELFAVATAR_OFFSET))(this, ent);
		}

		::System::Void OnTriggerEntityStay(::MoleMole::Battle::Entity* ent)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_ONTRIGGERENTITYSTAY_OFFSET))(this, ent);
		}

		::System::Void OnPeerExit(::System::UInt32 peerId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_ONPEEREXIT_OFFSET))(this, peerId);
		}

		::System::Void OnTriggerEntityExit(::MoleMole::Battle::Entity* ent)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_ONTRIGGERENTITYEXIT_OFFSET))(this, ent);
		}

		::System::Void ProcTriggerEntityExit(::MoleMole::Battle::Entity* ent)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_PROCTRIGGERENTITYEXIT_OFFSET))(this, ent);
		}

		::System::Void OnPeerDisconnected(::System::UInt32 peerId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_ONPEERDISCONNECTED_OFFSET))(this, peerId);
		}

		::System::Void OnHostChanged(::System::UInt32 hostPeerID, ::System::Boolean isNewHost)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_ONHOSTCHANGED_OFFSET))(this, hostPeerID, isNewHost);
		}

		::System::Void _RegisterPorts_b__30_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER__REGISTERPORTS_B__30_0_OFFSET))(this, f);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
