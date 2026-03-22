#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_685AC11A7FB5C953;
class Class_1_AE8977CC8DFA35ED_1;
class Class_1_E4E9271419E7BF1D;

#define MOLEMOLE_SLIDINGSUBSYSTEM___C__DISPLAYCLASS32_0__CTOR_OFFSET UNITYSDK_OFFSET(0x99467C0)
#define MOLEMOLE_SLIDINGSUBSYSTEM___C__DISPLAYCLASS32_0__ONFIXEDUPDATE_G__FIXEDUPDATECHECKINGCONTEXT_1_OFFSET UNITYSDK_OFFSET(0x9946870)
#define MOLEMOLE_SLIDINGSUBSYSTEM___C__DISPLAYCLASS32_0__ONFIXEDUPDATE_G__FIXEDUPDATECONTROLCONTEXT_0_OFFSET UNITYSDK_OFFSET(0x99467D0)
#define MOLEMOLE_SLIDINGSUBSYSTEM___C__DISPLAYCLASS32_0__ONFIXEDUPDATE_G__FIXEDUPDATEROTATIONCONTEXT_2_OFFSET UNITYSDK_OFFSET(0x9946910)

namespace MoleMole
{
	inline static constexpr unsigned int SlidingSubsystem___c__DisplayClass32_0_TypeDefinitionIndex = 53544;

	class SlidingSubsystem___c__DisplayClass32_0 : public ::System::Object
	{
	public:
		::System::Single deltaTime; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM___C__DISPLAYCLASS32_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnFixedUpdate_g__FixedUpdateControlContext_0(::System::UInt32 entityId, ::Class_1_685AC11A7FB5C953* context)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_685AC11A7FB5C953*))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM___C__DISPLAYCLASS32_0__ONFIXEDUPDATE_G__FIXEDUPDATECONTROLCONTEXT_0_OFFSET))(this, entityId, context);
		}

		::System::Void _OnFixedUpdate_g__FixedUpdateCheckingContext_1(::System::UInt32 entityId, ::Class_1_AE8977CC8DFA35ED_1* context)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_AE8977CC8DFA35ED_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM___C__DISPLAYCLASS32_0__ONFIXEDUPDATE_G__FIXEDUPDATECHECKINGCONTEXT_1_OFFSET))(this, entityId, context);
		}

		::System::Void _OnFixedUpdate_g__FixedUpdateRotationContext_2(::System::UInt32 entityId, ::Class_1_E4E9271419E7BF1D* context)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_E4E9271419E7BF1D*))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM___C__DISPLAYCLASS32_0__ONFIXEDUPDATE_G__FIXEDUPDATEROTATIONCONTEXT_2_OFFSET))(this, entityId, context);
		}
	};
}
