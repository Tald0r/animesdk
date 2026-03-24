#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleManagerBase.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Jobs/LowLevel/Unsafe/JobThreadDelegate.h"
#include "unitysdk/UnityEngine/PhysicsScene.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd { class NPCPhysicsManager_PhysicsJobDelegate; }
namespace NPCCrowd::Ability { class NPCAbility; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_NPCPHYSICSMANAGER_DISPATCHSPHERECAST_OFFSET UNITYSDK_OFFSET(0x7526B30)
#define NPCCROWD_NPCPHYSICSMANAGER_GET_OFFSET UNITYSDK_OFFSET(0x7525860)
#define NPCCROWD_NPCPHYSICSMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x7525A00)
#define NPCCROWD_NPCPHYSICSMANAGER_NORMALSPHERECAST_OFFSET UNITYSDK_OFFSET(0x7526240)
#define NPCCROWD_NPCPHYSICSMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x7525D80)
#define NPCCROWD_NPCPHYSICSMANAGER_PRELATEUPDATE_OFFSET UNITYSDK_OFFSET(0x7526070)
#define NPCCROWD_NPCPHYSICSMANAGER_REGISTER_OFFSET UNITYSDK_OFFSET(0x7527330)
#define NPCCROWD_NPCPHYSICSMANAGER_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0x7525CE0)
#define NPCCROWD_NPCPHYSICSMANAGER_SPHERECASTJOB_OFFSET UNITYSDK_OFFSET(0x7525330)
#define NPCCROWD_NPCPHYSICSMANAGER_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x7527740)
#define NPCCROWD_NPCPHYSICSMANAGER_UPDATERESULTPOSITION_OFFSET UNITYSDK_OFFSET(0x7526E10)
#define NPCCROWD_NPCPHYSICSMANAGER_UPDATESOURCEPOSITION_OFFSET UNITYSDK_OFFSET(0x7526980)
#define NPCCROWD_NPCPHYSICSMANAGER_UPDATETRANSFORM_OFFSET UNITYSDK_OFFSET(0x7527110)
#define NPCCROWD_NPCPHYSICSMANAGER_WAITSPHERECAST_OFFSET UNITYSDK_OFFSET(0x7526CD0)
#define NPCCROWD_NPCPHYSICSMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x7527DC0)
#define NPCCROWD_NPCPHYSICSMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x7527CC0)
#define NPCCROWD_NPCPHYSICSMANAGER___BASE_INIT_OFFSET UNITYSDK_OFFSET(0x7527E40)
#define NPCCROWD_NPCPHYSICSMANAGER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x7527EA0)
#define NPCCROWD_NPCPHYSICSMANAGER___BASE_PRELATEUPDATE_OFFSET UNITYSDK_OFFSET(0x7527F00)
#define NPCCROWD_NPCPHYSICSMANAGER___BASE_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0x7527F70)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCPhysicsManager_TypeDefinitionIndex = 48353;

