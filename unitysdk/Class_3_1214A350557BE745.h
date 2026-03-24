#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_1_997A61FC149EE531;
class Class_1_B7C41BE725AAED79;
class Class_1_BC1A0944B61E7BEE;
class Class_3_CF43FA1E89397A1C;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_D0B094D0B900A9F0;

#define CLASS_3_1214A350557BE745_METHOD_3_47125C76AFDB961E_OFFSET UNITYSDK_OFFSET(0x6650E00)
#define CLASS_3_1214A350557BE745_METHOD_3_497833CF065C1894_OFFSET UNITYSDK_OFFSET(0x6650790)
#define CLASS_3_1214A350557BE745_METHOD_3_8D0A2531C88B32B1_OFFSET UNITYSDK_OFFSET(0x6651790)
#define CLASS_3_1214A350557BE745_METHOD_3_C54D93067955897C_OFFSET UNITYSDK_OFFSET(0x6650C90)
#define CLASS_3_1214A350557BE745_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x6651A00)
#define CLASS_3_1214A350557BE745_METHOD_3_D7C065E645A7073F_OFFSET UNITYSDK_OFFSET(0x6651710)
#define CLASS_3_1214A350557BE745_METHOD_3_E82718B50EFFCD4F_OFFSET UNITYSDK_OFFSET(0x6651930)
#define CLASS_3_1214A350557BE745__CTOR_OFFSET UNITYSDK_OFFSET(0x6651410)

inline static constexpr unsigned int Class_3_1214A350557BE745_TypeDefinitionIndex = 40479;

class Class_3_1214A350557BE745 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_D0B094D0B900A9F0<::System::Boolean>* Field_3_6; // 0x18
	::Class_4_179456445C225AB4<::System::Int32>* Field_3_5; // 0x20
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x28
	::Class_3_CF43FA1E89397A1C* Field_3_7; // 0x30
	::Class_4_179456445C225AB4<::System::Int32>* Field_3_2; // 0x38
	::Class_3_CF43FA1E89397A1C* Field_3_8; // 0x40
	::Class_4_179456445C225AB4<::System::String*>* Field_3_1; // 0x48
	::Class_4_179456445C225AB4<::System::Collections::Generic::List_1<::System::Int32>*>* Field_3_4; // 0x50
	::Class_4_179456445C225AB4<::System::Int32>* Field_3_3; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1214A350557BE745__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_497833CF065C1894()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1214A350557BE745_METHOD_3_497833CF065C1894_OFFSET))(this);
	}

	::System::Void Method_3_C54D93067955897C(::Class_1_997A61FC149EE531* a1, ::Class_1_BC1A0944B61E7BEE*& a2, ::Class_1_B7C41BE725AAED79* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_997A61FC149EE531*, ::Class_1_BC1A0944B61E7BEE*&, ::Class_1_B7C41BE725AAED79*))((::PBYTE)hIl2Cpp + CLASS_3_1214A350557BE745_METHOD_3_C54D93067955897C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_47125C76AFDB961E(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_1214A350557BE745_METHOD_3_47125C76AFDB961E_OFFSET))(this, a1);
	}

	::System::Void Method_3_D7C065E645A7073F(::Class_1_997A61FC149EE531* a1, ::Class_1_BC1A0944B61E7BEE*& a2, ::Class_1_B7C41BE725AAED79* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_997A61FC149EE531*, ::Class_1_BC1A0944B61E7BEE*&, ::Class_1_B7C41BE725AAED79*))((::PBYTE)hIl2Cpp + CLASS_3_1214A350557BE745_METHOD_3_D7C065E645A7073F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_8D0A2531C88B32B1(::Class_1_997A61FC149EE531* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_997A61FC149EE531*))((::PBYTE)hIl2Cpp + CLASS_3_1214A350557BE745_METHOD_3_8D0A2531C88B32B1_OFFSET))(this, a1);
	}

	static ::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_3_E82718B50EFFCD4F(::Struct_2_FE667B282E242C72 a1)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::Struct_2_FE667B282E242C72))((::PBYTE)hIl2Cpp + CLASS_3_1214A350557BE745_METHOD_3_E82718B50EFFCD4F_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1214A350557BE745_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
