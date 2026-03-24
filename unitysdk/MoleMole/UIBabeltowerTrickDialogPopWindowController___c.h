#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_54;
namespace MoleMole { class UIWidgetController; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIBABELTOWERTRICKDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBF366A0)
#define MOLEMOLE_UIBABELTOWERTRICKDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBF366E0)
#define MOLEMOLE_UIBABELTOWERTRICKDIALOGPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__8_0_OFFSET UNITYSDK_OFFSET(0xBF36720)
#define MOLEMOLE_UIBABELTOWERTRICKDIALOGPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__8_1_OFFSET UNITYSDK_OFFSET(0xBF366F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerTrickDialogPopWindowController___c_TypeDefinitionIndex = 53191;

	class UIBabeltowerTrickDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_2_208CC9941471731A_54*, ::System::Boolean>** StaticGet___9__8_1()
		{
			return (::System::Func_2<::Class_2_208CC9941471731A_54*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIBabeltowerTrickDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x2E2E0);
		}
		static ::MoleMole::UIBabeltowerTrickDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIBabeltowerTrickDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIBabeltowerTrickDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x2E2E8);
		}
		static ::System::Func_2<::MoleMole::UIWidgetController*, ::UnityEngine::GameObject*>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::MoleMole::UIWidgetController*, ::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(UIBabeltowerTrickDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x2E2F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERTRICKDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERTRICKDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshView_b__8_1(::Class_2_208CC9941471731A_54* temp)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_54*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERTRICKDIALOGPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__8_1_OFFSET))(this, temp);
		}

		::UnityEngine::GameObject* _RefreshView_b__8_0(::MoleMole::UIWidgetController* item)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::MoleMole::UIWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERTRICKDIALOGPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__8_0_OFFSET))(this, item);
		}
	};
}
