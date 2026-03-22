#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_44EFB945CAE441A3;
class Class_3_48A3D3A34C52331D_14;
namespace MoleMole { class UIBangBooUAVLevelPageController; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA51EBC0)
#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER___C__DISPLAYCLASS12_0__ONSTART_B__0_OFFSET UNITYSDK_OFFSET(0xA51EBD0)
#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER___C__DISPLAYCLASS12_0__ONSTART_B__1_OFFSET UNITYSDK_OFFSET(0xA51F120)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangBooUAVLevelPageController___c__DisplayClass12_0_TypeDefinitionIndex = 43296;

	class UIBangBooUAVLevelPageController___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* enhanceList; // 0x10
		::System::Action_1<::Class_3_48A3D3A34C52331D_14*>* __9__1; // 0x18
		::MoleMole::UIBangBooUAVLevelPageController* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnStart_b__0(::Class_1_44EFB945CAE441A3* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_44EFB945CAE441A3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER___C__DISPLAYCLASS12_0__ONSTART_B__0_OFFSET))(this, data);
		}

		::System::Void _OnStart_b__1(::Class_3_48A3D3A34C52331D_14* ret)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_48A3D3A34C52331D_14*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER___C__DISPLAYCLASS12_0__ONSTART_B__1_OFFSET))(this, ret);
		}
	};
}
