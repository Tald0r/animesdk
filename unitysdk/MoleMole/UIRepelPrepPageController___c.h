#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIREPELPREPPAGECONTROLLER___C__BUILDVIEWMODELDATABINDING_B__15_0_OFFSET UNITYSDK_OFFSET(0xCA425B0)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCA42560)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER___C__CHECKSLOT_B__17_0_OFFSET UNITYSDK_OFFSET(0xCA42750)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCA425A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRepelPrepPageController___c_TypeDefinitionIndex = 46949;

	class UIRepelPrepPageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__15_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIRepelPrepPageController___c_TypeDefinitionIndex)->GetStaticField(0x36CE0);
		}
		static ::System::Action** StaticGet___9__17_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIRepelPrepPageController___c_TypeDefinitionIndex)->GetStaticField(0x36CE8);
		}
		static ::MoleMole::UIRepelPrepPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIRepelPrepPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIRepelPrepPageController___c_TypeDefinitionIndex)->GetStaticField(0x36CF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _BuildViewModelDataBinding_b__15_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER___C__BUILDVIEWMODELDATABINDING_B__15_0_OFFSET))(this);
		}

		::System::Void _CheckSlot_b__17_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER___C__CHECKSLOT_B__17_0_OFFSET))(this);
		}
	};
}
