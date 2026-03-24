#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_025FF4981524A424_462;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UISOCIALCIRCLERECRUITFRIENDCARDROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x96FCF00)
#define MOLEMOLE_UISOCIALCIRCLERECRUITFRIENDCARDROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x96FCF40)
#define MOLEMOLE_UISOCIALCIRCLERECRUITFRIENDCARDROWWIDGETCONTROLLER___C__RECRUITCALLBACK_B__1_0_OFFSET UNITYSDK_OFFSET(0x96FCF50)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleRecruitFriendCardRowWidgetController___c_TypeDefinitionIndex = 65543;

	class UISocialCircleRecruitFriendCardRowWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UISocialCircleRecruitFriendCardRowWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UISocialCircleRecruitFriendCardRowWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UISocialCircleRecruitFriendCardRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3F2D0);
		}
		static ::System::Action_1<::Class_3_025FF4981524A424_462*>** StaticGet___9__1_0()
		{
			return (::System::Action_1<::Class_3_025FF4981524A424_462*>**)Il2CppClass::FromTypeDefinitionIndex(UISocialCircleRecruitFriendCardRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3F2D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLERECRUITFRIENDCARDROWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLERECRUITFRIENDCARDROWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _RecruitCallback_b__1_0(::Class_3_025FF4981524A424_462* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_025FF4981524A424_462*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLERECRUITFRIENDCARDROWWIDGETCONTROLLER___C__RECRUITCALLBACK_B__1_0_OFFSET))(this, rsp);
		}
	};
}
