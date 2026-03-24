#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_3B7CFC169AD8410C.h"
#include "unitysdk/Struct_2_0B8A00E6770FCC03.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_2_99A6B66ACB90C91B;
class Class_3_B537A0AA78803363;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_D0B094D0B900A9F0;

#define CLASS_4_2566037E85BA184B_METHOD_4_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0xA0BB670)
#define CLASS_4_2566037E85BA184B_METHOD_4_9EE65C2297700C7D_OFFSET UNITYSDK_OFFSET(0xA0BC1B0)
#define CLASS_4_2566037E85BA184B_METHOD_4_A15A24D8EEA15986_OFFSET UNITYSDK_OFFSET(0xA0BBB30)
#define CLASS_4_2566037E85BA184B_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA0BC3B0)
#define CLASS_4_2566037E85BA184B_METHOD_4_EB5BAD6F7BB892F4_OFFSET UNITYSDK_OFFSET(0xA0BB9E0)
#define CLASS_4_2566037E85BA184B__CTOR_OFFSET UNITYSDK_OFFSET(0xA0BBF90)

inline static constexpr unsigned int Class_4_2566037E85BA184B_TypeDefinitionIndex = 71304;

class Class_4_2566037E85BA184B : public ::Class_3_3B7CFC169AD8410C
{
public:
	::Class_3_B537A0AA78803363* Field_4_5; // 0x18
	::Class_4_D0B094D0B900A9F0<::System::Collections::Generic::List_1<::System::Single>*>* Field_4_3; // 0x20
	::Class_4_D0B094D0B900A9F0<::System::Collections::Generic::List_1<::System::Boolean>*>* Field_4_4; // 0x28
	::Class_4_179456445C225AB4<::System::String*>* Field_4_0; // 0x30
	::Class_4_D0B094D0B900A9F0<::System::Collections::Generic::List_1<::System::Int32>*>* Field_4_1; // 0x38
	::Class_4_D0B094D0B900A9F0<::System::Collections::Generic::List_1<::System::String*>*>* Field_4_2; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2566037E85BA184B__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2566037E85BA184B_METHOD_4_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_4_EB5BAD6F7BB892F4(::Class_2_99A6B66ACB90C91B* a1, ::Struct_2_FE667B282E242C72& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_99A6B66ACB90C91B*, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_2566037E85BA184B_METHOD_4_EB5BAD6F7BB892F4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_A15A24D8EEA15986(::Struct_2_FE667B282E242C72& a1, ::Struct_2_0B8A00E6770FCC03 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&, ::Struct_2_0B8A00E6770FCC03))((::PBYTE)hIl2Cpp + CLASS_4_2566037E85BA184B_METHOD_4_A15A24D8EEA15986_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_4_9EE65C2297700C7D(::Struct_2_FE667B282E242C72 a1, ::Struct_2_0B8A00E6770FCC03 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_FE667B282E242C72, ::Struct_2_0B8A00E6770FCC03))((::PBYTE)hIl2Cpp + CLASS_4_2566037E85BA184B_METHOD_4_9EE65C2297700C7D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2566037E85BA184B_METHOD_4_CA373AA1C7054598_OFFSET))(this);
	}
};
