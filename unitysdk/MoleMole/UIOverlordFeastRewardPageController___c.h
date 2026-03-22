#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_892;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIOVERLORDFEASTREWARDPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA3DE5F0)
#define MOLEMOLE_UIOVERLORDFEASTREWARDPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA3DE630)
#define MOLEMOLE_UIOVERLORDFEASTREWARDPAGECONTROLLER___C__REFRESHVIEW_B__7_0_OFFSET UNITYSDK_OFFSET(0xA3DE640)

namespace MoleMole
{
	inline static constexpr unsigned int UIOverlordFeastRewardPageController___c_TypeDefinitionIndex = 57609;

	class UIOverlordFeastRewardPageController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_2_208CC9941471731A_892*, ::System::Boolean>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::Class_2_208CC9941471731A_892*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIOverlordFeastRewardPageController___c_TypeDefinitionIndex)->GetStaticField(0x40380);
		}
		static ::MoleMole::UIOverlordFeastRewardPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIOverlordFeastRewardPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIOverlordFeastRewardPageController___c_TypeDefinitionIndex)->GetStaticField(0x40388);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTREWARDPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTREWARDPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshView_b__7_0(::Class_2_208CC9941471731A_892* t)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_892*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTREWARDPAGECONTROLLER___C__REFRESHVIEW_B__7_0_OFFSET))(this, t);
		}
	};
}
