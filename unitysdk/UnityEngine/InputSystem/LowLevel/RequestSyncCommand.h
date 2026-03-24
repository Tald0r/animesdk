#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputDeviceCommand.h"

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_REQUESTSYNCCOMMAND_CREATE_OFFSET UNITYSDK_OFFSET(0x1AACA6A0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_REQUESTSYNCCOMMAND_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x94D680)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_REQUESTSYNCCOMMAND_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1AACA680)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int RequestSyncCommand_TypeDefinitionIndex = 28694;

	struct alignas(4) RequestSyncCommand
	{
		// static const ::System::Int32 kSize = 0x8; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand; // 0x10

		/*
		static ::UnityEngine::InputSystem::Utilities::FourCC get_Type()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_REQUESTSYNCCOMMAND_GET_TYPE_OFFSET))();
		}
		*/

		/*
		::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_REQUESTSYNCCOMMAND_GET_TYPESTATIC_OFFSET))(this);
		}
		*/

		static ::UnityEngine::InputSystem::LowLevel::RequestSyncCommand Create()
		{
			return ((::UnityEngine::InputSystem::LowLevel::RequestSyncCommand(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_REQUESTSYNCCOMMAND_CREATE_OFFSET))();
		}
	};
}
