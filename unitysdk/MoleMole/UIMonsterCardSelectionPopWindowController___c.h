#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7F8E72A37FA24C0F;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define MOLEMOLE_UIMONSTERCARDSELECTIONPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8F508A0)
#define MOLEMOLE_UIMONSTERCARDSELECTIONPOPWINDOWCONTROLLER___C__CREATEREWARDFILTER_B__52_0_OFFSET UNITYSDK_OFFSET(0x8F508F0)
#define MOLEMOLE_UIMONSTERCARDSELECTIONPOPWINDOWCONTROLLER___C__CREATEREWARDFILTER_B__52_1_OFFSET UNITYSDK_OFFSET(0x8F509D0)
#define MOLEMOLE_UIMONSTERCARDSELECTIONPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8F508E0)
#define MOLEMOLE_UIMONSTERCARDSELECTIONPOPWINDOWCONTROLLER___C__ONLYREFRESHFILTERCARDBUFF_B__60_0_OFFSET UNITYSDK_OFFSET(0x8F50AA0)
#define MOLEMOLE_UIMONSTERCARDSELECTIONPOPWINDOWCONTROLLER___C__ONLYREFRESHFILTERCARDBUFF_B__60_1_OFFSET UNITYSDK_OFFSET(0x8F50AC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterCardSelectionPopWindowController___c_TypeDefinitionIndex = 44375;

	class UIMonsterCardSelectionPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_7F8E72A37FA24C0F*, ::System::Int32>** StaticGet___9__60_0()
		{
			return (::System::Func_2<::Class_1_7F8E72A37FA24C0F*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIMonsterCardSelectionPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x43320);
		}
		static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__52_0()
		{
			return (::System::Func_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIMonsterCardSelectionPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x43328);
		}
		static ::System::Func_1<::System::Collections::Generic::IList_1<::System::Int32>*>** StaticGet___9__52_1()
		{
			return (::System::Func_1<::System::Collections::Generic::IList_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(UIMonsterCardSelectionPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x43330);
		}
		static ::System::Func_2<::System::Int32, ::System::Boolean>** StaticGet___9__60_1()
		{
			return (::System::Func_2<::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIMonsterCardSelectionPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x43338);
		}
		static ::MoleMole::UIMonsterCardSelectionPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIMonsterCardSelectionPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIMonsterCardSelectionPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x43340);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDSELECTIONPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDSELECTIONPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::String* _CreateRewardFilter_b__52_0(::System::Int32 filter)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDSELECTIONPOPWINDOWCONTROLLER___C__CREATEREWARDFILTER_B__52_0_OFFSET))(this, filter);
		}

		::System::Collections::Generic::IList_1<::System::Int32>* _CreateRewardFilter_b__52_1()
		{
			return ((::System::Collections::Generic::IList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDSELECTIONPOPWINDOWCONTROLLER___C__CREATEREWARDFILTER_B__52_1_OFFSET))(this);
		}

		::System::Int32 _OnlyRefreshFilterCardBuff_b__60_0(::Class_1_7F8E72A37FA24C0F* x)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_7F8E72A37FA24C0F*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDSELECTIONPOPWINDOWCONTROLLER___C__ONLYREFRESHFILTERCARDBUFF_B__60_0_OFFSET))(this, x);
		}

		::System::Boolean _OnlyRefreshFilterCardBuff_b__60_1(::System::Int32 x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDSELECTIONPOPWINDOWCONTROLLER___C__ONLYREFRESHFILTERCARDBUFF_B__60_1_OFFSET))(this, x);
		}
	};
}
