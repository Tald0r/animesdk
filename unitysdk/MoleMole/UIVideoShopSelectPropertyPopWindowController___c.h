#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_C3F0E3B5AB5977AE;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIVIDEOSHOPSELECTPROPERTYPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xDF631D0)
#define MOLEMOLE_UIVIDEOSHOPSELECTPROPERTYPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xDF63210)
#define MOLEMOLE_UIVIDEOSHOPSELECTPROPERTYPOPWINDOWCONTROLLER___C__ISBASEPROPERTYRECOMMEND_B__29_1_OFFSET UNITYSDK_OFFSET(0xDF63220)

namespace MoleMole
{
	inline static constexpr unsigned int UIVideoShopSelectPropertyPopWindowController___c_TypeDefinitionIndex = 67280;

	class UIVideoShopSelectPropertyPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_3_C3F0E3B5AB5977AE*, ::System::UInt32>** StaticGet___9__29_1()
		{
			return (::System::Func_2<::Class_3_C3F0E3B5AB5977AE*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(UIVideoShopSelectPropertyPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3BC10);
		}
		static ::MoleMole::UIVideoShopSelectPropertyPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIVideoShopSelectPropertyPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIVideoShopSelectPropertyPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3BC18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSELECTPROPERTYPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSELECTPROPERTYPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _IsBasePropertyRecommend_b__29_1(::Class_3_C3F0E3B5AB5977AE* prop)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_3_C3F0E3B5AB5977AE*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSELECTPROPERTYPOPWINDOWCONTROLLER___C__ISBASEPROPERTYRECOMMEND_B__29_1_OFFSET))(this, prop);
		}
	};
}
