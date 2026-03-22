#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7ECB9691B142D586;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIHOLLOWVIDEOPLAYDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE285010)
#define MOLEMOLE_UIHOLLOWVIDEOPLAYDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE285050)
#define MOLEMOLE_UIHOLLOWVIDEOPLAYDIALOGPOPWINDOWCONTROLLER___C__ONUIOPEN_B__4_0_OFFSET UNITYSDK_OFFSET(0xE285060)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowVideoPlayDialogPopWindowController___c_TypeDefinitionIndex = 43995;

	class UIHollowVideoPlayDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7ECB9691B142D586*>** StaticGet___9__4_0()
		{
			return (::System::Action_1<::Class_1_7ECB9691B142D586*>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowVideoPlayDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x34AB0);
		}
		static ::MoleMole::UIHollowVideoPlayDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIHollowVideoPlayDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHollowVideoPlayDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x34AB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWVIDEOPLAYDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWVIDEOPLAYDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__4_0(::Class_1_7ECB9691B142D586* vp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7ECB9691B142D586*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWVIDEOPLAYDIALOGPOPWINDOWCONTROLLER___C__ONUIOPEN_B__4_0_OFFSET))(this, vp);
		}
	};
}
