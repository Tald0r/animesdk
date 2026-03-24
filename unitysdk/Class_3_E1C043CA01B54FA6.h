#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C9EAEB75332026AC.h"
#include "unitysdk/Class_3_E1C043CA01B54FA6_Struct_2_BBD456EBC9087BC2.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_E1C043CA01B54FA6_METHOD_3_9C7B9AF090D6096D_OFFSET UNITYSDK_OFFSET(0x17617EE0)
#define CLASS_3_E1C043CA01B54FA6__CTOR_OFFSET UNITYSDK_OFFSET(0x17617ED0)

inline static constexpr unsigned int Class_3_E1C043CA01B54FA6_TypeDefinitionIndex = 13260;

class Class_3_E1C043CA01B54FA6 : public ::Class_2_C9EAEB75332026AC
{
public:
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_3_E1C043CA01B54FA6_Struct_2_BBD456EBC9087BC2>*>* Field_3_1; // 0x20
	::System::Byte Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E1C043CA01B54FA6__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_3_E1C043CA01B54FA6_Struct_2_BBD456EBC9087BC2>*>* Method_3_9C7B9AF090D6096D()
	{
		return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_3_E1C043CA01B54FA6_Struct_2_BBD456EBC9087BC2>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E1C043CA01B54FA6_METHOD_3_9C7B9AF090D6096D_OFFSET))(this);
	}
};
