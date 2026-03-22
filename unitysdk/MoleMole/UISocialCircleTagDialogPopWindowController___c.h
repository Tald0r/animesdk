#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_267;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UISOCIALCIRCLETAGDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9A0FA00)
#define MOLEMOLE_UISOCIALCIRCLETAGDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9A0FA40)
#define MOLEMOLE_UISOCIALCIRCLETAGDIALOGPOPWINDOWCONTROLLER___C__ONUIOPEN_B__6_0_OFFSET UNITYSDK_OFFSET(0x9A0FA50)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleTagDialogPopWindowController___c_TypeDefinitionIndex = 37619;

	class UISocialCircleTagDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UISocialCircleTagDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UISocialCircleTagDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UISocialCircleTagDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x2D440);
		}
		static ::System::Func_2<::System::Int32, ::Class_2_208CC9941471731A_267*>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::System::Int32, ::Class_2_208CC9941471731A_267*>**)Il2CppClass::FromTypeDefinitionIndex(UISocialCircleTagDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x2D448);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLETAGDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLETAGDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::Class_2_208CC9941471731A_267* _OnUIOpen_b__6_0(::System::Int32 value)
		{
			return ((::Class_2_208CC9941471731A_267*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLETAGDIALOGPOPWINDOWCONTROLLER___C__ONUIOPEN_B__6_0_OFFSET))(this, value);
		}
	};
}
