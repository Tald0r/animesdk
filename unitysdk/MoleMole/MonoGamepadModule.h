#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_9F36F0CF0780ECE5.h"
#include "unitysdk/MoleMole/GamepadHintKeyConfig.h"
#include "unitysdk/MoleMole/GamepadNavDirConfig.h"
#include "unitysdk/MoleMole/GamepadNavTargetConfig.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/MonoGamepadModule_Enum_3_AAD7E8988061626F.h"
#include "unitysdk/MoleMole/MonoGamepadModule_Enum_3_E1ECA05187CF4721.h"
#include "unitysdk/MoleMole/MonoGamepadModule_Struct_2_858AFA8F6CDBEA34.h"
#include "unitysdk/MoleMole/MonoGamepadModule_Struct_2_858AFA8F6CDBEA34_1.h"
#include "unitysdk/MoleMole/MonoGamepadModule_Struct_2_858AFA8F6CDBEA34_2.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIBaseController; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOGAMEPADMODULE_AWAKE_OFFSET UNITYSDK_OFFSET(0xA034FC0)
#define MOLEMOLE_MONOGAMEPADMODULE_CANNAVIGATETO_OFFSET UNITYSDK_OFFSET(0xA0379B0)
#define MOLEMOLE_MONOGAMEPADMODULE_CLEARCONTROLLER_OFFSET UNITYSDK_OFFSET(0xA035CC0)
#define MOLEMOLE_MONOGAMEPADMODULE_CLEARFOCUSRECORDSTATE_OFFSET UNITYSDK_OFFSET(0xA035F50)
#define MOLEMOLE_MONOGAMEPADMODULE_CLEARMANAGEDOBJECTS_OFFSET UNITYSDK_OFFSET(0xA0387B0)
#define MOLEMOLE_MONOGAMEPADMODULE_DOCOPYRESET_OFFSET UNITYSDK_OFFSET(0xA038820)
#define MOLEMOLE_MONOGAMEPADMODULE_GET_CONTROLLER_OFFSET UNITYSDK_OFFSET(0xA034DC0)
#define MOLEMOLE_MONOGAMEPADMODULE_GET_FOCUSONENABLE_OFFSET UNITYSDK_OFFSET(0xA034C90)
#define MOLEMOLE_MONOGAMEPADMODULE_GET_FOCUSRECORDSTATE_OFFSET UNITYSDK_OFFSET(0xA034BF0)
#define MOLEMOLE_MONOGAMEPADMODULE_GET_FOCUSSTATE_OFFSET UNITYSDK_OFFSET(0xA034C00)
#define MOLEMOLE_MONOGAMEPADMODULE_GET_FORCEIGNOREBENAVIGATED_OFFSET UNITYSDK_OFFSET(0xA034E10)
#define MOLEMOLE_MONOGAMEPADMODULE_GET_HINTKEYS_OFFSET UNITYSDK_OFFSET(0xA034D20)
#define MOLEMOLE_MONOGAMEPADMODULE_GET_INPUTHANDLEORDER_OFFSET UNITYSDK_OFFSET(0xA034CF0)
#define MOLEMOLE_MONOGAMEPADMODULE_GET_ISCLEAR_OFFSET UNITYSDK_OFFSET(0xA034DF0)
#define MOLEMOLE_MONOGAMEPADMODULE_GET_ISCOLLECTED_OFFSET UNITYSDK_OFFSET(0xA034DA0)
#define MOLEMOLE_MONOGAMEPADMODULE_GET_ISFOCUSED_OFFSET UNITYSDK_OFFSET(0xA034C10)
#define MOLEMOLE_MONOGAMEPADMODULE_GET_ISREGISTERED_OFFSET UNITYSDK_OFFSET(0xA034D30)
#define MOLEMOLE_MONOGAMEPADMODULE_GET_MODULENAME_OFFSET UNITYSDK_OFFSET(0xA034CB0)
#define MOLEMOLE_MONOGAMEPADMODULE_GET_PARENTMODULE_OFFSET UNITYSDK_OFFSET(0xA034DD0)
#define MOLEMOLE_MONOGAMEPADMODULE_GET_PRIORITYLEVEL_OFFSET UNITYSDK_OFFSET(0xA034CD0)
#define MOLEMOLE_MONOGAMEPADMODULE_GET_PRIORITYSORTINDEX_OFFSET UNITYSDK_OFFSET(0xA034D00)
#define MOLEMOLE_MONOGAMEPADMODULE_HANDLEINPUTACTION_OFFSET UNITYSDK_OFFSET(0xA037B30)
#define MOLEMOLE_MONOGAMEPADMODULE_ISFUNCTIONENABLED_OFFSET UNITYSDK_OFFSET(0xA037AC0)
#define MOLEMOLE_MONOGAMEPADMODULE_ISTEMPWORKABLE_OFFSET UNITYSDK_OFFSET(0xA034F60)
#define MOLEMOLE_MONOGAMEPADMODULE_ISWORKABLE_OFFSET UNITYSDK_OFFSET(0xA034E30)
#define MOLEMOLE_MONOGAMEPADMODULE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA035870)
#define MOLEMOLE_MONOGAMEPADMODULE_MANUALAWAKE_OFFSET UNITYSDK_OFFSET(0xA035960)
#define MOLEMOLE_MONOGAMEPADMODULE_MANUALDISABLE_OFFSET UNITYSDK_OFFSET(0xA035BD0)
#define MOLEMOLE_MONOGAMEPADMODULE_MANUALENABLE_OFFSET UNITYSDK_OFFSET(0xA035AD0)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_0672F56933763C8F_OFFSET UNITYSDK_OFFSET(0xA03A900)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_079E6D0FB3AE13F6_OFFSET UNITYSDK_OFFSET(0xA037CD0)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xA038950)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0xA0369B0)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0xA035760)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_3574512695A597AB_OFFSET UNITYSDK_OFFSET(0xA039410)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xA034F00)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_3D7E9840CF105C69_OFFSET UNITYSDK_OFFSET(0xA036A90)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xA0376F0)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_45B10FCB019A3626_OFFSET UNITYSDK_OFFSET(0xA039F50)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_4AB0A9FFA308764A_OFFSET UNITYSDK_OFFSET(0xA03A600)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_6796390E2F1B97B3_OFFSET UNITYSDK_OFFSET(0xA038A90)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_7ADD2AEDA6C3A344_OFFSET UNITYSDK_OFFSET(0xA039AA0)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_7CD5ED7244A17BA2_OFFSET UNITYSDK_OFFSET(0xA037D40)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0xA036B90)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0xA036110)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_9681042564541CD6_2_OFFSET UNITYSDK_OFFSET(0xA035130)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_9681042564541CD6_3_OFFSET UNITYSDK_OFFSET(0xA0351C0)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xA036920)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_9765352E01408D38_OFFSET UNITYSDK_OFFSET(0xA0353D0)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_978CA500AF6757AB_OFFSET UNITYSDK_OFFSET(0xA0377F0)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_A4D5D187E0A81966_OFFSET UNITYSDK_OFFSET(0xA036330)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_AA2B8A63BBDC1282_OFFSET UNITYSDK_OFFSET(0xA036B20)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xA035330)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_B3BCC2F0A48A1F82_1_OFFSET UNITYSDK_OFFSET(0xA038E10)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_B3BCC2F0A48A1F82_2_OFFSET UNITYSDK_OFFSET(0xA0392B0)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_B3BCC2F0A48A1F82_OFFSET UNITYSDK_OFFSET(0xA039DC0)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_C35C591645FDA452_OFFSET UNITYSDK_OFFSET(0xA037F90)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xA036800)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xA036860)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0xA0368C0)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA0367A0)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_CC7CF349AB2935F3_1_OFFSET UNITYSDK_OFFSET(0xA038F70)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_CC7CF349AB2935F3_OFFSET UNITYSDK_OFFSET(0xA038B00)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_D8B09EAA4E7944A9_OFFSET UNITYSDK_OFFSET(0xA037000)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_E7E6FE697A3E2EE3_1_OFFSET UNITYSDK_OFFSET(0xA039C70)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_E7E6FE697A3E2EE3_2_OFFSET UNITYSDK_OFFSET(0xA038CE0)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_E7E6FE697A3E2EE3_OFFSET UNITYSDK_OFFSET(0xA039160)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_ECA703745FE28665_OFFSET UNITYSDK_OFFSET(0xA037770)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_F1D40B323FAD3DCE_OFFSET UNITYSDK_OFFSET(0xA03A8F0)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_FBF0E5FE07DE8500_OFFSET UNITYSDK_OFFSET(0xA0374A0)
#define MOLEMOLE_MONOGAMEPADMODULE_MUTEFOCUSRECORD_OFFSET UNITYSDK_OFFSET(0xA0361A0)
#define MOLEMOLE_MONOGAMEPADMODULE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA035800)
#define MOLEMOLE_MONOGAMEPADMODULE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA035680)
#define MOLEMOLE_MONOGAMEPADMODULE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA035250)
#define MOLEMOLE_MONOGAMEPADMODULE_PUBLICGETGAMEPADSELECTABLE_OFFSET UNITYSDK_OFFSET(0xA038A10)
#define MOLEMOLE_MONOGAMEPADMODULE_RECORDFOCUSSTATE_OFFSET UNITYSDK_OFFSET(0xA036260)
#define MOLEMOLE_MONOGAMEPADMODULE_RESOLVEMANAGEDOBJECTS_OFFSET UNITYSDK_OFFSET(0xA036E00)
#define MOLEMOLE_MONOGAMEPADMODULE_SETCONTROLLER_OFFSET UNITYSDK_OFFSET(0xA0358F0)
#define MOLEMOLE_MONOGAMEPADMODULE_SETFOCUSBYREGION_OFFSET UNITYSDK_OFFSET(0xA036680)
#define MOLEMOLE_MONOGAMEPADMODULE_SETFOCUS_OFFSET UNITYSDK_OFFSET(0xA035FC0)
#define MOLEMOLE_MONOGAMEPADMODULE_SETNAVIGATETARGET_OFFSET UNITYSDK_OFFSET(0xA038500)
#define MOLEMOLE_MONOGAMEPADMODULE_SET_FOCUSONENABLE_OFFSET UNITYSDK_OFFSET(0xA034CA0)
#define MOLEMOLE_MONOGAMEPADMODULE_SET_FORCEIGNOREBENAVIGATED_OFFSET UNITYSDK_OFFSET(0xA034E20)
#define MOLEMOLE_MONOGAMEPADMODULE_SET_ISCLEAR_OFFSET UNITYSDK_OFFSET(0xA034E00)
#define MOLEMOLE_MONOGAMEPADMODULE_SET_ISCOLLECTED_OFFSET UNITYSDK_OFFSET(0xA034DB0)
#define MOLEMOLE_MONOGAMEPADMODULE_SET_MODULENAME_OFFSET UNITYSDK_OFFSET(0xA034CC0)
#define MOLEMOLE_MONOGAMEPADMODULE_SET_PARENTMODULE_OFFSET UNITYSDK_OFFSET(0xA034DE0)
#define MOLEMOLE_MONOGAMEPADMODULE_SET_PRIORITYLEVEL_OFFSET UNITYSDK_OFFSET(0xA034CE0)
#define MOLEMOLE_MONOGAMEPADMODULE_SET_PRIORITYSORTINDEX_OFFSET UNITYSDK_OFFSET(0xA034D10)
#define MOLEMOLE_MONOGAMEPADMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xA039F20)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepadModule_TypeDefinitionIndex = 57874;

	class MonoGamepadModule : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean Field_5_0; // 0x18
		::MoleMole::MonoGamepadModule_Enum_3_AAD7E8988061626F Field_5_1; // 0x1C
		::MoleMole::MonoGamepadModule_Enum_3_E1ECA05187CF4721 Field_5_2; // 0x20
		::System::String* _moduleName; // 0x28
		::System::Boolean _focusOnEnable; // 0x30
		::System::UInt32 _priorityLevel; // 0x34
		::System::UInt32 _inputHandleOrder; // 0x38
		::System::Boolean WorkOnAllLayoutPlatform; // 0x3C
		::Il2CppArray<::UnityEngine::GameObject*>* _managedObjects; // 0x40
		::Il2CppArray<::UnityEngine::GameObject*>* _onFocusDisableObjects; // 0x48
		::System::Collections::Generic::List_1<::MoleMole::GamepadHintKeyConfig>* _hintKeys; // 0x50
		::MoleMole::GamepadNavTargetConfig _upNavTarget; // 0x58
		::MoleMole::GamepadNavTargetConfig _downNavTarget; // 0x68
		::MoleMole::GamepadNavTargetConfig _leftNavTarget; // 0x78
		::MoleMole::GamepadNavTargetConfig _RightNavTarget; // 0x88
		::MoleMole::GamepadNavTargetConfig _lostFocusNavTarget; // 0x98
		::System::Boolean _focusImmediately; // 0xA8
		::System::Collections::Generic::List_1<::MoleMole::GamepadNavDirConfig>* _navEvents; // 0xB0
		::System::Int32 Field_5_18; // 0xB8
		::System::Action_1<::System::Boolean>* OnFocus; // 0xC0
		::System::Boolean Field_5_20; // 0xC8
		::MoleMole::UIBaseController* Field_5_21; // 0xD0
		::MoleMole::MonoGamepadModule* Field_5_22; // 0xD8
		::System::Boolean Field_5_23; // 0xE0
		::System::Boolean Field_5_24; // 0xE1
		::System::Boolean Field_5_25; // 0xE2
		::System::Boolean Field_5_26; // 0xE3
		::System::Boolean Field_5_27; // 0xE4
		::System::Boolean Field_5_28; // 0xE5

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE__CTOR_OFFSET))(this);
		}

		::MoleMole::MonoGamepadModule_Enum_3_AAD7E8988061626F get_focusRecordState()
		{
			return ((::MoleMole::MonoGamepadModule_Enum_3_AAD7E8988061626F(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_GET_FOCUSRECORDSTATE_OFFSET))(this);
		}

		::MoleMole::MonoGamepadModule_Enum_3_E1ECA05187CF4721 get_focusState()
		{
			return ((::MoleMole::MonoGamepadModule_Enum_3_E1ECA05187CF4721(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_GET_FOCUSSTATE_OFFSET))(this);
		}

		::System::Boolean get_isFocused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_GET_ISFOCUSED_OFFSET))(this);
		}

		::System::Boolean get_FocusOnEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_GET_FOCUSONENABLE_OFFSET))(this);
		}

		::System::Void set_FocusOnEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_SET_FOCUSONENABLE_OFFSET))(this, a1);
		}

		::System::String* get_moduleName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_GET_MODULENAME_OFFSET))(this);
		}

		::System::Void set_moduleName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_SET_MODULENAME_OFFSET))(this, a1);
		}

		::System::UInt32 get_priorityLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_GET_PRIORITYLEVEL_OFFSET))(this);
		}

		::System::Void set_priorityLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_SET_PRIORITYLEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_InputHandleOrder()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_GET_INPUTHANDLEORDER_OFFSET))(this);
		}

		::System::Int32 get_PrioritySortIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_GET_PRIORITYSORTINDEX_OFFSET))(this);
		}

		::System::Void set_PrioritySortIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_SET_PRIORITYSORTINDEX_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::MoleMole::GamepadHintKeyConfig>* get_hintKeys()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::GamepadHintKeyConfig>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_GET_HINTKEYS_OFFSET))(this);
		}

		::System::Boolean get_IsRegistered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_GET_ISREGISTERED_OFFSET))(this);
		}

		::System::Boolean get_IsCollected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_GET_ISCOLLECTED_OFFSET))(this);
		}

		::System::Void set_IsCollected(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_SET_ISCOLLECTED_OFFSET))(this, a1);
		}

		::MoleMole::UIBaseController* get_controller()
		{
			return ((::MoleMole::UIBaseController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_GET_CONTROLLER_OFFSET))(this);
		}

		::MoleMole::MonoGamepadModule* get_parentModule()
		{
			return ((::MoleMole::MonoGamepadModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_GET_PARENTMODULE_OFFSET))(this);
		}

		::System::Void set_parentModule(::MoleMole::MonoGamepadModule* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_SET_PARENTMODULE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsClear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_GET_ISCLEAR_OFFSET))(this);
		}

		::System::Void set_IsClear(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_SET_ISCLEAR_OFFSET))(this, a1);
		}

		::System::Boolean get_ForceIgnoreBeNavigated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_GET_FORCEIGNOREBENAVIGATED_OFFSET))(this);
		}

		::System::Void set_ForceIgnoreBeNavigated(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_SET_FORCEIGNOREBENAVIGATED_OFFSET))(this, a1);
		}

		::System::Boolean IsWorkable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_ISWORKABLE_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Boolean IsTempWorkable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_ISTEMPWORKABLE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_ONDESTROY_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_LATEUPDATE_OFFSET))(this);
		}

		::System::Void SetController(::MoleMole::UIBaseController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_SETCONTROLLER_OFFSET))(this, a1);
		}

		::System::Void ManualAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_MANUALAWAKE_OFFSET))(this);
		}

		::System::Void ManualEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_MANUALENABLE_OFFSET))(this);
		}

		::System::Void ManualDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_MANUALDISABLE_OFFSET))(this);
		}

		::System::Void ClearController()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_CLEARCONTROLLER_OFFSET))(this);
		}

		::System::Void MuteFocusRecord(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_MUTEFOCUSRECORD_OFFSET))(this, a1);
		}

		::System::Void RecordFocusState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_RECORDFOCUSSTATE_OFFSET))(this);
		}

		::System::Void ClearFocusRecordState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_CLEARFOCUSRECORDSTATE_OFFSET))(this);
		}

		::System::Void SetFocus(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_SETFOCUS_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetFocusByRegion(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_SETFOCUSBYREGION_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_CA373AA1C7054598_2_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_CA373AA1C7054598_3_OFFSET))(this);
		}

		::System::Void Method_5_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_5_19CCC07C980409E4(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_19CCC07C980409E4_OFFSET))(this, a1);
		}

		::System::Void Method_5_3D7E9840CF105C69(::MoleMole::MonoGamepadModule* a1, ::Enum_3_9F36F0CF0780ECE5 a2, ::MoleMole::InputActionEvent a3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::Enum_3_9F36F0CF0780ECE5, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_3D7E9840CF105C69_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_AA2B8A63BBDC1282(::MoleMole::MonoGamepadModule* a1, ::Enum_3_9F36F0CF0780ECE5 a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::Enum_3_9F36F0CF0780ECE5))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_AA2B8A63BBDC1282_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_8F7825DAFFB9B517()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_8F7825DAFFB9B517_OFFSET))(this);
		}

		::System::Void Method_5_D8B09EAA4E7944A9(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_D8B09EAA4E7944A9_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Boolean Method_5_ECA703745FE28665(::MoleMole::InputActionEvent a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_ECA703745FE28665_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_978CA500AF6757AB(::MoleMole::InputActionEvent a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_978CA500AF6757AB_OFFSET))(this, a1);
		}

		::System::Boolean CanNavigateTo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_CANNAVIGATETO_OFFSET))(this);
		}

		::System::Boolean IsFunctionEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_ISFUNCTIONENABLED_OFFSET))(this);
		}

		::System::Boolean HandleInputAction(::MoleMole::InputActionEvent a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_HANDLEINPUTACTION_OFFSET))(this, a1);
		}

		::Enum_3_9F36F0CF0780ECE5 Method_5_079E6D0FB3AE13F6(::MoleMole::InputLogicEventType a1)
		{
			return ((::Enum_3_9F36F0CF0780ECE5(*)(::PVOID, ::MoleMole::InputLogicEventType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_079E6D0FB3AE13F6_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_7CD5ED7244A17BA2(::MoleMole::InputActionEvent a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_7CD5ED7244A17BA2_OFFSET))(this, a1);
		}

		::System::Void SetNavigateTarget(::Enum_3_9F36F0CF0780ECE5 a1, ::MoleMole::MonoGamepadModule* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_9F36F0CF0780ECE5, ::MoleMole::MonoGamepadModule*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_SETNAVIGATETARGET_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ResolveManagedObjects(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_RESOLVEMANAGEDOBJECTS_OFFSET))(this, a1);
		}

		::System::Void ClearManagedObjects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_CLEARMANAGEDOBJECTS_OFFSET))(this);
		}

		::System::Void DoCopyReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_DOCOPYRESET_OFFSET))(this);
		}

		::System::Boolean Method_5_1808E1CF7A125519()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_1808E1CF7A125519_OFFSET))(this);
		}

		::MoleMole::MonoGamepadSelectable* PublicGetGamepadSelectable(::UnityEngine::Transform* a1)
		{
			return ((::MoleMole::MonoGamepadSelectable*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_PUBLICGETGAMEPADSELECTABLE_OFFSET))(this, a1);
		}

		::MoleMole::MonoGamepadSelectable* Method_5_6796390E2F1B97B3(::UnityEngine::Transform* a1)
		{
			return ((::MoleMole::MonoGamepadSelectable*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_6796390E2F1B97B3_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_CC7CF349AB2935F3(::UnityEngine::Transform* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_CC7CF349AB2935F3_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_5_CC7CF349AB2935F3_1(::UnityEngine::Transform* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_CC7CF349AB2935F3_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_5_7ADD2AEDA6C3A344(::UnityEngine::Transform* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_7ADD2AEDA6C3A344_OFFSET))(this, a1, a2);
		}

		static ::System::Void Method_5_3574512695A597AB()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_3574512695A597AB_OFFSET))();
		}

		::System::Void Method_5_B1936CE4DA97AA45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_B1936CE4DA97AA45_OFFSET))(this);
		}

		::System::Void Method_5_A4D5D187E0A81966(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_A4D5D187E0A81966_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Nullable_1<::System::Boolean> Method_5_B3BCC2F0A48A1F82(::MoleMole::MonoGamepadModule_Struct_2_858AFA8F6CDBEA34& a1)
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::MoleMole::MonoGamepadModule_Struct_2_858AFA8F6CDBEA34&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_B3BCC2F0A48A1F82_OFFSET))(a1);
		}

		::System::Void Method_5_9681042564541CD6_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_9681042564541CD6_1_OFFSET))(this);
		}

		::MoleMole::MonoGamepadModule* Method_5_FBF0E5FE07DE8500(::Enum_3_9F36F0CF0780ECE5 a1, ::MoleMole::InputActionEvent a2)
		{
			return ((::MoleMole::MonoGamepadModule*(*)(::PVOID, ::Enum_3_9F36F0CF0780ECE5, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_FBF0E5FE07DE8500_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_9681042564541CD6_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_9681042564541CD6_2_OFFSET))(this);
		}

		::System::Void Method_5_45B10FCB019A3626(::UnityEngine::Transform* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_45B10FCB019A3626_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_5_C35C591645FDA452(::Enum_3_9F36F0CF0780ECE5 a1, ::MoleMole::InputActionEvent a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_9F36F0CF0780ECE5, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_C35C591645FDA452_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_F1D40B323FAD3DCE(::MoleMole::UIBaseController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_F1D40B323FAD3DCE_OFFSET))(this, a1);
		}

		static ::System::Nullable_1<::System::Boolean> Method_5_B3BCC2F0A48A1F82_1(::MoleMole::MonoGamepadModule_Struct_2_858AFA8F6CDBEA34_1& a1)
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::MoleMole::MonoGamepadModule_Struct_2_858AFA8F6CDBEA34_1&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_B3BCC2F0A48A1F82_1_OFFSET))(a1);
		}

		static ::System::Nullable_1<::System::Boolean> Method_5_E7E6FE697A3E2EE3(::MoleMole::MonoGamepadModule_Struct_2_858AFA8F6CDBEA34_2& a1)
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::MoleMole::MonoGamepadModule_Struct_2_858AFA8F6CDBEA34_2&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_E7E6FE697A3E2EE3_OFFSET))(a1);
		}

		static ::System::Nullable_1<::System::Boolean> Method_5_B3BCC2F0A48A1F82_2(::MoleMole::MonoGamepadModule_Struct_2_858AFA8F6CDBEA34_2& a1)
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::MoleMole::MonoGamepadModule_Struct_2_858AFA8F6CDBEA34_2&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_B3BCC2F0A48A1F82_2_OFFSET))(a1);
		}

		::System::Void Method_5_0672F56933763C8F(::MoleMole::MonoGamepadModule_Enum_3_E1ECA05187CF4721 a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule_Enum_3_E1ECA05187CF4721))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_0672F56933763C8F_OFFSET))(this, a1);
		}

		::System::Void Method_5_9765352E01408D38()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_9765352E01408D38_OFFSET))(this);
		}

		::System::Void Method_5_1B9CC121BDC8766D(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_1B9CC121BDC8766D_OFFSET))(this, a1);
		}

		::System::Void Method_5_9681042564541CD6_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_9681042564541CD6_3_OFFSET))(this);
		}

		static ::System::Nullable_1<::System::Boolean> Method_5_E7E6FE697A3E2EE3_1(::MoleMole::MonoGamepadModule_Struct_2_858AFA8F6CDBEA34& a1)
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::MoleMole::MonoGamepadModule_Struct_2_858AFA8F6CDBEA34&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_E7E6FE697A3E2EE3_1_OFFSET))(a1);
		}

		::System::Int32 Method_5_4AB0A9FFA308764A(::MoleMole::MonoGamepadModule* a1, ::System::Collections::Generic::List_1<::MoleMole::MonoGamepadModule*>* a2, ::System::Collections::Generic::List_1<::MoleMole::MonoGamepadModule*>* a3)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Collections::Generic::List_1<::MoleMole::MonoGamepadModule*>*, ::System::Collections::Generic::List_1<::MoleMole::MonoGamepadModule*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_4AB0A9FFA308764A_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Nullable_1<::System::Boolean> Method_5_E7E6FE697A3E2EE3_2(::MoleMole::MonoGamepadModule_Struct_2_858AFA8F6CDBEA34_1& a1)
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::MoleMole::MonoGamepadModule_Struct_2_858AFA8F6CDBEA34_1&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_E7E6FE697A3E2EE3_2_OFFSET))(a1);
		}
	};
}
