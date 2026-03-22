#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Playables/PlayableHandle.h"

namespace System { class Type; }

#define UNITYENGINE_PLAYABLES_PLAYABLE_CREATE_OFFSET UNITYSDK_OFFSET(0x19BD09C0)
#define UNITYENGINE_PLAYABLES_PLAYABLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x8E7F80)
#define UNITYENGINE_PLAYABLES_PLAYABLE_GETHANDLE_OFFSET UNITYSDK_OFFSET(0x2CA610)
#define UNITYENGINE_PLAYABLES_PLAYABLE_GETPLAYABLETYPE_OFFSET UNITYSDK_OFFSET(0x8E9770)
#define UNITYENGINE_PLAYABLES_PLAYABLE_GET_NULL_OFFSET UNITYSDK_OFFSET(0x19BD0980)
#define UNITYENGINE_PLAYABLES_PLAYABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BD0AF0)
#define UNITYENGINE_PLAYABLES_PLAYABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x2FB050)

namespace UnityEngine::Playables
{
	inline static constexpr unsigned int Playable_TypeDefinitionIndex = 6255;

	struct alignas(8) Playable
	{
		static ::UnityEngine::Playables::Playable* StaticGet_m_NullPlayable()
		{
			return (::UnityEngine::Playables::Playable*)Il2CppClass::FromTypeDefinitionIndex(Playable_TypeDefinitionIndex)->GetStaticField(0x2C80);
		}
		::UnityEngine::Playables::PlayableHandle m_Handle; // 0x10

		::System::Void _ctor(::UnityEngine::Playables::PlayableHandle handle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLE__CTOR_OFFSET))(this, handle);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLE__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Playables::Playable get_Null()
		{
			return ((::UnityEngine::Playables::Playable(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLE_GET_NULL_OFFSET))();
		}

		/*
		static ::UnityEngine::Playables::Playable Create(::UnityEngine::Playables::PlayableGraph graph, ::System::Int32 inputCount)
		{
			return ((::UnityEngine::Playables::Playable(*)(::UnityEngine::Playables::PlayableGraph, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLE_CREATE_OFFSET))(graph, inputCount);
		}
		*/

		::UnityEngine::Playables::PlayableHandle GetHandle()
		{
			return ((::UnityEngine::Playables::PlayableHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLE_GETHANDLE_OFFSET))(this);
		}

		::System::Type* GetPlayableType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLE_GETPLAYABLETYPE_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::Playables::Playable other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLE_EQUALS_OFFSET))(this, other);
		}
	};
}
