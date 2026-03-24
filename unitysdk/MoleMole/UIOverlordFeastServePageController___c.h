#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5002A338EA6818A8;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB51BEE0)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB51BF20)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER___C__GETGUESTDELICIOUSNESS_B__77_1_OFFSET UNITYSDK_OFFSET(0xB51BF30)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER___C__GETGUESTHEALTH_B__78_1_OFFSET UNITYSDK_OFFSET(0xB51BF60)

namespace MoleMole
{
	inline static constexpr unsigned int UIOverlordFeastServePageController___c_TypeDefinitionIndex = 47744;

	class UIOverlordFeastServePageController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_5002A338EA6818A8*, ::System::Int32>** StaticGet___9__78_1()
		{
			return (::System::Func_2<::Class_1_5002A338EA6818A8*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIOverlordFeastServePageController___c_TypeDefinitionIndex)->GetStaticField(0x2E810);
		}
		static ::MoleMole::UIOverlordFeastServePageController___c** StaticGet___9()
		{
			return (::MoleMole::UIOverlordFeastServePageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIOverlordFeastServePageController___c_TypeDefinitionIndex)->GetStaticField(0x2E818);
		}
		static ::System::Func_2<::Class_1_5002A338EA6818A8*, ::System::Int32>** StaticGet___9__77_1()
		{
			return (::System::Func_2<::Class_1_5002A338EA6818A8*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIOverlordFeastServePageController___c_TypeDefinitionIndex)->GetStaticField(0x2E820);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetGuestDeliciousness_b__77_1(::Class_1_5002A338EA6818A8* context)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_5002A338EA6818A8*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER___C__GETGUESTDELICIOUSNESS_B__77_1_OFFSET))(this, context);
		}

		::System::Int32 _GetGuestHealth_b__78_1(::Class_1_5002A338EA6818A8* context)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_5002A338EA6818A8*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER___C__GETGUESTHEALTH_B__78_1_OFFSET))(this, context);
		}
	};
}
