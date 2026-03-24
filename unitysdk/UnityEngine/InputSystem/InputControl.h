#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/InputControl_ControlFlags.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEventPtr.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputStateBlock.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/StateEvent.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/InternedString.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/PrimitiveValue.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/ReadOnlyArray_1.h"

namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine::InputSystem { class InputDevice; }

#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_ADDPROCESSOR_OFFSET UNITYSDK_OFFSET(0x1A9AB9D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_BAKEOFFSETINTOSTATEBLOCKRECURSIVE_OFFSET UNITYSDK_OFFSET(0x1A9AB940)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_CALLFINISHSETUPRECURSIVE_OFFSET UNITYSDK_OFFSET(0x1A9AB8B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_DEBUGGERDISPLAY_OFFSET UNITYSDK_OFFSET(0x1A9AB030)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_EVALUATEMAGNITUDE_1_OFFSET UNITYSDK_OFFSET(0x1A9AB290)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_EVALUATEMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x1A9AB230)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1A9AB620)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GETCHILDCONTROL_OFFSET UNITYSDK_OFFSET(0x1A9AB400)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GETDEVICEINDEX_OFFSET UNITYSDK_OFFSET(0x1A9AB670)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_ALIASES_OFFSET UNITYSDK_OFFSET(0x1A9AADF0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x1A9AAD70)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_CURRENTSTATEPTR_OFFSET UNITYSDK_OFFSET(0x1A9AB270)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_DEFAULTSTATEPTR_OFFSET UNITYSDK_OFFSET(0x1A9AB790)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_DEVICE_OFFSET UNITYSDK_OFFSET(0x1A9AAD50)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1A9AABD0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_DONTRESET_OFFSET UNITYSDK_OFFSET(0x1A9AB840)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_HASDEFAULTSTATE_OFFSET UNITYSDK_OFFSET(0x1A9AB8A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_ISBUTTON_OFFSET UNITYSDK_OFFSET(0x1A9AB810)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_ISCONFIGUPTODATE_OFFSET UNITYSDK_OFFSET(0x1A9AB630)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_ISSETUPFINISHED_OFFSET UNITYSDK_OFFSET(0x1A9AB7E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1A9AAF10)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_LAYOUT_OFFSET UNITYSDK_OFFSET(0x1A9AAD10)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1A9A9D10)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_NOISEMASKPTR_OFFSET UNITYSDK_OFFSET(0x1A9AB7A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_NOISY_OFFSET UNITYSDK_OFFSET(0x1A9AAE40)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x1A9AAD60)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_PATH_OFFSET UNITYSDK_OFFSET(0x1A9AACD0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_PREVIOUSFRAMESTATEPTR_OFFSET UNITYSDK_OFFSET(0x1A9AB770)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_SHORTDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1A9AAC70)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_STATEBLOCK_OFFSET UNITYSDK_OFFSET(0x1A9AAE30)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_STATEOFFSETRELATIVETODEVICEROOT_OFFSET UNITYSDK_OFFSET(0x1A9AB7B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_SYNTHETIC_OFFSET UNITYSDK_OFFSET(0x1A9AAEE0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_USAGES_OFFSET UNITYSDK_OFFSET(0x1A9AADB0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_USESSTATEFROMOTHERCONTROL_OFFSET UNITYSDK_OFFSET(0x1A9AB870)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_VARIANTS_OFFSET UNITYSDK_OFFSET(0x1A9AAD30)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_MAKECHILDPATH_OFFSET UNITYSDK_OFFSET(0x1A9AB560)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_REFRESHCONFIGURATIONIFNEEDED_OFFSET UNITYSDK_OFFSET(0x1A9AAC30)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_REFRESHCONFIGURATION_OFFSET UNITYSDK_OFFSET(0x1A9AB660)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_SET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1A9AAC60)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_SET_DONTRESET_OFFSET UNITYSDK_OFFSET(0x1A9AB850)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_SET_ISBUTTON_OFFSET UNITYSDK_OFFSET(0x1A9AB820)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_SET_ISCONFIGUPTODATE_OFFSET UNITYSDK_OFFSET(0x1A9AB640)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_SET_ISSETUPFINISHED_OFFSET UNITYSDK_OFFSET(0x1A9AB7F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_SET_NOISY_OFFSET UNITYSDK_OFFSET(0x1A9AAE50)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_SET_SHORTDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1A9AACC0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_SET_SYNTHETIC_OFFSET UNITYSDK_OFFSET(0x1A9AAEF0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_SET_USESSTATEFROMOTHERCONTROL_OFFSET UNITYSDK_OFFSET(0x1A9AB880)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_STATEEVENT_FROMUNCHECKED_OFFSET UNITYSDK_OFFSET(0x1A9AABC0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A9AAFC0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_TRYGETCHILDCONTROL_OFFSET UNITYSDK_OFFSET(0x1A9AB360)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_WRITEVALUEFROMBUFFERINTOSTATE_OFFSET UNITYSDK_OFFSET(0x1A9AB2A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_WRITEVALUEFROMOBJECTINTOSTATE_OFFSET UNITYSDK_OFFSET(0x1A9AB300)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9AB610)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputControl_TypeDefinitionIndex = 28430;

	class InputControl : public ::System::Object
	{
	public:
		::UnityEngine::InputSystem::InputControl* m_Parent; // 0x10
		::UnityEngine::InputSystem::Utilities::InternedString m_Variants; // 0x18
		::System::String* m_DisplayName; // 0x28
		::UnityEngine::InputSystem::InputDevice* m_Device; // 0x30
		::System::String* m_ShortDisplayName; // 0x38
		::System::String* m_DisplayNameFromLayout; // 0x40
		::System::String* m_Path; // 0x48
		::System::String* m_ShortDisplayNameFromLayout; // 0x50
		::UnityEngine::InputSystem::Utilities::InternedString m_Name; // 0x58
		::UnityEngine::InputSystem::Utilities::InternedString m_Layout; // 0x68
		::System::Int32 m_AliasCount; // 0x78
		::System::Int32 m_UsageCount; // 0x7C
		::UnityEngine::InputSystem::Utilities::PrimitiveValue m_MinValue; // 0x80
		::UnityEngine::InputSystem::Utilities::PrimitiveValue m_MaxValue; // 0x90
		::System::Int32 m_AliasStartIndex; // 0xA0
		::System::Int32 m_UsageStartIndex; // 0xA4
		::UnityEngine::InputSystem::InputControl_ControlFlags m_ControlFlags; // 0xA8
		::UnityEngine::InputSystem::LowLevel::InputStateBlock m_StateBlock; // 0xAC
		::UnityEngine::InputSystem::Utilities::PrimitiveValue m_DefaultState; // 0xC0
		::System::Int32 m_ChildCount; // 0xD0
		::System::Int32 m_ChildStartIndex; // 0xD4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::InputSystem::LowLevel::StateEvent* StateEvent_FromUnchecked(::UnityEngine::InputSystem::LowLevel::InputEventPtr ptr)
		{
			return ((::UnityEngine::InputSystem::LowLevel::StateEvent*(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_STATEEVENT_FROMUNCHECKED_OFFSET))(ptr);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_NAME_OFFSET))(this);
		}

		::System::String* get_displayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_DISPLAYNAME_OFFSET))(this);
		}

		::System::Void set_displayName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_SET_DISPLAYNAME_OFFSET))(this, value);
		}

		::System::String* get_shortDisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_SHORTDISPLAYNAME_OFFSET))(this);
		}

		::System::Void set_shortDisplayName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_SET_SHORTDISPLAYNAME_OFFSET))(this, value);
		}

		::System::String* get_path()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_PATH_OFFSET))(this);
		}

		::System::String* get_layout()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_LAYOUT_OFFSET))(this);
		}

		::System::String* get_variants()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_VARIANTS_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputDevice* get_device()
		{
			return ((::UnityEngine::InputSystem::InputDevice*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_DEVICE_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputControl* get_parent()
		{
			return ((::UnityEngine::InputSystem::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_PARENT_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*> get_children()
		{
			return ((::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_CHILDREN_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> get_usages()
		{
			return ((::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_USAGES_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> get_aliases()
		{
			return ((::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_ALIASES_OFFSET))(this);
		}

		::UnityEngine::InputSystem::LowLevel::InputStateBlock get_stateBlock()
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputStateBlock(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_STATEBLOCK_OFFSET))(this);
		}

		::System::Boolean get_noisy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_NOISY_OFFSET))(this);
		}

		::System::Void set_noisy(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_SET_NOISY_OFFSET))(this, value);
		}

		::System::Boolean get_synthetic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_SYNTHETIC_OFFSET))(this);
		}

		::System::Void set_synthetic(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_SET_SYNTHETIC_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::InputControl* get_Item(::System::String* path)
		{
			return ((::UnityEngine::InputSystem::InputControl*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_ITEM_OFFSET))(this, path);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_TOSTRING_OFFSET))(this);
		}

		::System::String* DebuggerDisplay()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_DEBUGGERDISPLAY_OFFSET))(this);
		}

		::System::Single EvaluateMagnitude()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_EVALUATEMAGNITUDE_OFFSET))(this);
		}

		::System::Single EvaluateMagnitude_1(::System::Void* statePtr)
		{
			return ((::System::Single(*)(::PVOID, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_EVALUATEMAGNITUDE_1_OFFSET))(this, statePtr);
		}

		::System::Void WriteValueFromBufferIntoState(::System::Void* bufferPtr, ::System::Int32 bufferSize, ::System::Void* statePtr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Void*, ::System::Int32, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_WRITEVALUEFROMBUFFERINTOSTATE_OFFSET))(this, bufferPtr, bufferSize, statePtr);
		}

		::System::Void WriteValueFromObjectIntoState(::System::Object* value, ::System::Void* statePtr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_WRITEVALUEFROMOBJECTINTOSTATE_OFFSET))(this, value, statePtr);
		}

		::UnityEngine::InputSystem::InputControl* TryGetChildControl(::System::String* path)
		{
			return ((::UnityEngine::InputSystem::InputControl*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_TRYGETCHILDCONTROL_OFFSET))(this, path);
		}

		::UnityEngine::InputSystem::InputControl* GetChildControl(::System::String* path)
		{
			return ((::UnityEngine::InputSystem::InputControl*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GETCHILDCONTROL_OFFSET))(this, path);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_FINISHSETUP_OFFSET))(this);
		}

		::System::Void RefreshConfigurationIfNeeded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_REFRESHCONFIGURATIONIFNEEDED_OFFSET))(this);
		}

		::System::Void RefreshConfiguration()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_REFRESHCONFIGURATION_OFFSET))(this);
		}

		::System::Void* get_currentStatePtr()
		{
			return ((::System::Void*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_CURRENTSTATEPTR_OFFSET))(this);
		}

		::System::Void* get_previousFrameStatePtr()
		{
			return ((::System::Void*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_PREVIOUSFRAMESTATEPTR_OFFSET))(this);
		}

		::System::Void* get_defaultStatePtr()
		{
			return ((::System::Void*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_DEFAULTSTATEPTR_OFFSET))(this);
		}

		::System::Void* get_noiseMaskPtr()
		{
			return ((::System::Void*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_NOISEMASKPTR_OFFSET))(this);
		}

		::System::UInt32 get_stateOffsetRelativeToDeviceRoot()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_STATEOFFSETRELATIVETODEVICEROOT_OFFSET))(this);
		}

		::System::Boolean get_isSetupFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_ISSETUPFINISHED_OFFSET))(this);
		}

		::System::Void set_isSetupFinished(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_SET_ISSETUPFINISHED_OFFSET))(this, value);
		}

		::System::Boolean get_isButton()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_ISBUTTON_OFFSET))(this);
		}

		::System::Void set_isButton(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_SET_ISBUTTON_OFFSET))(this, value);
		}

		::System::Boolean get_isConfigUpToDate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_ISCONFIGUPTODATE_OFFSET))(this);
		}

		::System::Void set_isConfigUpToDate(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_SET_ISCONFIGUPTODATE_OFFSET))(this, value);
		}

		::System::Boolean get_dontReset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_DONTRESET_OFFSET))(this);
		}

		::System::Void set_dontReset(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_SET_DONTRESET_OFFSET))(this, value);
		}

		::System::Boolean get_usesStateFromOtherControl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_USESSTATEFROMOTHERCONTROL_OFFSET))(this);
		}

		::System::Void set_usesStateFromOtherControl(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_SET_USESSTATEFROMOTHERCONTROL_OFFSET))(this, value);
		}

		::System::Boolean get_hasDefaultState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_HASDEFAULTSTATE_OFFSET))(this);
		}

		::System::Void CallFinishSetupRecursive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_CALLFINISHSETUPRECURSIVE_OFFSET))(this);
		}

		::System::String* MakeChildPath(::System::String* path)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_MAKECHILDPATH_OFFSET))(this, path);
		}

		::System::Void BakeOffsetIntoStateBlockRecursive(::System::UInt32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_BAKEOFFSETINTOSTATEBLOCKRECURSIVE_OFFSET))(this, offset);
		}

		::System::Int32 GetDeviceIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GETDEVICEINDEX_OFFSET))(this);
		}

		::System::Void AddProcessor(::System::Object* first)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_ADDPROCESSOR_OFFSET))(this, first);
		}
	};
}
