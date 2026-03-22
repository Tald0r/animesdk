#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/Grounder.h"
#include "unitysdk/RootMotion/FinalIK/GrounderQuadruped_Foot.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class Grounding; }
namespace RootMotion::FinalIK { class IK; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_GROUNDERQUADRUPED_DESTROYLEGS_OFFSET UNITYSDK_OFFSET(0x1A778A60)
#define ROOTMOTION_FINALIK_GROUNDERQUADRUPED_INITIATEFEET_OFFSET UNITYSDK_OFFSET(0x1A776400)
#define ROOTMOTION_FINALIK_GROUNDERQUADRUPED_INITIATE_OFFSET UNITYSDK_OFFSET(0x1A775EC0)
#define ROOTMOTION_FINALIK_GROUNDERQUADRUPED_ISREADYTOINITIATELEGS_OFFSET UNITYSDK_OFFSET(0x1A775BF0)
#define ROOTMOTION_FINALIK_GROUNDERQUADRUPED_ISREADYTOINITIATE_OFFSET UNITYSDK_OFFSET(0x1A775A10)
#define ROOTMOTION_FINALIK_GROUNDERQUADRUPED_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1A776820)
#define ROOTMOTION_FINALIK_GROUNDERQUADRUPED_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A778A20)
#define ROOTMOTION_FINALIK_GROUNDERQUADRUPED_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1A775DB0)
#define ROOTMOTION_FINALIK_GROUNDERQUADRUPED_ONPOSTSOLVERUPDATE_OFFSET UNITYSDK_OFFSET(0x1A778570)
#define ROOTMOTION_FINALIK_GROUNDERQUADRUPED_ONSOLVERUPDATE_OFFSET UNITYSDK_OFFSET(0x1A777250)
#define ROOTMOTION_FINALIK_GROUNDERQUADRUPED_OPENSCRIPTREFERENCE_OFFSET UNITYSDK_OFFSET(0x1A775710)
#define ROOTMOTION_FINALIK_GROUNDERQUADRUPED_OPENUSERMANUAL_OFFSET UNITYSDK_OFFSET(0x1A7756C0)
#define ROOTMOTION_FINALIK_GROUNDERQUADRUPED_RESETPOSITION_OFFSET UNITYSDK_OFFSET(0x1A775760)
#define ROOTMOTION_FINALIK_GROUNDERQUADRUPED_ROOTROTATION_OFFSET UNITYSDK_OFFSET(0x1A7768E0)
#define ROOTMOTION_FINALIK_GROUNDERQUADRUPED_SETFOOTIK_OFFSET UNITYSDK_OFFSET(0x1A7783F0)
#define ROOTMOTION_FINALIK_GROUNDERQUADRUPED_UPDATEFOREFEETROOT_OFFSET UNITYSDK_OFFSET(0x1A777FB0)
#define ROOTMOTION_FINALIK_GROUNDERQUADRUPED_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A775E50)
#define ROOTMOTION_FINALIK_GROUNDERQUADRUPED__CTOR_OFFSET UNITYSDK_OFFSET(0x1A778C50)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int GrounderQuadruped_TypeDefinitionIndex = 35021;

