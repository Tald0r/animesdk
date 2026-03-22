#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_AF61EEC11F34483C;

#define CLASS_4_8F7CC2B09B10F816_METHOD_4_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xAAE4B70)
#define CLASS_4_8F7CC2B09B10F816_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xAAE5130)
#define CLASS_4_8F7CC2B09B10F816_METHOD_4_CF54D80BCA46F03F_OFFSET UNITYSDK_OFFSET(0xAAE4D60)
#define CLASS_4_8F7CC2B09B10F816__CTOR_OFFSET UNITYSDK_OFFSET(0xAAE5000)

inline static constexpr unsigned int Class_4_8F7CC2B09B10F816_TypeDefinitionIndex = 60141;

class Class_4_8F7CC2B09B10F816 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_179456445C225AB4<::System::Boolean>* Field_4_1; // 0x28
	::Class_4_AF61EEC11F34483C<::System::Boolean>* Field_4_2; // 0x30
	::Class_4_179456445C225AB4<::System::Int32>* Field_4_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8F7CC2B09B10F816__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8F7CC2B09B10F816_METHOD_4_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_4_CF54D80BCA46F03F(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_8F7CC2B09B10F816_METHOD_4_CF54D80BCA46F03F_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8F7CC2B09B10F816_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
