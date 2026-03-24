#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_3B7CFC169AD8410C.h"
#include "unitysdk/Struct_2_0B8A00E6770FCC03.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_2_99A6B66ACB90C91B;
class Class_3_CF43FA1E89397A1C;
namespace System { class String; }
template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_D0B094D0B900A9F0;

#define CLASS_4_73332BF1A26AE013_METHOD_4_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x8B388B0)
#define CLASS_4_73332BF1A26AE013_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8B39400)
#define CLASS_4_73332BF1A26AE013_METHOD_4_D04F18B14B3AE4EC_OFFSET UNITYSDK_OFFSET(0x8B38DB0)
#define CLASS_4_73332BF1A26AE013_METHOD_4_D451F26A6A233EA1_OFFSET UNITYSDK_OFFSET(0x8B38C20)
#define CLASS_4_73332BF1A26AE013__CTOR_OFFSET UNITYSDK_OFFSET(0x8B391E0)

inline static constexpr unsigned int Class_4_73332BF1A26AE013_TypeDefinitionIndex = 47140;

class Class_4_73332BF1A26AE013 : public ::Class_3_3B7CFC169AD8410C
{
public:
	::Class_4_179456445C225AB4<::System::String*>* Field_4_1; // 0x18
	::Class_4_D0B094D0B900A9F0<::System::Boolean>* Field_4_4; // 0x20
	::Class_4_D0B094D0B900A9F0<::System::Int32>* Field_4_3; // 0x28
	::Class_4_179456445C225AB4<::System::Int32>* Field_4_2; // 0x30
	::Class_4_179456445C225AB4<::System::Int32>* Field_4_0; // 0x38
	::Class_3_CF43FA1E89397A1C* Field_4_5; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_73332BF1A26AE013__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_73332BF1A26AE013_METHOD_4_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_4_D451F26A6A233EA1(::Class_2_99A6B66ACB90C91B* a1, ::Struct_2_FE667B282E242C72& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_99A6B66ACB90C91B*, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_73332BF1A26AE013_METHOD_4_D451F26A6A233EA1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_D04F18B14B3AE4EC(::Struct_2_FE667B282E242C72& a1, ::Struct_2_0B8A00E6770FCC03 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&, ::Struct_2_0B8A00E6770FCC03))((::PBYTE)hIl2Cpp + CLASS_4_73332BF1A26AE013_METHOD_4_D04F18B14B3AE4EC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_73332BF1A26AE013_METHOD_4_CA373AA1C7054598_OFFSET))(this);
	}
};
