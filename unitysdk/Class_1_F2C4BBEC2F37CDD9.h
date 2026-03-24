#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F2C4BBEC2F37CDD9_Struct_2_BBD456EBC9087BC2_9.h"
#include "unitysdk/System/Object.h"

class Class_1_642387063F4ADC6D;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F2C4BBEC2F37CDD9_METHOD_1_1406E58AA9664077_OFFSET UNITYSDK_OFFSET(0x6FBEDA0)
#define CLASS_1_F2C4BBEC2F37CDD9_METHOD_1_FCF71CCBDA08A1E0_OFFSET UNITYSDK_OFFSET(0x6FBF340)
#define CLASS_1_F2C4BBEC2F37CDD9__CTOR_OFFSET UNITYSDK_OFFSET(0x6FBED40)

inline static constexpr unsigned int Class_1_F2C4BBEC2F37CDD9_TypeDefinitionIndex = 73484;

class Class_1_F2C4BBEC2F37CDD9 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_F2C4BBEC2F37CDD9_Struct_2_BBD456EBC9087BC2_9>* Field_1_1; // 0x10
	::Class_1_642387063F4ADC6D* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2C4BBEC2F37CDD9__CTOR_OFFSET))(this);
	}

	static ::Class_1_F2C4BBEC2F37CDD9* Method_1_1406E58AA9664077(::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* a1, ::System::Int32 a2)
	{
		return ((::Class_1_F2C4BBEC2F37CDD9*(*)(::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F2C4BBEC2F37CDD9_METHOD_1_1406E58AA9664077_OFFSET))(a1, a2);
	}

	static ::Class_1_F2C4BBEC2F37CDD9* Method_1_FCF71CCBDA08A1E0(::Class_1_642387063F4ADC6D* a1, ::System::Int32 a2)
	{
		return ((::Class_1_F2C4BBEC2F37CDD9*(*)(::Class_1_642387063F4ADC6D*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F2C4BBEC2F37CDD9_METHOD_1_FCF71CCBDA08A1E0_OFFSET))(a1, a2);
	}
};
