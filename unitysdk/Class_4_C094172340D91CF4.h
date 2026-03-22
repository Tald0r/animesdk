#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_AF61EEC11F34483C;

#define CLASS_4_C094172340D91CF4_METHOD_4_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xD777A60)
#define CLASS_4_C094172340D91CF4_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xD777E50)
#define CLASS_4_C094172340D91CF4_METHOD_4_C2E8BBDD048A1B46_OFFSET UNITYSDK_OFFSET(0xD777C50)
#define CLASS_4_C094172340D91CF4__CTOR_OFFSET UNITYSDK_OFFSET(0xD777D20)

inline static constexpr unsigned int Class_4_C094172340D91CF4_TypeDefinitionIndex = 74456;

class Class_4_C094172340D91CF4 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_179456445C225AB4<::System::Collections::Generic::List_1<::System::Object*>*>* Field_4_1; // 0x28
	::Class_4_179456445C225AB4<::System::Int32>* Field_4_0; // 0x30
	::Class_4_AF61EEC11F34483C<::System::Int32>* Field_4_2; // 0x38

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
