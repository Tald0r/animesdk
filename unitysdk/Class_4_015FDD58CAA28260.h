#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_1_E4DCFD174698F990;
class Class_3_B537A0AA78803363;
class Class_3_CF43FA1E89397A1C;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_4_015FDD58CAA28260_METHOD_4_24AD3B57ADC65069_OFFSET UNITYSDK_OFFSET(0x79DE760)
#define CLASS_4_015FDD58CAA28260_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x79DFB20)
#define CLASS_4_015FDD58CAA28260_METHOD_4_497833CF065C1894_OFFSET UNITYSDK_OFFSET(0x79DE260)
#define CLASS_4_015FDD58CAA28260_METHOD_4_9A5ACEE3522D44A3_OFFSET UNITYSDK_OFFSET(0x79DE070)
#define CLASS_4_015FDD58CAA28260_METHOD_4_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x79DFAB0)
#define CLASS_4_015FDD58CAA28260__CTOR_OFFSET UNITYSDK_OFFSET(0x79DF710)

inline static constexpr unsigned int Class_4_015FDD58CAA28260_TypeDefinitionIndex = 52371;

class Class_4_015FDD58CAA28260 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_3_B537A0AA78803363* Field_4_8; // 0x28
	::Class_4_179456445C225AB4<::System::Int32>* Field_4_5; // 0x30
	::Class_3_CF43FA1E89397A1C* Field_4_7; // 0x38
	::Class_4_179456445C225AB4<::System::Int32>* Field_4_4; // 0x40
	::Class_4_179456445C225AB4<::System::Collections::Generic::List_1<::System::Int32>*>* Field_4_2; // 0x48
	::Class_4_179456445C225AB4<::System::Int32>* Field_4_0; // 0x50
	::Class_4_179456445C225AB4<::System::Collections::Generic::List_1<::System::Int32>*>* Field_4_3; // 0x58
	::Class_3_B537A0AA78803363* Field_4_6; // 0x60
	::Class_4_179456445C225AB4<::System::String*>* Field_4_1; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_015FDD58CAA28260__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9A5ACEE3522D44A3(::Class_1_E4DCFD174698F990* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4DCFD174698F990*))((::PBYTE)hIl2Cpp + CLASS_4_015FDD58CAA28260_METHOD_4_9A5ACEE3522D44A3_OFFSET))(this, a1);
	}

	::System::Void Method_4_497833CF065C1894()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_015FDD58CAA28260_METHOD_4_497833CF065C1894_OFFSET))(this);
	}

	::System::Void Method_4_24AD3B57ADC65069(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_015FDD58CAA28260_METHOD_4_24AD3B57ADC65069_OFFSET))(this, a1);
	}

	::System::Void Method_4_E9A575D18A0748D9(::Class_1_E4DCFD174698F990* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4DCFD174698F990*))((::PBYTE)hIl2Cpp + CLASS_4_015FDD58CAA28260_METHOD_4_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_015FDD58CAA28260_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
