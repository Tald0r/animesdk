#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBase3DModelController.h"

class Class_2_45EB76A87BDD923A_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole::Config { class ConfigSetCameraStateCommonNode_CameraState; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering { class Volume; }

#define MOLEMOLE_UIVIDEOSHOP3DMODELCONTROLLER_CHANGECAMERAVOLUMEMASK_OFFSET UNITYSDK_OFFSET(0x9EEC1D0)
#define MOLEMOLE_UIVIDEOSHOP3DMODELCONTROLLER_GETDEFAULTCAMERASTATE_OFFSET UNITYSDK_OFFSET(0x9EEC5A0)
#define MOLEMOLE_UIVIDEOSHOP3DMODELCONTROLLER_GETNPCANIMATOR_OFFSET UNITYSDK_OFFSET(0x9EEC310)
#define MOLEMOLE_UIVIDEOSHOP3DMODELCONTROLLER_GETNPCROOT_OFFSET UNITYSDK_OFFSET(0x9EEC4B0)
#define MOLEMOLE_UIVIDEOSHOP3DMODELCONTROLLER_GETROOTTRANS_OFFSET UNITYSDK_OFFSET(0x9EEC520)
#define MOLEMOLE_UIVIDEOSHOP3DMODELCONTROLLER_INITMAINVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0x9EEC010)
#define MOLEMOLE_UIVIDEOSHOP3DMODELCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x9EEBBF0)
#define MOLEMOLE_UIVIDEOSHOP3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x9EEBF80)
#define MOLEMOLE_UIVIDEOSHOP3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x9EEB930)
#define MOLEMOLE_UIVIDEOSHOP3DMODELCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x9EEBC90)
#define MOLEMOLE_UIVIDEOSHOP3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x9EEC610)
#define MOLEMOLE_UIVIDEOSHOP3DMODELCONTROLLER___BASE_INITMAINVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0x9EEC680)
#define MOLEMOLE_UIVIDEOSHOP3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x9EEC6E0)
#define MOLEMOLE_UIVIDEOSHOP3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x9EEC750)
#define MOLEMOLE_UIVIDEOSHOP3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x9EEC760)
#define MOLEMOLE_UIVIDEOSHOP3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x9EEC770)

namespace MoleMole
{
	inline static constexpr unsigned int UIVideoshop3DModelController_TypeDefinitionIndex = 65211;

	class UIVideoshop3DModelController : public ::MoleMole::UIBase3DModelController
	{
	public:
		::Class_2_45EB76A87BDD923A_1* _view; // 0x340
		::UnityEngine::Rendering::Volume* _volume; // 0x348
		::MoleMole::Config::ConfigSetCameraStateCommonNode_CameraState* _defaultCameraState; // 0x350

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOP3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOP3DMODELCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOP3DMODELCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOP3DMODELCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOP3DMODELCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitMainVirtualCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOP3DMODELCONTROLLER_INITMAINVIRTUALCAMERA_OFFSET))(this);
		}

		::System::Void ChangeCameraVolumeMask(::System::Int32 mask)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOP3DMODELCONTROLLER_CHANGECAMERAVOLUMEMASK_OFFSET))(this, mask);
		}

		::UnityEngine::Animator* GetNPCAnimator()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOP3DMODELCONTROLLER_GETNPCANIMATOR_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetNPCRoot()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOP3DMODELCONTROLLER_GETNPCROOT_OFFSET))(this);
		}

		::UnityEngine::Transform* GetRootTrans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOP3DMODELCONTROLLER_GETROOTTRANS_OFFSET))(this);
		}

		::MoleMole::Config::ConfigSetCameraStateCommonNode_CameraState* GetDefaultCameraState()
		{
			return ((::MoleMole::Config::ConfigSetCameraStateCommonNode_CameraState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOP3DMODELCONTROLLER_GETDEFAULTCAMERASTATE_OFFSET))(this);
		}

		::System::Void __base_InitMainVirtualCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOP3DMODELCONTROLLER___BASE_INITMAINVIRTUALCAMERA_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOP3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOP3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOP3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOP3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
