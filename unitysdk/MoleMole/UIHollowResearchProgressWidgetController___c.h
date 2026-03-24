#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_139;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIHOLLOWRESEARCHPROGRESSWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9144870)
#define MOLEMOLE_UIHOLLOWRESEARCHPROGRESSWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x91448B0)
#define MOLEMOLE_UIHOLLOWRESEARCHPROGRESSWIDGETCONTROLLER___C__REFRESHSCROLLVIEW_B__18_0_OFFSET UNITYSDK_OFFSET(0x91448C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowResearchProgressWidgetController___c_TypeDefinitionIndex = 67089;

	class UIHollowResearchProgressWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIHollowResearchProgressWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHollowResearchProgressWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHollowResearchProgressWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x46E30);
		}
		static ::System::Comparison_1<::Class_2_208CC9941471731A_139*>** StaticGet___9__18_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_139*>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowResearchProgressWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x46E38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESEARCHPROGRESSWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESEARCHPROGRESSWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshScrollView_b__18_0(::Class_2_208CC9941471731A_139* x, ::Class_2_208CC9941471731A_139* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_139*, ::Class_2_208CC9941471731A_139*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESEARCHPROGRESSWIDGETCONTROLLER___C__REFRESHSCROLLVIEW_B__18_0_OFFSET))(this, x, y);
		}
	};
}
