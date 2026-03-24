#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_3_B537A0AA78803363;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_D0B094D0B900A9F0;

#define CLASS_4_4B44DCB386543790_1_METHOD_4_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x9B7A6F0)
#define CLASS_4_4B44DCB386543790_1_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x9B7AC80)
#define CLASS_4_4B44DCB386543790_1_METHOD_4_3F0F9592A0E917D4_OFFSET UNITYSDK_OFFSET(0x9B7A8E0)
#define CLASS_4_4B44DCB386543790_1_METHOD_4_CD85CA27A9EDD188_OFFSET UNITYSDK_OFFSET(0x9B7A970)
#define CLASS_4_4B44DCB386543790_1__CTOR_OFFSET UNITYSDK_OFFSET(0x9B7AAA0)

inline static constexpr unsigned int Class_4_4B44DCB386543790_1_TypeDefinitionIndex = 61361;

class Class_4_4B44DCB386543790_1 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_D0B094D0B900A9F0<::System::Collections::Generic::List_1<::System::Int32>*>* Field_4_0; // 0x28
	::Class_3_B537A0AA78803363* Field_4_2; // 0x30
	::Class_3_B537A0AA78803363* Field_4_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_4B44DCB386543790_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_4B44DCB386543790_1_METHOD_4_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_4_3F0F9592A0E917D4(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_4B44DCB386543790_1_METHOD_4_3F0F9592A0E917D4_OFFSET))(this, a1);
	}

	::System::Void Method_4_CD85CA27A9EDD188(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_4B44DCB386543790_1_METHOD_4_CD85CA27A9EDD188_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_4B44DCB386543790_1_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
