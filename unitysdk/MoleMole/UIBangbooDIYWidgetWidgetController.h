#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_03024D6472FC8F3A.h"
#include "unitysdk/Enum_3_D5E55949F51D9DD0.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2CB185F86C732591;
class Class_1_A59025D696FD25CD;
class Class_1_B2973E4A3ABA7D3E;
class Class_2_79AE422BA06F6D26_221;
class Class_2_F53404D9C01CAAB5;
class UIToWorldRTOutput;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIBuddyBagDragWidgetController; }
namespace MoleMole { class UIBuddyDIYBagItemWidgetController; }
namespace MoleMole { class UIBuddyDIYComponentWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIGeneralDynamicTipsPopWindowController; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class GridLayoutGroup; }

#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_CLEARBAGITEMSELECT_OFFSET UNITYSDK_OFFSET(0xB751040)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_CLEAREDITORSTATECOMPONENT_OFFSET UNITYSDK_OFFSET(0xB750480)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_CLEARPACKAGEENABLE_OFFSET UNITYSDK_OFFSET(0xB753740)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_CREATECOMPONENTWIDGET_OFFSET UNITYSDK_OFFSET(0xB7519B0)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ENABLEMASKSELECT_OFFSET UNITYSDK_OFFSET(0xB7511A0)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ENABLESELECTWIDGET_OFFSET UNITYSDK_OFFSET(0xB74F810)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_FORCEFOUCSSELECTITEM_OFFSET UNITYSDK_OFFSET(0xB754560)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_FORCEFOUCSSELELCTBAG_OFFSET UNITYSDK_OFFSET(0xB7542A0)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_GETBAGFIRSTCOMPONENT_OFFSET UNITYSDK_OFFSET(0xB74DDC0)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_GETCOMPONENTWIDGET_OFFSET UNITYSDK_OFFSET(0xB74DCD0)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_GETFILTEINDEX_OFFSET UNITYSDK_OFFSET(0xB753080)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_GETGAMEPADSELECT_OFFSET UNITYSDK_OFFSET(0xB7540E0)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_GETTOUCHCOMPONENT_OFFSET UNITYSDK_OFFSET(0xB753AC0)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_GET_DIYCOMPONENTWIDGETCONTROLLERS_OFFSET UNITYSDK_OFFSET(0xB754A50)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_INITBAGCOMPONENT_OFFSET UNITYSDK_OFFSET(0xB74DE50)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_INITCURRENTPAGEINSTALLCOMPONENT_OFFSET UNITYSDK_OFFSET(0xB74E3D0)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_INITGRIDS_OFFSET UNITYSDK_OFFSET(0xB74D230)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0xB74CD10)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ISBAGSCROLLDRAGING_OFFSET UNITYSDK_OFFSET(0xB754210)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xB750300)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONBAGCOMPONENTUPDATE_OFFSET UNITYSDK_OFFSET(0xB74CC10)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONBAGITEMSELECT_OFFSET UNITYSDK_OFFSET(0xB750FD0)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONBUDDYCOMPONENTDELETE_OFFSET UNITYSDK_OFFSET(0xB751AE0)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONBUDDYCOMPONENTINSTALLFROMBAG_OFFSET UNITYSDK_OFFSET(0xB751440)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONBUDDYEDITOR_OFFSET UNITYSDK_OFFSET(0xB74FC60)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONBUDDYSWITCHPACKAGESCRSP_OFFSET UNITYSDK_OFFSET(0xB753880)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONCLICKCURRENTPACAKGEENABLE_OFFSET UNITYSDK_OFFSET(0xB753250)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONCLICKINSTALLBTN_OFFSET UNITYSDK_OFFSET(0xB750650)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONCLICKRIGHTMASK_OFFSET UNITYSDK_OFFSET(0xB74F960)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONCOMPONENTEDITOR_OFFSET UNITYSDK_OFFSET(0xB7510B0)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xB74F280)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONDELETEBTN_OFFSET UNITYSDK_OFFSET(0xB7522F0)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONDRAGEND_OFFSET UNITYSDK_OFFSET(0xB753F20)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONDRAGITEM_OFFSET UNITYSDK_OFFSET(0xB753430)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONDRAGSTART_OFFSET UNITYSDK_OFFSET(0xB753E80)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONFILTERDROPCHANGE_OFFSET UNITYSDK_OFFSET(0xB750180)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0xB7548B0)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONGAMEPADMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0xB7549D0)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0xB74EC70)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0xB754150)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONINPUTNAME_OFFSET UNITYSDK_OFFSET(0xB7521A0)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONLONGPRESSBAGITEM_OFFSET UNITYSDK_OFFSET(0xB753FC0)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONOPENCOMPONENTSHOP_OFFSET UNITYSDK_OFFSET(0xB752710)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONPACKAGECLEAR_OFFSET UNITYSDK_OFFSET(0xB753510)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONPACKAGEENABLE_OFFSET UNITYSDK_OFFSET(0xB7524E0)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONRENAMEBTN_OFFSET UNITYSDK_OFFSET(0xB751E10)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONRENAME_OFFSET UNITYSDK_OFFSET(0xB7534A0)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONSELECTITEMTOEDITOR_OFFSET UNITYSDK_OFFSET(0xB750920)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONSERVERCONFRIMCOMPONENTINSTALL_OFFSET UNITYSDK_OFFSET(0xB7513C0)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONTEMPLATEDROPCHANGE_OFFSET UNITYSDK_OFFSET(0xB753140)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONTVTOUCHCLICKDOWN_OFFSET UNITYSDK_OFFSET(0xB7539F0)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONTVTOUCHCLICKUP_OFFSET UNITYSDK_OFFSET(0xB753DA0)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONTVTOUCHDRAG_OFFSET UNITYSDK_OFFSET(0xB7538F0)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xB74F520)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB74B8A0)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONUNINSTALLCOMPONENT_OFFSET UNITYSDK_OFFSET(0xB753670)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_SETDATA_OFFSET UNITYSDK_OFFSET(0xB74D120)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_SETSELECTCOMPONENTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0xB74EDA0)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_SETTVTARGET_OFFSET UNITYSDK_OFFSET(0xB74E670)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_SHOWFILTERDROPDOWN_OFFSET UNITYSDK_OFFSET(0xB752C90)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_SHOWTEMPLATEDROPDOWN_OFFSET UNITYSDK_OFFSET(0xB752920)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_UPDATECURRENTBAGM_OFFSET UNITYSDK_OFFSET(0xB7536E0)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_UPDATEPAKAGETEMPLATEDESC_OFFSET UNITYSDK_OFFSET(0xB74EA30)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_UPDATEUI_OFFSET UNITYSDK_OFFSET(0xB74CD80)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xB751360)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xB754A60)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER__ONUIINIT_B__1_0_OFFSET UNITYSDK_OFFSET(0xB754D80)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER__ONUIINIT_B__1_1_OFFSET UNITYSDK_OFFSET(0xB754E10)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xB755090)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0xB755100)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER___BASE_ONGAMEPADMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0xB755170)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0xB7551E0)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0xB755260)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xB755290)
#define MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB755310)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooDIYWidgetWidgetController_TypeDefinitionIndex = 64303;

	class UIBangbooDIYWidgetWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::Int32 ShopId = 0x2; // 0x0
		::Class_2_79AE422BA06F6D26_221* _view; // 0x2A0
		::System::Int32 moveIndex; // 0x2A8
		::System::Boolean startMove; // 0x2AC
		::Class_2_F53404D9C01CAAB5* _data; // 0x2B0
		::System::Collections::Generic::List_1<::Class_1_2CB185F86C732591*>* grids; // 0x2B8
		::UnityEngine::UI::GridLayoutGroup* gridRoot; // 0x2C0
		::UnityEngine::UI::GridLayoutGroup* bagGrid; // 0x2C8
		::Class_1_A59025D696FD25CD* editorComponent; // 0x2D0
		::System::Collections::Generic::List_1<::MoleMole::UIBuddyDIYBagItemWidgetController*>* bagItems; // 0x2D8
		::MoleMole::UIGeneralDynamicTipsPopWindowController* _templateSelect; // 0x2E0
		::MoleMole::UIGeneralDynamicTipsPopWindowController* _filterSelect; // 0x2E8
		::System::Collections::Generic::List_1<::MoleMole::UIBuddyDIYComponentWidgetController*>* _diyComponentWidgetControllers; // 0x2F0
		::System::Collections::Generic::List_1<::Enum_3_D5E55949F51D9DD0>* _rarityTypes; // 0x2F8
		::System::Collections::Generic::List_1<::System::String*>* _rarityTextKey; // 0x300
		::Enum_3_D5E55949F51D9DD0 _filterType; // 0x308
		::System::Collections::Generic::List_1<::Class_1_A59025D696FD25CD*>* filterComponents; // 0x310
		::UIToWorldRTOutput* _uiToWorldRoot; // 0x318
		::UnityEngine::GameObject* tvScreen; // 0x320
		::Class_1_B2973E4A3ABA7D3E* _padNavigat; // 0x328
		::MoleMole::UIBuddyBagDragWidgetController* _dragWidget; // 0x330
		::MoleMole::UIBuddyDIYBagItemWidgetController* selectController; // 0x338
		::MoleMole::MonoGamepadCustomList* itemBagModule; // 0x340

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnBagComponentUpdate(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONBAGCOMPONENTUPDATE_OFFSET))(this, arg);
		}

		::System::Void SetData(::Class_2_F53404D9C01CAAB5* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_F53404D9C01CAAB5*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_SETDATA_OFFSET))(this, data);
		}

		::MoleMole::UIBuddyDIYComponentWidgetController* GetComponentWidget(::System::Int32 componentID)
		{
			return ((::MoleMole::UIBuddyDIYComponentWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_GETCOMPONENTWIDGET_OFFSET))(this, componentID);
		}

		::UnityEngine::GameObject* GetBagFirstComponent()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_GETBAGFIRSTCOMPONENT_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_INIT_OFFSET))(this);
		}

		::System::Void SetTVTarget(::UnityEngine::GameObject* tvScreen)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_SETTVTARGET_OFFSET))(this, tvScreen);
		}

		::System::Void UpdateUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_UPDATEUI_OFFSET))(this);
		}

		::System::Void OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void EnableSelectWidget(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ENABLESELECTWIDGET_OFFSET))(this, enable);
		}

		::System::Void SetSelectComponentAttribute(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_SETSELECTCOMPONENTATTRIBUTE_OFFSET))(this, index);
		}

		::System::Void OnClickRightMask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONCLICKRIGHTMASK_OFFSET))(this);
		}

		::System::Void OnBuddyEditor(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONBUDDYEDITOR_OFFSET))(this, arg);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void ClearEditorStateComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_CLEAREDITORSTATECOMPONENT_OFFSET))(this);
		}

		::System::Void OnClickInstallBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONCLICKINSTALLBTN_OFFSET))(this);
		}

		::System::Void OnBagItemSelect(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONBAGITEMSELECT_OFFSET))(this, arg);
		}

		::System::Void ClearBagItemSelect(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_CLEARBAGITEMSELECT_OFFSET))(this, arg);
		}

		::System::Void OnComponentEditor(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONCOMPONENTEDITOR_OFFSET))(this, arg);
		}

		::System::Void EnableMaskSelect(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ENABLEMASKSELECT_OFFSET))(this, arg);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void OnServerConfrimComponentInstall(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONSERVERCONFRIMCOMPONENTINSTALL_OFFSET))(this, arg);
		}

		::System::Void OnBuddyComponentInstallFromBag(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONBUDDYCOMPONENTINSTALLFROMBAG_OFFSET))(this, arg);
		}

		::System::Void OnBuddyComponentDelete(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONBUDDYCOMPONENTDELETE_OFFSET))(this, arg);
		}

		::System::Void OnRenameBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONRENAMEBTN_OFFSET))(this);
		}

		::System::Void OnInputName(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONINPUTNAME_OFFSET))(this, name);
		}

		::System::Void OnDeleteBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONDELETEBTN_OFFSET))(this);
		}

		::System::Void OnPackageEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONPACKAGEENABLE_OFFSET))(this);
		}

		::System::Void OnOpenComponentShop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONOPENCOMPONENTSHOP_OFFSET))(this);
		}

		::System::Void ShowTemplateDropDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_SHOWTEMPLATEDROPDOWN_OFFSET))(this);
		}

		::System::Void ShowFilterDropDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_SHOWFILTERDROPDOWN_OFFSET))(this);
		}

		::System::Void OnTemplateDropChange(::System::Int32 index, ::System::Boolean isSelectChanged)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONTEMPLATEDROPCHANGE_OFFSET))(this, index, isSelectChanged);
		}

		::System::Void OnFilterDropChange(::System::Int32 index, ::System::Boolean isSelectChanged)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONFILTERDROPCHANGE_OFFSET))(this, index, isSelectChanged);
		}

		::System::Void InitGrids()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_INITGRIDS_OFFSET))(this);
		}

		::System::Void OnDragItem(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONDRAGITEM_OFFSET))(this, arg);
		}

		::System::Void UpdatePakageTemplateDesc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_UPDATEPAKAGETEMPLATEDESC_OFFSET))(this);
		}

		::System::Void OnRename(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONRENAME_OFFSET))(this, args);
		}

		::System::Void OnPackageClear(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONPACKAGECLEAR_OFFSET))(this, arg);
		}

		::System::Void OnUnInstallComponent(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONUNINSTALLCOMPONENT_OFFSET))(this, arg);
		}

		::System::Void UpdateCurrentBagM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_UPDATECURRENTBAGM_OFFSET))(this);
		}

		::System::Void OnClickCurrentPacakgeEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONCLICKCURRENTPACAKGEENABLE_OFFSET))(this);
		}

		::System::Void ClearPackageEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_CLEARPACKAGEENABLE_OFFSET))(this);
		}

		::System::Void OnBuddySwitchPackageScRsp(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONBUDDYSWITCHPACKAGESCRSP_OFFSET))(this, args);
		}

		::System::Void InitBagComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_INITBAGCOMPONENT_OFFSET))(this);
		}

		::System::Void InitCurrentPageInstallComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_INITCURRENTPAGEINSTALLCOMPONENT_OFFSET))(this);
		}

		::MoleMole::UIBuddyDIYComponentWidgetController* CreateComponentWidget(::Class_1_A59025D696FD25CD* diyComponent)
		{
			return ((::MoleMole::UIBuddyDIYComponentWidgetController*(*)(::PVOID, ::Class_1_A59025D696FD25CD*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_CREATECOMPONENTWIDGET_OFFSET))(this, diyComponent);
		}

		::System::Void OnTVTouchDrag(::UnityEngine::EventSystems::PointerEventData* eventData, ::UnityEngine::Vector3 worldPointDelta)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONTVTOUCHDRAG_OFFSET))(this, eventData, worldPointDelta);
		}

		::System::Void OnTVTouchClickDown(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONTVTOUCHCLICKDOWN_OFFSET))(this, eventData);
		}

		::MoleMole::UIBuddyDIYComponentWidgetController* GetTouchComponent(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::MoleMole::UIBuddyDIYComponentWidgetController*(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_GETTOUCHCOMPONENT_OFFSET))(this, eventData);
		}

		::System::Void OnTVTouchClickUp(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONTVTOUCHCLICKUP_OFFSET))(this, eventData);
		}

		::System::Void OnDragStart(::UnityEngine::EventSystems::PointerEventData* eventData, ::UnityEngine::Vector3 worldPoint)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONDRAGSTART_OFFSET))(this, eventData, worldPoint);
		}

		::System::Void OnDragEnd(::UnityEngine::EventSystems::PointerEventData* eventData, ::UnityEngine::Vector3 wordlPoint)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONDRAGEND_OFFSET))(this, eventData, wordlPoint);
		}

		::System::Int32 GetFilteIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_GETFILTEINDEX_OFFSET))(this);
		}

		::System::Void OnLongPressBagItem(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONLONGPRESSBAGITEM_OFFSET))(this, arg);
		}

		::MoleMole::UIBuddyDIYComponentWidgetController* OnSelectItemToEditor(::MoleMole::UIBuddyDIYBagItemWidgetController* item)
		{
			return ((::MoleMole::UIBuddyDIYComponentWidgetController*(*)(::PVOID, ::MoleMole::UIBuddyDIYBagItemWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONSELECTITEMTOEDITOR_OFFSET))(this, item);
		}

		::MoleMole::UIBuddyDIYBagItemWidgetController* GetGamePadSelect()
		{
			return ((::MoleMole::UIBuddyDIYBagItemWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_GETGAMEPADSELECT_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Boolean IsBagScrollDraging()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ISBAGSCROLLDRAGING_OFFSET))(this);
		}

		::System::Void ForceFoucsSelelctBag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_FORCEFOUCSSELELCTBAG_OFFSET))(this);
		}

		::System::Void ForceFoucsSelectItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_FORCEFOUCSSELECTITEM_OFFSET))(this);
		}

		::System::Void OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void OnGamepadModuleLostFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_ONGAMEPADMODULELOSTFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Collections::Generic::List_1<::MoleMole::UIBuddyDIYComponentWidgetController*>* get_DiyComponentWidgetControllers()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::UIBuddyDIYComponentWidgetController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER_GET_DIYCOMPONENTWIDGETCONTROLLERS_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__1_0(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER__ONUIINIT_B__1_0_OFFSET))(this, arg);
		}

		::System::Void _OnUIInit_b__1_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER__ONUIINIT_B__1_1_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleLostFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER___BASE_ONGAMEPADMODULELOSTFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::Enum_3_03024D6472FC8F3A P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODIYWIDGETWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
