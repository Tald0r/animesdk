#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_D0B094D0B900A9F0;

#define CLASS_3_B1140D8CF549C642_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x70A7C10)
#define CLASS_3_B1140D8CF549C642_METHOD_3_5885BE70B8D351A2_OFFSET UNITYSDK_OFFSET(0x70A7D60)
#define CLASS_3_B1140D8CF549C642_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x70A8080)
#define CLASS_3_B1140D8CF549C642__CTOR_OFFSET UNITYSDK_OFFSET(0x70A7F90)

inline static constexpr unsigned int Class_3_B1140D8CF549C642_TypeDefinitionIndex = 39231;

class Class_3_B1140D8CF549C642 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_D0B094D0B900A9F0<::System::Boolean>* Field_3_1; // 0x18
	::Class_4_179456445C225AB4<::MoleMole::EntityHandle>* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B1140D8CF549C642__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B1140D8CF549C642_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_3_5885BE70B8D351A2(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_B1140D8CF549C642_METHOD_3_5885BE70B8D351A2_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B1140D8CF549C642_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
