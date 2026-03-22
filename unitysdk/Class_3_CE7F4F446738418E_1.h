#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_AF61EEC11F34483C;

#define CLASS_3_CE7F4F446738418E_1_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x65EF750)
#define CLASS_3_CE7F4F446738418E_1_METHOD_3_C1AC70DEDC81E328_OFFSET UNITYSDK_OFFSET(0x65EF930)
#define CLASS_3_CE7F4F446738418E_1_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x65EFB60)
#define CLASS_3_CE7F4F446738418E_1__CTOR_OFFSET UNITYSDK_OFFSET(0x65EFA40)

inline static constexpr unsigned int Class_3_CE7F4F446738418E_1_TypeDefinitionIndex = 67611;

class Class_3_CE7F4F446738418E_1 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_179456445C225AB4<::System::Single>* Field_3_1; // 0x18
	::Class_4_179456445C225AB4<::System::Single>* Field_3_0; // 0x20
	::Class_4_AF61EEC11F34483C<::System::Single>* Field_3_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CE7F4F446738418E_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CE7F4F446738418E_1_METHOD_3_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_3_C1AC70DEDC81E328(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_CE7F4F446738418E_1_METHOD_3_C1AC70DEDC81E328_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CE7F4F446738418E_1_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
