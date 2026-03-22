#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C9EAEB75332026AC.h"
#include "unitysdk/Class_3_D08FF04B4CDA6625_Struct_2_FD8E1D4014EE315F.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_D08FF04B4CDA6625_METHOD_3_7AF414749B1E01F2_OFFSET UNITYSDK_OFFSET(0x12284660)
#define CLASS_3_D08FF04B4CDA6625__CTOR_OFFSET UNITYSDK_OFFSET(0x12284650)

inline static constexpr unsigned int Class_3_D08FF04B4CDA6625_TypeDefinitionIndex = 14344;

class Class_3_D08FF04B4CDA6625 : public ::Class_2_C9EAEB75332026AC
{
public:
	::System::Collections::Generic::List_1<::Class_3_D08FF04B4CDA6625_Struct_2_FD8E1D4014EE315F>* Field_3_1; // 0x20
	::System::Byte Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D08FF04B4CDA6625__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_3_D08FF04B4CDA6625_Struct_2_FD8E1D4014EE315F>* Method_3_7AF414749B1E01F2()
	{
		return ((::System::Collections::Generic::List_1<::Class_3_D08FF04B4CDA6625_Struct_2_FD8E1D4014EE315F>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D08FF04B4CDA6625_METHOD_3_7AF414749B1E01F2_OFFSET))(this);
	}
};
