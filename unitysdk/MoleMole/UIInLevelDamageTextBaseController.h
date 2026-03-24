#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_6F714FF477D2D093.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_F35B080B137ECC46;
namespace MoleMole { class UIInLevelDamageTextContainerChildWindowController; }
namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER_CALCUPOS_OFFSET UNITYSDK_OFFSET(0x9C13E90)
#define MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER_GETDAMAGETEXTLENGTH_OFFSET UNITYSDK_OFFSET(0x9C139F0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER_GETFINALDISPLAYPOS_OFFSET UNITYSDK_OFFSET(0x9C13C40)
#define MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER_GET_ISTEXTHIDDEN_OFFSET UNITYSDK_OFFSET(0x9C136B0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x9C136A0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER_HIDETEXT_OFFSET UNITYSDK_OFFSET(0x9C14050)
#define MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x9C142F0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER_ONPAUSEGAMESTATECHANGED_OFFSET UNITYSDK_OFFSET(0x9C14B50)
#define MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x9C136C0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER_ONUPDATETEXT_OFFSET UNITYSDK_OFFSET(0x9C13A60)
#define MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x9C145D0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER_SETPARENTCONTAINER_OFFSET UNITYSDK_OFFSET(0x9C13AD0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER_SHOWTEXT_OFFSET UNITYSDK_OFFSET(0x9C13B40)
#define MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x9C14C00)
#define MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x9C14BC0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x9C14C40)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelDamageTextBaseController_TypeDefinitionIndex = 54952;

	class UIInLevelDamageTextBaseController : public ::MoleMole::UIWindowController
	{
	public:
		static ::UnityEngine::Vector2* StaticGet_HideUIAnchoredPosition()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(UIInLevelDamageTextBaseController_TypeDefinitionIndex)->GetStaticField(0xA6C0);
		}
		::System::Boolean _isTextHidden; // 0x2F8
		::MoleMole::Battle::Entity* _attackee; // 0x300
		::Class_3_F35B080B137ECC46* _attackeeModelComponent; // 0x308
		::UnityEngine::Vector3 _positionOffset; // 0x310
		::UnityEngine::Vector3 _lastModelPosition; // 0x31C
		::UnityEngine::RectTransform* _uiParent; // 0x328
		::MoleMole::UIInLevelDamageTextContainerChildWindowController* _parentContainer; // 0x330
		::UnityEngine::Vector2 _screenSpaceRangeMin; // 0x338
		::UnityEngine::Vector2 _screenSpaceRangeMax; // 0x340
		::UnityEngine::Vector3 _worldPosition; // 0x348
		::UnityEngine::Vector2 _screenSpacePosOffset; // 0x354
		::Enum_3_6F714FF477D2D093 _targetFollowType; // 0x35C
		::UnityEngine::Vector3 _initModelPosition; // 0x360
		::System::Boolean _isPause; // 0x36C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER__CCTOR_OFFSET))();
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsTextHidden()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER_GET_ISTEXTHIDDEN_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Single GetDamageTextLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER_GETDAMAGETEXTLENGTH_OFFSET))(this);
		}

		::System::Void OnUpdateText(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER_ONUPDATETEXT_OFFSET))(this, deltaTime);
		}

		::System::Void SetParentContainer(::MoleMole::UIInLevelDamageTextContainerChildWindowController* parentContainer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelDamageTextContainerChildWindowController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER_SETPARENTCONTAINER_OFFSET))(this, parentContainer);
		}

		::System::Void ShowText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER_SHOWTEXT_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetFinalDisplayPos()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER_GETFINALDISPLAYPOS_OFFSET))(this);
		}

		::System::Void CalcuPos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER_CALCUPOS_OFFSET))(this);
		}

		::System::Void HideText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER_HIDETEXT_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER_INIT_OFFSET))(this);
		}

		::System::Void RefreshView(::UnityEngine::Vector3 worldPos, ::MoleMole::Battle::Entity* attackee, ::UnityEngine::Vector2 screenSpacePosOffset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER_REFRESHVIEW_OFFSET))(this, worldPos, attackee, screenSpacePosOffset);
		}

		::System::Void OnPauseGameStateChanged(::System::Boolean isPause)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER_ONPAUSEGAMESTATECHANGED_OFFSET))(this, isPause);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
