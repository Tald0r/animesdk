#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/Key.h"

#define MOLEMOLE_CONFIG_KEYBOARDINPUTCODESETTING__CTOR_OFFSET UNITYSDK_OFFSET(0xE2D9310)

namespace MoleMole::Config
{
	inline static constexpr unsigned int KeyboardInputCodeSetting_TypeDefinitionIndex = 65966;

	class KeyboardInputCodeSetting : public ::System::Object
	{
	public:
		::UnityEngine::InputSystem::Key KeyboardCode; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_KEYBOARDINPUTCODESETTING__CTOR_OFFSET))(this);
		}
	};
}
