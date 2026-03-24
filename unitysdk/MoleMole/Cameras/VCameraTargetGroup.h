#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Cameras/VCameraTargetGroup_Enum_3_449E48DFB14E7761.h"
#include "unitysdk/MoleMole/Cameras/VCameraTargetGroup_Enum_3_449E48DFB14E7761_1.h"
#include "unitysdk/MoleMole/Cameras/VCameraTargetGroup_Enum_3_86EE5CBC90D94C36.h"
#include "unitysdk/MoleMole/Cameras/VCameraTargetGroup_Target.h"
#include "unitysdk/UnityEngine/BoundingSphere.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_ADDMEMBER_OFFSET UNITYSDK_OFFSET(0xBAD68F0)
#define MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_DOUPDATE_OFFSET UNITYSDK_OFFSET(0xBAD7510)
#define MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_FINDMEMBER_OFFSET UNITYSDK_OFFSET(0xBAD6B70)
#define MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xBAD81F0)
#define MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_GETVIEWSPACEANGULARBOUNDS_OFFSET UNITYSDK_OFFSET(0xBAD8350)
#define MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_GETVIEWSPACEBOUNDINGBOX_OFFSET UNITYSDK_OFFSET(0xBAD7090)
#define MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_GETWEIGHTEDBOUNDSFORMEMBER_OFFSET UNITYSDK_OFFSET(0xBAD6D60)
#define MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_GET_BOUNDINGBOX_OFFSET UNITYSDK_OFFSET(0xBAD6560)
#define MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xBAD66C0)
#define MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_GET_SPHERE_OFFSET UNITYSDK_OFFSET(0xBAD6580)
#define MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xBAD6550)
#define MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xBAD82E0)
#define MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_METHOD_5_26DF6ED849E6C3B7_OFFSET UNITYSDK_OFFSET(0xBAD76A0)
#define MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_METHOD_5_580E7E6201D1B663_OFFSET UNITYSDK_OFFSET(0xBAD8CB0)
#define MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_METHOD_5_C3AFC5B0F3D4DB7D_OFFSET UNITYSDK_OFFSET(0xBAD7DD0)
#define MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_METHOD_5_D07CA7B29C08BCC5_OFFSET UNITYSDK_OFFSET(0xBAD6E60)
#define MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_METHOD_5_FF18890C5AE04FC2_OFFSET UNITYSDK_OFFSET(0xBAD79B0)
#define MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0xBAD8110)
#define MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_REMOVEALLMEMBERS_OFFSET UNITYSDK_OFFSET(0xBAD6A10)
#define MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_REMOVEMEMBER_OFFSET UNITYSDK_OFFSET(0xBAD6A90)
#define MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_SETMEMBERSRADIUS_OFFSET UNITYSDK_OFFSET(0xBAD6840)
#define MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_UPDATE_OFFSET UNITYSDK_OFFSET(0xBAD8260)
#define MOLEMOLE_CAMERAS_VCAMERATARGETGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0xBAD8C70)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int VCameraTargetGroup_TypeDefinitionIndex = 56152;

	class VCameraTargetGroup : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MoleMole::Cameras::VCameraTargetGroup_Enum_3_449E48DFB14E7761 m_PositionMode; // 0x18
		::MoleMole::Cameras::VCameraTargetGroup_Enum_3_449E48DFB14E7761_1 m_RotationMode; // 0x1C
		::MoleMole::Cameras::VCameraTargetGroup_Enum_3_86EE5CBC90D94C36 m_UpdateMethod; // 0x20
		::Il2CppArray<::MoleMole::Cameras::VCameraTargetGroup_Target>* m_Targets; // 0x28
		::UnityEngine::Bounds Field_5_4; // 0x30
		::System::Single Field_5_5; // 0x48
		::UnityEngine::Vector3 Field_5_6; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERATARGETGROUP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Transform* get_Transform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_GET_TRANSFORM_OFFSET))(this);
		}

		::UnityEngine::Bounds get_BoundingBox()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_GET_BOUNDINGBOX_OFFSET))(this);
		}

		::UnityEngine::BoundingSphere get_Sphere()
		{
			return ((::UnityEngine::BoundingSphere(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_GET_SPHERE_OFFSET))(this);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_GET_ISEMPTY_OFFSET))(this);
		}

		::System::Void SetMembersRadius(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_SETMEMBERSRADIUS_OFFSET))(this, a1);
		}

		::System::Void AddMember(::UnityEngine::Transform* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_ADDMEMBER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RemoveAllMembers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_REMOVEALLMEMBERS_OFFSET))(this);
		}

		::System::Void RemoveMember(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_REMOVEMEMBER_OFFSET))(this, a1);
		}

		::System::Int32 FindMember(::UnityEngine::Transform* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_FINDMEMBER_OFFSET))(this, a1);
		}

		::UnityEngine::BoundingSphere GetWeightedBoundsForMember(::System::Int32 a1)
		{
			return ((::UnityEngine::BoundingSphere(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_GETWEIGHTEDBOUNDSFORMEMBER_OFFSET))(this, a1);
		}

		::UnityEngine::Bounds GetViewSpaceBoundingBox(::UnityEngine::Matrix4x4 a1)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_GETVIEWSPACEBOUNDINGBOX_OFFSET))(this, a1);
		}

		::System::Void DoUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_DOUPDATE_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_ONVALIDATE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_LATEUPDATE_OFFSET))(this);
		}

		::System::Void GetViewSpaceAngularBounds(::UnityEngine::Matrix4x4 a1, ::UnityEngine::Vector2& a2, ::UnityEngine::Vector2& a3, ::UnityEngine::Vector2& a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_GETVIEWSPACEANGULARBOUNDS_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector3 Method_5_26DF6ED849E6C3B7(::System::Single& a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_METHOD_5_26DF6ED849E6C3B7_OFFSET))(this, a1);
		}

		::System::Void Method_5_580E7E6201D1B663(::UnityEngine::Bounds a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_METHOD_5_580E7E6201D1B663_OFFSET))(this, a1);
		}

		static ::UnityEngine::BoundingSphere Method_5_D07CA7B29C08BCC5(::MoleMole::Cameras::VCameraTargetGroup_Target a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::UnityEngine::BoundingSphere(*)(::MoleMole::Cameras::VCameraTargetGroup_Target, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_METHOD_5_D07CA7B29C08BCC5_OFFSET))(a1, a2, a3);
		}

		::UnityEngine::Bounds Method_5_FF18890C5AE04FC2(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_METHOD_5_FF18890C5AE04FC2_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Quaternion Method_5_C3AFC5B0F3D4DB7D()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_METHOD_5_C3AFC5B0F3D4DB7D_OFFSET))(this);
		}
	};
}
