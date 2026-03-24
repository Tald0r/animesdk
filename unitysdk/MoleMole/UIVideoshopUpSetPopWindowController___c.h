#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIVIDEOSHOPUPSETPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x953DC00)
#define MOLEMOLE_UIVIDEOSHOPUPSETPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x953DC40)
#define MOLEMOLE_UIVIDEOSHOPUPSETPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__13_0_OFFSET UNITYSDK_OFFSET(0x953DC50)

namespace MoleMole
{
	inline static constexpr unsigned int UIVideoshopUpSetPopWindowController___c_TypeDefinitionIndex = 43097;

	class UIVideoshopUpSetPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::Int32>** StaticGet___9__13_0()
		{
			return (::System::Comparison_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIVideoshopUpSetPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x34A90);
		}
		static ::MoleMole::UIVideoshopUpSetPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIVideoshopUpSetPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIVideoshopUpSetPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x34A98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPUPSETPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPUPSETPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshView_b__13_0(::System::Int32 a, ::System::Int32 b)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPUPSETPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__13_0_OFFSET))(this, a, b);
		}
	};
}
