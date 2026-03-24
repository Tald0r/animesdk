#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_CHECKISVALIDANDRESOLVE_OFFSET UNITYSDK_OFFSET(0x99C900)
#define UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_GETFLOATINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B4D0F00)
#define UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_GETFLOATINTERNAL_OFFSET UNITYSDK_OFFSET(0x99CA90)
#define UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_GETFLOAT_OFFSET UNITYSDK_OFFSET(0x99C910)
#define UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_GET_ANIMATORBINDINGSVERSION_OFFSET UNITYSDK_OFFSET(0x2F1F70)
#define UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_GET_CREATEDBYNATIVE_OFFSET UNITYSDK_OFFSET(0x34A5E0)
#define UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_GET_HASBINDTYPE_OFFSET UNITYSDK_OFFSET(0x99C890)
#define UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_GET_HASHANDLEINDEX_OFFSET UNITYSDK_OFFSET(0x99C870)
#define UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_GET_HASVALUEARRAYINDEX_OFFSET UNITYSDK_OFFSET(0x99C880)
#define UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_ISRESOLVEDINTERNAL_OFFSET UNITYSDK_OFFSET(0x99C8A0)
#define UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_ISSAMEVERSIONASSTREAM_OFFSET UNITYSDK_OFFSET(0x99C860)
#define UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_ISVALIDINTERNAL_OFFSET UNITYSDK_OFFSET(0x99C820)
#define UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_RESOLVEINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B4D0EF0)
#define UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_RESOLVEINTERNAL_OFFSET UNITYSDK_OFFSET(0x99CA80)
#define UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_SETFLOATINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B4D0F10)
#define UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_SETFLOATINTERNAL_OFFSET UNITYSDK_OFFSET(0x99CAA0)
#define UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_SETFLOAT_OFFSET UNITYSDK_OFFSET(0x99C9C0)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int PropertyStreamHandle_TypeDefinitionIndex = 6604;

	struct alignas(4) PropertyStreamHandle
	{
		::System::UInt32 m_AnimatorBindingsVersion; // 0x10
		::System::Int32 handleIndex; // 0x14
		::System::Int32 valueArrayIndex; // 0x18
		::System::Int32 bindType; // 0x1C

		/*
		::System::Boolean IsValidInternal(::UnityEngine::Animations::AnimationStream& stream)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animations::AnimationStream&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_ISVALIDINTERNAL_OFFSET))(this, stream);
		}
		*/

		::System::Boolean get_createdByNative()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_GET_CREATEDBYNATIVE_OFFSET))(this);
		}

		/*
		::System::Boolean IsSameVersionAsStream(::UnityEngine::Animations::AnimationStream& stream)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animations::AnimationStream&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_ISSAMEVERSIONASSTREAM_OFFSET))(this, stream);
		}
		*/

		::System::Boolean get_hasHandleIndex()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_GET_HASHANDLEINDEX_OFFSET))(this);
		}

		::System::Boolean get_hasValueArrayIndex()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_GET_HASVALUEARRAYINDEX_OFFSET))(this);
		}

		::System::Boolean get_hasBindType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_GET_HASBINDTYPE_OFFSET))(this);
		}

		::System::UInt32 get_animatorBindingsVersion()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_GET_ANIMATORBINDINGSVERSION_OFFSET))(this);
		}

		/*
		::System::Boolean IsResolvedInternal(::UnityEngine::Animations::AnimationStream& stream)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animations::AnimationStream&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_ISRESOLVEDINTERNAL_OFFSET))(this, stream);
		}
		*/

		/*
		::System::Void CheckIsValidAndResolve(::UnityEngine::Animations::AnimationStream& stream)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_CHECKISVALIDANDRESOLVE_OFFSET))(this, stream);
		}
		*/

		/*
		::System::Single GetFloat(::UnityEngine::Animations::AnimationStream stream)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_GETFLOAT_OFFSET))(this, stream);
		}
		*/

		/*
		::System::Void SetFloat(::UnityEngine::Animations::AnimationStream stream, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_SETFLOAT_OFFSET))(this, stream, value);
		}
		*/

		/*
		::System::Void ResolveInternal(::UnityEngine::Animations::AnimationStream& stream)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_RESOLVEINTERNAL_OFFSET))(this, stream);
		}
		*/

		/*
		::System::Single GetFloatInternal(::UnityEngine::Animations::AnimationStream& stream)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Animations::AnimationStream&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_GETFLOATINTERNAL_OFFSET))(this, stream);
		}
		*/

		/*
		::System::Void SetFloatInternal(::UnityEngine::Animations::AnimationStream& stream, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_SETFLOATINTERNAL_OFFSET))(this, stream, value);
		}
		*/

		/*
		static ::System::Void ResolveInternal_Injected(::UnityEngine::Animations::PropertyStreamHandle& _unity_self, ::UnityEngine::Animations::AnimationStream& stream)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::PropertyStreamHandle&, ::UnityEngine::Animations::AnimationStream&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_RESOLVEINTERNAL_INJECTED_OFFSET))(_unity_self, stream);
		}
		*/

		/*
		static ::System::Single GetFloatInternal_Injected(::UnityEngine::Animations::PropertyStreamHandle& _unity_self, ::UnityEngine::Animations::AnimationStream& stream)
		{
			return ((::System::Single(*)(::UnityEngine::Animations::PropertyStreamHandle&, ::UnityEngine::Animations::AnimationStream&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_GETFLOATINTERNAL_INJECTED_OFFSET))(_unity_self, stream);
		}
		*/

		/*
		static ::System::Void SetFloatInternal_Injected(::UnityEngine::Animations::PropertyStreamHandle& _unity_self, ::UnityEngine::Animations::AnimationStream& stream, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::PropertyStreamHandle&, ::UnityEngine::Animations::AnimationStream&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_PROPERTYSTREAMHANDLE_SETFLOATINTERNAL_INJECTED_OFFSET))(_unity_self, stream, value);
		}
		*/
	};
}
