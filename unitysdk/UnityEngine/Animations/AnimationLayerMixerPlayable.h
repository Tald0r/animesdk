#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Playables/PlayableHandle.h"

namespace UnityEngine { class AvatarMask; }

#define UNITYENGINE_ANIMATIONS_ANIMATIONLAYERMIXERPLAYABLE_CREATEHANDLEINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B134A90)
#define UNITYENGINE_ANIMATIONS_ANIMATIONLAYERMIXERPLAYABLE_CREATEHANDLEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B1346D0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONLAYERMIXERPLAYABLE_CREATEHANDLE_OFFSET UNITYSDK_OFFSET(0x1B134490)
#define UNITYENGINE_ANIMATIONS_ANIMATIONLAYERMIXERPLAYABLE_CREATE_OFFSET UNITYSDK_OFFSET(0x1B134320)
#define UNITYENGINE_ANIMATIONS_ANIMATIONLAYERMIXERPLAYABLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x8E7F80)
#define UNITYENGINE_ANIMATIONS_ANIMATIONLAYERMIXERPLAYABLE_GETHANDLE_OFFSET UNITYSDK_OFFSET(0x2CA610)
#define UNITYENGINE_ANIMATIONS_ANIMATIONLAYERMIXERPLAYABLE_GET_NULL_OFFSET UNITYSDK_OFFSET(0x1B1342E0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONLAYERMIXERPLAYABLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1B134720)
#define UNITYENGINE_ANIMATIONS_ANIMATIONLAYERMIXERPLAYABLE_SETLAYERADDITIVEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B1348A0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONLAYERMIXERPLAYABLE_SETLAYERADDITIVE_OFFSET UNITYSDK_OFFSET(0x97E5B0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONLAYERMIXERPLAYABLE_SETLAYERMASKFROMAVATARMASKINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B134A80)
#define UNITYENGINE_ANIMATIONS_ANIMATIONLAYERMIXERPLAYABLE_SETLAYERMASKFROMAVATARMASK_OFFSET UNITYSDK_OFFSET(0x97E5C0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONLAYERMIXERPLAYABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B134AA0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONLAYERMIXERPLAYABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x97E4A0)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int AnimationLayerMixerPlayable_TypeDefinitionIndex = 6587;

	struct alignas(8) AnimationLayerMixerPlayable
	{
		static ::UnityEngine::Animations::AnimationLayerMixerPlayable* StaticGet_m_NullPlayable()
		{
			return (::UnityEngine::Animations::AnimationLayerMixerPlayable*)Il2CppClass::FromTypeDefinitionIndex(AnimationLayerMixerPlayable_TypeDefinitionIndex)->GetStaticField(0x3090);
		}
		::UnityEngine::Playables::PlayableHandle m_Handle; // 0x10

		::System::Void _ctor(::UnityEngine::Playables::PlayableHandle handle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONLAYERMIXERPLAYABLE__CTOR_OFFSET))(this, handle);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONLAYERMIXERPLAYABLE__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Animations::AnimationLayerMixerPlayable get_Null()
		{
			return ((::UnityEngine::Animations::AnimationLayerMixerPlayable(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONLAYERMIXERPLAYABLE_GET_NULL_OFFSET))();
		}

		/*
		static ::UnityEngine::Animations::AnimationLayerMixerPlayable Create(::UnityEngine::Playables::PlayableGraph graph, ::System::Int32 inputCount)
		{
			return ((::UnityEngine::Animations::AnimationLayerMixerPlayable(*)(::UnityEngine::Playables::PlayableGraph, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONLAYERMIXERPLAYABLE_CREATE_OFFSET))(graph, inputCount);
		}
		*/

		/*
		static ::UnityEngine::Playables::PlayableHandle CreateHandle(::UnityEngine::Playables::PlayableGraph graph, ::System::Int32 inputCount)
		{
			return ((::UnityEngine::Playables::PlayableHandle(*)(::UnityEngine::Playables::PlayableGraph, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONLAYERMIXERPLAYABLE_CREATEHANDLE_OFFSET))(graph, inputCount);
		}
		*/

		::UnityEngine::Playables::PlayableHandle GetHandle()
		{
			return ((::UnityEngine::Playables::PlayableHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONLAYERMIXERPLAYABLE_GETHANDLE_OFFSET))(this);
		}

		/*
		static ::UnityEngine::Playables::Playable op_Implicit(::UnityEngine::Animations::AnimationLayerMixerPlayable playable)
		{
			return ((::UnityEngine::Playables::Playable(*)(::UnityEngine::Animations::AnimationLayerMixerPlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONLAYERMIXERPLAYABLE_OP_IMPLICIT_OFFSET))(playable);
		}
		*/

		::System::Boolean Equals(::UnityEngine::Animations::AnimationLayerMixerPlayable other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animations::AnimationLayerMixerPlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONLAYERMIXERPLAYABLE_EQUALS_OFFSET))(this, other);
		}

		::System::Void SetLayerAdditive(::System::UInt32 layerIndex, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONLAYERMIXERPLAYABLE_SETLAYERADDITIVE_OFFSET))(this, layerIndex, value);
		}

		::System::Void SetLayerMaskFromAvatarMask(::System::UInt32 layerIndex, ::UnityEngine::AvatarMask* mask)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::AvatarMask*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONLAYERMIXERPLAYABLE_SETLAYERMASKFROMAVATARMASK_OFFSET))(this, layerIndex, mask);
		}

		/*
		static ::System::Boolean CreateHandleInternal(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Playables::PlayableHandle& handle)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONLAYERMIXERPLAYABLE_CREATEHANDLEINTERNAL_OFFSET))(graph, handle);
		}
		*/

		static ::System::Void SetLayerAdditiveInternal(::UnityEngine::Playables::PlayableHandle& handle, ::System::UInt32 layerIndex, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONLAYERMIXERPLAYABLE_SETLAYERADDITIVEINTERNAL_OFFSET))(handle, layerIndex, value);
		}

		static ::System::Void SetLayerMaskFromAvatarMaskInternal(::UnityEngine::Playables::PlayableHandle& handle, ::System::UInt32 layerIndex, ::UnityEngine::AvatarMask* mask)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&, ::System::UInt32, ::UnityEngine::AvatarMask*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONLAYERMIXERPLAYABLE_SETLAYERMASKFROMAVATARMASKINTERNAL_OFFSET))(handle, layerIndex, mask);
		}

		/*
		static ::System::Boolean CreateHandleInternal_Injected(::UnityEngine::Playables::PlayableGraph& graph, ::UnityEngine::Playables::PlayableHandle& handle)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph&, ::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONLAYERMIXERPLAYABLE_CREATEHANDLEINTERNAL_INJECTED_OFFSET))(graph, handle);
		}
		*/
	};
}
