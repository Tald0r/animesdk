#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FFD2BFBAA17829FB;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCFFE880)
#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCFFE8C0)
#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___C__INITRETURNPAGEITEMLIST_B__41_0_OFFSET UNITYSDK_OFFSET(0xCFFE8D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityReturnPageController___c_TypeDefinitionIndex = 75738;

	class UIActivityReturnPageController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_FFD2BFBAA17829FB*, ::System::Boolean>** StaticGet___9__41_0()
		{
			return (::System::Func_2<::Class_1_FFD2BFBAA17829FB*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIActivityReturnPageController___c_TypeDefinitionIndex)->GetStaticField(0x430A0);
		}
		static ::MoleMole::UIActivityReturnPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIActivityReturnPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIActivityReturnPageController___c_TypeDefinitionIndex)->GetStaticField(0x430A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _InitReturnPageItemList_b__41_0(::Class_1_FFD2BFBAA17829FB* backFlowData)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_FFD2BFBAA17829FB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___C__INITRETURNPAGEITEMLIST_B__41_0_OFFSET))(this, backFlowData);
		}
	};
}
