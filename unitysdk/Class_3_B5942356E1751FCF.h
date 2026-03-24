#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_D0B094D0B900A9F0;

#define CLASS_3_B5942356E1751FCF_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x6FE70F0)
#define CLASS_3_B5942356E1751FCF_METHOD_3_43B953D68150E82F_OFFSET UNITYSDK_OFFSET(0x6FE72D0)
#define CLASS_3_B5942356E1751FCF_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x6FE7650)
#define CLASS_3_B5942356E1751FCF__CTOR_OFFSET UNITYSDK_OFFSET(0x6FE7530)

inline static constexpr unsigned int Class_3_B5942356E1751FCF_TypeDefinitionIndex = 38560;

class Class_3_B5942356E1751FCF : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_D0B094D0B900A9F0<::System::Boolean>* Field_3_2; // 0x18
	::Class_4_179456445C225AB4<::System::Int32>* Field_3_1; // 0x20
	::Class_4_179456445C225AB4<::System::Int32>* Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B5942356E1751FCF__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B5942356E1751FCF_METHOD_3_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_3_43B953D68150E82F(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_B5942356E1751FCF_METHOD_3_43B953D68150E82F_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B5942356E1751FCF_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
