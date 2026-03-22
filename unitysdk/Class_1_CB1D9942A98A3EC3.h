#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_526F80C07BF96DFE.h"
#include "unitysdk/System/Object.h"

class Class_1_125B637E4CB5468C;
class Class_3_3C27FB03C7F640D0_14;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_CB1D9942A98A3EC3_METHOD_1_2FEB9622E1585402_OFFSET UNITYSDK_OFFSET(0xA03EFB0)
#define CLASS_1_CB1D9942A98A3EC3__CTOR_OFFSET UNITYSDK_OFFSET(0xA03EF20)

inline static constexpr unsigned int Class_1_CB1D9942A98A3EC3_TypeDefinitionIndex = 37653;

class Class_1_CB1D9942A98A3EC3 : public ::System::Object
{
public:
	::Class_3_3C27FB03C7F640D0_14* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Enum_3_526F80C07BF96DFE>* Field_1_1; // 0x18
	::Class_1_125B637E4CB5468C* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB1D9942A98A3EC3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2FEB9622E1585402(::System::UInt32 a1, ::Enum_3_526F80C07BF96DFE a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Enum_3_526F80C07BF96DFE))((::PBYTE)hIl2Cpp + CLASS_1_CB1D9942A98A3EC3_METHOD_1_2FEB9622E1585402_OFFSET))(this, a1, a2);
	}
};
