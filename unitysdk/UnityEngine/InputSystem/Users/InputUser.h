#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/InputActionChange.h"
#include "unitysdk/UnityEngine/InputSystem/InputDeviceChange.h"
#include "unitysdk/UnityEngine/InputSystem/Users/InputUserChange.h"
#include "unitysdk/UnityEngine/InputSystem/Users/InputUserPairingOptions.h"
#include "unitysdk/UnityEngine/InputSystem/Users/InputUser_GlobalState.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine::InputSystem { class IInputActionCollection; }
namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem { class InputDevice; }
namespace UnityEngine::InputSystem::Utilities { class ISavedState; }

#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_ACTIVATECONTROLSCHEMEINTERNAL_OFFSET UNITYSDK_OFFSET(0x903F00)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_ACTIVATECONTROLSCHEME_1_OFFSET UNITYSDK_OFFSET(0x903ED0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_ACTIVATECONTROLSCHEME_OFFSET UNITYSDK_OFFSET(0x903E40)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_ADDDEVICETOUSER_OFFSET UNITYSDK_OFFSET(0x19F7C4C0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_ADDUSER_OFFSET UNITYSDK_OFFSET(0x19F7BDA0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_ADD_ONCHANGE_OFFSET UNITYSDK_OFFSET(0x19F777A0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_ADD_ONPREFILTERUNPAIREDDEVICEACTIVITY_OFFSET UNITYSDK_OFFSET(0x19F77BA0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_ADD_ONUNPAIREDDEVICEUSED_OFFSET UNITYSDK_OFFSET(0x19F778A0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_ASSOCIATEACTIONSWITHUSER_OFFSET UNITYSDK_OFFSET(0x903E30)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_CREATEUSERWITHOUTPAIREDDEVICES_OFFSET UNITYSDK_OFFSET(0x19F7BC30)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_DISPOSEANDRESETGLOBALSTATE_OFFSET UNITYSDK_OFFSET(0x19F7E820)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x903F90)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_EQUALS_OFFSET UNITYSDK_OFFSET(0x3275B0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_FINDCONTROLSCHEME_OFFSET UNITYSDK_OFFSET(0x903EC0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_FINDLOSTDEVICE_OFFSET UNITYSDK_OFFSET(0x19F7DF70)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_FINDUSERBYACCOUNT_OFFSET UNITYSDK_OFFSET(0x19F7B950)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_FINDUSERPAIREDTODEVICE_OFFSET UNITYSDK_OFFSET(0x19F7B750)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2C3E30)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GETUNPAIREDINPUTDEVICES_1_OFFSET UNITYSDK_OFFSET(0x19F7B450)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GETUNPAIREDINPUTDEVICES_OFFSET UNITYSDK_OFFSET(0x19F7B3E0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GET_ACTIONS_OFFSET UNITYSDK_OFFSET(0x903BE0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GET_ALL_OFFSET UNITYSDK_OFFSET(0x19F77750)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GET_CONTROLSCHEMEMATCH_OFFSET UNITYSDK_OFFSET(0x903CF0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GET_CONTROLSCHEME_OFFSET UNITYSDK_OFFSET(0x903C60)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GET_HASMISSINGREQUIREDDEVICES_OFFSET UNITYSDK_OFFSET(0x903DA0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GET_ID_OFFSET UNITYSDK_OFFSET(0x2C3E30)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x9038E0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GET_LISTENFORUNPAIREDDEVICEACTIVITY_OFFSET UNITYSDK_OFFSET(0x19F77CA0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GET_LOSTDEVICES_OFFSET UNITYSDK_OFFSET(0x903B40)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GET_PAIREDDEVICES_OFFSET UNITYSDK_OFFSET(0x903AB0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GET_PLATFORMUSERACCOUNTHANDLE_OFFSET UNITYSDK_OFFSET(0x903920)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GET_PLATFORMUSERACCOUNTID_OFFSET UNITYSDK_OFFSET(0x903A30)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GET_PLATFORMUSERACCOUNTNAME_OFFSET UNITYSDK_OFFSET(0x9039B0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GET_VALID_OFFSET UNITYSDK_OFFSET(0x903830)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_HOOKINTOACTIONCHANGE_OFFSET UNITYSDK_OFFSET(0x19F78700)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_HOOKINTODEVICECHANGE_OFFSET UNITYSDK_OFFSET(0x19F7D2A0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_HOOKINTOEVENTS_OFFSET UNITYSDK_OFFSET(0x19F77940)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_INITIATEUSERACCOUNTSELECTIONATPLATFORMLEVEL_OFFSET UNITYSDK_OFFSET(0x19F7D200)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_INITIATEUSERACCOUNTSELECTION_OFFSET UNITYSDK_OFFSET(0x19F7C2D0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_NOTIFY_OFFSET UNITYSDK_OFFSET(0x19F791A0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_ONACTIONCHANGE_OFFSET UNITYSDK_OFFSET(0x19F7D6F0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_ONDEVICECHANGE_OFFSET UNITYSDK_OFFSET(0x19F7D820)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_ONEVENT_OFFSET UNITYSDK_OFFSET(0x19F7E060)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x19F7C2C0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x19F7C2B0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_PERFORMPAIRINGWITHDEVICE_OFFSET UNITYSDK_OFFSET(0x19F7BEB0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_QUERYPAIREDPLATFORMUSERACCOUNT_OFFSET UNITYSDK_OFFSET(0x19F7D540)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_REMOVEDEVICEFROMUSER_OFFSET UNITYSDK_OFFSET(0x19F7A4D0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_REMOVELOSTDEVICESFORUSER_OFFSET UNITYSDK_OFFSET(0x19F7A160)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_REMOVEUSER_OFFSET UNITYSDK_OFFSET(0x19F7AE90)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_REMOVE_ONCHANGE_OFFSET UNITYSDK_OFFSET(0x19F77820)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_REMOVE_ONPREFILTERUNPAIREDDEVICEACTIVITY_OFFSET UNITYSDK_OFFSET(0x19F77C20)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_REMOVE_ONUNPAIREDDEVICEUSED_OFFSET UNITYSDK_OFFSET(0x19F77A00)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_RESETGLOBALS_OFFSET UNITYSDK_OFFSET(0x19F7E940)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_SAVEANDRESETSTATE_OFFSET UNITYSDK_OFFSET(0x19F7E610)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_SET_LISTENFORUNPAIREDDEVICEACTIVITY_OFFSET UNITYSDK_OFFSET(0x19F77CE0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x903E20)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_TRYFINDCONTROLSCHEME_OFFSET UNITYSDK_OFFSET(0x903EB0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_TRYFINDUSERINDEX_1_OFFSET UNITYSDK_OFFSET(0x19F7BA90)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_TRYFINDUSERINDEX_2_OFFSET UNITYSDK_OFFSET(0x19F7B810)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_TRYFINDUSERINDEX_OFFSET UNITYSDK_OFFSET(0x19F771F0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_UNHOOKFROMACTIONCHANGE_OFFSET UNITYSDK_OFFSET(0x19F7D460)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_UNHOOKFROMDEVICECHANGE_OFFSET UNITYSDK_OFFSET(0x19F7D3E0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_UNHOOKFROMDEVICESTATECHANGE_OFFSET UNITYSDK_OFFSET(0x19F77B20)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_UNPAIRDEVICESANDREMOVEUSER_OFFSET UNITYSDK_OFFSET(0x903F50)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_UNPAIRDEVICES_OFFSET UNITYSDK_OFFSET(0x903F40)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_UNPAIRDEVICE_OFFSET UNITYSDK_OFFSET(0x903F30)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_UPDATECONTROLSCHEMEMATCH_OFFSET UNITYSDK_OFFSET(0x19F79460)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_UPDATEPLATFORMUSERACCOUNT_OFFSET UNITYSDK_OFFSET(0x19F7CCC0)

