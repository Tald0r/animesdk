#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/EnhancedTouch/Touch.h"
#include "unitysdk/UnityEngine/InputSystem/EnhancedTouch/TouchHistory.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEventPtr.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputStateHistory_Record.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputUpdateType.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/TouchState.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem { class Touchscreen; }
namespace UnityEngine::InputSystem::LowLevel { template <typename T> class InputStateHistory_1; }

#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_FINGER_FINDTOUCH_OFFSET UNITYSDK_OFFSET(0x18CA8170)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_FINGER_GETTOUCHHISTORY_OFFSET UNITYSDK_OFFSET(0x18CA84E0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_FINGER_GET_CURRENTTOUCH_OFFSET UNITYSDK_OFFSET(0x18CA77C0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_FINGER_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x18CA7750)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_FINGER_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x18CA7760)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_FINGER_GET_LASTTOUCH_OFFSET UNITYSDK_OFFSET(0x18CA7A00)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_FINGER_GET_SCREENPOSITION_OFFSET UNITYSDK_OFFSET(0x18CA7930)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_FINGER_GET_SCREEN_OFFSET UNITYSDK_OFFSET(0x18CA7740)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_FINGER_GET_TOUCHHISTORY_OFFSET UNITYSDK_OFFSET(0x18CA7A60)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_FINGER_ONTOUCHRECORDED_OFFSET UNITYSDK_OFFSET(0x18CA7E90)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_FINGER_SHOULDRECORDTOUCH_OFFSET UNITYSDK_OFFSET(0x18CA7E40)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_FINGER__CTOR_OFFSET UNITYSDK_OFFSET(0x18CA7AA0)

namespace UnityEngine::InputSystem::EnhancedTouch
{
	inline static constexpr unsigned int Finger_TypeDefinitionIndex = 28635;

	class Finger : public ::System::Object
	{
	public:
		::UnityEngine::InputSystem::Touchscreen* _screen_k__BackingField; // 0x10
		::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>* m_StateHistory; // 0x18
		::System::Int32 _index_k__BackingField; // 0x20

		::System::Void _ctor(::UnityEngine::InputSystem::Touchscreen* screen, ::System::Int32 index, ::UnityEngine::InputSystem::LowLevel::InputUpdateType updateMask)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Touchscreen*, ::System::Int32, ::UnityEngine::InputSystem::LowLevel::InputUpdateType))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_FINGER__CTOR_OFFSET))(this, screen, index, updateMask);
		}

		::UnityEngine::InputSystem::Touchscreen* get_screen()
		{
			return ((::UnityEngine::InputSystem::Touchscreen*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_FINGER_GET_SCREEN_OFFSET))(this);
		}

		::System::Int32 get_index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_FINGER_GET_INDEX_OFFSET))(this);
		}

		::System::Boolean get_isActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_FINGER_GET_ISACTIVE_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_screenPosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_FINGER_GET_SCREENPOSITION_OFFSET))(this);
		}

		::UnityEngine::InputSystem::EnhancedTouch::Touch get_lastTouch()
		{
			return ((::UnityEngine::InputSystem::EnhancedTouch::Touch(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_FINGER_GET_LASTTOUCH_OFFSET))(this);
		}

		::UnityEngine::InputSystem::EnhancedTouch::Touch get_currentTouch()
		{
			return ((::UnityEngine::InputSystem::EnhancedTouch::Touch(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_FINGER_GET_CURRENTTOUCH_OFFSET))(this);
		}

		::UnityEngine::InputSystem::EnhancedTouch::TouchHistory get_touchHistory()
		{
			return ((::UnityEngine::InputSystem::EnhancedTouch::TouchHistory(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_FINGER_GET_TOUCHHISTORY_OFFSET))(this);
		}

		static ::System::Boolean ShouldRecordTouch(::UnityEngine::InputSystem::InputControl* control, ::System::Double time, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::InputControl*, ::System::Double, ::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_FINGER_SHOULDRECORDTOUCH_OFFSET))(control, time, eventPtr);
		}

		::System::Void OnTouchRecorded(::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record record)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_FINGER_ONTOUCHRECORDED_OFFSET))(this, record);
		}

		::UnityEngine::InputSystem::EnhancedTouch::Touch FindTouch(::System::UInt32 uniqueId)
		{
			return ((::UnityEngine::InputSystem::EnhancedTouch::Touch(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_FINGER_FINDTOUCH_OFFSET))(this, uniqueId);
		}

		::UnityEngine::InputSystem::EnhancedTouch::TouchHistory GetTouchHistory(::UnityEngine::InputSystem::EnhancedTouch::Touch touch)
		{
			return ((::UnityEngine::InputSystem::EnhancedTouch::TouchHistory(*)(::PVOID, ::UnityEngine::InputSystem::EnhancedTouch::Touch))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_FINGER_GETTOUCHHISTORY_OFFSET))(this, touch);
		}
	};
}
