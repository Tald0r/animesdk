#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Enum_3_03024D6472FC8F3A.h"
#include "unitysdk/MoleMole/ButtonPressType.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_48D56DACBE4271BC;
class Class_1_BDEEA5009A8A636E;
class Class_1_EEA0111A28582B57;
class Class_2_79F6D62CE30E3F8E_112;
class Class_2_9D9172C07F82DDAE;
class Class_2_D8A9A175DA29EA90;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UISuibianTempleBuddyDevelopePopWindowController; }
namespace MoleMole { class UISuibianTempleBuddyLevelupController_ViewModel; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER_BUILDVIEWMODELDATABINDING_OFFSET UNITYSDK_OFFSET(0xB6FEFE0)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER_CALCURITEMMAX_OFFSET UNITYSDK_OFFSET(0xB700500)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER_CLEARMATERIAL_OFFSET UNITYSDK_OFFSET(0xB7008A0)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER_GETALLSELECTMATERIAL_OFFSET UNITYSDK_OFFSET(0xB6FFC00)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER_GETSELECTLEVELUPMATERIALEXCEPTI_OFFSET UNITYSDK_OFFSET(0xB700160)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0xB6FF920)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0xB6FE8C0)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER_ONBEFOREWORLDUPDATE_OFFSET UNITYSDK_OFFSET(0x887A430)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER_ONCLICKBTN1_OFFSET UNITYSDK_OFFSET(0x8877510)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER_ONCLICKBTN2_OFFSET UNITYSDK_OFFSET(0x8877DF0)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER_ONCLICKMATITEM_OFFSET UNITYSDK_OFFSET(0x8877EA0)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x8879DC0)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x887AF00)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xB6FEC40)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xB700A80)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xB6FF790)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER_REFRESHLEVELUPINPUTKEY_OFFSET UNITYSDK_OFFSET(0x8879FB0)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xB6FF6C0)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER_SETCONSUME_OFFSET UNITYSDK_OFFSET(0x8878FF0)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER_SETPARENTVIEW_OFFSET UNITYSDK_OFFSET(0xB6FE530)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER_SETPROGRESS_OFFSET UNITYSDK_OFFSET(0xB6FF9D0)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER_TRIGGERGAMEPADADDBTN_OFFSET UNITYSDK_OFFSET(0x887A500)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER_TRIGGERGAMEPADREDUCEBTN_OFFSET UNITYSDK_OFFSET(0x887AA00)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER_UPDATETEMPLEBUDDY_OFFSET UNITYSDK_OFFSET(0x88786A0)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER__BUILDVIEWMODELDATABINDING_B__23_0_OFFSET UNITYSDK_OFFSET(0x887BD90)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER__BUILDVIEWMODELDATABINDING_B__23_1_OFFSET UNITYSDK_OFFSET(0x887BEF0)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER__BUILDVIEWMODELDATABINDING_B__23_2_OFFSET UNITYSDK_OFFSET(0x887C040)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER__BUILDVIEWMODELDATABINDING_B__23_3_OFFSET UNITYSDK_OFFSET(0x887C240)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER__BUILDVIEWMODELDATABINDING_B__23_4_OFFSET UNITYSDK_OFFSET(0x887C440)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER__BUILDVIEWMODELDATABINDING_B__23_5_OFFSET UNITYSDK_OFFSET(0x887C580)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER__BUILDVIEWMODELDATABINDING_B__23_6_OFFSET UNITYSDK_OFFSET(0x887C760)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x887BAA0)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER__ONUIOPEN_B__14_0_OFFSET UNITYSDK_OFFSET(0x887BC60)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER__SETPARENTVIEW_B__11_0_OFFSET UNITYSDK_OFFSET(0x887BBB0)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x887C8A0)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x887C900)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x887C980)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x887C9B0)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x887CA20)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x887CAA0)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleBuddyLevelupController_TypeDefinitionIndex = 51510;

	class UISuibianTempleBuddyLevelupController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_112* _view; // 0x2A0
		::Class_2_9D9172C07F82DDAE* _itemModel; // 0x2A8
		::Class_2_D8A9A175DA29EA90* _roleDataProxy; // 0x2B0
		::MoleMole::UISuibianTempleBuddyDevelopePopWindowController* _mainController; // 0x2B8
		::System::Collections::Generic::List_1<::Class_1_BDEEA5009A8A636E*>* _curPropertyItemViews; // 0x2C0
		::UnityEngine::Material* _percentMaterial; // 0x2C8
		::MoleMole::MonoGamepadCustomList* _monoGamepadCustomList; // 0x2D0
		::System::Int32 _gamepadAddSelectIndex; // 0x2D8
		::System::Int32 _gamepadReduceSelectIndex; // 0x2DC
		::System::Boolean _isGamepadAddBtnPressed; // 0x2E0
		::System::Boolean _isGamepadReduceBtnPressed; // 0x2E1
		::Class_1_48D56DACBE4271BC* _propertySyncHelper; // 0x2E8
		::MoleMole::UISuibianTempleBuddyLevelupController_ViewModel* _viewModel; // 0x2F0
		::System::Threading::CancellationTokenSource* _cancellationTokenSource; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void SetParentView(::Class_1_EEA0111A28582B57* view)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EEA0111A28582B57*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER_SETPARENTVIEW_OFFSET))(this, view);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void SetProgress(::System::Single current, ::System::Single total, ::System::Int32 tarLv, ::System::Int32 tarOffset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER_SETPROGRESS_OFFSET))(this, current, total, tarLv, tarOffset);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* GetAllSelectMaterial()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER_GETALLSELECTMATERIAL_OFFSET))(this);
		}

		::System::Void GetSelectLevelUpMaterialExceptI(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* ret, ::System::Int32 exceptIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER_GETSELECTLEVELUPMATERIALEXCEPTI_OFFSET))(this, ret, exceptIndex);
		}

		::System::Int32 CalCurItemMax(::System::Int32 index)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER_CALCURITEMMAX_OFFSET))(this, index);
		}

		::System::Void ClearMaterial(::System::Boolean invokeCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER_CLEARMATERIAL_OFFSET))(this, invokeCallback);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void BuildViewModelDataBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER_BUILDVIEWMODELDATABINDING_OFFSET))(this);
		}

		::System::Void OnClickBtn1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER_ONCLICKBTN1_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid OnClickBtn2()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER_ONCLICKBTN2_OFFSET))(this);
		}

		::System::Void OnClickMatItem(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER_ONCLICKMATITEM_OFFSET))(this, index);
		}

		::System::Void UpdateTempleBuddy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER_UPDATETEMPLEBUDDY_OFFSET))(this);
		}

		::System::Boolean SetConsume(::System::Boolean enableClick)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER_SETCONSUME_OFFSET))(this, enableClick);
		}

		::System::Void OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Void OnBeforeWorldUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER_ONBEFOREWORLDUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void RefreshLevelUpInputKey()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER_REFRESHLEVELUPINPUTKEY_OFFSET))(this);
		}

		::System::Void TriggerGamepadAddBtn(::System::Int32 selectIndex, ::MoleMole::ButtonPressType pressType, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::ButtonPressType, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER_TRIGGERGAMEPADADDBTN_OFFSET))(this, selectIndex, pressType, force);
		}

		::System::Void TriggerGamepadReduceBtn(::System::Int32 selectIndex, ::MoleMole::ButtonPressType pressType, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::ButtonPressType, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER_TRIGGERGAMEPADREDUCEBTN_OFFSET))(this, selectIndex, pressType, force);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void _SetParentView_b__11_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER__SETPARENTVIEW_B__11_0_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__14_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER__ONUIOPEN_B__14_0_OFFSET))(this, args);
		}

		::System::Void _BuildViewModelDataBinding_b__23_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER__BUILDVIEWMODELDATABINDING_B__23_0_OFFSET))(this);
		}

		::System::Void _BuildViewModelDataBinding_b__23_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER__BUILDVIEWMODELDATABINDING_B__23_1_OFFSET))(this);
		}

		::System::Void _BuildViewModelDataBinding_b__23_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER__BUILDVIEWMODELDATABINDING_B__23_2_OFFSET))(this);
		}

		::System::Void _BuildViewModelDataBinding_b__23_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER__BUILDVIEWMODELDATABINDING_B__23_3_OFFSET))(this);
		}

		::System::Void _BuildViewModelDataBinding_b__23_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER__BUILDVIEWMODELDATABINDING_B__23_4_OFFSET))(this);
		}

		::System::Void _BuildViewModelDataBinding_b__23_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER__BUILDVIEWMODELDATABINDING_B__23_5_OFFSET))(this);
		}

		::System::Void _BuildViewModelDataBinding_b__23_6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER__BUILDVIEWMODELDATABINDING_B__23_6_OFFSET))(this);
		}

		::System::Void __base_InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void __base_OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::Enum_3_03024D6472FC8F3A P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
