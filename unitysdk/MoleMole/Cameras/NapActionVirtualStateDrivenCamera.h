#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineVirtualCameraBase.h"
#include "unitysdk/MoleMole/Cameras/NapActionVirtualStateDrivenCamera_Instruction.h"
#include "unitysdk/MoleMole/Cameras/NapActionVirtualStateDrivenCamera_ParentCameraMove.h"
#include "unitysdk/Struct_2_455336A079B58DD3.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_41D1BDB32D8F2611;
namespace Cinemachine { class ICinemachineCamera; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_FORCECAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0xB451010)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_FORCECAMERASTATE_OFFSET UNITYSDK_OFFSET(0xB450A20)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_FORCEUPDATE_OFFSET UNITYSDK_OFFSET(0xB4521A0)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_GET_CHILDCAMERAS_OFFSET UNITYSDK_OFFSET(0xB453030)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0xB450800)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_GET_FOLLOW_OFFSET UNITYSDK_OFFSET(0xB450AF0)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_GET_FRAMECOUNT_OFFSET UNITYSDK_OFFSET(0xB4507C0)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_GET_LIVECHILD_OFFSET UNITYSDK_OFFSET(0xB450990)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_GET_LOOKAT_OFFSET UNITYSDK_OFFSET(0xB450AD0)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_GET_NAPCAMERAMOVESTATE_OFFSET UNITYSDK_OFFSET(0xB4507D0)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_GET_STATE_OFFSET UNITYSDK_OFFSET(0xB450AA0)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_INTERNALUPDATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0xB451320)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_ISLIVECHILD_OFFSET UNITYSDK_OFFSET(0xB4509A0)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_METHOD_6_923D7DBA16732162_OFFSET UNITYSDK_OFFSET(0xB452860)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_METHOD_6_9BE08FEF2631B790_OFFSET UNITYSDK_OFFSET(0xB452230)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_METHOD_6_AC5B7D11B23DE6F5_OFFSET UNITYSDK_OFFSET(0xB453E00)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_METHOD_6_AFD7CB1F3D8E9C9F_OFFSET UNITYSDK_OFFSET(0xB450CC0)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_METHOD_6_B13DAADAAC62955E_OFFSET UNITYSDK_OFFSET(0xB454320)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_METHOD_6_BBAA93804154D196_OFFSET UNITYSDK_OFFSET(0xB453E10)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_METHOD_6_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0xB454330)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_METHOD_6_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB452DA0)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_METHOD_6_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0xB453FC0)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xB452E20)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB452A70)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_ONTARGETOBJECTWARPED_OFFSET UNITYSDK_OFFSET(0xB450B10)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_ONTRANSFORMCHILDRENCHANGED_OFFSET UNITYSDK_OFFSET(0xB452F80)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_ONTRANSITIONFROMCAMERA_OFFSET UNITYSDK_OFFSET(0xB451210)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_SET_FOLLOW_OFFSET UNITYSDK_OFFSET(0xB450B00)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_SET_LIVECHILD_OFFSET UNITYSDK_OFFSET(0xB450980)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_SET_LOOKAT_OFFSET UNITYSDK_OFFSET(0xB450AE0)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_UPDATEPARENTCAMERAMOVE_OFFSET UNITYSDK_OFFSET(0xB453580)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_VALIDATEINSTRUCTIONS_OFFSET UNITYSDK_OFFSET(0xB453050)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA__CCTOR_OFFSET UNITYSDK_OFFSET(0xB453A50)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0xB4536F0)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA___BASE_FORCECAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0xB453BD0)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA___BASE_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0xB453C90)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA___BASE_ISLIVECHILD_OFFSET UNITYSDK_OFFSET(0xB453CA0)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xB453CB0)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB453D00)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA___BASE_ONTARGETOBJECTWARPED_OFFSET UNITYSDK_OFFSET(0xB453D10)
#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA___BASE_ONTRANSITIONFROMCAMERA_OFFSET UNITYSDK_OFFSET(0xB453DB0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int NapActionVirtualStateDrivenCamera_TypeDefinitionIndex = 43906;

	class NapActionVirtualStateDrivenCamera : public ::Cinemachine::CinemachineVirtualCameraBase
	{
	public:
		static ::Struct_2_455336A079B58DD3* StaticGet_Field_6_15()
		{
			return (::Struct_2_455336A079B58DD3*)Il2CppClass::FromTypeDefinitionIndex(NapActionVirtualStateDrivenCamera_TypeDefinitionIndex)->GetStaticField(0x47390);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_Field_6_10()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(NapActionVirtualStateDrivenCamera_TypeDefinitionIndex)->GetStaticField(0x473B0);
		}
		static ::System::Single* StaticGet_DebugOverrideAlpha()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NapActionVirtualStateDrivenCamera_TypeDefinitionIndex)->GetStaticField(0x11820);
		}
		static ::UnityEngine::Vector3* StaticGet_DebugOverridePosition()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(NapActionVirtualStateDrivenCamera_TypeDefinitionIndex)->GetStaticField(0x11824);
		}
		static ::System::Boolean* StaticGet_DebugOverride()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapActionVirtualStateDrivenCamera_TypeDefinitionIndex)->GetStaticField(0x11830);
		}
		static ::UnityEngine::Quaternion* StaticGet_DebugOverrideRotation()
		{
			return (::UnityEngine::Quaternion*)Il2CppClass::FromTypeDefinitionIndex(NapActionVirtualStateDrivenCamera_TypeDefinitionIndex)->GetStaticField(0x11834);
		}
		::UnityEngine::Transform* m_LookAt; // 0x68
		::UnityEngine::Transform* m_Follow; // 0x70
		::System::Boolean m_ShowDebugText; // 0x78
		::Il2CppArray<::Cinemachine::CinemachineVirtualCameraBase*>* m_ChildCameras; // 0x80
		::System::Int32 Field_6_8; // 0x88
		::Il2CppArray<::MoleMole::Cameras::NapActionVirtualStateDrivenCamera_Instruction>* m_Instructions; // 0x90
		::Il2CppArray<::MoleMole::Cameras::NapActionVirtualStateDrivenCamera_ParentCameraMove>* m_ParentCameraMove; // 0x98
		::Class_1_41D1BDB32D8F2611* Field_6_12; // 0xA0
		::Cinemachine::ICinemachineCamera* Field_6_13; // 0xA8
		::Cinemachine::ICinemachineCamera* Field_6_14; // 0xB0
		::Cinemachine::CameraState Field_6_16; // 0xB8
		::System::Single Field_6_17; // 0x1A0
		::MoleMole::Cameras::NapActionVirtualStateDrivenCamera_Instruction Field_6_18; // 0x1A8
		::System::Single Field_6_19; // 0x1C0
		::MoleMole::Cameras::NapActionVirtualStateDrivenCamera_Instruction Field_6_20; // 0x1C8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_6_21; // 0x1E0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_6_22; // 0x1E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA__CCTOR_OFFSET))();
		}

		::System::Int32 get_FrameCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_GET_FRAMECOUNT_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_NapCameraMoveState()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_GET_NAPCAMERAMOVESTATE_OFFSET))(this);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::Void set_LiveChild(::Cinemachine::ICinemachineCamera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_SET_LIVECHILD_OFFSET))(this, a1);
		}

		::Cinemachine::ICinemachineCamera* get_LiveChild()
		{
			return ((::Cinemachine::ICinemachineCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_GET_LIVECHILD_OFFSET))(this);
		}

		::System::Boolean IsLiveChild(::Cinemachine::ICinemachineCamera* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_ISLIVECHILD_OFFSET))(this, a1, a2);
		}

		::System::Void ForceCameraState(::Cinemachine::CameraState& a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_FORCECAMERASTATE_OFFSET))(this, a1);
		}

		::Cinemachine::CameraState get_State()
		{
			return ((::Cinemachine::CameraState(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_GET_STATE_OFFSET))(this);
		}

		::UnityEngine::Transform* get_LookAt()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_GET_LOOKAT_OFFSET))(this);
		}

		::System::Void set_LookAt(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_SET_LOOKAT_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_Follow()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_GET_FOLLOW_OFFSET))(this);
		}

		::System::Void set_Follow(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_SET_FOLLOW_OFFSET))(this, a1);
		}

		::System::Void OnTargetObjectWarped(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_ONTARGETOBJECTWARPED_OFFSET))(this, a1, a2);
		}

		::System::Void ForceCameraPosition(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_FORCECAMERAPOSITION_OFFSET))(this, a1, a2);
		}

		::System::Void OnTransitionFromCamera(::Cinemachine::ICinemachineCamera* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_ONTRANSITIONFROMCAMERA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ForceUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_FORCEUPDATE_OFFSET))(this);
		}

		::System::Void InternalUpdateCameraState(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_INTERNALUPDATECAMERASTATE_OFFSET))(this, a1, a2);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnTransformChildrenChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_ONTRANSFORMCHILDRENCHANGED_OFFSET))(this);
		}

		::Il2CppArray<::Cinemachine::CinemachineVirtualCameraBase*>* get_ChildCameras()
		{
			return ((::Il2CppArray<::Cinemachine::CinemachineVirtualCameraBase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_GET_CHILDCAMERAS_OFFSET))(this);
		}

		::System::Void ValidateInstructions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_VALIDATEINSTRUCTIONS_OFFSET))(this);
		}

		::System::Void UpdateParentCameraMove(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_UPDATEPARENTCAMERAMOVE_OFFSET))(this, a1);
		}

		::System::Void __base_ForceCameraPosition(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA___BASE_FORCECAMERAPOSITION_OFFSET))(this, a1, a2);
		}

		::System::String* __base_get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA___BASE_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::Boolean __base_IsLiveChild(::Cinemachine::ICinemachineCamera* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA___BASE_ISLIVECHILD_OFFSET))(this, a1, a2);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA___BASE_ONENABLE_OFFSET))(this);
		}

		::System::Void __base_OnTargetObjectWarped(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA___BASE_ONTARGETOBJECTWARPED_OFFSET))(this, a1, a2);
		}

		::System::Void __base_OnTransitionFromCamera(::Cinemachine::ICinemachineCamera* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA___BASE_ONTRANSITIONFROMCAMERA_OFFSET))(this, a1, a2, a3);
		}

		::Cinemachine::ICinemachineCamera* Method_6_AC5B7D11B23DE6F5()
		{
			return ((::Cinemachine::ICinemachineCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_METHOD_6_AC5B7D11B23DE6F5_OFFSET))(this);
		}

		::System::Void Method_6_923D7DBA16732162(::Cinemachine::CinemachineVirtualCameraBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_METHOD_6_923D7DBA16732162_OFFSET))(this, a1);
		}

		::Cinemachine::CinemachineVirtualCameraBase* Method_6_9BE08FEF2631B790()
		{
			return ((::Cinemachine::CinemachineVirtualCameraBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_METHOD_6_9BE08FEF2631B790_OFFSET))(this);
		}

		static ::Struct_2_455336A079B58DD3 Method_6_BBAA93804154D196()
		{
			return ((::Struct_2_455336A079B58DD3(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_METHOD_6_BBAA93804154D196_OFFSET))();
		}

		::System::Void Method_6_F978A1D172468895()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_METHOD_6_F978A1D172468895_OFFSET))(this);
		}

		::System::Void Method_6_B13DAADAAC62955E(::Cinemachine::ICinemachineCamera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_METHOD_6_B13DAADAAC62955E_OFFSET))(this, a1);
		}

		::System::Void Method_6_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_METHOD_6_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_6_C114A1F8E08B6F92(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_METHOD_6_C114A1F8E08B6F92_OFFSET))(this, a1);
		}

		::System::Void Method_6_AFD7CB1F3D8E9C9F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_METHOD_6_AFD7CB1F3D8E9C9F_OFFSET))(this);
		}
	};
}
