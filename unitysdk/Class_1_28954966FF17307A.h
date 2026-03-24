#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_F780BA94AF5E7E37.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_617;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_28954966FF17307A__CTOR_OFFSET UNITYSDK_OFFSET(0x776B5F0)

inline static constexpr unsigned int Class_1_28954966FF17307A_TypeDefinitionIndex = 65462;

class Class_1_28954966FF17307A : public ::System::Object
{
public:
	::System::Func_2<::Struct_2_F780BA94AF5E7E37, ::System::Boolean>* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_617* Field_1_2; // 0x18
	::Struct_2_F780BA94AF5E7E37 Field_1_3; // 0x20
	::System::Int32 Field_1_4; // 0x2C
	::System::Single Field_1_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28954966FF17307A__CTOR_OFFSET))(this);
	}
};
