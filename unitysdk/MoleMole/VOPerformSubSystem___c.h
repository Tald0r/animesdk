#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/VOPerformSubSystem_CurtainSetInfo.h"
#include "unitysdk/Struct_2_45B62668F0BA5CF8.h"
#include "unitysdk/Struct_2_EB409772687773A2.h"
#include "unitysdk/System/Object.h"

class Class_3_D92ADC48CDFCC09B_1;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_VOPERFORMSUBSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x65C8500)
#define MOLEMOLE_VOPERFORMSUBSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x65C8540)
#define MOLEMOLE_VOPERFORMSUBSYSTEM___C___OPERATENPCENTITYNAMEBYENTITY_B__51_0_OFFSET UNITYSDK_OFFSET(0x65C8570)
#define MOLEMOLE_VOPERFORMSUBSYSTEM___C___REFRESHBLACKCURTAIN_B__16_0_OFFSET UNITYSDK_OFFSET(0x65C8550)

namespace MoleMole
{
	inline static constexpr unsigned int VOPerformSubSystem___c_TypeDefinitionIndex = 62427;

	class VOPerformSubSystem___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::MoleMole::VOPerformSubSystem_CurtainSetInfo>** StaticGet___9__16_0()
		{
			return (::System::Comparison_1<::MoleMole::VOPerformSubSystem_CurtainSetInfo>**)Il2CppClass::FromTypeDefinitionIndex(VOPerformSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x30420);
		}
		static ::Class_3_D92ADC48CDFCC09B_1** StaticGet___9__51_0()
		{
			return (::Class_3_D92ADC48CDFCC09B_1**)Il2CppClass::FromTypeDefinitionIndex(VOPerformSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x30428);
		}
		static ::MoleMole::VOPerformSubSystem___c** StaticGet___9()
		{
			return (::MoleMole::VOPerformSubSystem___c**)Il2CppClass::FromTypeDefinitionIndex(VOPerformSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x30430);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __RefreshBlackCurtain_b__16_0(::MoleMole::VOPerformSubSystem_CurtainSetInfo l, ::MoleMole::VOPerformSubSystem_CurtainSetInfo r)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::VOPerformSubSystem_CurtainSetInfo, ::MoleMole::VOPerformSubSystem_CurtainSetInfo))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM___C___REFRESHBLACKCURTAIN_B__16_0_OFFSET))(this, l, r);
		}

		::Struct_2_45B62668F0BA5CF8 __OperateNpcEntityNameByEntity_b__51_0(::Struct_2_EB409772687773A2& target)
		{
			return ((::Struct_2_45B62668F0BA5CF8(*)(::PVOID, ::Struct_2_EB409772687773A2&))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM___C___OPERATENPCENTITYNAMEBYENTITY_B__51_0_OFFSET))(this, target);
		}
	};
}
