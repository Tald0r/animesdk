#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_D0B094D0B900A9F0;

#define CLASS_3_C6D94156F1F8A94F_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x9FD0070)
#define CLASS_3_C6D94156F1F8A94F_METHOD_3_6C9F6034898E90A6_OFFSET UNITYSDK_OFFSET(0x9FD01C0)
#define CLASS_3_C6D94156F1F8A94F_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9FD0390)
#define CLASS_3_C6D94156F1F8A94F__CTOR_OFFSET UNITYSDK_OFFSET(0x9FD02A0)

inline static constexpr unsigned int Class_3_C6D94156F1F8A94F_TypeDefinitionIndex = 42680;

class Class_3_C6D94156F1F8A94F : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_D0B094D0B900A9F0<::System::Boolean>* Field_3_1; // 0x18
	::Class_4_179456445C225AB4<::MoleMole::EntityHandle>* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C6D94156F1F8A94F__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C6D94156F1F8A94F_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_3_6C9F6034898E90A6(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_C6D94156F1F8A94F_METHOD_3_6C9F6034898E90A6_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C6D94156F1F8A94F_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
