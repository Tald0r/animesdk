#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_640;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIHOLLOWTEAMPREVIEWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x91469D0)
#define MOLEMOLE_UIHOLLOWTEAMPREVIEWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9146A10)
#define MOLEMOLE_UIHOLLOWTEAMPREVIEWWIDGETCONTROLLER___C__FETCHCFGS_B__11_0_OFFSET UNITYSDK_OFFSET(0x9146A20)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowTeamPreviewWidgetController___c_TypeDefinitionIndex = 55103;

	class UIHollowTeamPreviewWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_2_208CC9941471731A_640*>** StaticGet___9__11_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_640*>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowTeamPreviewWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3B900);
		}
		static ::MoleMole::UIHollowTeamPreviewWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHollowTeamPreviewWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHollowTeamPreviewWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3B908);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTEAMPREVIEWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTEAMPREVIEWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _FetchCfgs_b__11_0(::Class_2_208CC9941471731A_640* x, ::Class_2_208CC9941471731A_640* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_640*, ::Class_2_208CC9941471731A_640*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTEAMPREVIEWWIDGETCONTROLLER___C__FETCHCFGS_B__11_0_OFFSET))(this, x, y);
		}
	};
}
