#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/InputActionMap_BindingOverrideJson.h"
#include "unitysdk/UnityEngine/InputSystem/InputBinding.h"
#include "unitysdk/UnityEngine/InputSystem/InputBinding_DisplayStringOptions.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::InputSystem { class IInputActionCollection2; }
namespace UnityEngine::InputSystem { class InputAction; }
namespace UnityEngine::InputSystem { class InputActionMap; }
namespace UnityEngine::InputSystem { class InputActionRebindingExtensions_DeferBindingResolutionWrapper; }
namespace UnityEngine::InputSystem { class InputActionRebindingExtensions_RebindingOperation; }
namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_ADDBINDINGOVERRIDEJSONTO_OFFSET UNITYSDK_OFFSET(0x19F74B30)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_APPLYBINDINGOVERRIDESONMATCHINGCONTROLS_1_OFFSET UNITYSDK_OFFSET(0x19F74550)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_APPLYBINDINGOVERRIDESONMATCHINGCONTROLS_OFFSET UNITYSDK_OFFSET(0x19F74260)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_APPLYBINDINGOVERRIDES_OFFSET UNITYSDK_OFFSET(0x19F73980)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_APPLYBINDINGOVERRIDE_1_OFFSET UNITYSDK_OFFSET(0x19F729A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_APPLYBINDINGOVERRIDE_2_OFFSET UNITYSDK_OFFSET(0x19F72BE0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_APPLYBINDINGOVERRIDE_3_OFFSET UNITYSDK_OFFSET(0x19F72E60)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_APPLYBINDINGOVERRIDE_4_OFFSET UNITYSDK_OFFSET(0x19F72A80)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_APPLYBINDINGOVERRIDE_5_OFFSET UNITYSDK_OFFSET(0x19F72CE0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_APPLYBINDINGOVERRIDE_OFFSET UNITYSDK_OFFSET(0x19F72880)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_DEFERBINDINGRESOLUTION_OFFSET UNITYSDK_OFFSET(0x19F737A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_GETBINDINGDISPLAYSTRING_1_OFFSET UNITYSDK_OFFSET(0x19F71F40)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_GETBINDINGDISPLAYSTRING_2_OFFSET UNITYSDK_OFFSET(0x19F72160)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_GETBINDINGDISPLAYSTRING_3_OFFSET UNITYSDK_OFFSET(0x19F72210)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_GETBINDINGDISPLAYSTRING_OFFSET UNITYSDK_OFFSET(0x19F71B60)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_GETBINDINGFORCONTROL_OFFSET UNITYSDK_OFFSET(0x19F717E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_GETBINDINGINDEXFORCONTROL_OFFSET UNITYSDK_OFFSET(0x19F71980)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_GETBINDINGINDEX_1_OFFSET UNITYSDK_OFFSET(0x19F71550)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_GETBINDINGINDEX_2_OFFSET UNITYSDK_OFFSET(0x19F71640)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_GETBINDINGINDEX_OFFSET UNITYSDK_OFFSET(0x19F71430)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_LOADBINDINGOVERRIDESFROMJSONINTERNAL_OFFSET UNITYSDK_OFFSET(0x19F75330)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_LOADBINDINGOVERRIDESFROMJSON_1_OFFSET UNITYSDK_OFFSET(0x19F75630)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_LOADBINDINGOVERRIDESFROMJSON_OFFSET UNITYSDK_OFFSET(0x19F751F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_PERFORMINTERACTIVEREBINDING_OFFSET UNITYSDK_OFFSET(0x19F75790)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REMOVEALLBINDINGOVERRIDES_1_OFFSET UNITYSDK_OFFSET(0x19F737F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REMOVEALLBINDINGOVERRIDES_OFFSET UNITYSDK_OFFSET(0x19F73230)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REMOVEBINDINGOVERRIDES_OFFSET UNITYSDK_OFFSET(0x19F73DB0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REMOVEBINDINGOVERRIDE_1_OFFSET UNITYSDK_OFFSET(0x19F73000)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REMOVEBINDINGOVERRIDE_2_OFFSET UNITYSDK_OFFSET(0x19F73170)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REMOVEBINDINGOVERRIDE_OFFSET UNITYSDK_OFFSET(0x19F72F10)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_SAVEBINDINGOVERRIDESASJSON_1_OFFSET UNITYSDK_OFFSET(0x19F74D70)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_SAVEBINDINGOVERRIDESASJSON_OFFSET UNITYSDK_OFFSET(0x19F74640)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputActionRebindingExtensions_TypeDefinitionIndex = 27434;

	class InputActionRebindingExtensions : public ::System::Object
	{
	public:
		static ::UnityEngine::InputSystem::InputActionRebindingExtensions_DeferBindingResolutionWrapper** StaticGet_s_DeferBindingResolutionWrapper()
		{
			return (::UnityEngine::InputSystem::InputActionRebindingExtensions_DeferBindingResolutionWrapper**)Il2CppClass::FromTypeDefinitionIndex(InputActionRebindingExtensions_TypeDefinitionIndex)->GetStaticField(0x20030);
		}

		static ::System::Int32 GetBindingIndex(::UnityEngine::InputSystem::InputAction* action, ::UnityEngine::InputSystem::InputBinding bindingMask)
		{
			return ((::System::Int32(*)(::UnityEngine::InputSystem::InputAction*, ::UnityEngine::InputSystem::InputBinding))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_GETBINDINGINDEX_OFFSET))(action, bindingMask);
		}

		static ::System::Int32 GetBindingIndex_1(::UnityEngine::InputSystem::InputActionMap* actionMap, ::UnityEngine::InputSystem::InputBinding bindingMask)
		{
			return ((::System::Int32(*)(::UnityEngine::InputSystem::InputActionMap*, ::UnityEngine::InputSystem::InputBinding))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_GETBINDINGINDEX_1_OFFSET))(actionMap, bindingMask);
		}

		static ::System::Int32 GetBindingIndex_2(::UnityEngine::InputSystem::InputAction* action, ::System::String* group, ::System::String* path)
		{
			return ((::System::Int32(*)(::UnityEngine::InputSystem::InputAction*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_GETBINDINGINDEX_2_OFFSET))(action, group, path);
		}

		static ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> GetBindingForControl(::UnityEngine::InputSystem::InputAction* action, ::UnityEngine::InputSystem::InputControl* control)
		{
			return ((::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>(*)(::UnityEngine::InputSystem::InputAction*, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_GETBINDINGFORCONTROL_OFFSET))(action, control);
		}

		static ::System::Int32 GetBindingIndexForControl(::UnityEngine::InputSystem::InputAction* action, ::UnityEngine::InputSystem::InputControl* control)
		{
			return ((::System::Int32(*)(::UnityEngine::InputSystem::InputAction*, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_GETBINDINGINDEXFORCONTROL_OFFSET))(action, control);
		}

		static ::System::String* GetBindingDisplayString(::UnityEngine::InputSystem::InputAction* action, ::UnityEngine::InputSystem::InputBinding_DisplayStringOptions options, ::System::String* group)
		{
			return ((::System::String*(*)(::UnityEngine::InputSystem::InputAction*, ::UnityEngine::InputSystem::InputBinding_DisplayStringOptions, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_GETBINDINGDISPLAYSTRING_OFFSET))(action, options, group);
		}

		static ::System::String* GetBindingDisplayString_1(::UnityEngine::InputSystem::InputAction* action, ::UnityEngine::InputSystem::InputBinding bindingMask, ::UnityEngine::InputSystem::InputBinding_DisplayStringOptions options)
		{
			return ((::System::String*(*)(::UnityEngine::InputSystem::InputAction*, ::UnityEngine::InputSystem::InputBinding, ::UnityEngine::InputSystem::InputBinding_DisplayStringOptions))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_GETBINDINGDISPLAYSTRING_1_OFFSET))(action, bindingMask, options);
		}

		static ::System::String* GetBindingDisplayString_2(::UnityEngine::InputSystem::InputAction* action, ::System::Int32 bindingIndex, ::UnityEngine::InputSystem::InputBinding_DisplayStringOptions options)
		{
			return ((::System::String*(*)(::UnityEngine::InputSystem::InputAction*, ::System::Int32, ::UnityEngine::InputSystem::InputBinding_DisplayStringOptions))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_GETBINDINGDISPLAYSTRING_2_OFFSET))(action, bindingIndex, options);
		}

		static ::System::String* GetBindingDisplayString_3(::UnityEngine::InputSystem::InputAction* action, ::System::Int32 bindingIndex, ::System::String*& deviceLayoutName, ::System::String*& controlPath, ::UnityEngine::InputSystem::InputBinding_DisplayStringOptions options)
		{
			return ((::System::String*(*)(::UnityEngine::InputSystem::InputAction*, ::System::Int32, ::System::String*&, ::System::String*&, ::UnityEngine::InputSystem::InputBinding_DisplayStringOptions))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_GETBINDINGDISPLAYSTRING_3_OFFSET))(action, bindingIndex, deviceLayoutName, controlPath, options);
		}

		static ::System::Void ApplyBindingOverride(::UnityEngine::InputSystem::InputAction* action, ::System::String* newPath, ::System::String* group, ::System::String* path)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputAction*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_APPLYBINDINGOVERRIDE_OFFSET))(action, newPath, group, path);
		}

		static ::System::Void ApplyBindingOverride_1(::UnityEngine::InputSystem::InputAction* action, ::UnityEngine::InputSystem::InputBinding bindingOverride)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputAction*, ::UnityEngine::InputSystem::InputBinding))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_APPLYBINDINGOVERRIDE_1_OFFSET))(action, bindingOverride);
		}

		static ::System::Void ApplyBindingOverride_2(::UnityEngine::InputSystem::InputAction* action, ::System::Int32 bindingIndex, ::UnityEngine::InputSystem::InputBinding bindingOverride)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputAction*, ::System::Int32, ::UnityEngine::InputSystem::InputBinding))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_APPLYBINDINGOVERRIDE_2_OFFSET))(action, bindingIndex, bindingOverride);
		}

		static ::System::Void ApplyBindingOverride_3(::UnityEngine::InputSystem::InputAction* action, ::System::Int32 bindingIndex, ::System::String* path)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputAction*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_APPLYBINDINGOVERRIDE_3_OFFSET))(action, bindingIndex, path);
		}

		static ::System::Int32 ApplyBindingOverride_4(::UnityEngine::InputSystem::InputActionMap* actionMap, ::UnityEngine::InputSystem::InputBinding bindingOverride)
		{
			return ((::System::Int32(*)(::UnityEngine::InputSystem::InputActionMap*, ::UnityEngine::InputSystem::InputBinding))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_APPLYBINDINGOVERRIDE_4_OFFSET))(actionMap, bindingOverride);
		}

		static ::System::Void ApplyBindingOverride_5(::UnityEngine::InputSystem::InputActionMap* actionMap, ::System::Int32 bindingIndex, ::UnityEngine::InputSystem::InputBinding bindingOverride)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputActionMap*, ::System::Int32, ::UnityEngine::InputSystem::InputBinding))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_APPLYBINDINGOVERRIDE_5_OFFSET))(actionMap, bindingIndex, bindingOverride);
		}

		static ::System::Void RemoveBindingOverride(::UnityEngine::InputSystem::InputAction* action, ::System::Int32 bindingIndex)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputAction*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REMOVEBINDINGOVERRIDE_OFFSET))(action, bindingIndex);
		}

		static ::System::Void RemoveBindingOverride_1(::UnityEngine::InputSystem::InputAction* action, ::UnityEngine::InputSystem::InputBinding bindingMask)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputAction*, ::UnityEngine::InputSystem::InputBinding))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REMOVEBINDINGOVERRIDE_1_OFFSET))(action, bindingMask);
		}

		static ::System::Void RemoveBindingOverride_2(::UnityEngine::InputSystem::InputActionMap* actionMap, ::UnityEngine::InputSystem::InputBinding bindingMask)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputActionMap*, ::UnityEngine::InputSystem::InputBinding))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REMOVEBINDINGOVERRIDE_2_OFFSET))(actionMap, bindingMask);
		}

		static ::System::Void RemoveAllBindingOverrides(::UnityEngine::InputSystem::IInputActionCollection2* actions)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::IInputActionCollection2*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REMOVEALLBINDINGOVERRIDES_OFFSET))(actions);
		}

		static ::System::Void RemoveAllBindingOverrides_1(::UnityEngine::InputSystem::InputAction* action)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REMOVEALLBINDINGOVERRIDES_1_OFFSET))(action);
		}

		static ::System::Void ApplyBindingOverrides(::UnityEngine::InputSystem::InputActionMap* actionMap, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>* overrides)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputActionMap*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_APPLYBINDINGOVERRIDES_OFFSET))(actionMap, overrides);
		}

		static ::System::Void RemoveBindingOverrides(::UnityEngine::InputSystem::InputActionMap* actionMap, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>* overrides)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputActionMap*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REMOVEBINDINGOVERRIDES_OFFSET))(actionMap, overrides);
		}

		static ::System::Int32 ApplyBindingOverridesOnMatchingControls(::UnityEngine::InputSystem::InputAction* action, ::UnityEngine::InputSystem::InputControl* control)
		{
			return ((::System::Int32(*)(::UnityEngine::InputSystem::InputAction*, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_APPLYBINDINGOVERRIDESONMATCHINGCONTROLS_OFFSET))(action, control);
		}

		static ::System::Int32 ApplyBindingOverridesOnMatchingControls_1(::UnityEngine::InputSystem::InputActionMap* actionMap, ::UnityEngine::InputSystem::InputControl* control)
		{
			return ((::System::Int32(*)(::UnityEngine::InputSystem::InputActionMap*, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_APPLYBINDINGOVERRIDESONMATCHINGCONTROLS_1_OFFSET))(actionMap, control);
		}

		static ::System::String* SaveBindingOverridesAsJson(::UnityEngine::InputSystem::IInputActionCollection2* actions)
		{
			return ((::System::String*(*)(::UnityEngine::InputSystem::IInputActionCollection2*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_SAVEBINDINGOVERRIDESASJSON_OFFSET))(actions);
		}

		static ::System::String* SaveBindingOverridesAsJson_1(::UnityEngine::InputSystem::InputAction* action)
		{
			return ((::System::String*(*)(::UnityEngine::InputSystem::InputAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_SAVEBINDINGOVERRIDESASJSON_1_OFFSET))(action);
		}

		static ::System::Void AddBindingOverrideJsonTo(::UnityEngine::InputSystem::IInputActionCollection2* actions, ::UnityEngine::InputSystem::InputBinding binding, ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputActionMap_BindingOverrideJson>* list, ::UnityEngine::InputSystem::InputAction* action)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::IInputActionCollection2*, ::UnityEngine::InputSystem::InputBinding, ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputActionMap_BindingOverrideJson>*, ::UnityEngine::InputSystem::InputAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_ADDBINDINGOVERRIDEJSONTO_OFFSET))(actions, binding, list, action);
		}

		static ::System::Void LoadBindingOverridesFromJson(::UnityEngine::InputSystem::IInputActionCollection2* actions, ::System::String* json, ::System::Boolean removeExisting)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::IInputActionCollection2*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_LOADBINDINGOVERRIDESFROMJSON_OFFSET))(actions, json, removeExisting);
		}

		static ::System::Void LoadBindingOverridesFromJson_1(::UnityEngine::InputSystem::InputAction* action, ::System::String* json, ::System::Boolean removeExisting)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputAction*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_LOADBINDINGOVERRIDESFROMJSON_1_OFFSET))(action, json, removeExisting);
		}

		static ::System::Void LoadBindingOverridesFromJsonInternal(::UnityEngine::InputSystem::IInputActionCollection2* actions, ::System::String* json)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::IInputActionCollection2*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_LOADBINDINGOVERRIDESFROMJSONINTERNAL_OFFSET))(actions, json);
		}

		static ::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* PerformInteractiveRebinding(::UnityEngine::InputSystem::InputAction* action, ::System::Int32 bindingIndex)
		{
			return ((::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*(*)(::UnityEngine::InputSystem::InputAction*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_PERFORMINTERACTIVEREBINDING_OFFSET))(action, bindingIndex);
		}

		static ::UnityEngine::InputSystem::InputActionRebindingExtensions_DeferBindingResolutionWrapper* DeferBindingResolution()
		{
			return ((::UnityEngine::InputSystem::InputActionRebindingExtensions_DeferBindingResolutionWrapper*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_DEFERBINDINGRESOLUTION_OFFSET))();
		}
	};
}
