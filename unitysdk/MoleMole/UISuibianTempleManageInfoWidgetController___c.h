#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1E89A1A01EA84819;
class Class_2_208CC9941471731A_758;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xAE35BF0)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xAE35C30)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER___C___CCTOR_B__64_0_OFFSET UNITYSDK_OFFSET(0xAE35C40)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER___C___CCTOR_B__64_1_OFFSET UNITYSDK_OFFSET(0xAE35C60)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER___C___CCTOR_B__64_2_OFFSET UNITYSDK_OFFSET(0xAE35D70)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER___C___CCTOR_B__64_3_OFFSET UNITYSDK_OFFSET(0xAE35F90)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleManageInfoWidgetController___c_TypeDefinitionIndex = 51381;

	class UISuibianTempleManageInfoWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_2_208CC9941471731A_758*, ::System::Int32>** StaticGet___9__64_3()
		{
			return (::System::Func_2<::Class_2_208CC9941471731A_758*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleManageInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3F160);
		}
		static ::MoleMole::UISuibianTempleManageInfoWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UISuibianTempleManageInfoWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleManageInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3F168);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::String* __cctor_b__64_0(::System::Int32 talentSubModule)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER___C___CCTOR_B__64_0_OFFSET))(this, talentSubModule);
		}

		::System::Boolean __cctor_b__64_1(::Class_2_1E89A1A01EA84819* item, ::System::Int32 filter)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_1E89A1A01EA84819*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER___C___CCTOR_B__64_1_OFFSET))(this, item, filter);
		}

		::System::Collections::Generic::IList_1<::System::Int32>* __cctor_b__64_2()
		{
			return ((::System::Collections::Generic::IList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER___C___CCTOR_B__64_2_OFFSET))(this);
		}

		::System::Int32 __cctor_b__64_3(::Class_2_208CC9941471731A_758* config)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_758*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER___C___CCTOR_B__64_3_OFFSET))(this, config);
		}
	};
}
