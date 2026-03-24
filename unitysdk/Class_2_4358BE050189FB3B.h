#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_129.h"
#include "unitysdk/Struct_2_58DF5669875F2C66_124.h"

class Class_0_16E4307DCC419505_13;
class Class_1_AACC21FBE88566B5;
class Class_2_B1DD4C07A91C4E0F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_4358BE050189FB3B_METHOD_2_00962EEAFB083365_OFFSET UNITYSDK_OFFSET(0x1A7A8FE0)
#define CLASS_2_4358BE050189FB3B_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x1A7A8110)
#define CLASS_2_4358BE050189FB3B_METHOD_2_9C1079DFE9E5F28F_OFFSET UNITYSDK_OFFSET(0x1A7A8E70)
#define CLASS_2_4358BE050189FB3B_METHOD_2_A06332E9390CFAC1_OFFSET UNITYSDK_OFFSET(0x1A7A81B0)
#define CLASS_2_4358BE050189FB3B__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7A8010)

inline static constexpr unsigned int Class_2_4358BE050189FB3B_TypeDefinitionIndex = 81760;

class Class_2_4358BE050189FB3B : public ::Class_1_5DA2E7556103D5A3_129
{
public:
	::System::Collections::Generic::List_1<::Class_1_AACC21FBE88566B5*>* Field_2_0; // 0x148
	::System::Collections::Generic::List_1<::Class_1_AACC21FBE88566B5*>* Field_2_1; // 0x150

	::System::Void _ctor(::Struct_2_58DF5669875F2C66_124 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_58DF5669875F2C66_124, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_4358BE050189FB3B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4358BE050189FB3B_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Boolean Method_2_A06332E9390CFAC1(::Class_2_B1DD4C07A91C4E0F* a1, ::Il2CppArray<::System::String*>* a2, ::System::Collections::Generic::List_1<::Class_1_AACC21FBE88566B5*>* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B1DD4C07A91C4E0F*, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::List_1<::Class_1_AACC21FBE88566B5*>*))((::PBYTE)hIl2Cpp + CLASS_2_4358BE050189FB3B_METHOD_2_A06332E9390CFAC1_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_9C1079DFE9E5F28F(::Class_2_B1DD4C07A91C4E0F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B1DD4C07A91C4E0F*))((::PBYTE)hIl2Cpp + CLASS_2_4358BE050189FB3B_METHOD_2_9C1079DFE9E5F28F_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_AACC21FBE88566B5*>* Method_2_00962EEAFB083365(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_AACC21FBE88566B5*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_4358BE050189FB3B_METHOD_2_00962EEAFB083365_OFFSET))(this, a1);
	}
};
