#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_6D99A03C58ED2B6E_2;
class Class_2_CEF0D076577A9E4E;
namespace MoleMole { class UIWorkBenchTrustDegreePageController_PartnerCampTemplateData; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___C__BINDEVENT_BUTTON_B__11_1_OFFSET UNITYSDK_OFFSET(0x9A385B0)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___C__BUILDPARTNERDATA_B__20_0_OFFSET UNITYSDK_OFFSET(0x9A387A0)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9A38560)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9A385A0)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___C__INITPARTNERCAMPDATA_B__16_0_OFFSET UNITYSDK_OFFSET(0x9A38670)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___C__INITPARTNERCAMPDATA_B__16_1_OFFSET UNITYSDK_OFFSET(0x9A386C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkBenchTrustDegreePageController___c_TypeDefinitionIndex = 64169;

	class UIWorkBenchTrustDegreePageController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_2_CEF0D076577A9E4E*>** StaticGet___9__20_0()
		{
			return (::System::Comparison_1<::Class_2_CEF0D076577A9E4E*>**)Il2CppClass::FromTypeDefinitionIndex(UIWorkBenchTrustDegreePageController___c_TypeDefinitionIndex)->GetStaticField(0x41870);
		}
		static ::System::Comparison_1<::Class_2_6D99A03C58ED2B6E_2*>** StaticGet___9__16_0()
		{
			return (::System::Comparison_1<::Class_2_6D99A03C58ED2B6E_2*>**)Il2CppClass::FromTypeDefinitionIndex(UIWorkBenchTrustDegreePageController___c_TypeDefinitionIndex)->GetStaticField(0x41878);
		}
		static ::MoleMole::UIWorkBenchTrustDegreePageController___c** StaticGet___9()
		{
			return (::MoleMole::UIWorkBenchTrustDegreePageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIWorkBenchTrustDegreePageController___c_TypeDefinitionIndex)->GetStaticField(0x41880);
		}
		static ::System::Action** StaticGet___9__11_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIWorkBenchTrustDegreePageController___c_TypeDefinitionIndex)->GetStaticField(0x41888);
		}
		static ::System::Func_2<::Class_2_6D99A03C58ED2B6E_2*, ::MoleMole::UIWorkBenchTrustDegreePageController_PartnerCampTemplateData*>** StaticGet___9__16_1()
		{
			return (::System::Func_2<::Class_2_6D99A03C58ED2B6E_2*, ::MoleMole::UIWorkBenchTrustDegreePageController_PartnerCampTemplateData*>**)Il2CppClass::FromTypeDefinitionIndex(UIWorkBenchTrustDegreePageController___c_TypeDefinitionIndex)->GetStaticField(0x41890);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _BindEvent_Button_b__11_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___C__BINDEVENT_BUTTON_B__11_1_OFFSET))(this);
		}

		::System::Int32 _InitPartnerCampData_b__16_0(::Class_2_6D99A03C58ED2B6E_2* a, ::Class_2_6D99A03C58ED2B6E_2* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_6D99A03C58ED2B6E_2*, ::Class_2_6D99A03C58ED2B6E_2*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___C__INITPARTNERCAMPDATA_B__16_0_OFFSET))(this, a, b);
		}

		::MoleMole::UIWorkBenchTrustDegreePageController_PartnerCampTemplateData* _InitPartnerCampData_b__16_1(::Class_2_6D99A03C58ED2B6E_2* template_)
		{
			return ((::MoleMole::UIWorkBenchTrustDegreePageController_PartnerCampTemplateData*(*)(::PVOID, ::Class_2_6D99A03C58ED2B6E_2*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___C__INITPARTNERCAMPDATA_B__16_1_OFFSET))(this, template_);
		}

		::System::Int32 _BuildPartnerData_b__20_0(::Class_2_CEF0D076577A9E4E* a, ::Class_2_CEF0D076577A9E4E* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_CEF0D076577A9E4E*, ::Class_2_CEF0D076577A9E4E*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___C__BUILDPARTNERDATA_B__20_0_OFFSET))(this, a, b);
		}
	};
}