namespace UnityEngine::InputSystem::Users
{
	inline static constexpr unsigned int InputUser_TypeDefinitionIndex = 27636;

	struct alignas(4) InputUser
	{
		static ::UnityEngine::InputSystem::Users::InputUser_GlobalState* StaticGet_s_GlobalState()
		{
			return (::UnityEngine::InputSystem::Users::InputUser_GlobalState*)Il2CppClass::FromTypeDefinitionIndex(InputUser_TypeDefinitionIndex)->GetStaticField(0x200A0);
		}
		// static const ::System::UInt32 InvalidId = 0x0; // 0x0
		::System::UInt32 m_Id; // 0x10

		::System::Boolean get_valid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GET_VALID_OFFSET))(this);
		}

		::System::Int32 get_index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GET_INDEX_OFFSET))(this);
		}

		::System::UInt32 get_id()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GET_ID_OFFSET))(this);
		}

		/*
		::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle> get_platformUserAccountHandle()
		{
			return ((::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GET_PLATFORMUSERACCOUNTHANDLE_OFFSET))(this);
		}
		*/

		::System::String* get_platformUserAccountName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GET_PLATFORMUSERACCOUNTNAME_OFFSET))(this);
		}

		::System::String* get_platformUserAccountId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GET_PLATFORMUSERACCOUNTID_OFFSET))(this);
		}

		/*
		::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> get_pairedDevices()
		{
			return ((::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GET_PAIREDDEVICES_OFFSET))(this);
		}
		*/

		/*
		::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> get_lostDevices()
		{
			return ((::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GET_LOSTDEVICES_OFFSET))(this);
		}
		*/

		::UnityEngine::InputSystem::IInputActionCollection* get_actions()
		{
			return ((::UnityEngine::InputSystem::IInputActionCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GET_ACTIONS_OFFSET))(this);
		}

		/*
		::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme> get_controlScheme()
		{
			return ((::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GET_CONTROLSCHEME_OFFSET))(this);
		}
		*/

		/*
		::UnityEngine::InputSystem::InputControlScheme_MatchResult get_controlSchemeMatch()
		{
			return ((::UnityEngine::InputSystem::InputControlScheme_MatchResult(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GET_CONTROLSCHEMEMATCH_OFFSET))(this);
		}
		*/

		::System::Boolean get_hasMissingRequiredDevices()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GET_HASMISSINGREQUIREDDEVICES_OFFSET))(this);
		}

		/*
		static ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Users::InputUser> get_all()
		{
			return ((::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Users::InputUser>(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GET_ALL_OFFSET))();
		}
		*/

		static ::System::Void add_onChange(::System::Action_3<::UnityEngine::InputSystem::Users::InputUser, ::UnityEngine::InputSystem::Users::InputUserChange, ::UnityEngine::InputSystem::InputDevice*>* value)
		{
			return ((::System::Void(*)(::System::Action_3<::UnityEngine::InputSystem::Users::InputUser, ::UnityEngine::InputSystem::Users::InputUserChange, ::UnityEngine::InputSystem::InputDevice*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_ADD_ONCHANGE_OFFSET))(value);
		}

		static ::System::Void remove_onChange(::System::Action_3<::UnityEngine::InputSystem::Users::InputUser, ::UnityEngine::InputSystem::Users::InputUserChange, ::UnityEngine::InputSystem::InputDevice*>* value)
		{
			return ((::System::Void(*)(::System::Action_3<::UnityEngine::InputSystem::Users::InputUser, ::UnityEngine::InputSystem::Users::InputUserChange, ::UnityEngine::InputSystem::InputDevice*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_REMOVE_ONCHANGE_OFFSET))(value);
		}

		/*
		static ::System::Void add_onUnpairedDeviceUsed(::System::Action_2<::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>* value)
		{
			return ((::System::Void(*)(::System::Action_2<::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_ADD_ONUNPAIREDDEVICEUSED_OFFSET))(value);
		}
		*/

		/*
		static ::System::Void remove_onUnpairedDeviceUsed(::System::Action_2<::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>* value)
		{
			return ((::System::Void(*)(::System::Action_2<::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_REMOVE_ONUNPAIREDDEVICEUSED_OFFSET))(value);
		}
		*/

		/*
		static ::System::Void add_onPrefilterUnpairedDeviceActivity(::System::Func_3<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::System::Boolean>* value)
		{
			return ((::System::Void(*)(::System::Func_3<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_ADD_ONPREFILTERUNPAIREDDEVICEACTIVITY_OFFSET))(value);
		}
		*/

		/*
		static ::System::Void remove_onPrefilterUnpairedDeviceActivity(::System::Func_3<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::System::Boolean>* value)
		{
			return ((::System::Void(*)(::System::Func_3<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_REMOVE_ONPREFILTERUNPAIREDDEVICEACTIVITY_OFFSET))(value);
		}
		*/

		static ::System::Int32 get_listenForUnpairedDeviceActivity()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GET_LISTENFORUNPAIREDDEVICEACTIVITY_OFFSET))();
		}

		static ::System::Void set_listenForUnpairedDeviceActivity(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_SET_LISTENFORUNPAIREDDEVICEACTIVITY_OFFSET))(value);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_TOSTRING_OFFSET))(this);
		}

		::System::Void AssociateActionsWithUser(::UnityEngine::InputSystem::IInputActionCollection* actions)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::IInputActionCollection*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_ASSOCIATEACTIONSWITHUSER_OFFSET))(this, actions);
		}

		/*
		::UnityEngine::InputSystem::Users::InputUser_ControlSchemeChangeSyntax ActivateControlScheme(::System::String* schemeName)
		{
			return ((::UnityEngine::InputSystem::Users::InputUser_ControlSchemeChangeSyntax(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_ACTIVATECONTROLSCHEME_OFFSET))(this, schemeName);
		}
		*/

		/*
		::System::Boolean TryFindControlScheme(::System::String* schemeName, ::UnityEngine::InputSystem::InputControlScheme& scheme)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::InputSystem::InputControlScheme&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_TRYFINDCONTROLSCHEME_OFFSET))(this, schemeName, scheme);
		}
		*/

		/*
		::System::Void FindControlScheme(::System::String* schemeName, ::UnityEngine::InputSystem::InputControlScheme& scheme)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::InputSystem::InputControlScheme&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_FINDCONTROLSCHEME_OFFSET))(this, schemeName, scheme);
		}
		*/

		/*
		::UnityEngine::InputSystem::Users::InputUser_ControlSchemeChangeSyntax ActivateControlScheme_1(::UnityEngine::InputSystem::InputControlScheme scheme)
		{
			return ((::UnityEngine::InputSystem::Users::InputUser_ControlSchemeChangeSyntax(*)(::PVOID, ::UnityEngine::InputSystem::InputControlScheme))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_ACTIVATECONTROLSCHEME_1_OFFSET))(this, scheme);
		}
		*/

		/*
		::System::Void ActivateControlSchemeInternal(::System::Int32 userIndex, ::UnityEngine::InputSystem::InputControlScheme scheme)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::InputSystem::InputControlScheme))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_ACTIVATECONTROLSCHEMEINTERNAL_OFFSET))(this, userIndex, scheme);
		}
		*/

		::System::Void UnpairDevice(::UnityEngine::InputSystem::InputDevice* device)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_UNPAIRDEVICE_OFFSET))(this, device);
		}

		::System::Void UnpairDevices()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_UNPAIRDEVICES_OFFSET))(this);
		}

		static ::System::Void RemoveLostDevicesForUser(::System::Int32 userIndex)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_REMOVELOSTDEVICESFORUSER_OFFSET))(userIndex);
		}

		::System::Void UnpairDevicesAndRemoveUser()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_UNPAIRDEVICESANDREMOVEUSER_OFFSET))(this);
		}

		/*
		static ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*> GetUnpairedInputDevices()
		{
			return ((::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*>(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GETUNPAIREDINPUTDEVICES_OFFSET))();
		}
		*/

		/*
		static ::System::Int32 GetUnpairedInputDevices_1(::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*>& list)
		{
			return ((::System::Int32(*)(::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*>&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GETUNPAIREDINPUTDEVICES_1_OFFSET))(list);
		}
		*/

		/*
		static ::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUser> FindUserPairedToDevice(::UnityEngine::InputSystem::InputDevice* device)
		{
			return ((::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUser>(*)(::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_FINDUSERPAIREDTODEVICE_OFFSET))(device);
		}
		*/

		/*
		static ::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUser> FindUserByAccount(::UnityEngine::InputSystem::Users::InputUserAccountHandle platformUserAccountHandle)
		{
			return ((::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUser>(*)(::UnityEngine::InputSystem::Users::InputUserAccountHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_FINDUSERBYACCOUNT_OFFSET))(platformUserAccountHandle);
		}
		*/

		static ::UnityEngine::InputSystem::Users::InputUser CreateUserWithoutPairedDevices()
		{
			return ((::UnityEngine::InputSystem::Users::InputUser(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_CREATEUSERWITHOUTPAIREDDEVICES_OFFSET))();
		}

		static ::UnityEngine::InputSystem::Users::InputUser PerformPairingWithDevice(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::Users::InputUser user, ::UnityEngine::InputSystem::Users::InputUserPairingOptions options)
		{
			return ((::UnityEngine::InputSystem::Users::InputUser(*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::Users::InputUser, ::UnityEngine::InputSystem::Users::InputUserPairingOptions))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_PERFORMPAIRINGWITHDEVICE_OFFSET))(device, user, options);
		}

		static ::System::Boolean InitiateUserAccountSelection(::System::Int32 userIndex, ::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::Users::InputUserPairingOptions options)
		{
			return ((::System::Boolean(*)(::System::Int32, ::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::Users::InputUserPairingOptions))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_INITIATEUSERACCOUNTSELECTION_OFFSET))(userIndex, device, options);
		}

		::System::Boolean Equals(::UnityEngine::InputSystem::Users::InputUser other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::Users::InputUser))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::UnityEngine::InputSystem::Users::InputUser left, ::UnityEngine::InputSystem::Users::InputUser right)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::Users::InputUser, ::UnityEngine::InputSystem::Users::InputUser))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::InputSystem::Users::InputUser left, ::UnityEngine::InputSystem::Users::InputUser right)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::Users::InputUser, ::UnityEngine::InputSystem::Users::InputUser))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_OP_INEQUALITY_OFFSET))(left, right);
		}

		static ::System::Int32 AddUser()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_ADDUSER_OFFSET))();
		}

		static ::System::Void RemoveUser(::System::Int32 userIndex)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_REMOVEUSER_OFFSET))(userIndex);
		}

		static ::System::Void Notify(::System::Int32 userIndex, ::UnityEngine::InputSystem::Users::InputUserChange change, ::UnityEngine::InputSystem::InputDevice* device)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::InputSystem::Users::InputUserChange, ::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_NOTIFY_OFFSET))(userIndex, change, device);
		}

		static ::System::Int32 TryFindUserIndex(::System::UInt32 userId)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_TRYFINDUSERINDEX_OFFSET))(userId);
		}

		/*
		static ::System::Int32 TryFindUserIndex_1(::UnityEngine::InputSystem::Users::InputUserAccountHandle platformHandle)
		{
			return ((::System::Int32(*)(::UnityEngine::InputSystem::Users::InputUserAccountHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_TRYFINDUSERINDEX_1_OFFSET))(platformHandle);
		}
		*/

		static ::System::Int32 TryFindUserIndex_2(::UnityEngine::InputSystem::InputDevice* device)
		{
			return ((::System::Int32(*)(::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_TRYFINDUSERINDEX_2_OFFSET))(device);
		}

		static ::System::Void AddDeviceToUser(::System::Int32 userIndex, ::UnityEngine::InputSystem::InputDevice* device, ::System::Boolean asLostDevice, ::System::Boolean dontUpdateControlScheme)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::InputSystem::InputDevice*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_ADDDEVICETOUSER_OFFSET))(userIndex, device, asLostDevice, dontUpdateControlScheme);
		}

		static ::System::Void RemoveDeviceFromUser(::System::Int32 userIndex, ::UnityEngine::InputSystem::InputDevice* device, ::System::Boolean asLostDevice)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::InputSystem::InputDevice*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_REMOVEDEVICEFROMUSER_OFFSET))(userIndex, device, asLostDevice);
		}

		static ::System::Void UpdateControlSchemeMatch(::System::Int32 userIndex, ::System::Boolean autoPairMissing)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_UPDATECONTROLSCHEMEMATCH_OFFSET))(userIndex, autoPairMissing);
		}

		static ::System::Int64 UpdatePlatformUserAccount(::System::Int32 userIndex, ::UnityEngine::InputSystem::InputDevice* device)
		{
			return ((::System::Int64(*)(::System::Int32, ::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_UPDATEPLATFORMUSERACCOUNT_OFFSET))(userIndex, device);
		}

		/*
		static ::System::Int64 QueryPairedPlatformUserAccount(::UnityEngine::InputSystem::InputDevice* device, ::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle>& platformAccountHandle, ::System::String*& platformAccountName, ::System::String*& platformAccountId)
		{
			return ((::System::Int64(*)(::UnityEngine::InputSystem::InputDevice*, ::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle>&, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_QUERYPAIREDPLATFORMUSERACCOUNT_OFFSET))(device, platformAccountHandle, platformAccountName, platformAccountId);
		}
		*/

		static ::System::Boolean InitiateUserAccountSelectionAtPlatformLevel(::UnityEngine::InputSystem::InputDevice* device)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_INITIATEUSERACCOUNTSELECTIONATPLATFORMLEVEL_OFFSET))(device);
		}

		static ::System::Void OnActionChange(::System::Object* obj, ::UnityEngine::InputSystem::InputActionChange change)
		{
			return ((::System::Void(*)(::System::Object*, ::UnityEngine::InputSystem::InputActionChange))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_ONACTIONCHANGE_OFFSET))(obj, change);
		}

		static ::System::Void OnDeviceChange(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::InputDeviceChange change)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_ONDEVICECHANGE_OFFSET))(device, change);
		}

		static ::System::Int32 FindLostDevice(::UnityEngine::InputSystem::InputDevice* device, ::System::Int32 startIndex)
		{
			return ((::System::Int32(*)(::UnityEngine::InputSystem::InputDevice*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_FINDLOSTDEVICE_OFFSET))(device, startIndex);
		}

		/*
		static ::System::Void OnEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ::UnityEngine::InputSystem::InputDevice* device)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_ONEVENT_OFFSET))(eventPtr, device);
		}
		*/

		static ::UnityEngine::InputSystem::Utilities::ISavedState* SaveAndResetState()
		{
			return ((::UnityEngine::InputSystem::Utilities::ISavedState*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_SAVEANDRESETSTATE_OFFSET))();
		}

		static ::System::Void HookIntoActionChange()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_HOOKINTOACTIONCHANGE_OFFSET))();
		}

		static ::System::Void UnhookFromActionChange()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_UNHOOKFROMACTIONCHANGE_OFFSET))();
		}

		static ::System::Void HookIntoDeviceChange()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_HOOKINTODEVICECHANGE_OFFSET))();
		}

		static ::System::Void UnhookFromDeviceChange()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_UNHOOKFROMDEVICECHANGE_OFFSET))();
		}

		static ::System::Void HookIntoEvents()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_HOOKINTOEVENTS_OFFSET))();
		}

		static ::System::Void UnhookFromDeviceStateChange()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_UNHOOKFROMDEVICESTATECHANGE_OFFSET))();
		}

		static ::System::Void DisposeAndResetGlobalState()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_DISPOSEANDRESETGLOBALSTATE_OFFSET))();
		}

		static ::System::Void ResetGlobals()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_RESETGLOBALS_OFFSET))();
		}
	};
}
