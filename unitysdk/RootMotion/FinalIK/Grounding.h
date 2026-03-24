#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/Grounding_GrounderBendNormalType.h"
#include "unitysdk/RootMotion/FinalIK/Grounding_Quality.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class Grounding_Leg; }
namespace RootMotion::FinalIK { class Grounding_OnCapsuleCastDelegate; }
namespace RootMotion::FinalIK { class Grounding_OnRaycastDelegate; }
namespace RootMotion::FinalIK { class Grounding_OnSphereCastDelegate; }
namespace RootMotion::FinalIK { class Grounding_Pelvis; }
namespace System { class String; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_GROUNDING_FLATTEN_OFFSET UNITYSDK_OFFSET(0x1B51AEA0)
#define ROOTMOTION_FINALIK_GROUNDING_GETDELTAFROMRIGIDBODYTOTRANSFORM_1_OFFSET UNITYSDK_OFFSET(0x1B519400)
#define ROOTMOTION_FINALIK_GROUNDING_GETDELTAFROMRIGIDBODYTOTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1B5192C0)
#define ROOTMOTION_FINALIK_GROUNDING_GETDELTAFROMTRANSFORMTORIGIDBODY_1_OFFSET UNITYSDK_OFFSET(0x1B519710)
#define ROOTMOTION_FINALIK_GROUNDING_GETDELTAFROMTRANSFORMTORIGIDBODY_OFFSET UNITYSDK_OFFSET(0x1B5195B0)
#define ROOTMOTION_FINALIK_GROUNDING_GETFOOTCENTEROFFSET_OFFSET UNITYSDK_OFFSET(0x1B51B230)
#define ROOTMOTION_FINALIK_GROUNDING_GETLEGSPLANENORMAL_OFFSET UNITYSDK_OFFSET(0x1B51A5A0)
#define ROOTMOTION_FINALIK_GROUNDING_GETROOTHIT_OFFSET UNITYSDK_OFFSET(0x1B519750)
#define ROOTMOTION_FINALIK_GROUNDING_GETVERTICALOFFSET_OFFSET UNITYSDK_OFFSET(0x1B51AC20)
#define ROOTMOTION_FINALIK_GROUNDING_GET_ISGROUNDED_OFFSET UNITYSDK_OFFSET(0x1B519200)
#define ROOTMOTION_FINALIK_GROUNDING_GET_LEGS_OFFSET UNITYSDK_OFFSET(0x1B5191C0)
#define ROOTMOTION_FINALIK_GROUNDING_GET_PELVIS_OFFSET UNITYSDK_OFFSET(0x1B5191E0)
#define ROOTMOTION_FINALIK_GROUNDING_GET_ROOTGROUNDED_OFFSET UNITYSDK_OFFSET(0x1B5192A0)
#define ROOTMOTION_FINALIK_GROUNDING_GET_ROOTHIT_OFFSET UNITYSDK_OFFSET(0x1B519240)
#define ROOTMOTION_FINALIK_GROUNDING_GET_ROOT_OFFSET UNITYSDK_OFFSET(0x1B519220)
#define ROOTMOTION_FINALIK_GROUNDING_GET_UP_OFFSET UNITYSDK_OFFSET(0x1B519AD0)
#define ROOTMOTION_FINALIK_GROUNDING_GET_USEROOTROTATION_OFFSET UNITYSDK_OFFSET(0x1B51AA90)
#define ROOTMOTION_FINALIK_GROUNDING_INITIATEEXTRA_OFFSET UNITYSDK_OFFSET(0x1B51A310)
#define ROOTMOTION_FINALIK_GROUNDING_INITIATE_OFFSET UNITYSDK_OFFSET(0x1B519E70)
#define ROOTMOTION_FINALIK_GROUNDING_ISVALID_OFFSET UNITYSDK_OFFSET(0x1B519DB0)
#define ROOTMOTION_FINALIK_GROUNDING_LOGWARNING_OFFSET UNITYSDK_OFFSET(0x1B51A580)
#define ROOTMOTION_FINALIK_GROUNDING_RESET_OFFSET UNITYSDK_OFFSET(0x1B51A940)
#define ROOTMOTION_FINALIK_GROUNDING_SET_ISGROUNDED_OFFSET UNITYSDK_OFFSET(0x1B519210)
#define ROOTMOTION_FINALIK_GROUNDING_SET_LEGS_OFFSET UNITYSDK_OFFSET(0x1B5191D0)
#define ROOTMOTION_FINALIK_GROUNDING_SET_PELVIS_OFFSET UNITYSDK_OFFSET(0x1B5191F0)
#define ROOTMOTION_FINALIK_GROUNDING_SET_ROOTHIT_OFFSET UNITYSDK_OFFSET(0x1B519270)
#define ROOTMOTION_FINALIK_GROUNDING_SET_ROOT_OFFSET UNITYSDK_OFFSET(0x1B519230)
#define ROOTMOTION_FINALIK_GROUNDING_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B51A320)
#define ROOTMOTION_FINALIK_GROUNDING__CTOR_OFFSET UNITYSDK_OFFSET(0x1B51B610)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int Grounding_TypeDefinitionIndex = 36025;

