#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_655F67ED7533BF5B.h"
#include "unitysdk/Class_3_C8FFEFFC1B50D1BA_Struct_2_1E898A3A854F2C77.h"

class Class_1_7807B2B04302CD7B_25;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_C8FFEFFC1B50D1BA_METHOD_3_406174A47F38EDFD_OFFSET UNITYSDK_OFFSET(0xE133870)
#define CLASS_3_C8FFEFFC1B50D1BA_METHOD_3_CD8EB704BDED69B6_OFFSET UNITYSDK_OFFSET(0xE1338F0)
#define CLASS_3_C8FFEFFC1B50D1BA_METHOD_3_E03B96F01A6BBC77_OFFSET UNITYSDK_OFFSET(0xE1337F0)
#define CLASS_3_C8FFEFFC1B50D1BA_METHOD_3_E74FF508BE0BE487_1_OFFSET UNITYSDK_OFFSET(0xE133CF0)
#define CLASS_3_C8FFEFFC1B50D1BA_METHOD_3_E74FF508BE0BE487_OFFSET UNITYSDK_OFFSET(0xE133C70)
#define CLASS_3_C8FFEFFC1B50D1BA_METHOD_3_FDF6DDB2A92627F7_OFFSET UNITYSDK_OFFSET(0xE133670)
#define CLASS_3_C8FFEFFC1B50D1BA__CTOR_OFFSET UNITYSDK_OFFSET(0xE1334F0)

inline static constexpr unsigned int Class_3_C8FFEFFC1B50D1BA_TypeDefinitionIndex = 62993;

class Class_3_C8FFEFFC1B50D1BA : public ::Class_2_655F67ED7533BF5B<::Class_3_C8FFEFFC1B50D1BA*>
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_2; // 0x10
	::Class_1_7807B2B04302CD7B_25* Field_3_0; // 0x18
	::System::Collections::Generic::List_1<::Class_3_C8FFEFFC1B50D1BA_Struct_2_1E898A3A854F2C77>* Field_3_1; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_3_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8FFEFFC1B50D1BA__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_3_FDF6DDB2A92627F7(::System::Func_2<::System::Int32, ::System::Boolean>* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Func_2<::System::Int32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_3_C8FFEFFC1B50D1BA_METHOD_3_FDF6DDB2A92627F7_OFFSET))(this, a1);
	}

	::System::Void Method_3_E03B96F01A6BBC77(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_C8FFEFFC1B50D1BA_METHOD_3_E03B96F01A6BBC77_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_406174A47F38EDFD(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_C8FFEFFC1B50D1BA_METHOD_3_406174A47F38EDFD_OFFSET))(this, a1);
	}

	::System::Void Method_3_CD8EB704BDED69B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8FFEFFC1B50D1BA_METHOD_3_CD8EB704BDED69B6_OFFSET))(this);
	}

	::System::Void Method_3_E74FF508BE0BE487(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_C8FFEFFC1B50D1BA_METHOD_3_E74FF508BE0BE487_OFFSET))(this, a1);
	}

	::System::Void Method_3_E74FF508BE0BE487_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_C8FFEFFC1B50D1BA_METHOD_3_E74FF508BE0BE487_1_OFFSET))(this, a1);
	}
};
