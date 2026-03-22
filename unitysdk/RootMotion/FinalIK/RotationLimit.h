#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define ROOTMOTION_FINALIK_ROTATIONLIMIT_APPLY_OFFSET UNITYSDK_OFFSET(0x1A6F7750)
#define ROOTMOTION_FINALIK_ROTATIONLIMIT_AWAKE_OFFSET UNITYSDK_OFFSET(0x1A6F7600)
#define ROOTMOTION_FINALIK_ROTATIONLIMIT_DISABLE_OFFSET UNITYSDK_OFFSET(0x1A6F77E0)
#define ROOTMOTION_FINALIK_ROTATIONLIMIT_GETLIMITEDLOCALROTATION_OFFSET UNITYSDK_OFFSET(0x1A6F72F0)
#define ROOTMOTION_FINALIK_ROTATIONLIMIT_GETORTHOGONALANGLE_OFFSET UNITYSDK_OFFSET(0x1A6F7FB0)
#define ROOTMOTION_FINALIK_ROTATIONLIMIT_GET_CROSSAXIS_OFFSET UNITYSDK_OFFSET(0x1A6F7830)
#define ROOTMOTION_FINALIK_ROTATIONLIMIT_GET_DEFAULTLOCALROTATIONOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1A6F7880)
#define ROOTMOTION_FINALIK_ROTATIONLIMIT_GET_SECONDARYAXIS_OFFSET UNITYSDK_OFFSET(0x1A6F7810)
#define ROOTMOTION_FINALIK_ROTATIONLIMIT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1A6F78A0)
#define ROOTMOTION_FINALIK_ROTATIONLIMIT_LIMIT1DOF_OFFSET UNITYSDK_OFFSET(0x1A6F7960)
#define ROOTMOTION_FINALIK_ROTATIONLIMIT_LIMITTWIST_OFFSET UNITYSDK_OFFSET(0x1A6F7B60)
#define ROOTMOTION_FINALIK_ROTATIONLIMIT_LOGWARNING_OFFSET UNITYSDK_OFFSET(0x1A6F7930)
#define ROOTMOTION_FINALIK_ROTATIONLIMIT_SETDEFAULTLOCALROTATION_1_OFFSET UNITYSDK_OFFSET(0x1A6F72E0)
#define ROOTMOTION_FINALIK_ROTATIONLIMIT_SETDEFAULTLOCALROTATION_OFFSET UNITYSDK_OFFSET(0x1A6F7290)
#define ROOTMOTION_FINALIK_ROTATIONLIMIT_SET_DEFAULTLOCALROTATIONOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1A6F7890)
#define ROOTMOTION_FINALIK_ROTATIONLIMIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6F80F0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int RotationLimit_TypeDefinitionIndex = 35131;

	class RotationLimit : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Vector3 axis; // 0x18
		::UnityEngine::Quaternion defaultLocalRotation; // 0x24
		::System::Boolean _defaultLocalRotationOverride_k__BackingField; // 0x34
		::System::Boolean initiated; // 0x35
		::System::Boolean applicationQuit; // 0x36
		::System::Boolean defaultLocalRotationSet; // 0x37

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMIT__CTOR_OFFSET))(this);
		}

		::System::Void SetDefaultLocalRotation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMIT_SETDEFAULTLOCALROTATION_OFFSET))(this);
		}

		::System::Void SetDefaultLocalRotation_1(::UnityEngine::Quaternion localRotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMIT_SETDEFAULTLOCALROTATION_1_OFFSET))(this, localRotation);
		}

		::UnityEngine::Quaternion GetLimitedLocalRotation(::UnityEngine::Quaternion localRotation, ::System::Boolean& changed)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Quaternion, ::System::Boolean&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMIT_GETLIMITEDLOCALROTATION_OFFSET))(this, localRotation, changed);
		}

		::System::Boolean Apply()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMIT_APPLY_OFFSET))(this);
		}

		::System::Void Disable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMIT_DISABLE_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_secondaryAxis()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMIT_GET_SECONDARYAXIS_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_crossAxis()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMIT_GET_CROSSAXIS_OFFSET))(this);
		}

		::System::Boolean get_defaultLocalRotationOverride()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMIT_GET_DEFAULTLOCALROTATIONOVERRIDE_OFFSET))(this);
		}

		::System::Void set_defaultLocalRotationOverride(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMIT_SET_DEFAULTLOCALROTATIONOVERRIDE_OFFSET))(this, value);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMIT_AWAKE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMIT_LATEUPDATE_OFFSET))(this);
		}

		::System::Void LogWarning(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMIT_LOGWARNING_OFFSET))(this, message);
		}

		static ::UnityEngine::Quaternion Limit1DOF(::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 axis)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMIT_LIMIT1DOF_OFFSET))(rotation, axis);
		}

		static ::UnityEngine::Quaternion LimitTwist(::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 axis, ::UnityEngine::Vector3 orthoAxis, ::System::Single twistLimit)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMIT_LIMITTWIST_OFFSET))(rotation, axis, orthoAxis, twistLimit);
		}

		static ::System::Single GetOrthogonalAngle(::UnityEngine::Vector3 v1, ::UnityEngine::Vector3 v2, ::UnityEngine::Vector3 normal)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMIT_GETORTHOGONALANGLE_OFFSET))(v1, v2, normal);
		}
	};
}
