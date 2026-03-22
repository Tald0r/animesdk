#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_44;
namespace MoleMole { class BigSceneFloorCapabilitySubSystem; }

#define MOLEMOLE_BIGSCENEFLOORCAPABILITYSUBSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x62929C0)
#define MOLEMOLE_BIGSCENEFLOORCAPABILITYSUBSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x6292A00)
#define MOLEMOLE_BIGSCENEFLOORCAPABILITYSUBSYSTEM___C___CCTOR_B__17_0_OFFSET UNITYSDK_OFFSET(0x6292A10)
#define MOLEMOLE_BIGSCENEFLOORCAPABILITYSUBSYSTEM___C___CCTOR_B__17_1_OFFSET UNITYSDK_OFFSET(0x6292A60)
#define MOLEMOLE_BIGSCENEFLOORCAPABILITYSUBSYSTEM___C___CCTOR_B__17_2_OFFSET UNITYSDK_OFFSET(0x6292AB0)
#define MOLEMOLE_BIGSCENEFLOORCAPABILITYSUBSYSTEM___C___CCTOR_B__17_3_OFFSET UNITYSDK_OFFSET(0x6292B20)

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneFloorCapabilitySubSystem___c_TypeDefinitionIndex = 42654;

	class BigSceneFloorCapabilitySubSystem___c : public ::System::Object
	{
	public:
		static ::MoleMole::BigSceneFloorCapabilitySubSystem___c** StaticGet___9()
		{
			return (::MoleMole::BigSceneFloorCapabilitySubSystem___c**)Il2CppClass::FromTypeDefinitionIndex(BigSceneFloorCapabilitySubSystem___c_TypeDefinitionIndex)->GetStaticField(0x2F540);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEFLOORCAPABILITYSUBSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEFLOORCAPABILITYSUBSYSTEM___C__CTOR_OFFSET))(this);
		}

		::Class_1_43BD383C98B4C0C5_44* __cctor_b__17_0()
		{
			return ((::Class_1_43BD383C98B4C0C5_44*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEFLOORCAPABILITYSUBSYSTEM___C___CCTOR_B__17_0_OFFSET))(this);
		}

		::Class_1_43BD383C98B4C0C5_44* __cctor_b__17_1()
		{
			return ((::Class_1_43BD383C98B4C0C5_44*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEFLOORCAPABILITYSUBSYSTEM___C___CCTOR_B__17_1_OFFSET))(this);
		}

		::System::Void __cctor_b__17_2(::MoleMole::BigSceneFloorCapabilitySubSystem* subSystem)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::BigSceneFloorCapabilitySubSystem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEFLOORCAPABILITYSUBSYSTEM___C___CCTOR_B__17_2_OFFSET))(this, subSystem);
		}

		::System::Void __cctor_b__17_3(::MoleMole::BigSceneFloorCapabilitySubSystem* subSystem)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::BigSceneFloorCapabilitySubSystem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEFLOORCAPABILITYSUBSYSTEM___C___CCTOR_B__17_3_OFFSET))(this, subSystem);
		}
	};
}
