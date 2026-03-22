#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_685AC11A7FB5C953;

#define MOLEMOLE_SLIDINGSUBSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x7F27660)
#define MOLEMOLE_SLIDINGSUBSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x7F276A0)
#define MOLEMOLE_SLIDINGSUBSYSTEM___C__ONUPDATE_G__UPDATECONTROLCONTEXT_33_0_OFFSET UNITYSDK_OFFSET(0x7F276B0)

namespace MoleMole
{
	inline static constexpr unsigned int SlidingSubsystem___c_TypeDefinitionIndex = 53543;

	class SlidingSubsystem___c : public ::System::Object
	{
	public:
		static ::MoleMole::SlidingSubsystem___c** StaticGet___9()
		{
			return (::MoleMole::SlidingSubsystem___c**)Il2CppClass::FromTypeDefinitionIndex(SlidingSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x416B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUpdate_g__UpdateControlContext_33_0(::System::UInt32 entityId, ::Class_1_685AC11A7FB5C953* context)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_685AC11A7FB5C953*))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM___C__ONUPDATE_G__UPDATECONTROLCONTEXT_33_0_OFFSET))(this, entityId, context);
		}
	};
}
