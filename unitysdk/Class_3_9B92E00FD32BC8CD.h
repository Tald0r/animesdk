#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_D0B094D0B900A9F0;

#define CLASS_3_9B92E00FD32BC8CD_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x7E0AF40)
#define CLASS_3_9B92E00FD32BC8CD_METHOD_3_B6A2D2418E5AA427_OFFSET UNITYSDK_OFFSET(0x7E0B090)
#define CLASS_3_9B92E00FD32BC8CD_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x7E0B950)
#define CLASS_3_9B92E00FD32BC8CD_METHOD_3_FA700F28222C25DD_OFFSET UNITYSDK_OFFSET(0x7E0B120)
#define CLASS_3_9B92E00FD32BC8CD__CTOR_OFFSET UNITYSDK_OFFSET(0x7E0B860)

inline static constexpr unsigned int Class_3_9B92E00FD32BC8CD_TypeDefinitionIndex = 68251;

class Class_3_9B92E00FD32BC8CD : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_179456445C225AB4<::MoleMole::EntityHandle>* Field_3_0; // 0x18
	::Class_4_D0B094D0B900A9F0<::System::Boolean>* Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9B92E00FD32BC8CD__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9B92E00FD32BC8CD_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_3_B6A2D2418E5AA427(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_9B92E00FD32BC8CD_METHOD_3_B6A2D2418E5AA427_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9B92E00FD32BC8CD_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_3_FA700F28222C25DD(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_9B92E00FD32BC8CD_METHOD_3_FA700F28222C25DD_OFFSET))(this, a1);
	}
};
