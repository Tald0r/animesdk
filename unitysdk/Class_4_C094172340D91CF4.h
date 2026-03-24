#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_D0B094D0B900A9F0;

#define CLASS_4_C094172340D91CF4_METHOD_4_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xA26F490)
#define CLASS_4_C094172340D91CF4_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xA26F880)
#define CLASS_4_C094172340D91CF4_METHOD_4_C2E8BBDD048A1B46_OFFSET UNITYSDK_OFFSET(0xA26F680)
#define CLASS_4_C094172340D91CF4__CTOR_OFFSET UNITYSDK_OFFSET(0xA26F750)

inline static constexpr unsigned int Class_4_C094172340D91CF4_TypeDefinitionIndex = 59283;

class Class_4_C094172340D91CF4 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_179456445C225AB4<::System::Int32>* Field_4_0; // 0x28
	::Class_4_D0B094D0B900A9F0<::System::Int32>* Field_4_2; // 0x30
	::Class_4_179456445C225AB4<::System::Collections::Generic::List_1<::System::Object*>*>* Field_4_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C094172340D91CF4__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C094172340D91CF4_METHOD_4_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_4_C2E8BBDD048A1B46(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_C094172340D91CF4_METHOD_4_C2E8BBDD048A1B46_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C094172340D91CF4_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
