#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_AF61EEC11F34483C;

#define CLASS_3_ECD98BAC85C79731_METHOD_3_04C3B2F54FE406CC_OFFSET UNITYSDK_OFFSET(0x9DE3C30)
#define CLASS_3_ECD98BAC85C79731_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x9DE3A50)
#define CLASS_3_ECD98BAC85C79731_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9DE4060)
#define CLASS_3_ECD98BAC85C79731__CTOR_OFFSET UNITYSDK_OFFSET(0x9DE3F40)

inline static constexpr unsigned int Class_3_ECD98BAC85C79731_TypeDefinitionIndex = 64466;

class Class_3_ECD98BAC85C79731 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_179456445C225AB4<::System::Int32>* Field_3_0; // 0x18
	::Class_4_AF61EEC11F34483C<::MoleMole::EntityHandle>* Field_3_1; // 0x20
	::Class_4_AF61EEC11F34483C<::System::Boolean>* Field_3_2; // 0x28

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
