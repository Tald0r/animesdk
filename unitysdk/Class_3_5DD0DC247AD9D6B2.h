#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_D0B094D0B900A9F0;

#define CLASS_3_5DD0DC247AD9D6B2_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x6C2C4E0)
#define CLASS_3_5DD0DC247AD9D6B2_METHOD_3_729CCA2968BE806F_OFFSET UNITYSDK_OFFSET(0x6C2C6C0)
#define CLASS_3_5DD0DC247AD9D6B2_METHOD_3_B9DED6516148F58E_OFFSET UNITYSDK_OFFSET(0x6C2C7B0)
#define CLASS_3_5DD0DC247AD9D6B2_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x6C2CE20)
#define CLASS_3_5DD0DC247AD9D6B2__CTOR_OFFSET UNITYSDK_OFFSET(0x6C2CD00)

inline static constexpr unsigned int Class_3_5DD0DC247AD9D6B2_TypeDefinitionIndex = 61127;

class Class_3_5DD0DC247AD9D6B2 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_179456445C225AB4<::System::Collections::Generic::List_1<::System::String*>*>* Field_3_1; // 0x18
	::Class_4_D0B094D0B900A9F0<::System::String*>* Field_3_2; // 0x20
	::Class_4_179456445C225AB4<::MoleMole::EntityHandle>* Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5DD0DC247AD9D6B2__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5DD0DC247AD9D6B2_METHOD_3_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_3_729CCA2968BE806F(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_5DD0DC247AD9D6B2_METHOD_3_729CCA2968BE806F_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_B9DED6516148F58E(::Struct_2_FE667B282E242C72& a1, ::System::String*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_FE667B282E242C72&, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_3_5DD0DC247AD9D6B2_METHOD_3_B9DED6516148F58E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5DD0DC247AD9D6B2_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
