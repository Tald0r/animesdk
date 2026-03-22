#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_AF61EEC11F34483C;

#define CLASS_4_8CA2FCE5DE2B4036_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xADD0D90)
#define CLASS_4_8CA2FCE5DE2B4036_METHOD_4_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xADD0730)
#define CLASS_4_8CA2FCE5DE2B4036_METHOD_4_F637E7BBB4A3229E_OFFSET UNITYSDK_OFFSET(0xADD09A0)
#define CLASS_4_8CA2FCE5DE2B4036__CTOR_OFFSET UNITYSDK_OFFSET(0xADD0C30)

inline static constexpr unsigned int Class_4_8CA2FCE5DE2B4036_TypeDefinitionIndex = 43744;

class Class_4_8CA2FCE5DE2B4036 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_179456445C225AB4<::System::Collections::Generic::List_1<::System::String*>*>* Field_4_1; // 0x28
	::Class_4_179456445C225AB4<::System::Int32>* Field_4_2; // 0x30
	::Class_4_AF61EEC11F34483C<::System::Boolean>* Field_4_3; // 0x38
	::Class_4_179456445C225AB4<::MoleMole::EntityHandle>* Field_4_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8CA2FCE5DE2B4036__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8CA2FCE5DE2B4036_METHOD_4_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_4_F637E7BBB4A3229E(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_8CA2FCE5DE2B4036_METHOD_4_F637E7BBB4A3229E_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8CA2FCE5DE2B4036_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
