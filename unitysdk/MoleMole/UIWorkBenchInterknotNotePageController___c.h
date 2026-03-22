#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EDBF989FCD2F91A5_Class_1_9E89B2D44593C915;
class Class_2_208CC9941471731A_46;
namespace System { class Action; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER___C__BINDEVENT_BUTTON_B__12_1_OFFSET UNITYSDK_OFFSET(0x65B4670)
#define MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x65B4620)
#define MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x65B4660)
#define MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER___C__INITPOPUPSORTDATA_B__16_0_OFFSET UNITYSDK_OFFSET(0x65B4730)
#define MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER___C__INITPOPUPSORTDATA_B__16_1_OFFSET UNITYSDK_OFFSET(0x65B4780)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkBenchInterknotNotePageController___c_TypeDefinitionIndex = 55798;

	class UIWorkBenchInterknotNotePageController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_2_208CC9941471731A_46*>** StaticGet___9__16_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_46*>**)Il2CppClass::FromTypeDefinitionIndex(UIWorkBenchInterknotNotePageController___c_TypeDefinitionIndex)->GetStaticField(0x38FF0);
		}
		static ::System::Action** StaticGet___9__12_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIWorkBenchInterknotNotePageController___c_TypeDefinitionIndex)->GetStaticField(0x38FF8);
		}
		static ::MoleMole::UIWorkBenchInterknotNotePageController___c** StaticGet___9()
		{
			return (::MoleMole::UIWorkBenchInterknotNotePageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIWorkBenchInterknotNotePageController___c_TypeDefinitionIndex)->GetStaticField(0x39000);
		}
		static ::System::Comparison_1<::Class_1_EDBF989FCD2F91A5_Class_1_9E89B2D44593C915*>** StaticGet___9__16_1()
		{
			return (::System::Comparison_1<::Class_1_EDBF989FCD2F91A5_Class_1_9E89B2D44593C915*>**)Il2CppClass::FromTypeDefinitionIndex(UIWorkBenchInterknotNotePageController___c_TypeDefinitionIndex)->GetStaticField(0x39008);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _BindEvent_Button_b__12_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER___C__BINDEVENT_BUTTON_B__12_1_OFFSET))(this);
		}

		::System::Int32 _InitPopupSortData_b__16_0(::Class_2_208CC9941471731A_46* a, ::Class_2_208CC9941471731A_46* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_46*, ::Class_2_208CC9941471731A_46*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER___C__INITPOPUPSORTDATA_B__16_0_OFFSET))(this, a, b);
		}

		::System::Int32 _InitPopupSortData_b__16_1(::Class_1_EDBF989FCD2F91A5_Class_1_9E89B2D44593C915* a, ::Class_1_EDBF989FCD2F91A5_Class_1_9E89B2D44593C915* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_EDBF989FCD2F91A5_Class_1_9E89B2D44593C915*, ::Class_1_EDBF989FCD2F91A5_Class_1_9E89B2D44593C915*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER___C__INITPOPUPSORTDATA_B__16_1_OFFSET))(this, a, b);
		}
	};
}
