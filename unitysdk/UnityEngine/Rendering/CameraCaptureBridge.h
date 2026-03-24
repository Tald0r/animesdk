#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::Rendering { class CameraCaptureAction; }

#define UNITYENGINE_RENDERING_CAMERACAPTUREBRIDGE_ADDCAPTUREACTION_OFFSET UNITYSDK_OFFSET(0x18A34EB0)
#define UNITYENGINE_RENDERING_CAMERACAPTUREBRIDGE_GETCAPTUREACTIONS_OFFSET UNITYSDK_OFFSET(0x18A34D10)
#define UNITYENGINE_RENDERING_CAMERACAPTUREBRIDGE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x18A34CA0)
#define UNITYENGINE_RENDERING_CAMERACAPTUREBRIDGE_REMOVECAPTUREACTION_OFFSET UNITYSDK_OFFSET(0x18A35180)
#define UNITYENGINE_RENDERING_CAMERACAPTUREBRIDGE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x18A34CE0)
#define UNITYENGINE_RENDERING_CAMERACAPTUREBRIDGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A34C00)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CameraCaptureBridge_TypeDefinitionIndex = 9583;

	class CameraCaptureBridge : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera*, ::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::CameraCaptureAction*>*>** StaticGet_actionDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera*, ::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::CameraCaptureAction*>*>**)Il2CppClass::FromTypeDefinitionIndex(CameraCaptureBridge_TypeDefinitionIndex)->GetStaticField(0x89D0);
		}
		static ::System::Boolean* StaticGet__enabled()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CameraCaptureBridge_TypeDefinitionIndex)->GetStaticField(0x4330);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAMERACAPTUREBRIDGE__CCTOR_OFFSET))();
		}

		static ::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAMERACAPTUREBRIDGE_GET_ENABLED_OFFSET))();
		}

		static ::System::Void set_enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAMERACAPTUREBRIDGE_SET_ENABLED_OFFSET))(value);
		}

		static ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Rendering::CameraCaptureAction*>* GetCaptureActions(::UnityEngine::Camera* camera)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::UnityEngine::Rendering::CameraCaptureAction*>*(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAMERACAPTUREBRIDGE_GETCAPTUREACTIONS_OFFSET))(camera);
		}

		static ::System::Void AddCaptureAction(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::CameraCaptureAction* action)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::CameraCaptureAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAMERACAPTUREBRIDGE_ADDCAPTUREACTION_OFFSET))(camera, action);
		}

		static ::System::Void RemoveCaptureAction(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::CameraCaptureAction* action)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::CameraCaptureAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAMERACAPTUREBRIDGE_REMOVECAPTUREACTION_OFFSET))(camera, action);
		}
	};
}
