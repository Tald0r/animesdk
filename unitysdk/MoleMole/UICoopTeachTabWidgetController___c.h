#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_A8F5ABF31E066ED4;
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_UICOOPTEACHTABWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA26EB70)
#define MOLEMOLE_UICOOPTEACHTABWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA26EBB0)
#define MOLEMOLE_UICOOPTEACHTABWIDGETCONTROLLER___C__REFRESHVIEW_B__10_0_OFFSET UNITYSDK_OFFSET(0xA26EBC0)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopTeachTabWidgetController___c_TypeDefinitionIndex = 52352;

	class UICoopTeachTabWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UICoopTeachTabWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UICoopTeachTabWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UICoopTeachTabWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x34920);
		}
		static ::System::Converter_2<::Class_2_A8F5ABF31E066ED4*, ::UnityEngine::UI::Image*>** StaticGet___9__10_0()
		{
			return (::System::Converter_2<::Class_2_A8F5ABF31E066ED4*, ::UnityEngine::UI::Image*>**)Il2CppClass::FromTypeDefinitionIndex(UICoopTeachTabWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x34928);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEACHTABWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEACHTABWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::Image* _RefreshView_b__10_0(::Class_2_A8F5ABF31E066ED4* x)
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID, ::Class_2_A8F5ABF31E066ED4*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEACHTABWIDGETCONTROLLER___C__REFRESHVIEW_B__10_0_OFFSET))(this, x);
		}
	};
}
