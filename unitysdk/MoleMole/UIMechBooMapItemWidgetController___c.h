#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7ECB9691B142D586;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIMECHBOOMAPITEMWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB501750)
#define MOLEMOLE_UIMECHBOOMAPITEMWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB501790)
#define MOLEMOLE_UIMECHBOOMAPITEMWIDGETCONTROLLER___C__INITITEMVIEW_B__11_0_OFFSET UNITYSDK_OFFSET(0xB5017A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMechBooMapItemWidgetController___c_TypeDefinitionIndex = 75780;

	class UIMechBooMapItemWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7ECB9691B142D586*>** StaticGet___9__11_0()
		{
			return (::System::Action_1<::Class_1_7ECB9691B142D586*>**)Il2CppClass::FromTypeDefinitionIndex(UIMechBooMapItemWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3BA30);
		}
		static ::MoleMole::UIMechBooMapItemWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIMechBooMapItemWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIMechBooMapItemWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3BA38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOMAPITEMWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOMAPITEMWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _InitItemView_b__11_0(::Class_1_7ECB9691B142D586* vp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7ECB9691B142D586*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOMAPITEMWIDGETCONTROLLER___C__INITITEMVIEW_B__11_0_OFFSET))(this, vp);
		}
	};
}
