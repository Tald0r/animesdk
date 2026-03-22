#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_220;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIHOLLOWRESEARCHPROGRESSWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x7D159B0)
#define MOLEMOLE_UIHOLLOWRESEARCHPROGRESSWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x7D159F0)
#define MOLEMOLE_UIHOLLOWRESEARCHPROGRESSWIDGETCONTROLLER___C__REFRESHSCROLLVIEW_B__18_0_OFFSET UNITYSDK_OFFSET(0x7D15A00)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowResearchProgressWidgetController___c_TypeDefinitionIndex = 65959;

	class UIHollowResearchProgressWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_2_208CC9941471731A_220*>** StaticGet___9__18_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_220*>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowResearchProgressWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x40330);
		}
		static ::MoleMole::UIHollowResearchProgressWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHollowResearchProgressWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHollowResearchProgressWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x40338);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESEARCHPROGRESSWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESEARCHPROGRESSWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshScrollView_b__18_0(::Class_2_208CC9941471731A_220* x, ::Class_2_208CC9941471731A_220* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_220*, ::Class_2_208CC9941471731A_220*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESEARCHPROGRESSWIDGETCONTROLLER___C__REFRESHSCROLLVIEW_B__18_0_OFFSET))(this, x, y);
		}
	};
}
