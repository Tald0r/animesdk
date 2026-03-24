#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_451601B8BB62C38C_2;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UITRIDICEITEMCOLLECTWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x7BDD210)
#define MOLEMOLE_UITRIDICEITEMCOLLECTWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x7BDD250)
#define MOLEMOLE_UITRIDICEITEMCOLLECTWIDGETCONTROLLER___C__REFRESHVIEW_B__17_1_OFFSET UNITYSDK_OFFSET(0x7BDD260)
#define MOLEMOLE_UITRIDICEITEMCOLLECTWIDGETCONTROLLER___C__REFRESHVIEW_B__17_2_OFFSET UNITYSDK_OFFSET(0x7BDD280)

namespace MoleMole
{
	inline static constexpr unsigned int UITriDiceItemCollectWidgetController___c_TypeDefinitionIndex = 62329;

	class UITriDiceItemCollectWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_451601B8BB62C38C_2*, ::System::Int32>** StaticGet___9__17_2()
		{
			return (::System::Func_2<::Class_1_451601B8BB62C38C_2*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UITriDiceItemCollectWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x39A10);
		}
		static ::System::Func_2<::Class_1_451601B8BB62C38C_2*, ::System::Boolean>** StaticGet___9__17_1()
		{
			return (::System::Func_2<::Class_1_451601B8BB62C38C_2*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UITriDiceItemCollectWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x39A18);
		}
		static ::MoleMole::UITriDiceItemCollectWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UITriDiceItemCollectWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UITriDiceItemCollectWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x39A20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEITEMCOLLECTWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEITEMCOLLECTWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshView_b__17_1(::Class_1_451601B8BB62C38C_2* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_451601B8BB62C38C_2*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEITEMCOLLECTWIDGETCONTROLLER___C__REFRESHVIEW_B__17_1_OFFSET))(this, item);
		}

		::System::Int32 _RefreshView_b__17_2(::Class_1_451601B8BB62C38C_2* item)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_451601B8BB62C38C_2*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEITEMCOLLECTWIDGETCONTROLLER___C__REFRESHVIEW_B__17_2_OFFSET))(this, item);
		}
	};
}
