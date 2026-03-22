#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_441CA76566B8E079.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIRIDUSGOTBOOCHANGECLOTHPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA3EC9A0)
#define MOLEMOLE_UIRIDUSGOTBOOCHANGECLOTHPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA3EC9E0)
#define MOLEMOLE_UIRIDUSGOTBOOCHANGECLOTHPAGECONTROLLER___C__GETSCOREBUFFRATIO_B__60_0_OFFSET UNITYSDK_OFFSET(0xA3EC9F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooChangeClothPageController___c_TypeDefinitionIndex = 66427;

	class UIRidusGotBooChangeClothPageController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::Enum_3_441CA76566B8E079, ::System::Int32>, ::System::Int32>** StaticGet___9__60_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::Enum_3_441CA76566B8E079, ::System::Int32>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIRidusGotBooChangeClothPageController___c_TypeDefinitionIndex)->GetStaticField(0x40390);
		}
		static ::MoleMole::UIRidusGotBooChangeClothPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIRidusGotBooChangeClothPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIRidusGotBooChangeClothPageController___c_TypeDefinitionIndex)->GetStaticField(0x40398);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOCHANGECLOTHPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOCHANGECLOTHPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetScoreBuffRatio_b__60_0(::System::Collections::Generic::KeyValuePair_2<::Enum_3_441CA76566B8E079, ::System::Int32> x)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::Enum_3_441CA76566B8E079, ::System::Int32>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOCHANGECLOTHPAGECONTROLLER___C__GETSCOREBUFFRATIO_B__60_0_OFFSET))(this, x);
		}
	};
}
