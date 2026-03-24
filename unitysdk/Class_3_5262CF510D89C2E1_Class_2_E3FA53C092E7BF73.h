#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_5262CF510D89C2E1_Class_1_A0BFCF19234E844F.h"
#include "unitysdk/Class_3_5262CF510D89C2E1_Struct_2_0839504A496058D2.h"
#include "unitysdk/Foundation/FTuple_1.h"

class Class_3_5262CF510D89C2E1;
class Class_3_5262CF510D89C2E1_Class_3_A66AC8B2EA4BD941;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_5262CF510D89C2E1_CLASS_2_E3FA53C092E7BF73_METHOD_2_BF64A888282E9936_OFFSET UNITYSDK_OFFSET(0x7CD6350)
#define CLASS_3_5262CF510D89C2E1_CLASS_2_E3FA53C092E7BF73_METHOD_2_E03B96F01A6BBC77_OFFSET UNITYSDK_OFFSET(0x7CD6570)
#define CLASS_3_5262CF510D89C2E1_CLASS_2_E3FA53C092E7BF73__CTOR_OFFSET UNITYSDK_OFFSET(0x7CD6240)

inline static constexpr unsigned int Class_3_5262CF510D89C2E1_Class_2_E3FA53C092E7BF73_TypeDefinitionIndex = 46209;

class Class_3_5262CF510D89C2E1_Class_2_E3FA53C092E7BF73 : public ::Class_3_5262CF510D89C2E1_Class_1_A0BFCF19234E844F
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_0; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_1; // 0x28

	::System::Void _ctor(::Class_3_5262CF510D89C2E1_Struct_2_0839504A496058D2 a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_5262CF510D89C2E1_Struct_2_0839504A496058D2, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_5262CF510D89C2E1_CLASS_2_E3FA53C092E7BF73__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BF64A888282E9936(::Class_3_5262CF510D89C2E1_Class_3_A66AC8B2EA4BD941* a1, ::Foundation::FTuple_1<::Class_3_5262CF510D89C2E1*>& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_5262CF510D89C2E1_Class_3_A66AC8B2EA4BD941*, ::Foundation::FTuple_1<::Class_3_5262CF510D89C2E1*>&))((::PBYTE)hIl2Cpp + CLASS_3_5262CF510D89C2E1_CLASS_2_E3FA53C092E7BF73_METHOD_2_BF64A888282E9936_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E03B96F01A6BBC77(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_5262CF510D89C2E1_CLASS_2_E3FA53C092E7BF73_METHOD_2_E03B96F01A6BBC77_OFFSET))(this, a1);
	}
};
