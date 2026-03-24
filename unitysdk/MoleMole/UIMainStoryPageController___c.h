#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_BD718685F2AA7978;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8ECBBC0)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8ECBC00)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__ONUIINIT_B__5_5_OFFSET UNITYSDK_OFFSET(0x8ECBC10)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainStoryPageController___c_TypeDefinitionIndex = 40405;

	class UIMainStoryPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIMainStoryPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIMainStoryPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIMainStoryPageController___c_TypeDefinitionIndex)->GetStaticField(0x40840);
		}
		static ::System::Func_2<::Class_2_BD718685F2AA7978*, ::System::Int32>** StaticGet___9__5_5()
		{
			return (::System::Func_2<::Class_2_BD718685F2AA7978*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIMainStoryPageController___c_TypeDefinitionIndex)->GetStaticField(0x40848);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnUIInit_b__5_5(::Class_2_BD718685F2AA7978* x)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_BD718685F2AA7978*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__ONUIINIT_B__5_5_OFFSET))(this, x);
		}
	};
}
