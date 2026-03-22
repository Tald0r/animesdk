#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_3B7CFC169AD8410C.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_0B8A00E6770FCC03.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_2_99A6B66ACB90C91B;
class Class_3_CF43FA1E89397A1C;
namespace System { class String; }
template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_AF61EEC11F34483C;

#define CLASS_4_BCC073CE933FAC22_2_METHOD_4_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x17CC0E60)
#define CLASS_4_BCC073CE933FAC22_2_METHOD_4_35F547E2E9169F4B_OFFSET UNITYSDK_OFFSET(0x17CC1140)
#define CLASS_4_BCC073CE933FAC22_2_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17CC1550)
#define CLASS_4_BCC073CE933FAC22_2_METHOD_4_D451F26A6A233EA1_OFFSET UNITYSDK_OFFSET(0x17CC1040)
#define CLASS_4_BCC073CE933FAC22_2__CTOR_OFFSET UNITYSDK_OFFSET(0x17CC13E0)

inline static constexpr unsigned int Class_4_BCC073CE933FAC22_2_TypeDefinitionIndex = 45707;

class Class_4_BCC073CE933FAC22_2 : public ::Class_3_3B7CFC169AD8410C
{
public:
	::Class_3_CF43FA1E89397A1C* Field_4_2; // 0x18
	::Class_4_AF61EEC11F34483C<::MoleMole::EntityHandle>* Field_4_1; // 0x20
	::Class_4_179456445C225AB4<::System::String*>* Field_4_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BCC073CE933FAC22_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BCC073CE933FAC22_2_METHOD_4_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_4_D451F26A6A233EA1(::Class_2_99A6B66ACB90C91B* a1, ::Struct_2_FE667B282E242C72& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_99A6B66ACB90C91B*, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_BCC073CE933FAC22_2_METHOD_4_D451F26A6A233EA1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_35F547E2E9169F4B(::Struct_2_FE667B282E242C72& a1, ::Struct_2_0B8A00E6770FCC03 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&, ::Struct_2_0B8A00E6770FCC03))((::PBYTE)hIl2Cpp + CLASS_4_BCC073CE933FAC22_2_METHOD_4_35F547E2E9169F4B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BCC073CE933FAC22_2_METHOD_4_CA373AA1C7054598_OFFSET))(this);
	}
};