	class Grounding : public ::System::Object
	{
	public:
		::UnityEngine::LayerMask layers; // 0x10
		::System::Single maxStep; // 0x14
		::System::Single heightOffset; // 0x18
		::System::Single footHeightDamper; // 0x1C
		::System::Single footSpeed; // 0x20
		::System::Single footRadius; // 0x24
		::System::Single footCenterOffset; // 0x28
		::System::Single prediction; // 0x2C
		::System::Single footRotationWeight; // 0x30
		::System::Single footRotationSpeed; // 0x34
		::System::Single maxFootRotationAngle; // 0x38
		::System::Boolean rotateSolver; // 0x3C
		::System::Single pelvisSpeed; // 0x40
		::System::Single pelvisDamper; // 0x44
		::System::Single lowerPelvisWeight; // 0x48
		::System::Single liftPelvisWeight; // 0x4C
		::System::Single liftPelvisWeightDamper; // 0x50
		::System::Single rootSphereCastRadius; // 0x54
		::System::Boolean overstepFallsDown; // 0x58
		::RootMotion::FinalIK::Grounding_Quality quality; // 0x5C
		::Il2CppArray<::RootMotion::FinalIK::Grounding_Leg*>* _legs_k__BackingField; // 0x60
		::RootMotion::FinalIK::Grounding_Pelvis* _pelvis_k__BackingField; // 0x68
		::System::Boolean _isGrounded_k__BackingField; // 0x70
		::UnityEngine::Transform* _root_k__BackingField; // 0x78
		::UnityEngine::RaycastHit _rootHit_k__BackingField; // 0x80
		::RootMotion::FinalIK::Grounding_GrounderBendNormalType bendNormalType; // 0xB4
		::System::Boolean enableInterpolateFix; // 0xB8
		::System::Boolean enableInterpolateFixDebugView; // 0xB9
		::UnityEngine::Transform* characterRoot; // 0xC0
		::UnityEngine::Rigidbody* characterRootRigidbody; // 0xC8
		::System::Boolean enableDebugView; // 0xD0
		::System::Boolean ManualUpdateOnceWithoutBlending; // 0xD1
		::RootMotion::FinalIK::Grounding_OnRaycastDelegate* Raycast; // 0xD8
		::RootMotion::FinalIK::Grounding_OnCapsuleCastDelegate* CapsuleCast; // 0xE0
		::RootMotion::FinalIK::Grounding_OnSphereCastDelegate* SphereCast; // 0xE8
		::System::Boolean initiated; // 0xF0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::RootMotion::FinalIK::Grounding_Leg*>* get_legs()
		{
			return ((::Il2CppArray<::RootMotion::FinalIK::Grounding_Leg*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_GET_LEGS_OFFSET))(this);
		}

