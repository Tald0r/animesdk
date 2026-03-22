#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_3_B537A0AA78803363;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_AF61EEC11F34483C;

#define CLASS_4_4B44DCB386543790_METHOD_4_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xB8636E0)
#define CLASS_4_4B44DCB386543790_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xB863C60)
#define CLASS_4_4B44DCB386543790_METHOD_4_3F0F9592A0E917D4_OFFSET UNITYSDK_OFFSET(0xB8638D0)
#define CLASS_4_4B44DCB386543790_METHOD_4_CD85CA27A9EDD188_OFFSET UNITYSDK_OFFSET(0xB863960)
#define CLASS_4_4B44DCB386543790__CTOR_OFFSET UNITYSDK_OFFSET(0xB863A80)

inline static constexpr unsigned int Class_4_4B44DCB386543790_TypeDefinitionIndex = 39993;

class Class_4_4B44DCB386543790 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_AF61EEC11F34483C<::System::Collections::Generic::List_1<::System::Int32>*>* Field_4_0; // 0x28
	::Class_3_B537A0AA78803363* Field_4_1; // 0x30
	::Class_3_B537A0AA78803363* Field_4_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_4B44DCB386543790__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_4B44DCB386543790_METHOD_4_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_4_3F0F9592A0E917D4(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_4B44DCB386543790_METHOD_4_3F0F9592A0E917D4_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_4B44DCB386543790_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_4_CD85CA27A9EDD188(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_4B44DCB386543790_METHOD_4_CD85CA27A9EDD188_OFFSET))(this, a1);
	}
};
