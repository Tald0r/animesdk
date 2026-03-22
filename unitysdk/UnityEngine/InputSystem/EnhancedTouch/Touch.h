#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/EnhancedTouch/Touch_GlobalState.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputStateHistory_1_Record.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/TouchState.h"
#include "unitysdk/UnityEngine/InputSystem/TouchPhase.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine::InputSystem { class Touchscreen; }
namespace UnityEngine::InputSystem::EnhancedTouch { class Finger; }
namespace UnityEngine::InputSystem::Utilities { class ISavedState; }

#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_ADDTOUCHSCREEN_OFFSET UNITYSDK_OFFSET(0x19EC5330)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_ADD_ONFINGERDOWN_OFFSET UNITYSDK_OFFSET(0x19EC4850)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_ADD_ONFINGERMOVE_OFFSET UNITYSDK_OFFSET(0x19EC4A90)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_ADD_ONFINGERUP_OFFSET UNITYSDK_OFFSET(0x19EC4970)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_BEGINUPDATE_OFFSET UNITYSDK_OFFSET(0x19EC5590)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_CREATEGLOBALSTATE_OFFSET UNITYSDK_OFFSET(0x19EC5620)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x8FEC90)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_EQUALS_OFFSET UNITYSDK_OFFSET(0x8FEC20)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8FED40)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_ACTIVEFINGERS_OFFSET UNITYSDK_OFFSET(0x19EC4740)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_ACTIVETOUCHES_OFFSET UNITYSDK_OFFSET(0x19EC4630)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_BEGAN_OFFSET UNITYSDK_OFFSET(0x8FE470)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_DELTA_OFFSET UNITYSDK_OFFSET(0x8FE940)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_ENDED_OFFSET UNITYSDK_OFFSET(0x8FE5E0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_EXTRADATA_OFFSET UNITYSDK_OFFSET(0x8FEBC0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_FINGERS_OFFSET UNITYSDK_OFFSET(0x19EC46C0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_FINGER_OFFSET UNITYSDK_OFFSET(0x21C7C0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_HISTORY_OFFSET UNITYSDK_OFFSET(0x8FEBF0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_INPROGRESS_OFFSET UNITYSDK_OFFSET(0x8FE4D0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_ISINPROGRESS_OFFSET UNITYSDK_OFFSET(0x8FEA60)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_ISTAP_OFFSET UNITYSDK_OFFSET(0x8FEA00)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_MAXHISTORYLENGTHPERFINGER_OFFSET UNITYSDK_OFFSET(0x19EC4BB0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_PHASE_OFFSET UNITYSDK_OFFSET(0x8FE410)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_PRESSURE_OFFSET UNITYSDK_OFFSET(0x8FE700)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x8FE760)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_SCREENPOSITION_OFFSET UNITYSDK_OFFSET(0x8FE880)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_SCREENS_OFFSET UNITYSDK_OFFSET(0x19EC47D0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_SCREEN_OFFSET UNITYSDK_OFFSET(0x8FE860)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_STARTSCREENPOSITION_OFFSET UNITYSDK_OFFSET(0x8FE8E0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x8FE7C0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_STATE_OFFSET UNITYSDK_OFFSET(0x8FEB60)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_TAPCOUNT_OFFSET UNITYSDK_OFFSET(0x8FE9A0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_TIME_OFFSET UNITYSDK_OFFSET(0x8FE820)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_TOUCHID_OFFSET UNITYSDK_OFFSET(0x8FE6A0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x8FEB30)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_UPDATESTEPCOUNT_OFFSET UNITYSDK_OFFSET(0x8FEAD0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_VALID_OFFSET UNITYSDK_OFFSET(0x8FE3C0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_REMOVETOUCHSCREEN_OFFSET UNITYSDK_OFFSET(0x19EC5470)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_REMOVE_ONFINGERDOWN_OFFSET UNITYSDK_OFFSET(0x19EC48E0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_REMOVE_ONFINGERMOVE_OFFSET UNITYSDK_OFFSET(0x19EC4B20)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_REMOVE_ONFINGERUP_OFFSET UNITYSDK_OFFSET(0x19EC4A00)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_SAVEANDRESETSTATE_OFFSET UNITYSDK_OFFSET(0x19EC5660)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8FEC10)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH__CCTOR_OFFSET UNITYSDK_OFFSET(0x19EC58D0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH__CTOR_OFFSET UNITYSDK_OFFSET(0x3ED010)

namespace UnityEngine::InputSystem::EnhancedTouch
{
	inline static constexpr unsigned int Touch_TypeDefinitionIndex = 27696;

	struct alignas(8) Touch
	{
		static ::UnityEngine::InputSystem::EnhancedTouch::Touch_GlobalState* StaticGet_s_GlobalState()
		{
			return (::UnityEngine::InputSystem::EnhancedTouch::Touch_GlobalState*)Il2CppClass::FromTypeDefinitionIndex(Touch_TypeDefinitionIndex)->GetStaticField(0x1FD30);
		}
		::UnityEngine::InputSystem::EnhancedTouch::Finger* m_Finger; // 0x10
		::UnityEngine::InputSystem::LowLevel::InputStateHistory_1_Record<::UnityEngine::InputSystem::LowLevel::TouchState> m_TouchRecord; // 0x18

