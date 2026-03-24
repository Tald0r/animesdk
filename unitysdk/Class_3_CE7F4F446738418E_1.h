#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_D0B094D0B900A9F0;

#define CLASS_3_CE7F4F446738418E_1_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x7E461B0)
#define CLASS_3_CE7F4F446738418E_1_METHOD_3_C1AC70DEDC81E328_OFFSET UNITYSDK_OFFSET(0x7E46390)
#define CLASS_3_CE7F4F446738418E_1_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x7E465C0)
#define CLASS_3_CE7F4F446738418E_1__CTOR_OFFSET UNITYSDK_OFFSET(0x7E464A0)

inline static constexpr unsigned int Class_3_CE7F4F446738418E_1_TypeDefinitionIndex = 62690;

class Class_3_CE7F4F446738418E_1 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_D0B094D0B900A9F0<::System::Single>* Field_3_2; // 0x18
	::Class_4_179456445C225AB4<::System::Single>* Field_3_1; // 0x20
	::Class_4_179456445C225AB4<::System::Single>* Field_3_0; // 0x28

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
