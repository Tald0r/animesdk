#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineVirtualCameraBase.h"
#include "unitysdk/Enum_3_2BD1943B012482C0.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_249;
class Class_0_16E4307DCC419505_453;
namespace Cinemachine { class ICinemachineCamera; }
namespace MoleMole::Cameras { class NapVirtual3DActionCamera_1; }
namespace PipelineCamera { class ICameraCommand; }
namespace PipelineCamera { template <typename T> class ICameraController_1; }
namespace PipelineCamera::Module { class InPlaceBlender; }
namespace PipelineCamera::SubModule { template <typename T> class CameraSequenceCollectionPlayer_1; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_CANCELBLENDINGREQUEST_OFFSET UNITYSDK_OFFSET(0x96EA4D0)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_CANCELBLENDING_OFFSET UNITYSDK_OFFSET(0x96EA340)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_CREATEDEFAULTCOLLISIONFILTER_OFFSET UNITYSDK_OFFSET(0x96EA0B0)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_GETLASTCAMERADATA_OFFSET UNITYSDK_OFFSET(0x96E99E0)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_GETLATESTCAMERADATA_OFFSET UNITYSDK_OFFSET(0x96E9B60)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_GETSEQUENCEPLAYER_OFFSET UNITYSDK_OFFSET(0x96E9060)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_GETSUCCESSOR_OFFSET UNITYSDK_OFFSET(0x96EA720)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_GET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x96E6EC0)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_GET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x96E6EE0)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_GET_STATE_OFFSET UNITYSDK_OFFSET(0x96E6F00)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_HANDLECAMERACOMMAND_OFFSET UNITYSDK_OFFSET(0x96E98B0)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_INITCAMERADATA_OFFSET UNITYSDK_OFFSET(0x96E90F0)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_INTERNALUPDATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x96E7760)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_ISBLENDINGREQUIRED_OFFSET UNITYSDK_OFFSET(0x96EA6C0)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_ISBLENDING_OFFSET UNITYSDK_OFFSET(0x96EA660)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_METHOD_6_21D8228E44360CE8_OFFSET UNITYSDK_OFFSET(0x96EAC50)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_METHOD_6_2AEFBD4752A5BFC4_OFFSET UNITYSDK_OFFSET(0x96EACE0)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_METHOD_6_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x96E91E0)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_METHOD_6_67EE00D0D5156D71_OFFSET UNITYSDK_OFFSET(0x96E82E0)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_METHOD_6_9F909151486A4615_OFFSET UNITYSDK_OFFSET(0x96EB120)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_METHOD_6_C4D99CFCA628428A_OFFSET UNITYSDK_OFFSET(0x96EAD10)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_METHOD_6_FEED647D1A65D14D_OFFSET UNITYSDK_OFFSET(0x96EAEE0)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_METHOD_6_FF43F2BFE9E826AA_OFFSET UNITYSDK_OFFSET(0x96EA970)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x96E7530)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_ONENABLE_OFFSET UNITYSDK_OFFSET(0x96E6F30)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_ONSTARTNEWGAME_OFFSET UNITYSDK_OFFSET(0x96E8F10)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_ONSWITCHTONEWSTAGE_OFFSET UNITYSDK_OFFSET(0x96E8FE0)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_ONTRANSITIONFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x96E88B0)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_SET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x96E6ED0)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_SET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x96E6EF0)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA__CCTOR_OFFSET UNITYSDK_OFFSET(0x96E9D00)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x96EA7D0)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x96EA8C0)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x96EA910)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA___BASE_ONTRANSITIONFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x96EA920)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int NapVirtualPipelineCamera_TypeDefinitionIndex = 66553;

	class NapVirtualPipelineCamera : public ::Cinemachine::CinemachineVirtualCameraBase
	{
	public:
		::PipelineCamera::ICameraController_1<::Class_0_16E4307DCC419505_453*>* Field_6_0; // 0x68
		::System::Boolean Field_6_1; // 0x70
		::Class_0_16E4307DCC419505_453* Field_6_2; // 0x78
		::Il2CppArray<::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1<::PipelineCamera::WorldBasicCameraData>*>* Field_6_3; // 0x80
		::System::Collections::Generic::List_1<::PipelineCamera::Module::InPlaceBlender*>* Field_6_4; // 0x88
		::MoleMole::Cameras::NapVirtual3DActionCamera_1* Field_6_5; // 0x90
		::System::Boolean Field_6_6; // 0x98
		::System::Nullable_1<::PipelineCamera::WorldBasicCameraData> Field_6_7; // 0x9C
		::System::Nullable_1<::PipelineCamera::WorldBasicCameraData> Field_6_8; // 0xCC
		::UnityEngine::Transform* lookAt; // 0x100
		::UnityEngine::Transform* follow; // 0x108
		::Cinemachine::CameraState Field_6_11; // 0x110

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA__CTOR_OFFSET))(this);
		}

		::UnityEngine::Transform* get_Follow()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_GET_FOLLOW_OFFSET))(this);
		}

		::System::Void set_Follow(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_SET_FOLLOW_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_LookAt()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_GET_LOOKAT_OFFSET))(this);
		}

		::System::Void set_LookAt(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_SET_LOOKAT_OFFSET))(this, a1);
		}

		::Cinemachine::CameraState get_State()
		{
			return ((::Cinemachine::CameraState(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_GET_STATE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_ONDISABLE_OFFSET))(this);
		}

		::System::Void InternalUpdateCameraState(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_INTERNALUPDATECAMERASTATE_OFFSET))(this, a1, a2);
		}

		::System::Void OnTransitionFromCamera(::Cinemachine::ICinemachineCamera* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_ONTRANSITIONFROMCAMERA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStartNewGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_ONSTARTNEWGAME_OFFSET))(this);
		}

		::System::Void OnSwitchToNewStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_ONSWITCHTONEWSTAGE_OFFSET))(this);
		}

		::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1<::PipelineCamera::WorldBasicCameraData>* GetSequencePlayer(::Enum_3_2BD1943B012482C0 a1)
		{
			return ((::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID, ::Enum_3_2BD1943B012482C0))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_GETSEQUENCEPLAYER_OFFSET))(this, a1);
		}

		::System::Void InitCameraData(::Class_0_16E4307DCC419505_453* a1, ::MoleMole::Cameras::NapVirtual3DActionCamera_1* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_453*, ::MoleMole::Cameras::NapVirtual3DActionCamera_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_INITCAMERADATA_OFFSET))(this, a1, a2);
		}

		::System::Void HandleCameraCommand(::PipelineCamera::ICameraCommand* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraCommand*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_HANDLECAMERACOMMAND_OFFSET))(this, a1);
		}

		::System::ValueTuple_2<::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::WorldBasicCameraData> GetLastCameraData()
		{
			return ((::System::ValueTuple_2<::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::WorldBasicCameraData>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_GETLASTCAMERADATA_OFFSET))(this);
		}

		::System::ValueTuple_2<::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::WorldBasicCameraData> GetLatestCameraData()
		{
			return ((::System::ValueTuple_2<::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::WorldBasicCameraData>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_GETLATESTCAMERADATA_OFFSET))(this);
		}

		static ::System::Func_2<::UnityEngine::RaycastHit, ::System::Boolean>* CreateDefaultCollisionFilter()
		{
			return ((::System::Func_2<::UnityEngine::RaycastHit, ::System::Boolean>*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_CREATEDEFAULTCOLLISIONFILTER_OFFSET))();
		}

		::System::Void CancelBlending()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_CANCELBLENDING_OFFSET))(this);
		}

		::System::Void CancelBlendingRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_CANCELBLENDINGREQUEST_OFFSET))(this);
		}

		::System::Boolean IsBlending()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_ISBLENDING_OFFSET))(this);
		}

		::System::Boolean IsBlendingRequired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_ISBLENDINGREQUIRED_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_249* GetSuccessor()
		{
			return ((::Class_0_16E4307DCC419505_249*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_GETSUCCESSOR_OFFSET))(this);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA___BASE_ONENABLE_OFFSET))(this);
		}

		::System::Void __base_OnTransitionFromCamera(::Cinemachine::ICinemachineCamera* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA___BASE_ONTRANSITIONFROMCAMERA_OFFSET))(this, a1, a2, a3);
		}

		static ::System::ValueTuple_2<::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::WorldBasicCameraData> Method_6_FF43F2BFE9E826AA(::Cinemachine::CameraState& a1)
		{
			return ((::System::ValueTuple_2<::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::WorldBasicCameraData>(*)(::Cinemachine::CameraState&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_METHOD_6_FF43F2BFE9E826AA_OFFSET))(a1);
		}

		::System::Void Method_6_21D8228E44360CE8(::Enum_3_2BD1943B012482C0 a1, ::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1<::PipelineCamera::WorldBasicCameraData>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_2BD1943B012482C0, ::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_METHOD_6_21D8228E44360CE8_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_2AEFBD4752A5BFC4(::PipelineCamera::Module::InPlaceBlender* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::Module::InPlaceBlender*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_METHOD_6_2AEFBD4752A5BFC4_OFFSET))(this, a1);
		}

		::System::Void Method_6_C4D99CFCA628428A(::Cinemachine::CameraState& a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_METHOD_6_C4D99CFCA628428A_OFFSET))(this, a1);
		}

		::System::Void Method_6_67EE00D0D5156D71(::PipelineCamera::WorldBasicCameraData a1, ::PipelineCamera::WorldBasicCameraData a2)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::WorldBasicCameraData))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_METHOD_6_67EE00D0D5156D71_OFFSET))(this, a1, a2);
		}

		static ::System::Void Method_6_FEED647D1A65D14D(::PipelineCamera::WorldBasicCameraData& a1, ::PipelineCamera::WorldBasicCameraData& a2, ::Cinemachine::CameraState& a3)
		{
			return ((::System::Void(*)(::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::WorldBasicCameraData&, ::Cinemachine::CameraState&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_METHOD_6_FEED647D1A65D14D_OFFSET))(a1, a2, a3);
		}

		::System::Void Method_6_51CFFE2AF748ECD7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_METHOD_6_51CFFE2AF748ECD7_OFFSET))(this);
		}

		::System::Void Method_6_9F909151486A4615(::Cinemachine::CameraState& a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_METHOD_6_9F909151486A4615_OFFSET))(this, a1);
		}
	};
}
