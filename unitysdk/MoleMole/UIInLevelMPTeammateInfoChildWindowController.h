#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9166BD0F741825C9_Enum_3_E8EEFC25995A90B4.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWorldBaseController.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_48D56DACBE4271BC;
class Class_1_9166BD0F741825C9_Class_1_80B72DC469819FF0;
class Class_2_C5C76936C9D491E6_1;
class Class_3_7472FB6CC4015359;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralInteractingContainerController; }
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER_BUILDDATABINDING_OFFSET UNITYSDK_OFFSET(0x7F86880)
#define MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x7F859B0)
#define MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER_HIDEVIEW_OFFSET UNITYSDK_OFFSET(0x7F87460)
#define MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x7F85F20)
#define MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x7F86020)
#define MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER_ONHUDUPDATE_OFFSET UNITYSDK_OFFSET(0x7F874E0)
#define MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x7F860C0)
#define MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x7F859C0)
#define MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x7F85D70)
#define MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER_SETTEAMMATEINDEX_OFFSET UNITYSDK_OFFSET(0x7F87230)
#define MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER_SETUPENTITY_OFFSET UNITYSDK_OFFSET(0x7F86AB0)
#define MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x7F86150)
#define MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER__BUILDDATABINDING_B__27_0_OFFSET UNITYSDK_OFFSET(0x7F87FC0)
#define MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x7F87F60)
#define MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x7F87DF0)
#define MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER__SETUPFOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0x7F86DF0)
#define MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER__UPDATEFOLLOWANDVISIBLE_OFFSET UNITYSDK_OFFSET(0x7F87650)
#define MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER__UPDATESCALE_OFFSET UNITYSDK_OFFSET(0x7F861C0)
#define MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x7F88420)
#define MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x7F88480)
#define MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x7F884F0)
#define MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x7F88500)
#define MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x7F88510)
#define MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x7F88580)
#define MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER___UPDATEFOLLOWANDVISIBLE_G____AUTOVISIBLE_34_1_OFFSET UNITYSDK_OFFSET(0x7F87BA0)
#define MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER___UPDATEFOLLOWANDVISIBLE_G____ISPOINTVISIBLE_34_0_OFFSET UNITYSDK_OFFSET(0x7F87940)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelMPTeammateInfoChildWindowController_TypeDefinitionIndex = 47274;

	class UIInLevelMPTeammateInfoChildWindowController : public ::MoleMole::UIWorldBaseController
	{
	public:
		static ::System::Int32* StaticGet_StartColorShaderParamID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIInLevelMPTeammateInfoChildWindowController_TypeDefinitionIndex)->GetStaticField(0xD990);
		}
		static ::System::Int32* StaticGet_ProgressShaderParamID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIInLevelMPTeammateInfoChildWindowController_TypeDefinitionIndex)->GetStaticField(0xD994);
		}
		static ::System::Int32* StaticGet_EndColorShaderParamID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIInLevelMPTeammateInfoChildWindowController_TypeDefinitionIndex)->GetStaticField(0xD998);
		}
		::Class_2_C5C76936C9D491E6_1* _view; // 0x308
		::UnityEngine::CanvasGroup* _rootCanvasGroup; // 0x310
		::UnityEngine::RectTransform* parentRoot; // 0x318
		::UnityEngine::RectTransform* selfTransform; // 0x320
		::UnityEngine::Collider* followTargetCollider; // 0x328
		::MoleMole::UIGeneralInteractingContainerController* _generalInteractingContainerCtrl; // 0x330
		::UnityEngine::Transform* _followTargetPointTransform; // 0x338
		::System::Single _uiOffset; // 0x340
		::System::Collections::Generic::Dictionary_2<::Class_1_9166BD0F741825C9_Enum_3_E8EEFC25995A90B4, ::Class_1_9166BD0F741825C9_Class_1_80B72DC469819FF0*>* _params; // 0x348
		::UnityEngine::Canvas* m_SortCamvas; // 0x350
		::UnityEngine::Color _beingRevivedColor; // 0x358
		::UnityEngine::Color _dyingColor; // 0x368
		::MoleMole::Battle::Entity* _entity; // 0x378
		::Class_1_48D56DACBE4271BC* _propertySyncHelper; // 0x380
		::System::Boolean _hasBindView; // 0x388
		::Class_3_7472FB6CC4015359* _hudComponent; // 0x390

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER__CCTOR_OFFSET))();
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void BuildDataBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER_BUILDDATABINDING_OFFSET))(this);
		}

		::System::Void SetupEntity(::System::UInt32 entityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER_SETUPENTITY_OFFSET))(this, entityID);
		}

		::System::Void HideView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER_HIDEVIEW_OFFSET))(this);
		}

		::System::Void _SetupFollowTarget(::System::UInt32 entityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER__SETUPFOLLOWTARGET_OFFSET))(this, entityID);
		}

		::System::Void SetTeammateIndex(::System::UInt32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER_SETTEAMMATEINDEX_OFFSET))(this, index);
		}

		::System::Void _UpdateScale()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER__UPDATESCALE_OFFSET))(this);
		}

		::System::Void OnHudUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER_ONHUDUPDATE_OFFSET))(this);
		}

		::System::Void _UpdateFollowAndVisible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER__UPDATEFOLLOWANDVISIBLE_OFFSET))(this);
		}

		::System::Void _BuildDataBinding_b__27_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER__BUILDDATABINDING_B__27_0_OFFSET))(this);
		}

		::System::Boolean __UpdateFollowAndVisible_g____IsPointVisible_34_0(::UnityEngine::Vector3 worldPos)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER___UPDATEFOLLOWANDVISIBLE_G____ISPOINTVISIBLE_34_0_OFFSET))(this, worldPos);
		}

		::System::Void __UpdateFollowAndVisible_g____AutoVisible_34_1(::System::Boolean visable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER___UPDATEFOLLOWANDVISIBLE_G____AUTOVISIBLE_34_1_OFFSET))(this, visable);
		}

		::System::Void __base_InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMPTEAMMATEINFOCHILDWINDOWCONTROLLER___BASE_UPDATE_OFFSET))(this);
		}
	};
}
