#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UIElements { class IEventHandler; }

#define UNITYENGINE_UIELEMENTS_MOUSECAPTURECONTROLLER_CAPTUREMOUSE_OFFSET UNITYSDK_OFFSET(0x18923E70)
#define UNITYENGINE_UIELEMENTS_MOUSECAPTURECONTROLLER_HASMOUSECAPTURE_OFFSET UNITYSDK_OFFSET(0x18922D30)
#define UNITYENGINE_UIELEMENTS_MOUSECAPTURECONTROLLER_RELEASEMOUSE_OFFSET UNITYSDK_OFFSET(0x18924080)
#define UNITYENGINE_UIELEMENTS_MOUSECAPTURECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18924200)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int MouseCaptureController_TypeDefinitionIndex = 23753;

	class MouseCaptureController : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_m_IsMouseCapturedWarningEmitted()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MouseCaptureController_TypeDefinitionIndex)->GetStaticField(0x46B0);
		}
		static ::System::Boolean* StaticGet_m_ReleaseMouseWarningEmitted()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MouseCaptureController_TypeDefinitionIndex)->GetStaticField(0x46B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSECAPTURECONTROLLER__CCTOR_OFFSET))();
		}

		static ::System::Boolean HasMouseCapture(::UnityEngine::UIElements::IEventHandler* handler)
		{
			return ((::System::Boolean(*)(::UnityEngine::UIElements::IEventHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSECAPTURECONTROLLER_HASMOUSECAPTURE_OFFSET))(handler);
		}

		static ::System::Void CaptureMouse(::UnityEngine::UIElements::IEventHandler* handler)
		{
			return ((::System::Void(*)(::UnityEngine::UIElements::IEventHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSECAPTURECONTROLLER_CAPTUREMOUSE_OFFSET))(handler);
		}

		static ::System::Void ReleaseMouse(::UnityEngine::UIElements::IEventHandler* handler)
		{
			return ((::System::Void(*)(::UnityEngine::UIElements::IEventHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSECAPTURECONTROLLER_RELEASEMOUSE_OFFSET))(handler);
		}
	};
}
