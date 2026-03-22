#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_03024D6472FC8F3A.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_C24B693A39FF0505_1;
class Class_1_F9A4B687C800B5DE;
class Class_2_60638234271CCDB8_137;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIBPLEVELREWARDROWWIDGETCONTROLLER_HIDEREWARDROWGETREWARDEFFECT_OFFSET UNITYSDK_OFFSET(0xCC2C6C0)
#define MOLEMOLE_UIBPLEVELREWARDROWWIDGETCONTROLLER_ONCLIKLEVELREWARDROW_OFFSET UNITYSDK_OFFSET(0xCC2C590)
#define MOLEMOLE_UIBPLEVELREWARDROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xCC2BB10)
#define MOLEMOLE_UIBPLEVELREWARDROWWIDGETCONTROLLER_ONGAMEPADMODULEDESELECTINDEX_OFFSET UNITYSDK_OFFSET(0xCC2C490)
#define MOLEMOLE_UIBPLEVELREWARDROWWIDGETCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0xCC2C380)
#define MOLEMOLE_UIBPLEVELREWARDROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xCC2BCA0)
#define MOLEMOLE_UIBPLEVELREWARDROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xCC2BBB0)
#define MOLEMOLE_UIBPLEVELREWARDROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xCC2B7A0)
#define MOLEMOLE_UIBPLEVELREWARDROWWIDGETCONTROLLER_REFRESHCONSOLEBTNSTATE_OFFSET UNITYSDK_OFFSET(0xCC2C0F0)
#define MOLEMOLE_UIBPLEVELREWARDROWWIDGETCONTROLLER_STARTREWARDROWGETREWARDEFFECT_OFFSET UNITYSDK_OFFSET(0xCC2C620)
#define MOLEMOLE_UIBPLEVELREWARDROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xCC2C730)
#define MOLEMOLE_UIBPLEVELREWARDROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xCC2C740)
#define MOLEMOLE_UIBPLEVELREWARDROWWIDGETCONTROLLER___BASE_ONGAMEPADMODULEDESELECTINDEX_OFFSET UNITYSDK_OFFSET(0xCC2C7B0)
#define MOLEMOLE_UIBPLEVELREWARDROWWIDGETCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0xCC2C830)
#define MOLEMOLE_UIBPLEVELREWARDROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xCC2C8B0)
#define MOLEMOLE_UIBPLEVELREWARDROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xCC2C930)
#define MOLEMOLE_UIBPLEVELREWARDROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xCC2C9B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBPLevelRewardRowWidgetController_TypeDefinitionIndex = 67501;

	class UIBPLevelRewardRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_60638234271CCDB8_137* _view; // 0x2D0
		::Class_1_C24B693A39FF0505_1* levelRewardData; // 0x2D8
		::Class_1_F9A4B687C800B5DE* levelRewardHandler; // 0x2E0
		::System::Boolean isSelect; // 0x2E8
		::System::Int32 selectIndex; // 0x2EC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPLEVELREWARDROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPLEVELREWARDROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPLEVELREWARDROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPLEVELREWARDROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPLEVELREWARDROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPLEVELREWARDROWWIDGETCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Void OnGamepadModuleDeselectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPLEVELREWARDROWWIDGETCONTROLLER_ONGAMEPADMODULEDESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Void OnClikLevelRewardRow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPLEVELREWARDROWWIDGETCONTROLLER_ONCLIKLEVELREWARDROW_OFFSET))(this);
		}

		::System::Boolean StartRewardRowGetRewardEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPLEVELREWARDROWWIDGETCONTROLLER_STARTREWARDROWGETREWARDEFFECT_OFFSET))(this);
		}

		::System::Void HideRewardRowGetRewardEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPLEVELREWARDROWWIDGETCONTROLLER_HIDEREWARDROWGETREWARDEFFECT_OFFSET))(this);
		}

		::System::Void RefreshConsoleBtnState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPLEVELREWARDROWWIDGETCONTROLLER_REFRESHCONSOLEBTNSTATE_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPLEVELREWARDROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleDeselectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::Enum_3_03024D6472FC8F3A P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPLEVELREWARDROWWIDGETCONTROLLER___BASE_ONGAMEPADMODULEDESELECTINDEX_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::Enum_3_03024D6472FC8F3A P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPLEVELREWARDROWWIDGETCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPLEVELREWARDROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPLEVELREWARDROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPLEVELREWARDROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
