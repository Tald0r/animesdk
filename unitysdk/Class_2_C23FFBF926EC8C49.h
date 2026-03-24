#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D9FAA3DCCFE14DB8_45.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_105.h"

class Class_0_16E4307DCC419505_13;
class Class_1_B9D6E7E76075C6E2;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_C23FFBF926EC8C49_METHOD_2_4993EDAE54425105_1_OFFSET UNITYSDK_OFFSET(0x170ED220)
#define CLASS_2_C23FFBF926EC8C49_METHOD_2_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0x170ED210)
#define CLASS_2_C23FFBF926EC8C49_METHOD_2_4B37BE1101ACCDFF_OFFSET UNITYSDK_OFFSET(0x170ECA40)
#define CLASS_2_C23FFBF926EC8C49_METHOD_2_8B9DCFDAAAB0314E_OFFSET UNITYSDK_OFFSET(0x170ECA00)
#define CLASS_2_C23FFBF926EC8C49__CTOR_OFFSET UNITYSDK_OFFSET(0x170EC9B0)

inline static constexpr unsigned int Class_2_C23FFBF926EC8C49_TypeDefinitionIndex = 11567;

class Class_2_C23FFBF926EC8C49 : public ::Class_1_D9FAA3DCCFE14DB8_45
{
public:
	::System::Collections::Generic::List_1<::Class_1_B9D6E7E76075C6E2*>* Field_2_1; // 0x58
	::System::Collections::Generic::List_1<::Class_1_B9D6E7E76075C6E2*>* Field_2_0; // 0x60

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_105 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_105, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_C23FFBF926EC8C49__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8B9DCFDAAAB0314E(::Struct_2_3E75877A2888D88A_105 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_105))((::PBYTE)hIl2Cpp + CLASS_2_C23FFBF926EC8C49_METHOD_2_8B9DCFDAAAB0314E_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_B9D6E7E76075C6E2*>* Method_2_4993EDAE54425105()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_B9D6E7E76075C6E2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C23FFBF926EC8C49_METHOD_2_4993EDAE54425105_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_B9D6E7E76075C6E2*>* Method_2_4993EDAE54425105_1()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_B9D6E7E76075C6E2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C23FFBF926EC8C49_METHOD_2_4993EDAE54425105_1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_B9D6E7E76075C6E2*>* Method_2_4B37BE1101ACCDFF(::System::String* a1, ::Struct_2_3E75877A2888D88A_105 a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_B9D6E7E76075C6E2*>*(*)(::PVOID, ::System::String*, ::Struct_2_3E75877A2888D88A_105))((::PBYTE)hIl2Cpp + CLASS_2_C23FFBF926EC8C49_METHOD_2_4B37BE1101ACCDFF_OFFSET))(this, a1, a2);
	}
};
