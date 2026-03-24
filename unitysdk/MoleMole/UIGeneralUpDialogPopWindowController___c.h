#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIGENERALUPDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xAD38A00)
#define MOLEMOLE_UIGENERALUPDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xAD38A40)
#define MOLEMOLE_UIGENERALUPDIALOGPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__19_0_OFFSET UNITYSDK_OFFSET(0xAD38A50)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralUpDialogPopWindowController___c_TypeDefinitionIndex = 71414;

	class UIGeneralUpDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIGeneralUpDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIGeneralUpDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralUpDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x34550);
		}
		static ::System::Comparison_1<::Class_1_0D6706375CDAAE8C*>** StaticGet___9__19_0()
		{
			return (::System::Comparison_1<::Class_1_0D6706375CDAAE8C*>**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralUpDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x34558);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALUPDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALUPDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshView_b__19_0(::Class_1_0D6706375CDAAE8C* x, ::Class_1_0D6706375CDAAE8C* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALUPDIALOGPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__19_0_OFFSET))(this, x, y);
		}
	};
}
