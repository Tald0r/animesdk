#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_CHECKISVALID_OFFSET UNITYSDK_OFFSET(0x9B7040)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_GETGLOBALTRINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B768BD0)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_GETGLOBALTRINTERNAL_OFFSET UNITYSDK_OFFSET(0x9B7320)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_GETGLOBALTR_OFFSET UNITYSDK_OFFSET(0x9B71C0)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_GETLOCALSCALEINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B768BC0)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_GETLOCALSCALEINTERNAL_OFFSET UNITYSDK_OFFSET(0x9B72D0)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_GETLOCALSCALE_OFFSET UNITYSDK_OFFSET(0x9B7140)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_GETPOSITIONINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B768BA0)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_GETPOSITIONINTERNAL_OFFSET UNITYSDK_OFFSET(0x9B7240)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_GETPOSITION_OFFSET UNITYSDK_OFFSET(0x9B7050)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_GETROTATIONINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B768BB0)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_GETROTATIONINTERNAL_OFFSET UNITYSDK_OFFSET(0x9B7290)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_GETROTATION_OFFSET UNITYSDK_OFFSET(0x9B70D0)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_GET_CREATEDBYNATIVE_OFFSET UNITYSDK_OFFSET(0x34A5E0)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_GET_HASTRANSFORMSCENEHANDLEDEFINITIONINDEX_OFFSET UNITYSDK_OFFSET(0x99C870)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_HASVALIDTRANSFORM_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B768B90)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_HASVALIDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x9B7230)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_ISVALID_OFFSET UNITYSDK_OFFSET(0x9B6FC0)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int TransformSceneHandle_TypeDefinitionIndex = 6605;

	struct alignas(4) TransformSceneHandle
	{
		::System::UInt32 valid; // 0x10
		::System::Int32 transformSceneHandleDefinitionIndex; // 0x14

		/*
		::System::Boolean IsValid(::UnityEngine::Animations::AnimationStream stream)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_ISVALID_OFFSET))(this, stream);
		}
		*/

		::System::Boolean get_createdByNative()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_GET_CREATEDBYNATIVE_OFFSET))(this);
		}

		::System::Boolean get_hasTransformSceneHandleDefinitionIndex()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_GET_HASTRANSFORMSCENEHANDLEDEFINITIONINDEX_OFFSET))(this);
		}

		/*
		::System::Void CheckIsValid(::UnityEngine::Animations::AnimationStream& stream)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_CHECKISVALID_OFFSET))(this, stream);
		}
		*/

		/*
		::UnityEngine::Vector3 GetPosition(::UnityEngine::Animations::AnimationStream stream)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_GETPOSITION_OFFSET))(this, stream);
		}
		*/

		/*
		::UnityEngine::Quaternion GetRotation(::UnityEngine::Animations::AnimationStream stream)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_GETROTATION_OFFSET))(this, stream);
		}
		*/

		/*
		::UnityEngine::Vector3 GetLocalScale(::UnityEngine::Animations::AnimationStream stream)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_GETLOCALSCALE_OFFSET))(this, stream);
		}
		*/

		/*
		::System::Void GetGlobalTR(::UnityEngine::Animations::AnimationStream stream, ::UnityEngine::Vector3& position, ::UnityEngine::Quaternion& rotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_GETGLOBALTR_OFFSET))(this, stream, position, rotation);
		}
		*/

		/*
		::System::Boolean HasValidTransform(::UnityEngine::Animations::AnimationStream& stream)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animations::AnimationStream&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_HASVALIDTRANSFORM_OFFSET))(this, stream);
		}
		*/

		/*
		::UnityEngine::Vector3 GetPositionInternal(::UnityEngine::Animations::AnimationStream& stream)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Animations::AnimationStream&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_GETPOSITIONINTERNAL_OFFSET))(this, stream);
		}
		*/

		/*
		::UnityEngine::Quaternion GetRotationInternal(::UnityEngine::Animations::AnimationStream& stream)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Animations::AnimationStream&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_GETROTATIONINTERNAL_OFFSET))(this, stream);
		}
		*/

		/*
		::UnityEngine::Vector3 GetLocalScaleInternal(::UnityEngine::Animations::AnimationStream& stream)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Animations::AnimationStream&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_GETLOCALSCALEINTERNAL_OFFSET))(this, stream);
		}
		*/

		/*
		::System::Void GetGlobalTRInternal(::UnityEngine::Animations::AnimationStream& stream, ::UnityEngine::Vector3& position, ::UnityEngine::Quaternion& rotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream&, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_GETGLOBALTRINTERNAL_OFFSET))(this, stream, position, rotation);
		}
		*/

		/*
		static ::System::Boolean HasValidTransform_Injected(::UnityEngine::Animations::TransformSceneHandle& _unity_self, ::UnityEngine::Animations::AnimationStream& stream)
		{
			return ((::System::Boolean(*)(::UnityEngine::Animations::TransformSceneHandle&, ::UnityEngine::Animations::AnimationStream&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_HASVALIDTRANSFORM_INJECTED_OFFSET))(_unity_self, stream);
		}
		*/

		/*
		static ::System::Void GetPositionInternal_Injected(::UnityEngine::Animations::TransformSceneHandle& _unity_self, ::UnityEngine::Animations::AnimationStream& stream, ::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::TransformSceneHandle&, ::UnityEngine::Animations::AnimationStream&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_GETPOSITIONINTERNAL_INJECTED_OFFSET))(_unity_self, stream, ret);
		}
		*/

		/*
		static ::System::Void GetRotationInternal_Injected(::UnityEngine::Animations::TransformSceneHandle& _unity_self, ::UnityEngine::Animations::AnimationStream& stream, ::UnityEngine::Quaternion& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::TransformSceneHandle&, ::UnityEngine::Animations::AnimationStream&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_GETROTATIONINTERNAL_INJECTED_OFFSET))(_unity_self, stream, ret);
		}
		*/

		/*
		static ::System::Void GetLocalScaleInternal_Injected(::UnityEngine::Animations::TransformSceneHandle& _unity_self, ::UnityEngine::Animations::AnimationStream& stream, ::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::TransformSceneHandle&, ::UnityEngine::Animations::AnimationStream&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_GETLOCALSCALEINTERNAL_INJECTED_OFFSET))(_unity_self, stream, ret);
		}
		*/

		/*
		static ::System::Void GetGlobalTRInternal_Injected(::UnityEngine::Animations::TransformSceneHandle& _unity_self, ::UnityEngine::Animations::AnimationStream& stream, ::UnityEngine::Vector3& position, ::UnityEngine::Quaternion& rotation)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::TransformSceneHandle&, ::UnityEngine::Animations::AnimationStream&, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSCENEHANDLE_GETGLOBALTRINTERNAL_INJECTED_OFFSET))(_unity_self, stream, position, rotation);
		}
		*/
	};
}
