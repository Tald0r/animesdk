#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Behavior_EventTypes.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/System/Object.h"

namespace BehaviorDesigner::Runtime { class Behavior; }
namespace BehaviorDesigner::Runtime::Tasks { class GameObjectGetter; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Collider2D; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Collision2D; }
namespace UnityEngine { class Collision; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class ControllerColliderHit; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_GETCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1AA62670)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_GETDEFAULTGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1AA617C0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_GETPRIORITY_OFFSET UNITYSDK_OFFSET(0x1AA61E70)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_GETUTILITY_OFFSET UNITYSDK_OFFSET(0x1AA61EB0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_GET_DISABLED_OFFSET UNITYSDK_OFFSET(0x1AA62970)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_GET_FRIENDLYNAME_OFFSET UNITYSDK_OFFSET(0x1AA62910)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1AA625B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_GET_ID_OFFSET UNITYSDK_OFFSET(0x1AA628F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_GET_ISINSTANT_OFFSET UNITYSDK_OFFSET(0x1AA62930)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_GET_LASTSTATUS_OFFSET UNITYSDK_OFFSET(0x1AA61B40)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x1AA628D0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_GET_PROXYFRIENDLYNAME_OFFSET UNITYSDK_OFFSET(0x1AA61B00)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_GET_PROXYID_OFFSET UNITYSDK_OFFSET(0x1AA61AE0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_GET_PROXYINSTANT_OFFSET UNITYSDK_OFFSET(0x1AA61B20)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_GET_PROXYOWNER_OFFSET UNITYSDK_OFFSET(0x1AA61AC0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_GET_REFERENCEID_OFFSET UNITYSDK_OFFSET(0x1AA62950)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_ONANIMATORIK_OFFSET UNITYSDK_OFFSET(0x1AA62510)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1AA61CA0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_ONBEHAVIORCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1AA61F30)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_ONBEHAVIORRESTART_OFFSET UNITYSDK_OFFSET(0x1AA61EF0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_ONCOLLISIONENTER2D_OFFSET UNITYSDK_OFFSET(0x1AA62380)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_ONCOLLISIONENTER_OFFSET UNITYSDK_OFFSET(0x1AA62240)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_ONCOLLISIONEXIT2D_OFFSET UNITYSDK_OFFSET(0x1AA623D0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_ONCOLLISIONEXIT_OFFSET UNITYSDK_OFFSET(0x1AA62290)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_ONCONDITIONALABORT_OFFSET UNITYSDK_OFFSET(0x1AA61E30)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_ONCONTROLLERCOLLIDERHIT_OFFSET UNITYSDK_OFFSET(0x1AA624C0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x1AA61F70)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_ONDRAWNODETEXT_OFFSET UNITYSDK_OFFSET(0x1AA61FB0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_ONEND_OFFSET UNITYSDK_OFFSET(0x1AA61DA0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_ONFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1AA61D60)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1AA61D20)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x1AA61DE0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_ONRESET_OFFSET UNITYSDK_OFFSET(0x1AA619E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_ONSTART_OFFSET UNITYSDK_OFFSET(0x1AA61CE0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_ONTRIGGERENTER2D_OFFSET UNITYSDK_OFFSET(0x1AA62420)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x1AA622E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_ONTRIGGEREXIT2D_OFFSET UNITYSDK_OFFSET(0x1AA62470)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x1AA62330)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1AA61A70)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_PLAYERPREFS_DELETEALL_OFFSET UNITYSDK_OFFSET(0x1AA63250)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_PLAYERPREFS_DELETEKEY_OFFSET UNITYSDK_OFFSET(0x1AA63130)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_PLAYERPREFS_GETFLOAT_OFFSET UNITYSDK_OFFSET(0x1AA62990)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_PLAYERPREFS_GETINT_OFFSET UNITYSDK_OFFSET(0x1AA62B90)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_PLAYERPREFS_GETSTRING_OFFSET UNITYSDK_OFFSET(0x1AA62D60)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_PLAYERPREFS_HASKEY_OFFSET UNITYSDK_OFFSET(0x1AA62F30)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_PLAYERPREFS_SETFLOAT_OFFSET UNITYSDK_OFFSET(0x1AA62AB0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_PLAYERPREFS_SETINT_OFFSET UNITYSDK_OFFSET(0x1AA62C90)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_PLAYERPREFS_SETSTRING_OFFSET UNITYSDK_OFFSET(0x1AA62E60)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_SELFCONTAINSMETHOD_OFFSET UNITYSDK_OFFSET(0x1AA61C50)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_SETGAMEOBJECTGETTER_OFFSET UNITYSDK_OFFSET(0x1AA62550)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_SET_DISABLED_OFFSET UNITYSDK_OFFSET(0x1AA62980)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_SET_FRIENDLYNAME_OFFSET UNITYSDK_OFFSET(0x1AA62920)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_SET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1AA625A0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_SET_ID_OFFSET UNITYSDK_OFFSET(0x1AA62900)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_SET_ISINSTANT_OFFSET UNITYSDK_OFFSET(0x1AA62940)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_SET_LASTSTATUS_OFFSET UNITYSDK_OFFSET(0x1AA61B50)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_SET_OWNER_OFFSET UNITYSDK_OFFSET(0x1AA628E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_SET_PROXYFRIENDLYNAME_OFFSET UNITYSDK_OFFSET(0x1AA61B10)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_SET_PROXYID_OFFSET UNITYSDK_OFFSET(0x1AA61AF0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_SET_PROXYINSTANT_OFFSET UNITYSDK_OFFSET(0x1AA61B30)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_SET_PROXYOWNER_OFFSET UNITYSDK_OFFSET(0x1AA61AD0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_SET_REFERENCEID_OFFSET UNITYSDK_OFFSET(0x1AA62960)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_SET_TASKTAGID_OFFSET UNITYSDK_OFFSET(0x1AA62650)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_SET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1AA62660)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_STARTCOROUTINE_1_OFFSET UNITYSDK_OFFSET(0x1AA62060)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_STARTCOROUTINE_2_OFFSET UNITYSDK_OFFSET(0x1AA620C0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_STARTCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1AA62000)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_STOPALLCOROUTINES_OFFSET UNITYSDK_OFFSET(0x1AA621F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_STOPCOROUTINE_1_OFFSET UNITYSDK_OFFSET(0x1AA62190)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_STOPCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1AA62130)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_TASKCONTAINSMETHOD_OFFSET UNITYSDK_OFFSET(0x1AA61B60)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_TRYGETCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1AA62760)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AA63450)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA63430)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int Task_TypeDefinitionIndex = 30275;

	class Task : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>** StaticGet_sharedFloatValueMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Task_TypeDefinitionIndex)->GetStaticField(0x23510);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_sharedIntValueMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Task_TypeDefinitionIndex)->GetStaticField(0x23518);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_sharedStringValueMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Task_TypeDefinitionIndex)->GetStaticField(0x23520);
		}
		static ::System::Int32* StaticGet_sharedMapState()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Task_TypeDefinitionIndex)->GetStaticField(0x78E0);
		}
		::UnityEngine::GameObject* _innerGameObject; // 0x10
		::System::String* friendlyName; // 0x18
		::UnityEngine::Transform* transform; // 0x20
		::BehaviorDesigner::Runtime::Tasks::GameObjectGetter* _innerGameObjectGetter; // 0x28
		::BehaviorDesigner::Runtime::Behavior* owner; // 0x30
		::System::Int32 _taskTagID; // 0x38
		::System::Boolean disabled; // 0x3C
		::System::Boolean instant; // 0x3D
		::BehaviorDesigner::Runtime::Tasks::TaskStatus _LastStatus_k__BackingField; // 0x40
		::System::Int32 id; // 0x44
		::System::Int32 referenceID; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK__CCTOR_OFFSET))();
		}

		::BehaviorDesigner::Runtime::Behavior* get_Proxyowner()
		{
			return ((::BehaviorDesigner::Runtime::Behavior*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_GET_PROXYOWNER_OFFSET))(this);
		}

		::System::Void set_Proxyowner(::BehaviorDesigner::Runtime::Behavior* value)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_SET_PROXYOWNER_OFFSET))(this, value);
		}

		::System::Int32 get_Proxyid()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_GET_PROXYID_OFFSET))(this);
		}

		::System::Void set_Proxyid(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_SET_PROXYID_OFFSET))(this, value);
		}

		::System::String* get_ProxyfriendlyName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_GET_PROXYFRIENDLYNAME_OFFSET))(this);
		}

		::System::Void set_ProxyfriendlyName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_SET_PROXYFRIENDLYNAME_OFFSET))(this, value);
		}

		::System::Boolean get_Proxyinstant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_GET_PROXYINSTANT_OFFSET))(this);
		}

		::System::Void set_Proxyinstant(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_SET_PROXYINSTANT_OFFSET))(this, value);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus get_LastStatus()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_GET_LASTSTATUS_OFFSET))(this);
		}

		::System::Void set_LastStatus(::BehaviorDesigner::Runtime::Tasks::TaskStatus value)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_SET_LASTSTATUS_OFFSET))(this, value);
		}

		::System::Boolean TaskContainsMethod(::BehaviorDesigner::Runtime::Behavior_EventTypes evt)
		{
			return ((::System::Boolean(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior_EventTypes))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_TASKCONTAINSMETHOD_OFFSET))(this, evt);
		}

		::System::Boolean SelfContainsMethod(::BehaviorDesigner::Runtime::Behavior_EventTypes evt)
		{
			return ((::System::Boolean(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior_EventTypes))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_SELFCONTAINSMETHOD_OFFSET))(this, evt);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_ONLATEUPDATE_OFFSET))(this);
		}

		::System::Void OnFixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_ONFIXEDUPDATE_OFFSET))(this);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_ONEND_OFFSET))(this);
		}

		::System::Void OnPause(::System::Boolean paused)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_ONPAUSE_OFFSET))(this, paused);
		}

		::System::Void OnConditionalAbort()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_ONCONDITIONALABORT_OFFSET))(this);
		}

		::System::Single GetPriority()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_GETPRIORITY_OFFSET))(this);
		}

		::System::Single GetUtility()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_GETUTILITY_OFFSET))(this);
		}

		::System::Void OnBehaviorRestart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_ONBEHAVIORRESTART_OFFSET))(this);
		}

		::System::Void OnBehaviorComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_ONBEHAVIORCOMPLETE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_ONRESET_OFFSET))(this);
		}

		::System::Void OnDrawGizmos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_ONDRAWGIZMOS_OFFSET))(this);
		}

		::System::String* OnDrawNodeText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_ONDRAWNODETEXT_OFFSET))(this);
		}

		::System::Void StartCoroutine(::System::String* methodName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_STARTCOROUTINE_OFFSET))(this, methodName);
		}

		::UnityEngine::Coroutine* StartCoroutine_1(::System::Collections::IEnumerator* routine)
		{
			return ((::UnityEngine::Coroutine*(*)(::PVOID, ::System::Collections::IEnumerator*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_STARTCOROUTINE_1_OFFSET))(this, routine);
		}

		::UnityEngine::Coroutine* StartCoroutine_2(::System::String* methodName, ::System::Object* value)
		{
			return ((::UnityEngine::Coroutine*(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_STARTCOROUTINE_2_OFFSET))(this, methodName, value);
		}

		::System::Void StopCoroutine(::System::String* methodName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_STOPCOROUTINE_OFFSET))(this, methodName);
		}

		::System::Void StopCoroutine_1(::System::Collections::IEnumerator* routine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IEnumerator*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_STOPCOROUTINE_1_OFFSET))(this, routine);
		}

		::System::Void StopAllCoroutines()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_STOPALLCOROUTINES_OFFSET))(this);
		}

		::System::Void OnCollisionEnter(::UnityEngine::Collision* collision)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_ONCOLLISIONENTER_OFFSET))(this, collision);
		}

		::System::Void OnCollisionExit(::UnityEngine::Collision* collision)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_ONCOLLISIONEXIT_OFFSET))(this, collision);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* other)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_ONTRIGGERENTER_OFFSET))(this, other);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* other)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_ONTRIGGEREXIT_OFFSET))(this, other);
		}

		::System::Void OnCollisionEnter2D(::UnityEngine::Collision2D* collision)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision2D*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_ONCOLLISIONENTER2D_OFFSET))(this, collision);
		}

		::System::Void OnCollisionExit2D(::UnityEngine::Collision2D* collision)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision2D*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_ONCOLLISIONEXIT2D_OFFSET))(this, collision);
		}

		::System::Void OnTriggerEnter2D(::UnityEngine::Collider2D* other)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider2D*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_ONTRIGGERENTER2D_OFFSET))(this, other);
		}

		::System::Void OnTriggerExit2D(::UnityEngine::Collider2D* other)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider2D*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_ONTRIGGEREXIT2D_OFFSET))(this, other);
		}

		::System::Void OnControllerColliderHit(::UnityEngine::ControllerColliderHit* hit)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ControllerColliderHit*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_ONCONTROLLERCOLLIDERHIT_OFFSET))(this, hit);
		}

		::System::Void OnAnimatorIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_ONANIMATORIK_OFFSET))(this);
		}

		::System::Void SetGameObjectGetter(::BehaviorDesigner::Runtime::Tasks::GameObjectGetter* getter)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::GameObjectGetter*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_SETGAMEOBJECTGETTER_OFFSET))(this, getter);
		}

		::System::Void set_GameObject(::UnityEngine::GameObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_SET_GAMEOBJECT_OFFSET))(this, value);
		}

		::UnityEngine::GameObject* get_gameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_GET_GAMEOBJECT_OFFSET))(this);
		}

		::System::Void set_taskTagID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_SET_TASKTAGID_OFFSET))(this, value);
		}

		::System::Void set_Transform(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_SET_TRANSFORM_OFFSET))(this, value);
		}

		::UnityEngine::Component* GetComponent(::System::Type* type)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_GETCOMPONENT_OFFSET))(this, type);
		}

		::System::Void TryGetComponent(::System::Type* type, ::UnityEngine::Component*& component)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::UnityEngine::Component*&))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_TRYGETCOMPONENT_OFFSET))(this, type, component);
		}

		::UnityEngine::GameObject* GetDefaultGameObject(::UnityEngine::GameObject* go)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_GETDEFAULTGAMEOBJECT_OFFSET))(this, go);
		}

		::BehaviorDesigner::Runtime::Behavior* get_Owner()
		{
			return ((::BehaviorDesigner::Runtime::Behavior*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_GET_OWNER_OFFSET))(this);
		}

		::System::Void set_Owner(::BehaviorDesigner::Runtime::Behavior* value)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_SET_OWNER_OFFSET))(this, value);
		}

		::System::Int32 get_ID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_SET_ID_OFFSET))(this, value);
		}

		::System::String* get_FriendlyName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_GET_FRIENDLYNAME_OFFSET))(this);
		}

		::System::Void set_FriendlyName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_SET_FRIENDLYNAME_OFFSET))(this, value);
		}

		::System::Boolean get_IsInstant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_GET_ISINSTANT_OFFSET))(this);
		}

		::System::Void set_IsInstant(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_SET_ISINSTANT_OFFSET))(this, value);
		}

		::System::Int32 get_ReferenceID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_GET_REFERENCEID_OFFSET))(this);
		}

		::System::Void set_ReferenceID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_SET_REFERENCEID_OFFSET))(this, value);
		}

		::System::Boolean get_Disabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_GET_DISABLED_OFFSET))(this);
		}

		::System::Void set_Disabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_SET_DISABLED_OFFSET))(this, value);
		}

		static ::System::Single PlayerPrefs_GetFloat(::System::String* key, ::System::Single defaultValue)
		{
			return ((::System::Single(*)(::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_PLAYERPREFS_GETFLOAT_OFFSET))(key, defaultValue);
		}

		static ::System::Void PlayerPrefs_SetFloat(::System::String* key, ::System::Single value)
		{
			return ((::System::Void(*)(::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_PLAYERPREFS_SETFLOAT_OFFSET))(key, value);
		}

		static ::System::Int32 PlayerPrefs_GetInt(::System::String* key, ::System::Int32 defaultValue)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_PLAYERPREFS_GETINT_OFFSET))(key, defaultValue);
		}

		static ::System::Void PlayerPrefs_SetInt(::System::String* key, ::System::Int32 value)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_PLAYERPREFS_SETINT_OFFSET))(key, value);
		}

		static ::System::String* PlayerPrefs_GetString(::System::String* key, ::System::String* defaultValue)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_PLAYERPREFS_GETSTRING_OFFSET))(key, defaultValue);
		}

		static ::System::Void PlayerPrefs_SetString(::System::String* key, ::System::String* value)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_PLAYERPREFS_SETSTRING_OFFSET))(key, value);
		}

		static ::System::Boolean PlayerPrefs_HasKey(::System::String* key)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_PLAYERPREFS_HASKEY_OFFSET))(key);
		}

		static ::System::Void PlayerPrefs_DeleteKey(::System::String* key)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_PLAYERPREFS_DELETEKEY_OFFSET))(key);
		}

		static ::System::Void PlayerPrefs_DeleteAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASK_PLAYERPREFS_DELETEALL_OFFSET))();
		}
	};
}
