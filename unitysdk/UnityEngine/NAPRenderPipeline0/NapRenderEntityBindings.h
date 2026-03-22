#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/NapLightData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/NapRenderEntityBindings_SerializedData.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class GameObject; }

#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_ADDINDICATEDLIGHT_OFFSET UNITYSDK_OFFSET(0x19BCD3F0)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_CLEARINDICATEDLIGHTS_OFFSET UNITYSDK_OFFSET(0x19BCD400)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_CREATENATIVEOBJECT_OFFSET UNITYSDK_OFFSET(0x19BCD350)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_DESTROYNATIVEOBJECT_OFFSET UNITYSDK_OFFSET(0x19BCD360)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_GETISACTIVE_OFFSET UNITYSDK_OFFSET(0x19BCD3C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_GETISCURFRAMEVISIBLE_OFFSET UNITYSDK_OFFSET(0x19BCD3E0)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_GETISVISIBLEINCURRENTCAM_OFFSET UNITYSDK_OFFSET(0x19BCD3D0)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_GETRENDERERHANDLES_OFFSET UNITYSDK_OFFSET(0x19BCD410)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_GETZDISTANCETOCAMERA_OFFSET UNITYSDK_OFFSET(0x19BCD3B0)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_SETFLAGS_OFFSET UNITYSDK_OFFSET(0x19BCD430)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_SETISCUTSCENEMODE_OFFSET UNITYSDK_OFFSET(0x19BCD3A0)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_SETOVERRIDENMAINLIGHTCOLOR_OFFSET UNITYSDK_OFFSET(0x19BCD420)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_SETPRIORITY_OFFSET UNITYSDK_OFFSET(0x19BCD380)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_SETUP_OFFSET UNITYSDK_OFFSET(0x19BCD370)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_SETUSEPEROBJECTSHADOW_OFFSET UNITYSDK_OFFSET(0x19BCD390)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int NapRenderEntityBindings_TypeDefinitionIndex = 6108;

	class NapRenderEntityBindings : public ::System::Object
	{
	public:
		static ::System::IntPtr Internal_CreateNativeObject(::System::Object* managed, ::System::Int32 instanceID)
		{
			return ((::System::IntPtr(*)(::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_CREATENATIVEOBJECT_OFFSET))(managed, instanceID);
		}

		static ::System::Void Internal_DestroyNativeObject(::System::IntPtr nativeHandle)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_DESTROYNATIVEOBJECT_OFFSET))(nativeHandle);
		}

		static ::System::Void Internal_Setup(::System::IntPtr nativeHandle, ::UnityEngine::GameObject* gameObject, ::System::Int32 priority, ::System::UInt32 flags, ::UnityEngine::NAPRenderPipeline0::NapRenderEntityBindings_SerializedData& serializedData)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::GameObject*, ::System::Int32, ::System::UInt32, ::UnityEngine::NAPRenderPipeline0::NapRenderEntityBindings_SerializedData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_SETUP_OFFSET))(nativeHandle, gameObject, priority, flags, serializedData);
		}

		static ::System::Void Internal_SetPriority(::System::IntPtr nativeHandle, ::System::Int32 value)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_SETPRIORITY_OFFSET))(nativeHandle, value);
		}

		static ::System::Void Internal_SetUsePerObjectShadow(::System::IntPtr nativeHandle, ::System::Boolean value)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_SETUSEPEROBJECTSHADOW_OFFSET))(nativeHandle, value);
		}

		static ::System::Void Internal_SetIsCutSceneMode(::System::IntPtr nativeHandle, ::System::Boolean value)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_SETISCUTSCENEMODE_OFFSET))(nativeHandle, value);
		}

		static ::System::Single Internal_GetZDistanceToCamera(::System::IntPtr nativeHandle)
		{
			return ((::System::Single(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_GETZDISTANCETOCAMERA_OFFSET))(nativeHandle);
		}

		static ::System::Boolean Internal_GetIsActive(::System::IntPtr nativeHandle)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_GETISACTIVE_OFFSET))(nativeHandle);
		}

		static ::System::Boolean Internal_GetIsVisibleInCurrentCam(::System::IntPtr nativeHandle)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_GETISVISIBLEINCURRENTCAM_OFFSET))(nativeHandle);
		}

		static ::System::Boolean Internal_GetIsCurFrameVisible(::System::IntPtr nativeHandle)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_GETISCURFRAMEVISIBLE_OFFSET))(nativeHandle);
		}

		static ::System::Boolean Internal_AddIndicatedLight(::System::IntPtr nativeHandle, ::UnityEngine::NAPRenderPipeline0::NapLightData& lightData)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::UnityEngine::NAPRenderPipeline0::NapLightData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_ADDINDICATEDLIGHT_OFFSET))(nativeHandle, lightData);
		}

		static ::System::Void Internal_ClearIndicatedLights(::System::IntPtr nativeHandle)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_CLEARINDICATEDLIGHTS_OFFSET))(nativeHandle);
		}

		static ::System::Void Internal_GetRendererHandles(::System::IntPtr nativeHandle, ::Il2CppArray<::System::IntPtr>* rendererHandles)
		{
			return ((::System::Void(*)(::System::IntPtr, ::Il2CppArray<::System::IntPtr>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_GETRENDERERHANDLES_OFFSET))(nativeHandle, rendererHandles);
		}

		static ::System::Void Internal_SetOverridenMainLightColor(::System::IntPtr nativeHandle, ::UnityEngine::Vector4& color, ::System::Boolean isOverridden)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Vector4&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_SETOVERRIDENMAINLIGHTCOLOR_OFFSET))(nativeHandle, color, isOverridden);
		}

		static ::System::Void Internal_SetFlags(::System::IntPtr nativeHandle, ::System::UInt32 flags, ::System::Boolean value)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_SETFLAGS_OFFSET))(nativeHandle, flags, value);
		}
	};
}
