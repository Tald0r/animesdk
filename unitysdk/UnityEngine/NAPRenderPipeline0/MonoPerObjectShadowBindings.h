#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MonoPerObjectShadowBindings_NativeSerializedData.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_MONOPEROBJECTSHADOWBINDINGS_INTERNAL_CREATENATIVEOBJECT_OFFSET UNITYSDK_OFFSET(0x1A1A1510)
#define UNITYENGINE_NAPRENDERPIPELINE0_MONOPEROBJECTSHADOWBINDINGS_INTERNAL_DESTROYNATIVEOBJECT_OFFSET UNITYSDK_OFFSET(0x1A1A1520)
#define UNITYENGINE_NAPRENDERPIPELINE0_MONOPEROBJECTSHADOWBINDINGS_INTERNAL_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1A1A1540)
#define UNITYENGINE_NAPRENDERPIPELINE0_MONOPEROBJECTSHADOWBINDINGS_INTERNAL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A1A1530)
#define UNITYENGINE_NAPRENDERPIPELINE0_MONOPEROBJECTSHADOWBINDINGS_INTERNAL_SYNCSERIALIZEDDATA_OFFSET UNITYSDK_OFFSET(0x1A1A1550)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int MonoPerObjectShadowBindings_TypeDefinitionIndex = 6109;

	class MonoPerObjectShadowBindings : public ::System::Object
	{
	public:
		static ::System::IntPtr Internal_CreateNativeObject(::System::Object* managed, ::System::Int32 instanceID)
		{
			return ((::System::IntPtr(*)(::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_MONOPEROBJECTSHADOWBINDINGS_INTERNAL_CREATENATIVEOBJECT_OFFSET))(managed, instanceID);
		}

		static ::System::Void Internal_DestroyNativeObject(::System::IntPtr nativeHandle)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_MONOPEROBJECTSHADOWBINDINGS_INTERNAL_DESTROYNATIVEOBJECT_OFFSET))(nativeHandle);
		}

		static ::System::Void Internal_OnEnable(::System::IntPtr nativeHandle)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_MONOPEROBJECTSHADOWBINDINGS_INTERNAL_ONENABLE_OFFSET))(nativeHandle);
		}

		static ::System::Void Internal_OnDisable(::System::IntPtr nativeHandle)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_MONOPEROBJECTSHADOWBINDINGS_INTERNAL_ONDISABLE_OFFSET))(nativeHandle);
		}

		static ::System::Void Internal_SyncSerializedData(::System::IntPtr nativeHandle, ::UnityEngine::NAPRenderPipeline0::MonoPerObjectShadowBindings_NativeSerializedData& data)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::NAPRenderPipeline0::MonoPerObjectShadowBindings_NativeSerializedData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_MONOPEROBJECTSHADOWBINDINGS_INTERNAL_SYNCSERIALIZEDDATA_OFFSET))(nativeHandle, data);
		}
	};
}