		::System::Void set_legs(::Il2CppArray<::RootMotion::FinalIK::Grounding_Leg*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RootMotion::FinalIK::Grounding_Leg*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_SET_LEGS_OFFSET))(this, value);
		}

		::RootMotion::FinalIK::Grounding_Pelvis* get_pelvis()
		{
			return ((::RootMotion::FinalIK::Grounding_Pelvis*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_GET_PELVIS_OFFSET))(this);
		}

		::System::Void set_pelvis(::RootMotion::FinalIK::Grounding_Pelvis* value)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::Grounding_Pelvis*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_SET_PELVIS_OFFSET))(this, value);
		}

		::System::Boolean get_isGrounded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_GET_ISGROUNDED_OFFSET))(this);
		}

		::System::Void set_isGrounded(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_SET_ISGROUNDED_OFFSET))(this, value);
		}

		::UnityEngine::Transform* get_root()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_GET_ROOT_OFFSET))(this);
		}

		::System::Void set_root(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_SET_ROOT_OFFSET))(this, value);
		}

		::UnityEngine::RaycastHit get_rootHit()
		{
			return ((::UnityEngine::RaycastHit(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_GET_ROOTHIT_OFFSET))(this);
		}

		::System::Void set_rootHit(::UnityEngine::RaycastHit value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_SET_ROOTHIT_OFFSET))(this, value);
		}

		::System::Boolean get_rootGrounded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_GET_ROOTGROUNDED_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetDeltaFromRigidbodyToTransform(::UnityEngine::Transform* transform)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_GETDELTAFROMRIGIDBODYTOTRANSFORM_OFFSET))(this, transform);
		}

		::UnityEngine::Vector3 GetDeltaFromRigidbodyToTransform_1(::UnityEngine::Transform* transform, ::UnityEngine::Rigidbody* rigidbody)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Rigidbody*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_GETDELTAFROMRIGIDBODYTOTRANSFORM_1_OFFSET))(this, transform, rigidbody);
		}

		::UnityEngine::Vector3 GetDeltaFromTransformToRigidbody(::UnityEngine::Transform* transform)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_GETDELTAFROMTRANSFORMTORIGIDBODY_OFFSET))(this, transform);
		}

		::UnityEngine::Vector3 GetDeltaFromTransformToRigidbody_1(::UnityEngine::Transform* transform, ::UnityEngine::Rigidbody* rigidbody)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Rigidbody*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_GETDELTAFROMTRANSFORMTORIGIDBODY_1_OFFSET))(this, transform, rigidbody);
		}

		::UnityEngine::RaycastHit GetRootHit(::System::Single maxDistanceMlp)
		{
			return ((::UnityEngine::RaycastHit(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_GETROOTHIT_OFFSET))(this, maxDistanceMlp);
		}

		::System::Boolean IsValid(::System::String*& errorMessage)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_ISVALID_OFFSET))(this, errorMessage);
		}

		::System::Void Initiate(::UnityEngine::Transform* root, ::Il2CppArray<::UnityEngine::Transform*>* feet)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::Il2CppArray<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_INITIATE_OFFSET))(this, root, feet);
		}

		::System::Void InitiateExtra(::UnityEngine::Transform* characterRoot, ::UnityEngine::Rigidbody* characterRootRigidbody)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Rigidbody*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_INITIATEEXTRA_OFFSET))(this, characterRoot, characterRootRigidbody);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_UPDATE_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetLegsPlaneNormal()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_GETLEGSPLANENORMAL_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_RESET_OFFSET))(this);
		}

		::System::Void LogWarning(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LOGWARNING_OFFSET))(this, message);
		}

		::UnityEngine::Vector3 get_up()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_GET_UP_OFFSET))(this);
		}

		::System::Single GetVerticalOffset(::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_GETVERTICALOFFSET_OFFSET))(this, p1, p2);
		}

		::UnityEngine::Vector3 Flatten(::UnityEngine::Vector3 v)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_FLATTEN_OFFSET))(this, v);
		}

		::System::Boolean get_useRootRotation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_GET_USEROOTROTATION_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetFootCenterOffset()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_GETFOOTCENTEROFFSET_OFFSET))(this);
		}
	};
}
