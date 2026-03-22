#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7ECB9691B142D586;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIMECHBOOMAPITEMWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x6CD2D90)
#define MOLEMOLE_UIMECHBOOMAPITEMWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x6CD2DD0)
#define MOLEMOLE_UIMECHBOOMAPITEMWIDGETCONTROLLER___C__INITITEMVIEW_B__11_0_OFFSET UNITYSDK_OFFSET(0x6CD2DE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMechBooMapItemWidgetController___c_TypeDefinitionIndex = 76748;

	class UIMechBooMapItemWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIMechBooMapItemWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIMechBooMapItemWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIMechBooMapItemWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x38E00);
		}
		static ::System::Action_1<::Class_1_7ECB9691B142D586*>** StaticGet___9__11_0()
		{
			return (::System::Action_1<::Class_1_7ECB9691B142D586*>**)Il2CppClass::FromTypeDefinitionIndex(UIMechBooMapItemWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x38E08);
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
