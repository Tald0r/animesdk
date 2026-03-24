#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_602;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UITOWERDEFENSEBANGBOOPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x79074B0)
#define MOLEMOLE_UITOWERDEFENSEBANGBOOPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x79074F0)
#define MOLEMOLE_UITOWERDEFENSEBANGBOOPAGECONTROLLER___C__REFRESHVIEW_B__8_0_OFFSET UNITYSDK_OFFSET(0x7907500)

namespace MoleMole
{
	inline static constexpr unsigned int UITowerDefenseBangbooPageController___c_TypeDefinitionIndex = 45485;

	class UITowerDefenseBangbooPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UITowerDefenseBangbooPageController___c** StaticGet___9()
		{
			return (::MoleMole::UITowerDefenseBangbooPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UITowerDefenseBangbooPageController___c_TypeDefinitionIndex)->GetStaticField(0x3BBA0);
		}
		static ::System::Comparison_1<::Class_2_208CC9941471731A_602*>** StaticGet___9__8_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_602*>**)Il2CppClass::FromTypeDefinitionIndex(UITowerDefenseBangbooPageController___c_TypeDefinitionIndex)->GetStaticField(0x3BBA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEBANGBOOPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEBANGBOOPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshView_b__8_0(::Class_2_208CC9941471731A_602* a, ::Class_2_208CC9941471731A_602* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_602*, ::Class_2_208CC9941471731A_602*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEBANGBOOPAGECONTROLLER___C__REFRESHVIEW_B__8_0_OFFSET))(this, a, b);
		}
	};
}
