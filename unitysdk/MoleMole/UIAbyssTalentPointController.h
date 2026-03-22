#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIMonoController.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_7BE9DA63A1CDCC96;
class Class_2_DA8BF519212BAE65;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI::Extension { class UIButtonEx; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0xC8D0BC0)
#define MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER_GETCANACTIVE_OFFSET UNITYSDK_OFFSET(0xC8D17A0)
#define MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER_GETISUNLOCK_OFFSET UNITYSDK_OFFSET(0xC8D1860)
#define MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER_GETMATERIALENOUGH_OFFSET UNITYSDK_OFFSET(0xC8D12D0)
#define MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER_GETTALENTPOINTCFG_OFFSET UNITYSDK_OFFSET(0xC8D1260)
#define MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER_GETTALENTPOINTID_OFFSET UNITYSDK_OFFSET(0xC8D11F0)
#define MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xC8D0D30)
#define MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER_ONSKINBTNCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0xC8D18F0)
#define MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER_PLAYACTIVEEFFECT_OFFSET UNITYSDK_OFFSET(0xC8D1A30)
#define MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER_PLAYUNLOCKEFFECT_OFFSET UNITYSDK_OFFSET(0xC8D1BC0)
#define MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xC8D1490)
#define MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER_SETCLICKACTION_OFFSET UNITYSDK_OFFSET(0xC8D1420)
#define MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER_SETSELECTED_OFFSET UNITYSDK_OFFSET(0xC8D19B0)
#define MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER_SETTALENTPOINT_OFFSET UNITYSDK_OFFSET(0xC8D0E60)
#define MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0xC8D0E00)
#define MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC8D1CA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssTalentPointController_TypeDefinitionIndex = 51550;

	class UIAbyssTalentPointController : public ::MoleMole::UIMonoController
	{
	public:
		::UnityEngine::UI::Extension::UIButtonEx* SkinBtn; // 0x80
		::UnityEngine::UI::Image* Icon; // 0x88
		::UnityEngine::GameObject* LockObj; // 0x90
		::UnityEngine::GameObject* SelectObj; // 0x98
		::UnityEngine::GameObject* EFLight; // 0xA0
		::UnityEngine::GameObject* VXIconRed; // 0xA8
		::UnityEngine::UI::Extension::UILocalizationText* NameText; // 0xB0
		::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>* IconEffectList; // 0xB8
		::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>* IconActiveList; // 0xC0
		::System::String* UnLockAniStr; // 0xC8
		::System::String* ActiveAniStr; // 0xD0
		::System::Action_1<::System::Int32>* onClickAction; // 0xD8
		::UnityEngine::Animation* skinAni; // 0xE0
		::Class_2_7BE9DA63A1CDCC96* talentPointCfg; // 0xE8
		::Class_2_DA8BF519212BAE65* abyssModel; // 0xF0
		::System::Int32 id; // 0xF8
		::System::Int32 num; // 0xFC
		::System::Boolean isActive; // 0x100
		::System::Boolean isCanActive; // 0x101

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER_START_OFFSET))(this);
		}

		::System::Void SetTalentPoint(::System::Int32 talentPointID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER_SETTALENTPOINT_OFFSET))(this, talentPointID);
		}

		::System::Int32 GetTalentPointID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER_GETTALENTPOINTID_OFFSET))(this);
		}

		::Class_2_7BE9DA63A1CDCC96* GetTalentPointCfg()
		{
			return ((::Class_2_7BE9DA63A1CDCC96*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER_GETTALENTPOINTCFG_OFFSET))(this);
		}

		::System::Boolean GetMaterialEnough(::System::ValueTuple_2<::System::Int32, ::System::Int32>& vec)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::System::Int32>&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER_GETMATERIALENOUGH_OFFSET))(this, vec);
		}

		::System::Void SetClickAction(::System::Action_1<::System::Int32>* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER_SETCLICKACTION_OFFSET))(this, action);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Boolean GetCanActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER_GETCANACTIVE_OFFSET))(this);
		}

		::System::Boolean GetIsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER_GETISUNLOCK_OFFSET))(this);
		}

		::System::Void OnSkinBtnClickHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER_ONSKINBTNCLICKHANDLE_OFFSET))(this);
		}

		::System::Void SetSelected(::System::Boolean isSelected)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER_SETSELECTED_OFFSET))(this, isSelected);
		}

		::System::Single PlayActiveEffect()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER_PLAYACTIVEEFFECT_OFFSET))(this);
		}

		::System::Single PlayUnLockEffect()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER_PLAYUNLOCKEFFECT_OFFSET))(this);
		}
	};
}
