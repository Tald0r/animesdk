#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_D0B094D0B900A9F0;

#define CLASS_3_54690D54ECD2EE21_METHOD_3_45553DBC61F5F291_OFFSET UNITYSDK_OFFSET(0xAEFE8E0)
#define CLASS_3_54690D54ECD2EE21_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xAEFE820)
#define CLASS_3_54690D54ECD2EE21_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xAEFEC40)
#define CLASS_3_54690D54ECD2EE21__CTOR_OFFSET UNITYSDK_OFFSET(0xAEFEBA0)

inline static constexpr unsigned int Class_3_54690D54ECD2EE21_TypeDefinitionIndex = 50758;

class Class_3_54690D54ECD2EE21 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_D0B094D0B900A9F0<::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* Field_3_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_54690D54ECD2EE21__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_54690D54ECD2EE21_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_3_45553DBC61F5F291(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_54690D54ECD2EE21_METHOD_3_45553DBC61F5F291_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_54690D54ECD2EE21_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
