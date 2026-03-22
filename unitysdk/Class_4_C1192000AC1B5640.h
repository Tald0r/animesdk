#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_2_8603DBDED602FDBE;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_4_C1192000AC1B5640_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x62097B0)
#define CLASS_4_C1192000AC1B5640_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x6209180)
#define CLASS_4_C1192000AC1B5640_METHOD_4_CC4DC8FB65DC8FF4_OFFSET UNITYSDK_OFFSET(0x62092E0)
#define CLASS_4_C1192000AC1B5640_METHOD_4_EC5EE51A67FE2040_OFFSET UNITYSDK_OFFSET(0x62094F0)
#define CLASS_4_C1192000AC1B5640__CTOR_OFFSET UNITYSDK_OFFSET(0x62096C0)

inline static constexpr unsigned int Class_4_C1192000AC1B5640_TypeDefinitionIndex = 37497;

class Class_4_C1192000AC1B5640 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_179456445C225AB4<::System::String*>* Field_4_0; // 0x28
	::Class_4_179456445C225AB4<::System::Collections::Generic::List_1<::System::String*>*>* Field_4_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C1192000AC1B5640__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C1192000AC1B5640_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_CC4DC8FB65DC8FF4(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_C1192000AC1B5640_METHOD_4_CC4DC8FB65DC8FF4_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C1192000AC1B5640_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_4_EC5EE51A67FE2040(::System::String* a1, ::Class_2_8603DBDED602FDBE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_2_8603DBDED602FDBE*))((::PBYTE)hIl2Cpp + CLASS_4_C1192000AC1B5640_METHOD_4_EC5EE51A67FE2040_OFFSET))(this, a1, a2);
	}
};
