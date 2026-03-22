#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UISTREAMINGGAMEPAGECONTROLLER___C__BINDTWEENSLOT_B__140_1_OFFSET UNITYSDK_OFFSET(0xB27C620)
#define MOLEMOLE_UISTREAMINGGAMEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB27C270)
#define MOLEMOLE_UISTREAMINGGAMEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB27C2B0)
#define MOLEMOLE_UISTREAMINGGAMEPAGECONTROLLER___C__ONSHOW_B__103_0_OFFSET UNITYSDK_OFFSET(0xB27C490)
#define MOLEMOLE_UISTREAMINGGAMEPAGECONTROLLER___C__REGISTERALLEVENTS_B__90_5_OFFSET UNITYSDK_OFFSET(0xB27C2C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIStreamingGamePageController___c_TypeDefinitionIndex = 51510;

	class UIStreamingGamePageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIStreamingGamePageController___c** StaticGet___9()
		{
			return (::MoleMole::UIStreamingGamePageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIStreamingGamePageController___c_TypeDefinitionIndex)->GetStaticField(0x2D450);
		}
		static ::System::Func_1<::System::Int32>** StaticGet___9__140_1()
		{
			return (::System::Func_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIStreamingGamePageController___c_TypeDefinitionIndex)->GetStaticField(0x2D458);
		}
		static ::System::Action_1<::System::EventArgs*>** StaticGet___9__90_5()
		{
			return (::System::Action_1<::System::EventArgs*>**)Il2CppClass::FromTypeDefinitionIndex(UIStreamingGamePageController___c_TypeDefinitionIndex)->GetStaticField(0x2D460);
		}
		static ::System::Action** StaticGet___9__103_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIStreamingGamePageController___c_TypeDefinitionIndex)->GetStaticField(0x2D468);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISTREAMINGGAMEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTREAMINGGAMEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterAllEvents_b__90_5(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTREAMINGGAMEPAGECONTROLLER___C__REGISTERALLEVENTS_B__90_5_OFFSET))(this, args);
		}

		::System::Void _OnShow_b__103_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTREAMINGGAMEPAGECONTROLLER___C__ONSHOW_B__103_0_OFFSET))(this);
		}

		::System::Int32 _BindTweenSlot_b__140_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTREAMINGGAMEPAGECONTROLLER___C__BINDTWEENSLOT_B__140_1_OFFSET))(this);
		}
	};
}
