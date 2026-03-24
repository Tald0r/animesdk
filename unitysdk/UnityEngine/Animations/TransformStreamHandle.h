#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_CHECKISVALIDANDRESOLVE_OFFSET UNITYSDK_OFFSET(0x9A7E70)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GETLOCALPOSITIONINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B623170)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GETLOCALPOSITIONINTERNAL_OFFSET UNITYSDK_OFFSET(0x9A8400)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GETLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x9A7FE0)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GETLOCALROTATIONINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B623190)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GETLOCALROTATIONINTERNAL_OFFSET UNITYSDK_OFFSET(0x9A8480)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GETLOCALROTATION_OFFSET UNITYSDK_OFFSET(0x9A80E0)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GETLOCALTRSINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B6231B0)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GETLOCALTRSINTERNAL_OFFSET UNITYSDK_OFFSET(0x9A84F0)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GETLOCALTRS_OFFSET UNITYSDK_OFFSET(0x9A81C0)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GETPOSITIONINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B623140)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GETPOSITIONINTERNAL_OFFSET UNITYSDK_OFFSET(0x9A8340)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GETPOSITION_OFFSET UNITYSDK_OFFSET(0x9A7E80)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GETROTATIONINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B623150)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GETROTATIONINTERNAL_OFFSET UNITYSDK_OFFSET(0x9A8390)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GETROTATION_OFFSET UNITYSDK_OFFSET(0x9A7F00)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GET_ANIMATORBINDINGSVERSION_OFFSET UNITYSDK_OFFSET(0x2F1F70)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GET_CREATEDBYNATIVE_OFFSET UNITYSDK_OFFSET(0x34A5E0)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GET_HASHANDLEINDEX_OFFSET UNITYSDK_OFFSET(0x99C870)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GET_HASSKELETONINDEX_OFFSET UNITYSDK_OFFSET(0x99C880)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_ISRESOLVEDINTERNAL_OFFSET UNITYSDK_OFFSET(0x9A7E20)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_ISRESOLVED_OFFSET UNITYSDK_OFFSET(0x9A7DD0)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_ISSAMEVERSIONASSTREAM_OFFSET UNITYSDK_OFFSET(0x99C860)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_ISVALIDINTERNAL_OFFSET UNITYSDK_OFFSET(0x9A7D50)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_ISVALID_OFFSET UNITYSDK_OFFSET(0x9A7D10)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_RESOLVEINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B623130)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_RESOLVEINTERNAL_OFFSET UNITYSDK_OFFSET(0x9A8330)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_RESOLVE_OFFSET UNITYSDK_OFFSET(0x9A7D90)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_SETLOCALPOSITIONINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B623180)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_SETLOCALPOSITIONINTERNAL_OFFSET UNITYSDK_OFFSET(0x9A8450)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_SETLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x9A8060)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_SETLOCALROTATIONINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B6231A0)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_SETLOCALROTATIONINTERNAL_OFFSET UNITYSDK_OFFSET(0x9A84C0)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_SETLOCALROTATION_OFFSET UNITYSDK_OFFSET(0x9A8150)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_SETLOCALTRSINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B6231C0)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_SETLOCALTRSINTERNAL_OFFSET UNITYSDK_OFFSET(0x9A8500)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_SETLOCALTRS_OFFSET UNITYSDK_OFFSET(0x9A8240)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_SETROTATIONINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B623160)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_SETROTATIONINTERNAL_OFFSET UNITYSDK_OFFSET(0x9A83D0)
#define UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_SETROTATION_OFFSET UNITYSDK_OFFSET(0x9A7F70)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int TransformStreamHandle_TypeDefinitionIndex = 6603;

	struct alignas(4) TransformStreamHandle
	{
		::System::UInt32 m_AnimatorBindingsVersion; // 0x10
		::System::Int32 handleIndex; // 0x14
		::System::Int32 skeletonIndex; // 0x18

		/*
		::System::Boolean IsValid(::UnityEngine::Animations::AnimationStream stream)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_ISVALID_OFFSET))(this, stream);
		}
		*/

		/*
		::System::Boolean IsValidInternal(::UnityEngine::Animations::AnimationStream& stream)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animations::AnimationStream&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_ISVALIDINTERNAL_OFFSET))(this, stream);
		}
		*/

		::System::Boolean get_createdByNative()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GET_CREATEDBYNATIVE_OFFSET))(this);
		}

		/*
		::System::Boolean IsSameVersionAsStream(::UnityEngine::Animations::AnimationStream& stream)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animations::AnimationStream&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_ISSAMEVERSIONASSTREAM_OFFSET))(this, stream);
		}
		*/

		::System::Boolean get_hasHandleIndex()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GET_HASHANDLEINDEX_OFFSET))(this);
		}

		::System::Boolean get_hasSkeletonIndex()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GET_HASSKELETONINDEX_OFFSET))(this);
		}

		::System::UInt32 get_animatorBindingsVersion()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GET_ANIMATORBINDINGSVERSION_OFFSET))(this);
		}

		/*
		::System::Void Resolve(::UnityEngine::Animations::AnimationStream stream)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_RESOLVE_OFFSET))(this, stream);
		}
		*/

		/*
		::System::Boolean IsResolved(::UnityEngine::Animations::AnimationStream stream)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_ISRESOLVED_OFFSET))(this, stream);
		}
		*/

		/*
		::System::Boolean IsResolvedInternal(::UnityEngine::Animations::AnimationStream& stream)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animations::AnimationStream&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_ISRESOLVEDINTERNAL_OFFSET))(this, stream);
		}
		*/

		/*
		::System::Void CheckIsValidAndResolve(::UnityEngine::Animations::AnimationStream& stream)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_CHECKISVALIDANDRESOLVE_OFFSET))(this, stream);
		}
		*/

		/*
		::UnityEngine::Vector3 GetPosition(::UnityEngine::Animations::AnimationStream stream)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GETPOSITION_OFFSET))(this, stream);
		}
		*/

		/*
		::UnityEngine::Quaternion GetRotation(::UnityEngine::Animations::AnimationStream stream)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GETROTATION_OFFSET))(this, stream);
		}
		*/

		/*
		::System::Void SetRotation(::UnityEngine::Animations::AnimationStream stream, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_SETROTATION_OFFSET))(this, stream, rotation);
		}
		*/

		/*
		::UnityEngine::Vector3 GetLocalPosition(::UnityEngine::Animations::AnimationStream stream)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GETLOCALPOSITION_OFFSET))(this, stream);
		}
		*/

		/*
		::System::Void SetLocalPosition(::UnityEngine::Animations::AnimationStream stream, ::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_SETLOCALPOSITION_OFFSET))(this, stream, position);
		}
		*/

		/*
		::UnityEngine::Quaternion GetLocalRotation(::UnityEngine::Animations::AnimationStream stream)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GETLOCALROTATION_OFFSET))(this, stream);
		}
		*/

		/*
		::System::Void SetLocalRotation(::UnityEngine::Animations::AnimationStream stream, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_SETLOCALROTATION_OFFSET))(this, stream, rotation);
		}
		*/

		/*
		::System::Void GetLocalTRS(::UnityEngine::Animations::AnimationStream stream, ::UnityEngine::Vector3& position, ::UnityEngine::Quaternion& rotation, ::UnityEngine::Vector3& scale)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GETLOCALTRS_OFFSET))(this, stream, position, rotation, scale);
		}
		*/

		/*
		::System::Void SetLocalTRS(::UnityEngine::Animations::AnimationStream stream, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 scale, ::System::Boolean useMask)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_SETLOCALTRS_OFFSET))(this, stream, position, rotation, scale, useMask);
		}
		*/

		/*
		::System::Void ResolveInternal(::UnityEngine::Animations::AnimationStream& stream)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_RESOLVEINTERNAL_OFFSET))(this, stream);
		}
		*/

		/*
		::UnityEngine::Vector3 GetPositionInternal(::UnityEngine::Animations::AnimationStream& stream)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Animations::AnimationStream&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GETPOSITIONINTERNAL_OFFSET))(this, stream);
		}
		*/

		/*
		::UnityEngine::Quaternion GetRotationInternal(::UnityEngine::Animations::AnimationStream& stream)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Animations::AnimationStream&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GETROTATIONINTERNAL_OFFSET))(this, stream);
		}
		*/

		/*
		::System::Void SetRotationInternal(::UnityEngine::Animations::AnimationStream& stream, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream&, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_SETROTATIONINTERNAL_OFFSET))(this, stream, rotation);
		}
		*/

		/*
		::UnityEngine::Vector3 GetLocalPositionInternal(::UnityEngine::Animations::AnimationStream& stream)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Animations::AnimationStream&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GETLOCALPOSITIONINTERNAL_OFFSET))(this, stream);
		}
		*/

		/*
		::System::Void SetLocalPositionInternal(::UnityEngine::Animations::AnimationStream& stream, ::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream&, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_SETLOCALPOSITIONINTERNAL_OFFSET))(this, stream, position);
		}
		*/

		/*
		::UnityEngine::Quaternion GetLocalRotationInternal(::UnityEngine::Animations::AnimationStream& stream)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Animations::AnimationStream&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GETLOCALROTATIONINTERNAL_OFFSET))(this, stream);
		}
		*/

		/*
		::System::Void SetLocalRotationInternal(::UnityEngine::Animations::AnimationStream& stream, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream&, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_SETLOCALROTATIONINTERNAL_OFFSET))(this, stream, rotation);
		}
		*/

		/*
		::System::Void GetLocalTRSInternal(::UnityEngine::Animations::AnimationStream& stream, ::UnityEngine::Vector3& position, ::UnityEngine::Quaternion& rotation, ::UnityEngine::Vector3& scale)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream&, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GETLOCALTRSINTERNAL_OFFSET))(this, stream, position, rotation, scale);
		}
		*/

		/*
		::System::Void SetLocalTRSInternal(::UnityEngine::Animations::AnimationStream& stream, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 scale, ::System::Boolean useMask)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream&, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_SETLOCALTRSINTERNAL_OFFSET))(this, stream, position, rotation, scale, useMask);
		}
		*/

		/*
		static ::System::Void ResolveInternal_Injected(::UnityEngine::Animations::TransformStreamHandle& _unity_self, ::UnityEngine::Animations::AnimationStream& stream)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::TransformStreamHandle&, ::UnityEngine::Animations::AnimationStream&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_RESOLVEINTERNAL_INJECTED_OFFSET))(_unity_self, stream);
		}
		*/

		/*
		static ::System::Void GetPositionInternal_Injected(::UnityEngine::Animations::TransformStreamHandle& _unity_self, ::UnityEngine::Animations::AnimationStream& stream, ::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::TransformStreamHandle&, ::UnityEngine::Animations::AnimationStream&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GETPOSITIONINTERNAL_INJECTED_OFFSET))(_unity_self, stream, ret);
		}
		*/

		/*
		static ::System::Void GetRotationInternal_Injected(::UnityEngine::Animations::TransformStreamHandle& _unity_self, ::UnityEngine::Animations::AnimationStream& stream, ::UnityEngine::Quaternion& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::TransformStreamHandle&, ::UnityEngine::Animations::AnimationStream&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GETROTATIONINTERNAL_INJECTED_OFFSET))(_unity_self, stream, ret);
		}
		*/

		/*
		static ::System::Void SetRotationInternal_Injected(::UnityEngine::Animations::TransformStreamHandle& _unity_self, ::UnityEngine::Animations::AnimationStream& stream, ::UnityEngine::Quaternion& rotation)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::TransformStreamHandle&, ::UnityEngine::Animations::AnimationStream&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_SETROTATIONINTERNAL_INJECTED_OFFSET))(_unity_self, stream, rotation);
		}
		*/

		/*
		static ::System::Void GetLocalPositionInternal_Injected(::UnityEngine::Animations::TransformStreamHandle& _unity_self, ::UnityEngine::Animations::AnimationStream& stream, ::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::TransformStreamHandle&, ::UnityEngine::Animations::AnimationStream&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GETLOCALPOSITIONINTERNAL_INJECTED_OFFSET))(_unity_self, stream, ret);
		}
		*/

		/*
		static ::System::Void SetLocalPositionInternal_Injected(::UnityEngine::Animations::TransformStreamHandle& _unity_self, ::UnityEngine::Animations::AnimationStream& stream, ::UnityEngine::Vector3& position)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::TransformStreamHandle&, ::UnityEngine::Animations::AnimationStream&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_SETLOCALPOSITIONINTERNAL_INJECTED_OFFSET))(_unity_self, stream, position);
		}
		*/

		/*
		static ::System::Void GetLocalRotationInternal_Injected(::UnityEngine::Animations::TransformStreamHandle& _unity_self, ::UnityEngine::Animations::AnimationStream& stream, ::UnityEngine::Quaternion& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::TransformStreamHandle&, ::UnityEngine::Animations::AnimationStream&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GETLOCALROTATIONINTERNAL_INJECTED_OFFSET))(_unity_self, stream, ret);
		}
		*/

		/*
		static ::System::Void SetLocalRotationInternal_Injected(::UnityEngine::Animations::TransformStreamHandle& _unity_self, ::UnityEngine::Animations::AnimationStream& stream, ::UnityEngine::Quaternion& rotation)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::TransformStreamHandle&, ::UnityEngine::Animations::AnimationStream&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_SETLOCALROTATIONINTERNAL_INJECTED_OFFSET))(_unity_self, stream, rotation);
		}
		*/

		/*
		static ::System::Void GetLocalTRSInternal_Injected(::UnityEngine::Animations::TransformStreamHandle& _unity_self, ::UnityEngine::Animations::AnimationStream& stream, ::UnityEngine::Vector3& position, ::UnityEngine::Quaternion& rotation, ::UnityEngine::Vector3& scale)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::TransformStreamHandle&, ::UnityEngine::Animations::AnimationStream&, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_GETLOCALTRSINTERNAL_INJECTED_OFFSET))(_unity_self, stream, position, rotation, scale);
		}
		*/

		/*
		static ::System::Void SetLocalTRSInternal_Injected(::UnityEngine::Animations::TransformStreamHandle& _unity_self, ::UnityEngine::Animations::AnimationStream& stream, ::UnityEngine::Vector3& position, ::UnityEngine::Quaternion& rotation, ::UnityEngine::Vector3& scale, ::System::Boolean useMask)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::TransformStreamHandle&, ::UnityEngine::Animations::AnimationStream&, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::UnityEngine::Vector3&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_TRANSFORMSTREAMHANDLE_SETLOCALTRSINTERNAL_INJECTED_OFFSET))(_unity_self, stream, position, rotation, scale, useMask);
		}
		*/
	};
}