		::System::Void _ctor(::UnityEngine::InputSystem::EnhancedTouch::Finger* finger, ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1_Record<::UnityEngine::InputSystem::LowLevel::TouchState> touchRecord)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::EnhancedTouch::Finger*, ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1_Record<::UnityEngine::InputSystem::LowLevel::TouchState>))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH__CTOR_OFFSET))(this, finger, touchRecord);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH__CCTOR_OFFSET))();
		}

		::System::Boolean get_valid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_VALID_OFFSET))(this);
		}

		::UnityEngine::InputSystem::EnhancedTouch::Finger* get_finger()
		{
			return ((::UnityEngine::InputSystem::EnhancedTouch::Finger*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_FINGER_OFFSET))(this);
		}

		::UnityEngine::InputSystem::TouchPhase get_phase()
		{
			return ((::UnityEngine::InputSystem::TouchPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_PHASE_OFFSET))(this);
		}

		::System::Boolean get_began()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_BEGAN_OFFSET))(this);
		}

		::System::Boolean get_inProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_INPROGRESS_OFFSET))(this);
		}

		::System::Boolean get_ended()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_ENDED_OFFSET))(this);
		}

		::System::Int32 get_touchId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_TOUCHID_OFFSET))(this);
		}

		::System::Single get_pressure()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_PRESSURE_OFFSET))(this);
		}

		/*
		::UnityEngine::Vector2 get_radius()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_RADIUS_OFFSET))(this);
		}
		*/

		::System::Double get_startTime()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_STARTTIME_OFFSET))(this);
		}

		::System::Double get_time()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_TIME_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Touchscreen* get_screen()
		{
			return ((::UnityEngine::InputSystem::Touchscreen*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_SCREEN_OFFSET))(this);
		}

		/*
		::UnityEngine::Vector2 get_screenPosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_SCREENPOSITION_OFFSET))(this);
		}
		*/

		/*
		::UnityEngine::Vector2 get_startScreenPosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_STARTSCREENPOSITION_OFFSET))(this);
		}
		*/

		/*
		::UnityEngine::Vector2 get_delta()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_DELTA_OFFSET))(this);
		}
		*/

		::System::Int32 get_tapCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_TAPCOUNT_OFFSET))(this);
		}

		::System::Boolean get_isTap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_ISTAP_OFFSET))(this);
		}

		::System::Boolean get_isInProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_ISINPROGRESS_OFFSET))(this);
		}

		::System::UInt32 get_updateStepCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_UPDATESTEPCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_uniqueId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_UNIQUEID_OFFSET))(this);
		}

		::UnityEngine::InputSystem::LowLevel::TouchState& get_state()
		{
			return ((::UnityEngine::InputSystem::LowLevel::TouchState&(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_STATE_OFFSET))(this);
		}

		/*
		::UnityEngine::InputSystem::EnhancedTouch::Touch_ExtraDataPerTouchState& get_extraData()
		{
			return ((::UnityEngine::InputSystem::EnhancedTouch::Touch_ExtraDataPerTouchState&(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_EXTRADATA_OFFSET))(this);
		}
		*/

		/*
		::UnityEngine::InputSystem::EnhancedTouch::TouchHistory get_history()
		{
			return ((::UnityEngine::InputSystem::EnhancedTouch::TouchHistory(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_HISTORY_OFFSET))(this);
		}
		*/

		/*
		static ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::EnhancedTouch::Touch> get_activeTouches()
		{
			return ((::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_ACTIVETOUCHES_OFFSET))();
		}
		*/

		/*
		static ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*> get_fingers()
		{
			return ((::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_FINGERS_OFFSET))();
		}
		*/

		/*
		static ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*> get_activeFingers()
		{
			return ((::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_ACTIVEFINGERS_OFFSET))();
		}
		*/

		static ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Touchscreen*>* get_screens()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Touchscreen*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_SCREENS_OFFSET))();
		}

		static ::System::Void add_onFingerDown(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_ADD_ONFINGERDOWN_OFFSET))(value);
		}

		static ::System::Void remove_onFingerDown(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_REMOVE_ONFINGERDOWN_OFFSET))(value);
		}

		static ::System::Void add_onFingerUp(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_ADD_ONFINGERUP_OFFSET))(value);
		}

		static ::System::Void remove_onFingerUp(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_REMOVE_ONFINGERUP_OFFSET))(value);
		}

		static ::System::Void add_onFingerMove(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_ADD_ONFINGERMOVE_OFFSET))(value);
		}

		static ::System::Void remove_onFingerMove(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_REMOVE_ONFINGERMOVE_OFFSET))(value);
		}

		static ::System::Int32 get_maxHistoryLengthPerFinger()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_MAXHISTORYLENGTHPERFINGER_OFFSET))();
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::InputSystem::EnhancedTouch::Touch other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::EnhancedTouch::Touch))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Void AddTouchscreen(::UnityEngine::InputSystem::Touchscreen* screen)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::Touchscreen*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_ADDTOUCHSCREEN_OFFSET))(screen);
		}

		static ::System::Void RemoveTouchscreen(::UnityEngine::InputSystem::Touchscreen* screen)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::Touchscreen*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_REMOVETOUCHSCREEN_OFFSET))(screen);
		}

		static ::System::Void BeginUpdate()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_BEGINUPDATE_OFFSET))();
		}

		static ::UnityEngine::InputSystem::EnhancedTouch::Touch_GlobalState CreateGlobalState()
		{
			return ((::UnityEngine::InputSystem::EnhancedTouch::Touch_GlobalState(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_CREATEGLOBALSTATE_OFFSET))();
		}

		static ::UnityEngine::InputSystem::Utilities::ISavedState* SaveAndResetState()
		{
			return ((::UnityEngine::InputSystem::Utilities::ISavedState*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_SAVEANDRESETSTATE_OFFSET))();
		}
	};
}
