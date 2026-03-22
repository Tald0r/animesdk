#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E7140F4786C00178;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x95DDE50)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x95DDE90)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___C__DOBACK_B__52_0_OFFSET UNITYSDK_OFFSET(0x95DDFD0)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___C__GET_ISANYSETTLING_B__31_0_OFFSET UNITYSDK_OFFSET(0x95DDEA0)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___C__SAVEALL_B__46_0_OFFSET UNITYSDK_OFFSET(0x95DDF20)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___C__SAVEALL_B__46_3_OFFSET UNITYSDK_OFFSET(0x95DDF40)

namespace MoleMole
{
	inline static constexpr unsigned int UIDisplayCasePageController___c_TypeDefinitionIndex = 64835;

	class UIDisplayCasePageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIDisplayCasePageController___c** StaticGet___9()
		{
			return (::MoleMole::UIDisplayCasePageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIDisplayCasePageController___c_TypeDefinitionIndex)->GetStaticField(0x36A40);
		}
		static ::System::Func_2<::Class_1_E7140F4786C00178*, ::System::Boolean>** StaticGet___9__31_0()
		{
			return (::System::Func_2<::Class_1_E7140F4786C00178*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIDisplayCasePageController___c_TypeDefinitionIndex)->GetStaticField(0x36A48);
		}
		static ::System::Action_1<::Class_1_E7140F4786C00178*>** StaticGet___9__46_0()
		{
			return (::System::Action_1<::Class_1_E7140F4786C00178*>**)Il2CppClass::FromTypeDefinitionIndex(UIDisplayCasePageController___c_TypeDefinitionIndex)->GetStaticField(0x36A50);
		}
		static ::System::Func_2<::Class_1_E7140F4786C00178*, ::System::Boolean>** StaticGet___9__52_0()
		{
			return (::System::Func_2<::Class_1_E7140F4786C00178*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIDisplayCasePageController___c_TypeDefinitionIndex)->GetStaticField(0x36A58);
		}
		static ::System::Action_1<::Class_1_E7140F4786C00178*>** StaticGet___9__46_3()
		{
			return (::System::Action_1<::Class_1_E7140F4786C00178*>**)Il2CppClass::FromTypeDefinitionIndex(UIDisplayCasePageController___c_TypeDefinitionIndex)->GetStaticField(0x36A60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_IsAnySettling_b__31_0(::Class_1_E7140F4786C00178* i)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_E7140F4786C00178*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___C__GET_ISANYSETTLING_B__31_0_OFFSET))(this, i);
		}

		::System::Void _SaveAll_b__46_0(::Class_1_E7140F4786C00178* i)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E7140F4786C00178*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___C__SAVEALL_B__46_0_OFFSET))(this, i);
		}

		::System::Void _SaveAll_b__46_3(::Class_1_E7140F4786C00178* i)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E7140F4786C00178*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___C__SAVEALL_B__46_3_OFFSET))(this, i);
		}

		::System::Boolean _DoBack_b__52_0(::Class_1_E7140F4786C00178* vm)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_E7140F4786C00178*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___C__DOBACK_B__52_0_OFFSET))(this, vm);
		}
	};
}
