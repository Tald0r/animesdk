#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_809D1C94CBDD4811;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIMONSTERFANTASYEVENTPREPPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x945B630)
#define MOLEMOLE_UIMONSTERFANTASYEVENTPREPPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x945B670)
#define MOLEMOLE_UIMONSTERFANTASYEVENTPREPPAGECONTROLLER___C__REFRESHVIEW_B__9_0_OFFSET UNITYSDK_OFFSET(0x945B680)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterFantasyEventPrepPageController___c_TypeDefinitionIndex = 54972;

	class UIMonsterFantasyEventPrepPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIMonsterFantasyEventPrepPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIMonsterFantasyEventPrepPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIMonsterFantasyEventPrepPageController___c_TypeDefinitionIndex)->GetStaticField(0x32830);
		}
		static ::System::Func_2<::Class_3_809D1C94CBDD4811*, ::System::Boolean>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::Class_3_809D1C94CBDD4811*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIMonsterFantasyEventPrepPageController___c_TypeDefinitionIndex)->GetStaticField(0x32838);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYEVENTPREPPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYEVENTPREPPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshView_b__9_0(::Class_3_809D1C94CBDD4811* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_809D1C94CBDD4811*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYEVENTPREPPAGECONTROLLER___C__REFRESHVIEW_B__9_0_OFFSET))(this, x);
		}
	};
}
