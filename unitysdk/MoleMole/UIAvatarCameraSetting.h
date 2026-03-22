#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CameraRotType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/AntialiasingMode.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CameraOverrideOption.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class CameraChangeType; }

#define MOLEMOLE_UIAVATARCAMERASETTING_GET_CAMERAOFFSETY_OFFSET UNITYSDK_OFFSET(0xA4CFA00)
#define MOLEMOLE_UIAVATARCAMERASETTING_SET_CAMERAOFFSETY_OFFSET UNITYSDK_OFFSET(0xA4CFA10)
#define MOLEMOLE_UIAVATARCAMERASETTING__CCTOR_OFFSET UNITYSDK_OFFSET(0xA4CFAB0)
#define MOLEMOLE_UIAVATARCAMERASETTING__CTOR_OFFSET UNITYSDK_OFFSET(0xA4CFA90)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarCameraSetting_TypeDefinitionIndex = 48627;

	class UIAvatarCameraSetting : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_muteEdit()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIAvatarCameraSetting_TypeDefinitionIndex)->GetStaticField(0xFE60);
		}
		::MoleMole::CameraChangeType* ChangeType; // 0x10
		::MoleMole::CameraRotType CameraRotTypeAxisY; // 0x18
		::System::Single CameraRoll; // 0x1C
		::UnityEngine::NAPRenderPipeline0::CameraOverrideOption DepthTexture; // 0x20
		::UnityEngine::NAPRenderPipeline0::CameraOverrideOption NormalTexture; // 0x24
		::UnityEngine::Rect CameraRect; // 0x28
		::UnityEngine::NAPRenderPipeline0::AntialiasingMode Anti_aliasing; // 0x38
		::System::Single CameraYaw; // 0x3C
		::UnityEngine::NAPRenderPipeline0::CameraOverrideOption OpaqueTexture; // 0x40
		::System::Boolean ApplyLUTAfterEverything; // 0x44
		::System::Boolean renderVolumetricFog; // 0x45
		::System::Single CameraPith; // 0x48
		::System::Single CameraFOV; // 0x4C
		::UnityEngine::Vector3 TargetOffset; // 0x50
		::UnityEngine::Vector3 CameraOffset; // 0x5C
		::System::Boolean EnableExternalSetting; // 0x68
		::System::Boolean DrawGizmos; // 0x69
		::System::Boolean ApplyLookAtPoint; // 0x6A
		::System::Boolean RenderShadows; // 0x6B
		::System::Single uiFxExtraAlphaWeight; // 0x6C
		::UnityEngine::Vector3 LookAtPointOffset; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARCAMERASETTING__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARCAMERASETTING__CCTOR_OFFSET))();
		}

		::System::Single get_CameraOffsetY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARCAMERASETTING_GET_CAMERAOFFSETY_OFFSET))(this);
		}

		::System::Void set_CameraOffsetY(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARCAMERASETTING_SET_CAMERAOFFSETY_OFFSET))(this, value);
		}
	};
}
