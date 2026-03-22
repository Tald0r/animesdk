#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FF80A1ACD786CECB_3;
class Class_2_208CC9941471731A_512;

#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8BE8120)
#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS11_0__REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x8BE8130)
#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS11_0__REFRESHVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x8BE81E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIDailyQuestHandBookWidgetController___c__DisplayClass11_0_TypeDefinitionIndex = 73748;

	class UIDailyQuestHandBookWidgetController___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_512* poolConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshView_b__0(::Class_1_FF80A1ACD786CECB_3* l, ::Class_1_FF80A1ACD786CECB_3* r)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_FF80A1ACD786CECB_3*, ::Class_1_FF80A1ACD786CECB_3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS11_0__REFRESHVIEW_B__0_OFFSET))(this, l, r);
		}

		::System::Int32 _RefreshView_b__1(::Class_1_FF80A1ACD786CECB_3* l, ::Class_1_FF80A1ACD786CECB_3* r)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_FF80A1ACD786CECB_3*, ::Class_1_FF80A1ACD786CECB_3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS11_0__REFRESHVIEW_B__1_OFFSET))(this, l, r);
		}
	};
}
