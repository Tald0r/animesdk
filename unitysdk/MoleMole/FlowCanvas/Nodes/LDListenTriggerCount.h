#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/Config/MonsterFunctionType.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole { class LevelNodeEventTrigger; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTRIGGERCOUNT_ATTACHEVENT_OFFSET UNITYSDK_OFFSET(0xE86F4A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTRIGGERCOUNT_CHECKMONSTERFUNCTIONTYPE_OFFSET UNITYSDK_OFFSET(0xE86FEB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTRIGGERCOUNT_INVOKE_OFFSET UNITYSDK_OFFSET(0xE86F080)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTRIGGERCOUNT_ISALLAVATARIN_OFFSET UNITYSDK_OFFSET(0xE870140)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTRIGGERCOUNT_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0xE86F860)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTRIGGERCOUNT_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0xE86F8D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTRIGGERCOUNT_ONHOSTCHANGED_OFFSET UNITYSDK_OFFSET(0xE871060)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTRIGGERCOUNT_ONPEERDISCONNECTED_OFFSET UNITYSDK_OFFSET(0xE870DE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTRIGGERCOUNT_ONTRIGGERENTITYENTER_OFFSET UNITYSDK_OFFSET(0xE86FB50)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTRIGGERCOUNT_ONTRIGGERENTITYEXIT_OFFSET UNITYSDK_OFFSET(0xE870C30)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTRIGGERCOUNT_ONTRIGGERENTITYSTAY_OFFSET UNITYSDK_OFFSET(0xE870A80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTRIGGERCOUNT_PROCTRIGGERENTITYENTER_OFFSET UNITYSDK_OFFSET(0xE8705D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTRIGGERCOUNT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0xE86E560)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTRIGGERCOUNT_START_OFFSET UNITYSDK_OFFSET(0xE86E9F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTRIGGERCOUNT_WAITAUTHORITYNOTIFYCOROUTINE_OFFSET UNITYSDK_OFFSET(0xE86EFE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTRIGGERCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0xE8711F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTRIGGERCOUNT__REGISTERPORTS_B__23_0_OFFSET UNITYSDK_OFFSET(0xE871210)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTRIGGERCOUNT__REGISTERPORTS_B__23_1_OFFSET UNITYSDK_OFFSET(0xE871220)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTRIGGERCOUNT__REGISTERPORTS_B__23_2_OFFSET UNITYSDK_OFFSET(0xE871230)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTRIGGERCOUNT__REGISTERPORTS_B__23_3_OFFSET UNITYSDK_OFFSET(0xE871240)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTRIGGERCOUNT__REGISTERPORTS_B__23_4_OFFSET UNITYSDK_OFFSET(0xE871250)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTRIGGERCOUNT__REGISTERPORTS_B__23_5_OFFSET UNITYSDK_OFFSET(0xE871260)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTRIGGERCOUNT___BASE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0xE8715B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTRIGGERCOUNT___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0xE8715C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDListenTriggerCount_TypeDefinitionIndex = 47034;

	class LDListenTriggerCount : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::MoleMole::Config::MonsterFunctionType>*>* monsterFunctionTypeValueInput; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Boolean>* functionTypeEnableValueInput; // 0xB0
		::UnityEngine::Coroutine* coroutine; // 0xB8
		::MoleMole::LevelNodeEventTrigger* levelTrigger; // 0xC0
		::FlowCanvas::ValueInput_1<::System::Boolean>* enableMonsterValueInput; // 0xC8
		::FlowCanvas::FlowOutput* triggerStay; // 0xD0
		::FlowCanvas::FlowOutput* triggerExit; // 0xD8
		::FlowCanvas::ValueInput_1<::System::String*>* spawnPointValueInput; // 0xE0
		::FlowCanvas::FlowOutput* raised; // 0xE8
		::MoleMole::Battle::Entity* triggerEnterEntity; // 0xF0
		::FlowCanvas::ValueInput_1<::System::Int32>* listenCountValueInput; // 0xF8
		::MoleMole::Battle::Entity* triggerStayEntity; // 0x100
		::FlowCanvas::FlowOutput* finish; // 0x108
		::FlowCanvas::ValueInput_1<::System::Boolean>* colliderEnableValueInput; // 0x110
		::FlowCanvas::FlowOutput* triggerEnter; // 0x118
		::MoleMole::Battle::Entity* triggerExitEntity; // 0x120
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::System::String*>*>* enableGameplayTagsValueInput; // 0x128
		::FlowCanvas::ValueInput_1<::System::Boolean>* enableAvatarValueInput; // 0x130
		::System::Int32 triggerEnterCount; // 0x138
		::System::Boolean attachEvent; // 0x13C
		::System::Boolean triggerCreate; // 0x13D
		::System::Boolean createTriggerResult; // 0x13E
		::System::Boolean finished; // 0x13F

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTRIGGERCOUNT__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTRIGGERCOUNT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTRIGGERCOUNT_START_OFFSET))(this);
		}

		::System::Collections::IEnumerator* WaitAuthorityNotifyCoroutine()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTRIGGERCOUNT_WAITAUTHORITYNOTIFYCOROUTINE_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::String* point, ::System::Boolean avatarEnable, ::System::Boolean monsterEnable, ::System::Collections::Generic::List_1<::System::String*>* enableGameplayTags)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTRIGGERCOUNT_INVOKE_OFFSET))(this, point, avatarEnable, monsterEnable, enableGameplayTags);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTRIGGERCOUNT_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTRIGGERCOUNT_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void AttachEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTRIGGERCOUNT_ATTACHEVENT_OFFSET))(this);
		}

		::System::Void OnTriggerEntityEnter(::MoleMole::Battle::Entity* ent)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTRIGGERCOUNT_ONTRIGGERENTITYENTER_OFFSET))(this, ent);
		}

		::System::Void ProcTriggerEntityEnter(::MoleMole::Battle::Entity* ent)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTRIGGERCOUNT_PROCTRIGGERENTITYENTER_OFFSET))(this, ent);
		}

		::System::Void OnTriggerEntityStay(::MoleMole::Battle::Entity* ent)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTRIGGERCOUNT_ONTRIGGERENTITYSTAY_OFFSET))(this, ent);
		}

		::System::Void OnTriggerEntityExit(::MoleMole::Battle::Entity* ent)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTRIGGERCOUNT_ONTRIGGERENTITYEXIT_OFFSET))(this, ent);
		}

		::System::Boolean IsAllAvatarIn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTRIGGERCOUNT_ISALLAVATARIN_OFFSET))(this);
		}

		::System::Void OnPeerDisconnected(::System::UInt32 peerId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTRIGGERCOUNT_ONPEERDISCONNECTED_OFFSET))(this, peerId);
		}

		::System::Void OnHostChanged(::System::UInt32 hostPeerID, ::System::Boolean isNewHost)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTRIGGERCOUNT_ONHOSTCHANGED_OFFSET))(this, hostPeerID, isNewHost);
		}

		::System::Boolean CheckMonsterFunctionType(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTRIGGERCOUNT_CHECKMONSTERFUNCTIONTYPE_OFFSET))(this, entity);
		}

		::System::Int32 _RegisterPorts_b__23_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTRIGGERCOUNT__REGISTERPORTS_B__23_0_OFFSET))(this);
		}

		::System::Boolean _RegisterPorts_b__23_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTRIGGERCOUNT__REGISTERPORTS_B__23_1_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* _RegisterPorts_b__23_2()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTRIGGERCOUNT__REGISTERPORTS_B__23_2_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* _RegisterPorts_b__23_3()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTRIGGERCOUNT__REGISTERPORTS_B__23_3_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* _RegisterPorts_b__23_4()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTRIGGERCOUNT__REGISTERPORTS_B__23_4_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__23_5(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTRIGGERCOUNT__REGISTERPORTS_B__23_5_OFFSET))(this, f);
		}

		::System::Void __base_OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTRIGGERCOUNT___BASE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTRIGGERCOUNT___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
