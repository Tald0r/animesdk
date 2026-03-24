#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_D0B094D0B900A9F0;

#define CLASS_3_ECD98BAC85C79731_METHOD_3_04C3B2F54FE406CC_OFFSET UNITYSDK_OFFSET(0xC3A5ED0)
#define CLASS_3_ECD98BAC85C79731_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xC3A5CF0)
#define CLASS_3_ECD98BAC85C79731_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xC3A6300)
#define CLASS_3_ECD98BAC85C79731__CTOR_OFFSET UNITYSDK_OFFSET(0xC3A61E0)

inline static constexpr unsigned int Class_3_ECD98BAC85C79731_TypeDefinitionIndex = 57963;

class Class_3_ECD98BAC85C79731 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_D0B094D0B900A9F0<::System::Boolean>* Field_3_2; // 0x18
	::Class_4_179456445C225AB4<::System::Int32>* Field_3_0; // 0x20
	::Class_4_D0B094D0B900A9F0<::MoleMole::EntityHandle>* Field_3_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ECD98BAC85C79731__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ECD98BAC85C79731_METHOD_3_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_3_04C3B2F54FE406CC(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_ECD98BAC85C79731_METHOD_3_04C3B2F54FE406CC_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ECD98BAC85C79731_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
