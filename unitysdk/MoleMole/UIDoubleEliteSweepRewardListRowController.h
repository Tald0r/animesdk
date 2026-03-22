#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_03024D6472FC8F3A.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_79F6D62CE30E3F8E_94;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIDOUBLEELITESWEEPREWARDLISTROWCONTROLLER_CLEARREWARDS_OFFSET UNITYSDK_OFFSET(0x95E18C0)
#define MOLEMOLE_UIDOUBLEELITESWEEPREWARDLISTROWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x95E0C30)
#define MOLEMOLE_UIDOUBLEELITESWEEPREWARDLISTROWCONTROLLER_ONGAMEPADMODULESELECTINDEXFROMINPUT_OFFSET UNITYSDK_OFFSET(0x95E1A60)
#define MOLEMOLE_UIDOUBLEELITESWEEPREWARDLISTROWCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x95E0DB0)
#define MOLEMOLE_UIDOUBLEELITESWEEPREWARDLISTROWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x95E0CD0)
#define MOLEMOLE_UIDOUBLEELITESWEEPREWARDLISTROWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x95E09E0)
#define MOLEMOLE_UIDOUBLEELITESWEEPREWARDLISTROWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x95E1BC0)
#define MOLEMOLE_UIDOUBLEELITESWEEPREWARDLISTROWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x95E1C50)
#define MOLEMOLE_UIDOUBLEELITESWEEPREWARDLISTROWCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEXFROMINPUT_OFFSET UNITYSDK_OFFSET(0x95E1CC0)
#define MOLEMOLE_UIDOUBLEELITESWEEPREWARDLISTROWCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x95E1D40)
#define MOLEMOLE_UIDOUBLEELITESWEEPREWARDLISTROWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x95E1DC0)
#define MOLEMOLE_UIDOUBLEELITESWEEPREWARDLISTROWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x95E1E40)

namespace MoleMole
{
	inline static constexpr unsigned int UIDoubleEliteSweepRewardListRowController_TypeDefinitionIndex = 60549;

	class UIDoubleEliteSweepRewardListRowController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_94* _view; // 0x2D0
		::System::Boolean _bSetDefaultSelect; // 0x2D8
		::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnWidgetController*>* _rewardIconList; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITESWEEPREWARDLISTROWCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITESWEEPREWARDLISTROWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITESWEEPREWARDLISTROWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITESWEEPREWARDLISTROWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITESWEEPREWARDLISTROWCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnGamepadModuleSelectIndexFromInput(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITESWEEPREWARDLISTROWCONTROLLER_ONGAMEPADMODULESELECTINDEXFROMINPUT_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Void ClearRewards()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITESWEEPREWARDLISTROWCONTROLLER_CLEARREWARDS_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITESWEEPREWARDLISTROWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleSelectIndexFromInput(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::Enum_3_03024D6472FC8F3A P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITESWEEPREWARDLISTROWCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEXFROMINPUT_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITESWEEPREWARDLISTROWCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITESWEEPREWARDLISTROWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITESWEEPREWARDLISTROWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