	class GrounderQuadruped : public ::RootMotion::FinalIK::Grounder
	{
	public:
		::RootMotion::FinalIK::Grounding* forelegSolver; // 0x50
		::System::Single rootRotationWeight; // 0x58
		::System::Single minRootRotation; // 0x5C
		::System::Single maxRootRotation; // 0x60
		::System::Single rootRotationSpeed; // 0x64
		::System::Single maxLegOffset; // 0x68
		::System::Single maxForeLegOffset; // 0x6C
		::System::Single maintainHeadRotationWeight; // 0x70
		::UnityEngine::Transform* characterRoot; // 0x78
		::UnityEngine::Transform* pelvis; // 0x80
		::UnityEngine::Transform* lastSpineBone; // 0x88
		::UnityEngine::Transform* head; // 0x90
		::Il2CppArray<::RootMotion::FinalIK::IK*>* legs; // 0x98
		::Il2CppArray<::RootMotion::FinalIK::IK*>* forelegs; // 0xA0
		::UnityEngine::Vector3 gravity; // 0xA8
		::Il2CppArray<::RootMotion::FinalIK::GrounderQuadruped_Foot>* feet; // 0xB8
		::UnityEngine::Vector3 animatedPelvisLocalPosition; // 0xC0
		::UnityEngine::Quaternion animatedPelvisLocalRotation; // 0xCC
		::UnityEngine::Quaternion animatedHeadLocalRotation; // 0xDC
		::UnityEngine::Vector3 solvedPelvisLocalPosition; // 0xEC
		::UnityEngine::Quaternion solvedPelvisLocalRotation; // 0xF8
		::UnityEngine::Quaternion solvedHeadLocalRotation; // 0x108
		::System::Int32 solvedFeet; // 0x118
		::System::Boolean solved; // 0x11C
		::System::Single angle; // 0x120
		::UnityEngine::Transform* forefeetRoot; // 0x128
		::UnityEngine::Quaternion headRotation; // 0x130
		::System::Single lastWeight; // 0x140
		::UnityEngine::Rigidbody* characterRootRigidbody; // 0x148

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERQUADRUPED__CTOR_OFFSET))(this);
		}

		::System::Void OpenUserManual()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERQUADRUPED_OPENUSERMANUAL_OFFSET))(this);
		}

		::System::Void OpenScriptReference()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERQUADRUPED_OPENSCRIPTREFERENCE_OFFSET))(this);
		}

		::System::Void ResetPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERQUADRUPED_RESETPOSITION_OFFSET))(this);
		}

		::System::Boolean IsReadyToInitiate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERQUADRUPED_ISREADYTOINITIATE_OFFSET))(this);
		}

		::System::Boolean IsReadyToInitiateLegs(::Il2CppArray<::RootMotion::FinalIK::IK*>* ikComponents)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RootMotion::FinalIK::IK*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERQUADRUPED_ISREADYTOINITIATELEGS_OFFSET))(this, ikComponents);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERQUADRUPED_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERQUADRUPED_UPDATE_OFFSET))(this);
		}

		::System::Void Initiate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERQUADRUPED_INITIATE_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Transform*>* InitiateFeet(::Il2CppArray<::RootMotion::FinalIK::IK*>* ikComponents, ::Il2CppArray<::RootMotion::FinalIK::GrounderQuadruped_Foot>*& f, ::System::Int32 indexOffset)
		{
			return ((::Il2CppArray<::UnityEngine::Transform*>*(*)(::PVOID, ::Il2CppArray<::RootMotion::FinalIK::IK*>*, ::Il2CppArray<::RootMotion::FinalIK::GrounderQuadruped_Foot>*&, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERQUADRUPED_INITIATEFEET_OFFSET))(this, ikComponents, f, indexOffset);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERQUADRUPED_LATEUPDATE_OFFSET))(this);
		}

		::System::Void RootRotation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERQUADRUPED_ROOTROTATION_OFFSET))(this);
		}

		::System::Void OnSolverUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERQUADRUPED_ONSOLVERUPDATE_OFFSET))(this);
		}

		::System::Void UpdateForefeetRoot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERQUADRUPED_UPDATEFOREFEETROOT_OFFSET))(this);
		}

		::System::Void SetFootIK(::RootMotion::FinalIK::GrounderQuadruped_Foot foot, ::System::Single maxOffset)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::GrounderQuadruped_Foot, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERQUADRUPED_SETFOOTIK_OFFSET))(this, foot, maxOffset);
		}

		::System::Void OnPostSolverUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERQUADRUPED_ONPOSTSOLVERUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERQUADRUPED_ONDESTROY_OFFSET))(this);
		}

		::System::Void DestroyLegs(::Il2CppArray<::RootMotion::FinalIK::IK*>* ikComponents)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RootMotion::FinalIK::IK*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERQUADRUPED_DESTROYLEGS_OFFSET))(this, ikComponents);
		}
	};
}
