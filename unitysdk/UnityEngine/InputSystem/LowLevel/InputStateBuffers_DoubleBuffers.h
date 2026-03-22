#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_DOUBLEBUFFERS_GETBACKBUFFER_OFFSET UNITYSDK_OFFSET(0x8D62C0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_DOUBLEBUFFERS_GETFRONTBUFFER_OFFSET UNITYSDK_OFFSET(0x8D62B0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_DOUBLEBUFFERS_GET_VALID_OFFSET UNITYSDK_OFFSET(0x2D41A0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_DOUBLEBUFFERS_SETBACKBUFFER_OFFSET UNITYSDK_OFFSET(0x8D6290)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_DOUBLEBUFFERS_SETFRONTBUFFER_OFFSET UNITYSDK_OFFSET(0x8D6280)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_DOUBLEBUFFERS_SWAPBUFFERS_OFFSET UNITYSDK_OFFSET(0x8D62E0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InputStateBuffers_DoubleBuffers_TypeDefinitionIndex = 27834;

	struct alignas(8) InputStateBuffers_DoubleBuffers
	{
		::System::Void** deviceToBufferMapping; // 0x10

		::System::Boolean get_valid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_DOUBLEBUFFERS_GET_VALID_OFFSET))(this);
		}

		::System::Void SetFrontBuffer(::System::Int32 deviceIndex, ::System::Void* ptr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_DOUBLEBUFFERS_SETFRONTBUFFER_OFFSET))(this, deviceIndex, ptr);
		}

		::System::Void SetBackBuffer(::System::Int32 deviceIndex, ::System::Void* ptr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_DOUBLEBUFFERS_SETBACKBUFFER_OFFSET))(this, deviceIndex, ptr);
		}

		::System::Void* GetFrontBuffer(::System::Int32 deviceIndex)
		{
			return ((::System::Void*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_DOUBLEBUFFERS_GETFRONTBUFFER_OFFSET))(this, deviceIndex);
		}

		::System::Void* GetBackBuffer(::System::Int32 deviceIndex)
		{
			return ((::System::Void*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_DOUBLEBUFFERS_GETBACKBUFFER_OFFSET))(this, deviceIndex);
		}

		::System::Void SwapBuffers(::System::Int32 deviceIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_DOUBLEBUFFERS_SWAPBUFFERS_OFFSET))(this, deviceIndex);
		}
	};
}
