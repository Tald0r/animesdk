#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_03024D6472FC8F3A.h"
#include "unitysdk/MoleMole/ButtonPressType.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_0D6706375CDAAE8C;
class Class_1_BDEEA5009A8A636E;
class Class_1_EEA0111A28582B57;
class Class_2_702D914FA95B6E36;
class Class_2_79F6D62CE30E3F8E_45;
class Class_2_9D9172C07F82DDAE;
class Class_2_D89CCC627A66D0AD;
class Class_2_D8A9A175DA29EA90;
class Class_2_F51BBF303F6FB2C0;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace MoleMole { class UIRoleDevelopPopWindowController; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIROLELEVELUPCONTROLLER_CALAVATARLEFTEXP_OFFSET UNITYSDK_OFFSET(0xD7AB680)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER_CALCURITEMMAX_OFFSET UNITYSDK_OFFSET(0xD7AD7B0)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER_CLEARMATERIAL_OFFSET UNITYSDK_OFFSET(0xD7AB430)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER_GETALLSELECTMATERIAL_OFFSET UNITYSDK_OFFSET(0xD7AA990)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER_GETHASSELECTMATERIAL_OFFSET UNITYSDK_OFFSET(0xD7AA380)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER_GETSELECTLEVELUPMATERIALEXCEPTI_OFFSET UNITYSDK_OFFSET(0xD7AA4F0)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0xD7A8D30)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER_ONAVATARLEVELUPRSP_OFFSET UNITYSDK_OFFSET(0xD7A9AA0)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER_ONAVATARLEVELUP_OFFSET UNITYSDK_OFFSET(0xD7AAD10)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER_ONBEFOREWORLDUPDATE_OFFSET UNITYSDK_OFFSET(0xD7AE400)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER_ONCLICKBTN1_OFFSET UNITYSDK_OFFSET(0xD7A9DF0)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER_ONCLICKBTN2_OFFSET UNITYSDK_OFFSET(0xD7AA830)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0xD7ADDE0)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0xD7AEE50)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER_ONMATITEMCHANGED_OFFSET UNITYSDK_OFFSET(0xD7AF9F0)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xD7A9280)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xD7ADA80)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xD7A98A0)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER_REFRESHLEVELUPINPUTKEY_OFFSET UNITYSDK_OFFSET(0xD7ADFD0)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xD7A95D0)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER_SETCONSUME_OFFSET UNITYSDK_OFFSET(0xD7AC380)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER_SETPARENTVIEW_OFFSET UNITYSDK_OFFSET(0xD7A8A80)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER_SETPROGRESS_OFFSET UNITYSDK_OFFSET(0xD7AC250)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER_SHOWBACKITEMLISTDIALOG_OFFSET UNITYSDK_OFFSET(0xD7A9C20)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER_TRIGGERGAMEPADADDBTN_OFFSET UNITYSDK_OFFSET(0xD7AE4D0)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER_TRIGGERGAMEPADREDUCEBTN_OFFSET UNITYSDK_OFFSET(0xD7AE990)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER_UPDATEAVATAR_OFFSET UNITYSDK_OFFSET(0xD7AB750)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER_UPDATEBUDDY_OFFSET UNITYSDK_OFFSET(0xD7ACEC0)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xD7B0170)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER__ONAVATARLEVELUP_B__32_1_OFFSET UNITYSDK_OFFSET(0xD7B0330)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER__ONAVATARLEVELUP_B__32_2_OFFSET UNITYSDK_OFFSET(0xD7B0350)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER__ONAVATARLEVELUP_B__32_3_OFFSET UNITYSDK_OFFSET(0xD7B0490)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER__ONUIOPEN_B__24_0_OFFSET UNITYSDK_OFFSET(0xD7B02B0)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0xD7B0550)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0xD7B05D0)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xD7B0600)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xD7B0670)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xD7B06F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleLevelupController_TypeDefinitionIndex = 58384;

	class UIRoleLevelupController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_45* _view; // 0x2A0
		::Class_2_D89CCC627A66D0AD* _avatarData; // 0x2A8
		::Class_2_F51BBF303F6FB2C0* _battleBuddyData; // 0x2B0
		::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnWidgetController*>* _expMatItems; // 0x2B8
		::Class_2_9D9172C07F82DDAE* _itemModel; // 0x2C0
		::Class_2_D8A9A175DA29EA90* _roleDataProxy; // 0x2C8
		::Class_2_702D914FA95B6E36* _roleModel; // 0x2D0
		::MoleMole::UIRoleDevelopPopWindowController* _mainController; // 0x2D8
		::System::Collections::Generic::List_1<::Class_1_BDEEA5009A8A636E*>* _curPropertyItemViews; // 0x2E0
		::System::Boolean needNotifyParent; // 0x2E8
		::UnityEngine::Material* _percentMaterial; // 0x2F0
		::MoleMole::MonoGamepadCustomList* _monoGamepadCustomList; // 0x2F8
		::System::Int32 _gamepadAddSelectIndex; // 0x300
		::System::Int32 _gamepadReduceSelectIndex; // 0x304
		::System::Boolean _isGamepadAddBtnPressed; // 0x308
		::System::Boolean _isGamepadReduceBtnPressed; // 0x309
		::System::Int32 curLeftExp; // 0x30C
		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* backItemList; // 0x310
		::System::Int32 _nowLv; // 0x318
		::System::Int32 roleToMaxLvNeedExp; // 0x31C
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _popertyValueCache; // 0x320
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* hasMaterialDir; // 0x328
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* suggestMaterialDir; // 0x330

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void SetParentView(::Class_1_EEA0111A28582B57* view)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EEA0111A28582B57*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER_SETPARENTVIEW_OFFSET))(this, view);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnAvatarLevelUpRsp(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER_ONAVATARLEVELUPRSP_OFFSET))(this, args);
		}

		::System::Void ShowBackItemListDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER_SHOWBACKITEMLISTDIALOG_OFFSET))(this);
		}

		::System::Void OnClickBtn1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER_ONCLICKBTN1_OFFSET))(this);
		}

		::System::Boolean GetHasSelectMaterial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER_GETHASSELECTMATERIAL_OFFSET))(this);
		}

		::System::Void OnClickBtn2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER_ONCLICKBTN2_OFFSET))(this);
		}

		::System::Void OnAvatarLevelUp(::System::EventArgs* eventArgs)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER_ONAVATARLEVELUP_OFFSET))(this, eventArgs);
		}

		::System::Void CalAvatarLeftExp(::System::Int32 maxlevel, ::System::Int32 curLevel, ::System::Int32 leftExp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER_CALAVATARLEFTEXP_OFFSET))(this, maxlevel, curLevel, leftExp);
		}

		::System::Void UpdateAvatar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER_UPDATEAVATAR_OFFSET))(this);
		}

		::System::Void UpdateBuddy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER_UPDATEBUDDY_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void SetProgress(::System::Single current, ::System::Single total, ::System::Int32 tarLv, ::System::Int32 tarOffset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER_SETPROGRESS_OFFSET))(this, current, total, tarLv, tarOffset);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* GetAllSelectMaterial()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER_GETALLSELECTMATERIAL_OFFSET))(this);
		}

		::System::Void GetSelectLevelUpMaterialExceptI(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* ret, ::System::Int32 exceptIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER_GETSELECTLEVELUPMATERIALEXCEPTI_OFFSET))(this, ret, exceptIndex);
		}

		::System::Int32 CalCurItemMax(::System::Int32 index)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER_CALCURITEMMAX_OFFSET))(this, index);
		}

		::System::Boolean SetConsume(::System::Boolean isenableClick)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER_SETCONSUME_OFFSET))(this, isenableClick);
		}

		::System::Void ClearMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER_CLEARMATERIAL_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Void RefreshLevelUpInputKey()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER_REFRESHLEVELUPINPUTKEY_OFFSET))(this);
		}

		::System::Void OnBeforeWorldUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER_ONBEFOREWORLDUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void TriggerGamepadAddBtn(::System::Int32 selectIndex, ::MoleMole::ButtonPressType pressType, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::ButtonPressType, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER_TRIGGERGAMEPADADDBTN_OFFSET))(this, selectIndex, pressType, force);
		}

		::System::Void TriggerGamepadReduceBtn(::System::Int32 selectIndex, ::MoleMole::ButtonPressType pressType, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::ButtonPressType, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER_TRIGGERGAMEPADREDUCEBTN_OFFSET))(this, selectIndex, pressType, force);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnMatItemChanged(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER_ONMATITEMCHANGED_OFFSET))(this, index);
		}

		::System::Void _OnUIOpen_b__24_0(::System::EventArgs* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER__ONUIOPEN_B__24_0_OFFSET))(this, _);
		}

		::System::Void _OnAvatarLevelUp_b__32_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER__ONAVATARLEVELUP_B__32_1_OFFSET))(this);
		}

		::System::Void _OnAvatarLevelUp_b__32_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER__ONAVATARLEVELUP_B__32_2_OFFSET))(this);
		}

		::System::Void _OnAvatarLevelUp_b__32_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER__ONAVATARLEVELUP_B__32_3_OFFSET))(this);
		}

		::System::Void __base_OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::Enum_3_03024D6472FC8F3A P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
