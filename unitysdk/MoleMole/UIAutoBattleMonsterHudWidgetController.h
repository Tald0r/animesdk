#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_2CC23FE9C9AEC1B7.h"

class Class_2_0C505066109FB1C7;
class Class_2_0C505066109FB1C7_Class_2_0EE0BA6ECD501D4E;
class Class_2_0C505066109FB1C7_Class_2_EF16346D79C18F15_10;
class Class_2_70ACE5007D6AEE55;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIAutoBattleMonsterHudWidgetController_Context; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIAUTOBATTLEMONSTERHUDWIDGETCONTROLLER_CLONEMATERIALS_OFFSET UNITYSDK_OFFSET(0xCB20C40)
#define MOLEMOLE_UIAUTOBATTLEMONSTERHUDWIDGETCONTROLLER_DISPOSEMATERIALS_OFFSET UNITYSDK_OFFSET(0xCB20B80)
#define MOLEMOLE_UIAUTOBATTLEMONSTERHUDWIDGETCONTROLLER_GET_FOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0xCB21860)
#define MOLEMOLE_UIAUTOBATTLEMONSTERHUDWIDGETCONTROLLER_GET_NEEDCACHE_OFFSET UNITYSDK_OFFSET(0xCB20930)
#define MOLEMOLE_UIAUTOBATTLEMONSTERHUDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xCB21370)
#define MOLEMOLE_UIAUTOBATTLEMONSTERHUDWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xCB21410)
#define MOLEMOLE_UIAUTOBATTLEMONSTERHUDWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xCB20940)
#define MOLEMOLE_UIAUTOBATTLEMONSTERHUDWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xCB20E90)
#define MOLEMOLE_UIAUTOBATTLEMONSTERHUDWIDGETCONTROLLER_ONUIREUSE_OFFSET UNITYSDK_OFFSET(0xCB21500)
#define MOLEMOLE_UIAUTOBATTLEMONSTERHUDWIDGETCONTROLLER_PLAYANIMFORCAMP_OFFSET UNITYSDK_OFFSET(0xCB21970)
#define MOLEMOLE_UIAUTOBATTLEMONSTERHUDWIDGETCONTROLLER_REFRESHVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCB21110)
#define MOLEMOLE_UIAUTOBATTLEMONSTERHUDWIDGETCONTROLLER_RELEASEUI_OFFSET UNITYSDK_OFFSET(0xCB21770)
#define MOLEMOLE_UIAUTOBATTLEMONSTERHUDWIDGETCONTROLLER_SETICON_OFFSET UNITYSDK_OFFSET(0xCB21C10)
#define MOLEMOLE_UIAUTOBATTLEMONSTERHUDWIDGETCONTROLLER_TOGGLEDRAG_OFFSET UNITYSDK_OFFSET(0xCB21DE0)
#define MOLEMOLE_UIAUTOBATTLEMONSTERHUDWIDGETCONTROLLER_TOGGLEFOCUS_OFFSET UNITYSDK_OFFSET(0xCB218E0)
#define MOLEMOLE_UIAUTOBATTLEMONSTERHUDWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xCB217F0)
#define MOLEMOLE_UIAUTOBATTLEMONSTERHUDWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xCB21F30)
#define MOLEMOLE_UIAUTOBATTLEMONSTERHUDWIDGETCONTROLLER__PLAYANIMFORCAMP_B__24_0_OFFSET UNITYSDK_OFFSET(0xCB21F60)
#define MOLEMOLE_UIAUTOBATTLEMONSTERHUDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xCB21FB0)
#define MOLEMOLE_UIAUTOBATTLEMONSTERHUDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xCB22020)
#define MOLEMOLE_UIAUTOBATTLEMONSTERHUDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xCB220A0)
#define MOLEMOLE_UIAUTOBATTLEMONSTERHUDWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xCB22100)
#define MOLEMOLE_UIAUTOBATTLEMONSTERHUDWIDGETCONTROLLER___BASE_ONUIREUSE_OFFSET UNITYSDK_OFFSET(0xCB22170)
#define MOLEMOLE_UIAUTOBATTLEMONSTERHUDWIDGETCONTROLLER___BASE_RELEASEUI_OFFSET UNITYSDK_OFFSET(0xCB221D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattleMonsterHudWidgetController_TypeDefinitionIndex = 75265;

	class UIAutoBattleMonsterHudWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_0C505066109FB1C7* _view; // 0x2A0
		::Class_2_70ACE5007D6AEE55* _viewModel; // 0x2A8
		::System::UInt32 _bindedEntityID; // 0x2B0
		::UnityEngine::Material* _hpFillMaterial; // 0x2B8
		::UnityEngine::Material* _mpFillMaterial; // 0x2C0
		::UnityEngine::Material* _hpFillEnemyMaterial; // 0x2C8
		::UnityEngine::Material* _mpFillEnemyMaterial; // 0x2D0
		::MoleMole::MonoGamepadSelectable* _selectable; // 0x2D8
		::MoleMole::UIAutoBattleMonsterHudWidgetController_Context* _context; // 0x2E0
		::System::Int32 _campIconIdx; // 0x2E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEMONSTERHUDWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_NeedCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEMONSTERHUDWIDGETCONTROLLER_GET_NEEDCACHE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEMONSTERHUDWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEMONSTERHUDWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEMONSTERHUDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEMONSTERHUDWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnUIReuse()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEMONSTERHUDWIDGETCONTROLLER_ONUIREUSE_OFFSET))(this);
		}

		::System::Void ReleaseUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEMONSTERHUDWIDGETCONTROLLER_RELEASEUI_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEMONSTERHUDWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::UnityEngine::Transform* get_FollowTarget()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEMONSTERHUDWIDGETCONTROLLER_GET_FOLLOWTARGET_OFFSET))(this);
		}

		::System::Void RefreshViewModel(::MoleMole::Battle::Entity* curEntity, ::UnityEngine::Canvas* root, ::Struct_2_2CC23FE9C9AEC1B7 hudData)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Canvas*, ::Struct_2_2CC23FE9C9AEC1B7))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEMONSTERHUDWIDGETCONTROLLER_REFRESHVIEWMODEL_OFFSET))(this, curEntity, root, hudData);
		}

		::System::Void ToggleFocus(::System::Boolean isFocus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEMONSTERHUDWIDGETCONTROLLER_TOGGLEFOCUS_OFFSET))(this, isFocus);
		}

		::System::Void PlayAnimForCamp(::System::Int32 campId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEMONSTERHUDWIDGETCONTROLLER_PLAYANIMFORCAMP_OFFSET))(this, campId);
		}

		::System::Void ToggleDrag(::System::Boolean isDrag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEMONSTERHUDWIDGETCONTROLLER_TOGGLEDRAG_OFFSET))(this, isDrag);
		}

		::System::Void CloneMaterials(::Class_2_0C505066109FB1C7_Class_2_0EE0BA6ECD501D4E* view, ::UnityEngine::Material*& hpFill, ::UnityEngine::Material*& mpFill)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_0C505066109FB1C7_Class_2_0EE0BA6ECD501D4E*, ::UnityEngine::Material*&, ::UnityEngine::Material*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEMONSTERHUDWIDGETCONTROLLER_CLONEMATERIALS_OFFSET))(this, view, hpFill, mpFill);
		}

		::System::Void DisposeMaterials()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEMONSTERHUDWIDGETCONTROLLER_DISPOSEMATERIALS_OFFSET))(this);
		}

		::System::Void SetIcon(::Class_2_0C505066109FB1C7_Class_2_EF16346D79C18F15_10* icon, ::System::Int32 campId)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_0C505066109FB1C7_Class_2_EF16346D79C18F15_10*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEMONSTERHUDWIDGETCONTROLLER_SETICON_OFFSET))(this, icon, campId);
		}

		::System::Void _PlayAnimForCamp_b__24_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEMONSTERHUDWIDGETCONTROLLER__PLAYANIMFORCAMP_B__24_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEMONSTERHUDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEMONSTERHUDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEMONSTERHUDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEMONSTERHUDWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIReuse()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEMONSTERHUDWIDGETCONTROLLER___BASE_ONUIREUSE_OFFSET))(this);
		}

		::System::Void __base_ReleaseUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEMONSTERHUDWIDGETCONTROLLER___BASE_RELEASEUI_OFFSET))(this);
		}
	};
}
