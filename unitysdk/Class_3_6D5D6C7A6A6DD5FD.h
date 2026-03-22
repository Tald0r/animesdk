#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

template <typename T> class Class_4_AF61EEC11F34483C;

#define CLASS_3_6D5D6C7A6A6DD5FD_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xA2C4FB0)
#define CLASS_3_6D5D6C7A6A6DD5FD_METHOD_3_C65AD10AAA05F899_OFFSET UNITYSDK_OFFSET(0xA2C5070)
#define CLASS_3_6D5D6C7A6A6DD5FD_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA2C53E0)
#define CLASS_3_6D5D6C7A6A6DD5FD__CTOR_OFFSET UNITYSDK_OFFSET(0xA2C5340)

inline static constexpr unsigned int Class_3_6D5D6C7A6A6DD5FD_TypeDefinitionIndex = 63917;

class Class_3_6D5D6C7A6A6DD5FD : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_AF61EEC11F34483C<::MoleMole::EntityHandle>* Field_3_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D5D6C7A6A6DD5FD__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D5D6C7A6A6DD5FD_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_3_C65AD10AAA05F899(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_6D5D6C7A6A6DD5FD_METHOD_3_C65AD10AAA05F899_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D5D6C7A6A6DD5FD_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
