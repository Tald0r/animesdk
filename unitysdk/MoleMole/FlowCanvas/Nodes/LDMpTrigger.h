#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

class Class_3_7FBB00F3330A4099;
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

#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_ATTACHEVENT_OFFSET UNITYSDK_OFFSET(0xA010A50)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_CHECKISALLAVATARIN_OFFSET UNITYSDK_OFFSET(0xA0103E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_FLOWINPUTIN_OFFSET UNITYSDK_OFFSET(0xA00E970)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_GETINTRIGGERAVATARLIST_OFFSET UNITYSDK_OFFSET(0xA00F3D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_GETNOTINTRIGGERAVATARLIST_OFFSET UNITYSDK_OFFSET(0xA00F800)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_GETTRIGGERAVATARCOUNT_OFFSET UNITYSDK_OFFSET(0xA00F360)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_GETWAITTIME_OFFSET UNITYSDK_OFFSET(0xA00F6C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_GETWAITTRIGGERSEC_OFFSET UNITYSDK_OFFSET(0xA00F790)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_INVOKE_OFFSET UNITYSDK_OFFSET(0xA00EF60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_ISALLAVATARIN_OFFSET UNITYSDK_OFFSET(0xA010E60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_ISAVATAR_OFFSET UNITYSDK_OFFSET(0xA010C60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_ISDELAYTIMEOUT_OFFSET UNITYSDK_OFFSET(0xA00FD40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_ISSELFAVATAR_OFFSET UNITYSDK_OFFSET(0xA0116E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_ONFINISHED_OFFSET UNITYSDK_OFFSET(0xA011940)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0xA00E6E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_ONHOSTCHANGED_OFFSET UNITYSDK_OFFSET(0xA012240)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_ONMPFCNODEEXECRECORD_OFFSET UNITYSDK_OFFSET(0xA00FEC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_ONPEERDISCONNECTED_OFFSET UNITYSDK_OFFSET(0xA012020)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_ONPEERENTER_OFFSET UNITYSDK_OFFSET(0xA0102D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_ONPEEREXIT_OFFSET UNITYSDK_OFFSET(0xA010750)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_ONTRIGGERENTITYENTER_OFFSET UNITYSDK_OFFSET(0xA011280)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_ONTRIGGERENTITYEXIT_OFFSET UNITYSDK_OFFSET(0xA011A50)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_ONTRIGGERENTITYSTAY_OFFSET UNITYSDK_OFFSET(0xA0119E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_PROCALLRENTITYENTER_OFFSET UNITYSDK_OFFSET(0xA010820)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_PROCDELAYENTRY_OFFSET UNITYSDK_OFFSET(0xA010920)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_PROCTRIGGERENTITYENTER_OFFSET UNITYSDK_OFFSET(0xA011750)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_PROCTRIGGERENTITYEXIT_OFFSET UNITYSDK_OFFSET(0xA011E30)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0xA00E330)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_START_OFFSET UNITYSDK_OFFSET(0xA00EB70)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_WAITCLIENTNOTIFYCOROUTINE_OFFSET UNITYSDK_OFFSET(0xA00FCA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_WAITSERVERNOTIFYCOROUTINE_OFFSET UNITYSDK_OFFSET(0xA00FC00)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0xA012340)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER__REGISTERPORTS_B__30_0_OFFSET UNITYSDK_OFFSET(0xA012470)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0xA0124A0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDMpTrigger_TypeDefinitionIndex = 67814;

	class LDMpTrigger : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*>* curOnlineList; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Int32>* waitTime; // 0xB0
		::FlowCanvas::FlowOutput* selfExit; // 0xB8
		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* inTriggerAvatarList; // 0xC0
		::FlowCanvas::FlowOutput* triggerEnter; // 0xC8
		::FlowCanvas::FlowOutput* delayEntry; // 0xD0
		::System::Collections::Generic::List_1<::System::UInt32>* inPeerIdList; // 0xD8
		::FlowCanvas::ValueOutput_1<::System::Int32>* valueOutputTiggerAvatarCount; // 0xE0
		::FlowCanvas::FlowOutput* triggerExit; // 0xE8
		::FlowCanvas::ValueInput_1<::System::String*>* spawnPointValueInput; // 0xF0
		::FlowCanvas::FlowOutput* selfEnter; // 0xF8
		::FlowCanvas::FlowOutput* allTriggerStay; // 0x100
		::UnityEngine::Coroutine* coroutine; // 0x108
		::FlowCanvas::ValueOutput_1<::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*>* valueOutputInTriggerAvatarList; // 0x110
		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* notInTriggerAvatarList; // 0x118
		::FlowCanvas::FlowOutput* output; // 0x120
		::FlowCanvas::ValueInput_1<::System::Int32>* teamCount; // 0x128
		::FlowCanvas::ValueOutput_1<::System::Int32>* valueOutputWaitTime; // 0x130
		::FlowCanvas::ValueOutput_1<::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*>* valueOutputNotInTriggerAvatarList; // 0x138
		::FlowCanvas::ValueOutput_1<::System::Int32>* valueOutputCurrentTime; // 0x140
		::MoleMole::LevelNodeEventTrigger* levelTrigger; // 0x148
		::FlowCanvas::FlowInput* input; // 0x150
		::System::Int32 waitTriggerSec; // 0x158
		::System::UInt32 lastEnterPeerId; // 0x15C
		::System::Int64 startTimetamp; // 0x160
		::System::UInt32 lastExitPeerId; // 0x168
		::System::Boolean triggerCreate; // 0x16C
		::System::Boolean attachEvent; // 0x16D
		::System::Boolean finished; // 0x16E

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

		::System::Void OnMpFcNodeExecRecord(::Class_3_7FBB00F3330A4099* record)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_7FBB00F3330A4099*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPTRIGGER_ONMPFCNODEEXECRECORD_OFFSET))(this, record);
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
