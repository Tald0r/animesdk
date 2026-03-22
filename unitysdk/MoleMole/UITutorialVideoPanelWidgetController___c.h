#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7ECB9691B142D586;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD6E48D0)
#define MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD6E4910)
#define MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER___C__PLAYVIDEOINNER_B__9_0_OFFSET UNITYSDK_OFFSET(0xD6E4920)

namespace MoleMole
{
	inline static constexpr unsigned int UITutorialVideoPanelWidgetController___c_TypeDefinitionIndex = 68974;

	class UITutorialVideoPanelWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UITutorialVideoPanelWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UITutorialVideoPanelWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UITutorialVideoPanelWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x2D5E0);
		}
		static ::System::Action_1<::Class_1_7ECB9691B142D586*>** StaticGet___9__9_0()
		{
			return (::System::Action_1<::Class_1_7ECB9691B142D586*>**)Il2CppClass::FromTypeDefinitionIndex(UITutorialVideoPanelWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x2D5E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _PlayVideoInner_b__9_0(::Class_1_7ECB9691B142D586* vp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7ECB9691B142D586*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER___C__PLAYVIDEOINNER_B__9_0_OFFSET))(this, vp);
		}
	};
}