	class NPCPhysicsManager : public ::NPCCrowd::NPCCrowdModuleManagerBase
	{
	public:
		static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_NormalHitResults()
		{
			return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(NPCPhysicsManager_TypeDefinitionIndex)->GetStaticField(0x40B20);
		}
		static ::System::Single* StaticGet_DeltaHeight()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCPhysicsManager_TypeDefinitionIndex)->GetStaticField(0xF970);
		}
		static ::System::Single* StaticGet_MaxCastDistance()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCPhysicsManager_TypeDefinitionIndex)->GetStaticField(0xF974);
		}
		static ::System::Int32* StaticGet_MaxKernelCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NPCPhysicsManager_TypeDefinitionIndex)->GetStaticField(0xF978);
		}
		static ::System::Single* StaticGet_SphereRadius()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCPhysicsManager_TypeDefinitionIndex)->GetStaticField(0xF97C);
		}
		static ::Unity::Collections::NativeArray_1<::System::Int32>* StaticGet__hitCounts()
		{
			return (::Unity::Collections::NativeArray_1<::System::Int32>*)Il2CppClass::FromTypeDefinitionIndex(NPCPhysicsManager_TypeDefinitionIndex)->GetStaticField(0xF980);
		}
		static ::System::Boolean* StaticGet_FallbackToNormalCast()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCPhysicsManager_TypeDefinitionIndex)->GetStaticField(0xF990);
		}
		static ::UnityEngine::PhysicsScene* StaticGet__physicsScene()
		{
			return (::UnityEngine::PhysicsScene*)Il2CppClass::FromTypeDefinitionIndex(NPCPhysicsManager_TypeDefinitionIndex)->GetStaticField(0xF994);
		}
		static ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>* StaticGet__originPosition()
		{
			return (::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>*)Il2CppClass::FromTypeDefinitionIndex(NPCPhysicsManager_TypeDefinitionIndex)->GetStaticField(0xF998);
		}
		static ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>* StaticGet__hitResults()
		{
			return (::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>*)Il2CppClass::FromTypeDefinitionIndex(NPCPhysicsManager_TypeDefinitionIndex)->GetStaticField(0xF9A8);
		}
		static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet__hitResultsInJob()
		{
			return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(NPCPhysicsManager_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		// static const ::System::Int32 MaxHitResultCount = 0x8; // 0x0
		::System::Collections::Generic::List_1<::NPCCrowd::Ability::NPCAbility*>* _npcList; // 0x18
		::NPCCrowd::NPCPhysicsManager_PhysicsJobDelegate* _jobDelegate; // 0x20
		::Unity::Collections::NativeArray_1<::System::Int32> _jobDataArray; // 0x28
		::Unity::Jobs::LowLevel::Unsafe::JobThreadDelegate _jobThreadDelegate; // 0x38
		::System::UInt64 _jobID; // 0x58
		::Unity::Collections::NativeArray_1<::System::IntPtr> _delegateFuncArray; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER__CCTOR_OFFSET))();
		}

		static ::NPCCrowd::NPCPhysicsManager* Get()
		{
			return ((::NPCCrowd::NPCPhysicsManager*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER_GET_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER_INIT_OFFSET))(this);
		}

		::System::Boolean ShouldTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER_SHOULDTICK_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER_ONDESTROY_OFFSET))(this);
		}

		::System::Void PreLateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER_PRELATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void UpdateSourcePosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER_UPDATESOURCEPOSITION_OFFSET))(this);
		}

		::System::Void DispatchSphereCast()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER_DISPATCHSPHERECAST_OFFSET))(this);
		}

		::System::Void WaitSphereCast()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER_WAITSPHERECAST_OFFSET))(this);
		}

		::System::Void UpdateResultPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER_UPDATERESULTPOSITION_OFFSET))(this);
		}

		static ::System::Void UpdateTransform(::NPCCrowd::Ability::NPCAbility* ability, ::System::Single deltaHeight)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::NPCAbility*, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER_UPDATETRANSFORM_OFFSET))(ability, deltaHeight);
		}

		::System::Void NormalSphereCast()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER_NORMALSPHERECAST_OFFSET))(this);
		}

		::System::Void Register(::NPCCrowd::Ability::NPCAbility* ability)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbility*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER_REGISTER_OFFSET))(this, ability);
		}

		::System::Void Unregister(::NPCCrowd::Ability::NPCAbility* ability)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbility*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER_UNREGISTER_OFFSET))(this, ability);
		}

		static ::System::Void SphereCastJob(::System::Int32 data)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER_SPHERECASTJOB_OFFSET))(data);
		}

		::System::Void __base_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER___BASE_INIT_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_PreLateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER___BASE_PRELATEUPDATE_OFFSET))(this, P0);
		}

		::System::Boolean __base_ShouldTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER___BASE_SHOULDTICK_OFFSET))(this);
		}
	};
}
